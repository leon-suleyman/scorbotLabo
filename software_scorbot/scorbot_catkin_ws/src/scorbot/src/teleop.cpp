#include <std_msgs/Empty.h>
#include <std_msgs/Int32MultiArray.h>
#include <math.h>
#include <scorbot/JointTrajectory.h>
#include "teleop.h"

using namespace std;

#define NUM_JUNTAS (5)
#define MAX_TRAJECTORY_SIZE (20)
#define JOINT_GOAL_TOLERANCE (0.001)

/*
#define RAD2ENC1(x) ((int32_t)(x / (double)0.000034142) + 7000)
#define RAD2ENC2(x) ((int32_t)(x / (double)0.000030712) + 22500)
#define RAD2ENC3(x) ((int32_t)(x / (double)-0.000032903) + 16500)
#define RAD2ENC4(x) ((int32_t)(x / (double)-0.000054786) + 0)
#define RAD2ENC5(x) ((int32_t)(x / (double)-0.000163399) + 2200)
*/

#define RAD2ENC1(x) ((int32_t)(x / (double)0.000034142))
#define RAD2ENC2(x) ((int32_t)(x / (double)0.000030712))
#define RAD2ENC3(x) ((int32_t)(x / (double)-0.000032903))
#define RAD2ENC4(x) ((int32_t)(x / (double)-0.000054786))
#define RAD2ENC5(x) ((int32_t)(x / (double)-0.000163399))

scorbot::Teleop::Teleop(ros::NodeHandle& n)
{
  n.param("control_frequency", control_frequency, 5);

  sub_control = n.subscribe("/universal_teleop/controls", 1, &Teleop::on_controls, this);
  sub_events = n.subscribe("/universal_teleop/events", 1, &Teleop::on_events, this);
  vel_pub = n.advertise<scorbot::JointVelocities>("/scorbot/joint_velocities", 1);
  home_pub = n.advertise<std_msgs::Empty>("/scorbot/home", 1);

  debug_pub = n.advertise<std_msgs::Empty>("/scorbot/debugger", 1);

  joint_trajectory_sub = n.subscribe<control_msgs::FollowJointTrajectoryActionGoal>("/scorbot/arm_position_controller/follow_joint_trajectory/goal", 1, &Teleop::on_trajectory, this);
  //joint_trajectory_pub = n.advertise<scorbot::JointTrajectory>("/scorbot/joint_path_command_enc", 1);
  joint_pos_array_pub = n.advertise<std_msgs::Int32MultiArray>("/scorbot/joint_path_command_enc", 1);

  claw_catch_pub = n.advertise<std_msgs::Empty>("/scorbot/claw_catch", 1);
  claw_release_pub = n.advertise<std_msgs::Empty>("/scorbot/claw_release", 1);

  joint_states_sub = n.subscribe<sensor_msgs::JointState>("/joint_states", 1, &Teleop::on_joint_states, this);

  override_enabled = slow_mode_enabled = false;
  
  pos_juntas = {0.0,0.0,0.0,0.0,0.0};
  std::vector<std::vector<float>> joint_trajectory_goals(MAX_TRAJECTORY_SIZE, std::vector<float>(NUM_JUNTAS,0.0));
  reached_current_goal = {false, false, false, false, false};
  current_goal_index = -1;
  current_goal_length = 0;

  joint_states.resize(5, 0);
  velocities.joint_velocities.resize(5, 0);

  control_timer = n.createTimer(ros::Duration(ros::Rate(control_frequency)), &Teleop::on_control_cycle, this);


  }



void scorbot::Teleop::on_trajectory(const control_msgs::FollowJointTrajectoryActionGoalConstPtr& msg)
{
  debug_pub.publish(empty_msg);
  std::vector<trajectory_msgs::JointTrajectoryPoint> points = msg->goal.trajectory.points;
  //if (points.empty()) return;


  //if (current_goal_length > MAX_TRAJECTORY_SIZE || current_goal_length == 0) return;
  
  std_msgs::Int32MultiArray joint_pos_msg;
  joint_pos_msg.data.resize(5);
  
  current_goal_length = 0;
  current_goal_index = 0;
  
  debug_pub.publish(empty_msg);
  for (trajectory_msgs::JointTrajectoryPoint point : points)
  {
    debug_pub.publish(empty_msg);
    current_goal_length++;
    if (current_goal_length > MAX_TRAJECTORY_SIZE) return;
    joint_trajectory_goals[current_goal_length - 1][0] = point.positions[0];
    joint_trajectory_goals[current_goal_length - 1][1] = point.positions[1];
    joint_trajectory_goals[current_goal_length - 1][2] = point.positions[2];
    joint_trajectory_goals[current_goal_length - 1][3] = point.positions[3];
    joint_trajectory_goals[current_goal_length - 1][4] = point.positions[4];
  }

  if(current_goal_length == 0) return;
  
  debug_pub.publish(empty_msg);

  reached_current_goal[0] = false;
  reached_current_goal[1] = false;
  reached_current_goal[2] = false;
  reached_current_goal[3] = false;
  reached_current_goal[4] = false;  
  
  /* set initial point as goal */

  joint_pos_msg.data[0] = RAD2ENC1(joint_trajectory_goals[0][0]);
  joint_pos_msg.data[1] = RAD2ENC2(joint_trajectory_goals[0][1]);
  joint_pos_msg.data[2] = RAD2ENC3(joint_trajectory_goals[0][2]);
  joint_pos_msg.data[3] = RAD2ENC4(joint_trajectory_goals[0][3]);
  joint_pos_msg.data[4] = RAD2ENC5(joint_trajectory_goals[0][4]);
/*
  joint_trajectory_enc.points[0] = RAD2ENC1(msg->points[last_point].positions[0]);
  joint_trajectory_enc.points[1] = RAD2ENC2(msg->points[last_point].positions[1]);
  joint_trajectory_enc.points[2] = RAD2ENC3(msg->points[last_point].positions[2]);
  joint_trajectory_enc.points[3] = RAD2ENC4(msg->points[last_point].positions[3]);
  joint_trajectory_enc.points[4] = RAD2ENC5(msg->points[last_point].positions[4]);
*/
  joint_pos_array_pub.publish(joint_pos_msg);

  debug_pub.publish(empty_msg);
}

void scorbot::Teleop::on_joint_states(const sensor_msgs::JointStateConstPtr& msg){
  
  pos_juntas[0] = msg->position[0];
  pos_juntas[1] = msg->position[1];
  pos_juntas[2] = msg->position[2];
  pos_juntas[3] = msg->position[3];
  pos_juntas[4] = msg->position[4];
  
  if (current_goal_index == -1) return; // no goal set
  
  bool this_goal_complete = true;
  for (int i = 0; i < NUM_JUNTAS; i++)
  {
    if (!reached_current_goal[i]) {
      if (abs(joint_trajectory_goals[current_goal_index][i] - pos_juntas[i]) <= JOINT_GOAL_TOLERANCE) reached_current_goal[i] = true;
      else this_goal_complete = false;
    }
  }
  
  if (this_goal_complete) {
    current_goal_index++; // advance to next point
    if (current_goal_length == current_goal_index) current_goal_index = -1; // completed trajectory
    else {      
      /* set current point as new goal */
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
}
