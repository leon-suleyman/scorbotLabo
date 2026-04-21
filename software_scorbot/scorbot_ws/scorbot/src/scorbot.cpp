#include "teleop.h"

using namespace std;

#define NUM_JUNTAS (5)
#define MAX_TRAJECTORY_SIZE (100)
#define JOINT_GOAL_TOLERANCE (0.03)

/*
#define RAD2ENC1(x) ((int32_t)(x / (double)0.000034142) + 7000)
#define RAD2ENC2(x) ((int32_t)(x / (double)0.000030712) + 22500)
#define RAD2ENC3(x) ((int32_t)(x / (double)-0.000032903) + 16500)
#define RAD2ENC4(x) ((int32_t)(x / (double)-0.000054786) + 0)
#define RAD2ENC5(x) ((int32_t)(x / (double)-0.000163399) + 2200)
*/

#define RAD2ENC1(x) ((int32_t)(x / (double)-0.000034142 ))
#define RAD2ENC2(x) ((int32_t)( (x - (double)1.484) / (double)-0.000030712))
#define RAD2ENC3(x) ((int32_t)(x / (double)0.000032903))
#define RAD2ENC4(x) ((int32_t)(x / (double)0.000054786))
#define RAD2ENC5(x) ((int32_t)(x / (double)0.000163399))

scorbot::Teleop::Teleop(ros::NodeHandle& n)
{
  n.param("control_frequency", control_frequency, 5);

  sub_control = n.subscribe("/universal_teleop/controls", 1, &Teleop::on_controls, this);
  sub_events = n.subscribe("/universal_teleop/events", 1, &Teleop::on_events, this);
  vel_pub = n.advertise<scorbot::JointVelocities>("/scorbot/joint_velocities", 1);
  home_pub = n.advertise<std_msgs::Empty>("/scorbot/home", 1);
  
  joint_trajectory_sub = n.subscribe<control_msgs::FollowJointTrajectoryActionGoal>("/scorbot/arm_position_controller/follow_joint_trajectory/goal", 1, &Teleop::on_trajectory, this);
  //joint_trajectory_pub = n.advertise<scorbot::JointTrajectory>("/scorbot/joint_path_command_enc", 1);
  joint_pos_array_pub = n.advertise<std_msgs::Int32MultiArray>("/scorbot/joint_path_command_enc", 1);
  //goal_reached_sub = n.subscribe<std_msgs::Empty>("/scorbot/goal_reached", 1, &Teleop::on_goal_reached, this);
  trajectory_finished_pub = n.advertise<control_msgs::FollowJointTrajectoryActionResult>("/arm_position_controller/follow_joint_trajectory/result", 1);


  tolerance_param_sub = n.subscribe<std_msgs::Float64>("/scorbot/params/tolerance", 1, &Teleop::on_tolerance, this);
  feedback_filename_sub = n.subscribe<std_msgs::String>("/scorbot/params/filename", 1, &Teleop::on_filename, this);

  claw_catch_pub = n.advertise<std_msgs::Empty>("/scorbot/claw_catch", 1);
  claw_release_pub = n.advertise<std_msgs::Empty>("/scorbot/claw_release", 1);

  joint_states_sub = n.subscribe<sensor_msgs::JointState>("/joint_states", 1, &Teleop::on_joint_states, this);

  override_enabled = slow_mode_enabled = false;
  
  pos_juntas = {0.0,0.0,0.0,0.0,0.0};
  last_known_pos = pos_juntas;

  joint_trajectory_goals = {};
  joint_trajectory_actual_pos = {};
  joint_trajectory_velocities = {};
  for(int i = 0; i<MAX_TRAJECTORY_SIZE; i++){
    
    joint_trajectory_goals.push_back({0.0,0.0,0.0,0.0,0.0});
    joint_trajectory_actual_pos.push_back({0.0,0.0,0.0,0.0,0.0});
    joint_trajectory_velocities.push_back({0.0,0.0,0.0,0.0,0.0});
  }
  //std::vector<std::vector<double>> joint_trajectory_goals(MAX_TRAJECTORY_SIZE, std::vector<double>(NUM_JUNTAS,0.0));
  reached_current_goal = {false, false, false, false, false};
  current_goal_index = -1;
  current_goal_length = 0;
  joint_goal_tolerance = JOINT_GOAL_TOLERANCE;
  filename = "";
  writing_trajectory_index = 0;

  joint_states.resize(5, 0);

  velocities.joint_velocities.resize(5, 0);
  velocities.scaled_flag = false;

  control_timer = n.createTimer(ros::Duration(ros::Rate(control_frequency)), &Teleop::on_control_cycle, this);


  }

int JointNameToIndex(string joint_name){
  int res = 99;
  char name_initial = joint_name[0];
  switch (name_initial)
  {
  case 'b'://base
    res = 0;
    break;
  case 's'://shoulder
    res = 1;
    break;
  case 'e'://elbow
    res = 2;
    break;
  case 'p'://pitch
    res = 3;
    break;
  case 'r'://roll
    res = 4;
    break;
  }
  return res;
}

float set_above_minimum_speed(float vel){
  float abs_vel = abs(vel);
  float vel_direction = vel/abs_vel;
  float minimum = 1/5;
  float minimum_with_direction = minimum * vel_direction; 
  float res = (abs_vel >= minimum) ? vel : minimum_with_direction;
  return res;
}

float set_special_joint_conditions(float vel, int i){
  float res = vel;
  float abs_vel = abs(vel);
  float vel_direction = vel/abs_vel;
  switch (i)
  {
  case 0:
    res = -1.0 * vel_direction;
    break;
  case 1:
    res = -1.0 * ((vel_direction > 0 )? 2 : -1);
    break;
  case 4:
    res = vel;
    break;
  default:
    res = vel * ((vel_direction > 0 )? 2 : -1);
    break;
  }

  return res;
}

void scorbot::Teleop::on_trajectory(const control_msgs::FollowJointTrajectoryActionGoalConstPtr& msg)
{
  //inicializamos la longitud y el indice del objetivo
  current_goal_length = 0;
  current_goal_index = 0;
  
  //salvamos la id del objetivo para despues confirmar que llegamos bien
  trajectory_goal_id = msg->goal_id;
  //vamos descascarando el mensaje para llegar a las posiciones
  control_msgs::FollowJointTrajectoryGoal msg_goal = msg->goal;
  trajectory_msgs::JointTrajectory msg_trajectory = msg_goal.trajectory;
  std::vector<trajectory_msgs::JointTrajectoryPoint> msg_points = msg_trajectory.points;
  
  //vamos cargando las posiciones en la matriz joint_trahectory_goals. Teniendo en cuenta que pueden no venir en el mismo orden que usamos
  for (trajectory_msgs::JointTrajectoryPoint point : msg_points)
  {
    current_goal_length++;
    if (current_goal_length > MAX_TRAJECTORY_SIZE) break;
    std::vector<double> positions = point.positions;
    std::vector<double> velocities = point.velocities;
    for(int i = 0; i < msg_trajectory.joint_names.size(); i++){
      string name = msg_trajectory.joint_names[i];
      int name_index = JointNameToIndex(name);
      joint_trajectory_goals[current_goal_length - 1][name_index] = (float)positions[i];

      //tenemos que cambiar la dirección de las velocidades de la base y el hombro si vienen del planificador de trayectoria
      float vel = (float)velocities[i];
      //definimos la velocidad mínima como 1/127 ya que no podemos comunicarle menos que eso al manipulador por como maneja la comunicación de la velocidad entre componentes en este momento
      vel = set_above_minimum_speed(vel);
      vel = set_special_joint_conditions(vel, name_index);
    
      joint_trajectory_velocities[current_goal_length - 1][name_index] = vel;
    }
  }

  if(current_goal_length == 0) return;

  reached_current_goal[0] = false;
  reached_current_goal[1] = false;
  reached_current_goal[2] = false;
  reached_current_goal[3] = false;
  reached_current_goal[4] = false;  

  /* set initial point as goal */
  std_msgs::Int32MultiArray joint_pos_msg;
  joint_pos_msg.data.resize(5);
  
  joint_pos_msg.data[0] = RAD2ENC1(joint_trajectory_goals[0][0]);
  joint_pos_msg.data[1] = RAD2ENC2(joint_trajectory_goals[0][1]);
  joint_pos_msg.data[2] = RAD2ENC3(joint_trajectory_goals[0][2]);
  joint_pos_msg.data[3] = RAD2ENC4(joint_trajectory_goals[0][3]);
  joint_pos_msg.data[4] = RAD2ENC5(joint_trajectory_goals[0][4]);
  
  joint_pos_array_pub.publish(joint_pos_msg);
  
  /*
  scorbot::JointVelocities velocities_msg;
  velocities_msg.joint_velocities.resize(5, 0);
  velocities_msg.scaled_flag = true;

  velocities_msg.joint_velocities[0] = joint_trajectory_velocities[0][0];
  velocities_msg.joint_velocities[1] = joint_trajectory_velocities[0][1];
  velocities_msg.joint_velocities[2] = joint_trajectory_velocities[0][2];
  velocities_msg.joint_velocities[3] = joint_trajectory_velocities[0][3];
  velocities_msg.joint_velocities[4] = joint_trajectory_velocities[0][4];

  vel_pub.publish(velocities_msg);
  */
/*
  joint_trajectory_enc.points[0] = RAD2ENC1(msg->points[last_point].positions[0]);
  joint_trajectory_enc.points[1] = RAD2ENC2(msg->points[last_point].positions[1]);
  joint_trajectory_enc.points[2] = RAD2ENC3(msg->points[last_point].positions[2]);
  joint_trajectory_enc.points[3] = RAD2ENC4(msg->points[last_point].positions[3]);
  joint_trajectory_enc.points[4] = RAD2ENC5(msg->points[last_point].positions[4]);
*/

}

void scorbot::Teleop::check_trajectory_progress(){

  if (current_goal_index == -1) return; // no goal set
  
  bool this_goal_complete = true;
  bool there_is_a_change = false;
  for (int i = 0; i < NUM_JUNTAS; i++)
  {
    if (!reached_current_goal[i]) {
      if (abs(joint_trajectory_goals[current_goal_index][i] - pos_juntas[i]) <= joint_goal_tolerance){
        reached_current_goal[i] = true;
        there_is_a_change = true;

      }else{
        this_goal_complete = false;
      }
    }
  }
  
  if(there_is_a_change){
    if (this_goal_complete) {

      //anotamos la posición actual de cada articulación para analizar despues.
      for(int i = 0; i < 5; i++){
        joint_trajectory_actual_pos[current_goal_index][i] = pos_juntas[i];
      }

      std::cout << "completamos el goal " << current_goal_index << "\n";
      current_goal_index++; // advance to next point
      reached_current_goal = {false,false,false,false,false};
      if (current_goal_length == current_goal_index){
        current_goal_index = -1; // completed trajectory

        if(filename != ""){
          std::cout << "escribiendo resultados \n" ;
          string complete_filename = "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/testing_results/" + filename + "_" + std::to_string(joint_goal_tolerance) + ".txt";
          std::ofstream outfile;
          //std::ios::app es el modo "append" al abrir un archivo, me deja escribir al final del archivo
          outfile.open(complete_filename, std::ios::app);

          for(int i = 0; i < current_goal_length; i++){
            string expected_positions = std::to_string(joint_trajectory_goals[i][0]) + ";" + std::to_string(joint_trajectory_goals[i][1]) + ";" + std::to_string(joint_trajectory_goals[i][2]) + ";" + std::to_string(joint_trajectory_goals[i][3]) + ";" + std::to_string(joint_trajectory_goals[i][4]) + ";" + std::to_string(i == current_goal_length-1) + ";0;0";
            string actual_positions = std::to_string(joint_trajectory_actual_pos[i][0]) + ";" + std::to_string(joint_trajectory_actual_pos[i][1]) + ";" + std::to_string(joint_trajectory_actual_pos[i][2]) + ";" + std::to_string(joint_trajectory_actual_pos[i][3]) + ";" + std::to_string(joint_trajectory_actual_pos[i][4]) + ";" + std::to_string(i == current_goal_length-1) + ";0;0";
            outfile << expected_positions + "\n" + actual_positions << std::endl;
          }

          outfile.close();

        }
        
        control_msgs::FollowJointTrajectoryResult result;
        result.error_code = result.SUCCESSFUL; 
        control_msgs::FollowJointTrajectoryActionResult result_msg;
        result_msg.result = result;

        actionlib_msgs::GoalStatus goal_status;
        goal_status.status = goal_status.SUCCEEDED;
        goal_status.goal_id = trajectory_goal_id;
        result_msg.status = goal_status;

        trajectory_finished_pub.publish(result_msg);

      } else {      
        // set current point as new goal
        std_msgs::Int32MultiArray joint_pos_msg;
        joint_pos_msg.data.resize(5);

        joint_pos_msg.data[0] = RAD2ENC1(joint_trajectory_goals[current_goal_index][0]);
        joint_pos_msg.data[1] = RAD2ENC2(joint_trajectory_goals[current_goal_index][1]);
        joint_pos_msg.data[2] = RAD2ENC3(joint_trajectory_goals[current_goal_index][2]);
        joint_pos_msg.data[3] = RAD2ENC4(joint_trajectory_goals[current_goal_index][3]);
        joint_pos_msg.data[4] = RAD2ENC5(joint_trajectory_goals[current_goal_index][4]);

        joint_pos_array_pub.publish(joint_pos_msg);
        
      }
    }
  }else{
    bool is_moving = false;
    //revisamos que esté en moviemiento
    for(int i = 0; i<5; i++){
      if(abs(pos_juntas[i] - last_known_pos[i]) > joint_goal_tolerance){
        is_moving = true;
      }
    }
    //si no se mueve, pasó algo porque debería estár moviendose
    if(!is_moving){
      //asi que volvemos a enviar el mensaje de que se tiene que mover
      std_msgs::Int32MultiArray joint_pos_msg;
      joint_pos_msg.data.resize(5);

      joint_pos_msg.data[0] = RAD2ENC1(joint_trajectory_goals[current_goal_index][0]);
      joint_pos_msg.data[1] = RAD2ENC2(joint_trajectory_goals[current_goal_index][1]);
      joint_pos_msg.data[2] = RAD2ENC3(joint_trajectory_goals[current_goal_index][2]);
      joint_pos_msg.data[3] = RAD2ENC4(joint_trajectory_goals[current_goal_index][3]);
      joint_pos_msg.data[4] = RAD2ENC5(joint_trajectory_goals[current_goal_index][4]);

      joint_pos_array_pub.publish(joint_pos_msg);
    }
  }
}

void scorbot::Teleop::on_joint_states(const sensor_msgs::JointStateConstPtr& msg){
  
  last_known_pos = pos_juntas;
  
  pos_juntas[0] = msg->position[0];
  pos_juntas[1] = msg->position[1];
  pos_juntas[2] = msg->position[2];
  pos_juntas[3] = msg->position[3];
  pos_juntas[4] = msg->position[4];
  
  /*
  if (current_goal_index == -1) return; // no goal set
  
  bool this_goal_complete = true;
  bool there_is_a_change = false;
  for (int i = 0; i < NUM_JUNTAS; i++)
  {
    if (!reached_current_goal[i]) {
      if (abs(joint_trajectory_goals[current_goal_index][i] - pos_juntas[i]) <= JOINT_GOAL_TOLERANCE){
        reached_current_goal[i] = true;
        there_is_a_change = true;

      }else{
        this_goal_complete = false;
      }
    }
  }
  
  if(there_is_a_change){
    if (this_goal_complete) {
      std::cout << "completamos el goal " << current_goal_index << "\n";
      current_goal_index++; // advance to next point
      reached_current_goal = {false,false,false,false,false};
      if (current_goal_length == current_goal_index){
        current_goal_index = -1; // completed trajectory

        
        control_msgs::FollowJointTrajectoryResult result;
        result.error_code = result.SUCCESSFUL; 
        control_msgs::FollowJointTrajectoryActionResult result_msg;
        result_msg.result = result;

        actionlib_msgs::GoalStatus goal_status;
        goal_status.status = goal_status.SUCCEEDED;
        actionlib_msgs::GoalID goal_id;
        goal_id.id = trajectory_goal_id;
        result_msg.status = goal_status;

        trajectory_finished_pub.publish(result_msg);
      } else {      
        // set current point as new goal
        
        std_msgs::Int32MultiArray joint_pos_msg;
        joint_pos_msg.data.resize(5);

        joint_pos_msg.data[0] = RAD2ENC1(joint_trajectory_goals[current_goal_index][0]);
        joint_pos_msg.data[1] = RAD2ENC2(joint_trajectory_goals[current_goal_index][1]);
        joint_pos_msg.data[2] = RAD2ENC3(joint_trajectory_goals[current_goal_index][2]);
        joint_pos_msg.data[3] = RAD2ENC4(joint_trajectory_goals[current_goal_index][3]);
        joint_pos_msg.data[4] = RAD2ENC5(joint_trajectory_goals[current_goal_index][4]);

        joint_pos_array_pub.publish(joint_pos_msg);
        /*
        scorbot::JointVelocities velocities_msg;
        velocities_msg.joint_velocities.resize(5, 0);
        velocities_msg.scaled_flag = true;

        velocities_msg.joint_velocities[0] = joint_trajectory_velocities[current_goal_index][0];
        velocities_msg.joint_velocities[1] = joint_trajectory_velocities[current_goal_index][1];
        velocities_msg.joint_velocities[2] = joint_trajectory_velocities[current_goal_index][2];
        velocities_msg.joint_velocities[3] = joint_trajectory_velocities[current_goal_index][3];
        velocities_msg.joint_velocities[4] = joint_trajectory_velocities[current_goal_index][4];

        vel_pub.publish(velocities_msg);
        */
    //  }
    //}else{
      /*
      scorbot::JointVelocities velocities_msg;
      velocities_msg.joint_velocities.resize(5, 0);
      velocities_msg.scaled_flag = true;

      for(int i = 0; i<5; i++){
        float vel = joint_trajectory_velocities[current_goal_index][i];
        velocities_msg.joint_velocities[i] = vel * (reached_current_goal[i] ? 0 : 1);
        std::cout << "articulación " << i << ": " << (reached_current_goal[i] ? "true" : "false") << "\n";
      }

      vel_pub.publish(velocities_msg);
      */

    //} 
  //}
  //*/
}

void scorbot::Teleop::on_tolerance(const std_msgs::Float64ConstPtr& msg){
  joint_goal_tolerance = msg->data;
}

void scorbot::Teleop::on_filename(const std_msgs::StringConstPtr& msg){
  filename = msg->data;
}

void scorbot::Teleop::on_controls(const universal_teleop::ControlConstPtr& msg)
{
  if (override_enabled) return;

  /*for (int i = 0; i < msg->controls.size(); i++)
  {
    if (msg->controls[i] == "joint1" || msg->controls[i] == "joint2")
    {
      joint_states[msg->controls[i] == "joint1" ? 0 : 1] = (int)(fabsf(msg->values[i]) < 0.1 ? 0 : msg->values[i]);
   
      velocities.header = msg->header; 
      velocities.joint_velocities[msg->controls[i] == "joint1" ? 0 : 1] = joint_states[msg->controls[i] == "joint1" ? 0 : 1] * (slow_mode_enabled ? 0.5 : 1);
      vel_pub.publish(velocities);
    }
  }*/
  if (msg->control == "base" || msg->control == "shoulder")
    {
      joint_states[msg->control == "base" ? 0 : 1] = (int)(fabsf(msg->value) < 0.1 ? 0 : msg->value);
   
      velocities.header = msg->header; 
      velocities.joint_velocities[msg->control == "base" ? 0 : 1] = joint_states[msg->control == "base" ? 0 : 1] * (slow_mode_enabled ? 0.5 : 1);
      vel_pub.publish(velocities);
    }
}

void scorbot::Teleop::on_events(const universal_teleop::EventConstPtr& msg)
{
  if (msg->event == "slow") {
    slow_mode_enabled = msg->state;
  }
  
  if (msg->event == "override")
  { 
	override_enabled = msg->state;   
	
    velocities.header = msg->header;
    for (int i = 0; i < velocities.joint_velocities.size(); i++) {
      velocities.joint_velocities[i] = 0;
      joint_states[i] = 0;
    }
    
    vel_pub.publish(velocities);
  }

  if (!override_enabled)
  {
    if (msg->event == "home" && msg->state) {
      home_pub.publish(std_msgs::Empty());
    }
    else if (msg->event == "claw_catch" && msg->state) {
      claw_catch_pub.publish(std_msgs::Empty());
    }
    else if (msg->event == "claw_release" && msg->state) {
      claw_release_pub.publish(std_msgs::Empty());
    }
    else if (msg->event == "elbow_up") {
	  joint_states[2] = (msg->state ? 1 : 0);
      velocities.joint_velocities[2] = joint_states[2] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "elbow_down") {
	  joint_states[2] = (msg->state ? -1 : 0);
      velocities.joint_velocities[2] = joint_states[2] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "wrist_up") {
	  joint_states[3] = (msg->state ? 1 : 0);
      velocities.joint_velocities[3] = joint_states[3] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "wrist_down") {
	  joint_states[3] = (msg->state ? -1 : 0);
      velocities.joint_velocities[3] = joint_states[3] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "rotate_cw") {
	  joint_states[4] = (msg->state ? 1 : 0);
      velocities.joint_velocities[4] = joint_states[4] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "rotate_ccw") {
	  joint_states[4] = (msg->state ? -1 : 0);
      velocities.joint_velocities[4] = joint_states[4] * (slow_mode_enabled ? 0.5 : 1);
    }

    velocities.header = msg->header;
    vel_pub.publish(velocities);
  }
}

void scorbot::Teleop::on_control_cycle(const ros::TimerEvent& ev)
{
  if (override_enabled) {
    velocities.header.stamp = ev.current_real;
    for (int i = 0; i < velocities.joint_velocities.size(); i++) {
	  velocities.joint_velocities[i] = joint_states[i] * (slow_mode_enabled ? 0.5 : 1);
	}
    vel_pub.publish(velocities);
  }

  this->check_trajectory_progress();
}
