

#include <ArduinoHardware.h>
#include <ros.h>
#include "JointVelocities.h"
//#include <scorbot/JointVelocities.h>
#include "FollowJointTrajectoryFeedback.h"
//#include <control_msgs/FollowJointTrajectoryFeedback.h>
#include "JointTrajectory.h"
//#include <scorbot/JointTrajectory.h>
#include <sensor_msgs/JointState.h>
#include <std_msgs/Empty.h>
#include <std_msgs/Int32MultiArray.h>
#include <Wire.h>
#include "brazo_i2c.h"

#define SERIAL_DEBUG 0 // poner en 1 para controlar el brazo por terminal serial de arduino, poner en 0 para control desde ROS
#define SETEAR_CONSTS 0 //poner en 1 para setear las constantes de los microcontroladores (arduinos pro mini) (en caso de updatear las consts PID o reemplazar micro)


#if SERIAL_DEBUG
#define SERIAL_DBG(x) x
#else
#define SERIAL_DBG(x)
#endif

/* conversion de encoder desde el home -> angulo en radianes desde posicion estirada */
/*
#define ENC2RAD1(x) ((x - 7000)  * (float)0.000034142)
#define ENC2RAD2(x) ((x - 22500) * (float)0.000030712)
#define ENC2RAD3(x) ((x - 16500) * (float)-0.000032903)
#define ENC2RAD4(x) ((x - 0)     * (float)-0.000054786)
#define ENC2RAD5(x) ((x - 2200)  * (float)-0.000163399)

#define RAD2ENC1(x) ((int32_t)(x / (float)0.000034142) + 7000)
#define RAD2ENC2(x) ((int32_t)(x / (float)0.000030712) + 22500)
#define RAD2ENC3(x) ((int32_t)(x / (float)-0.000032903) + 16500)
#define RAD2ENC4(x) ((int32_t)(x / (float)-0.000054786) + 0)
#define RAD2ENC5(x) ((int32_t)(x / (float)-0.000163399) + 2200)
*/

#define ENC2RAD1(x) ((x)  * (float)0.000034142)
#define ENC2RAD2(x) ((x) * (float)0.000030712)
#define ENC2RAD3(x) ((x) * (float)-0.000032903)
#define ENC2RAD4(x) ((x)     * (float)-0.000054786)
#define ENC2RAD5(x) ((x)  * (float)-0.000163399)

#define RAD2ENC1(x) ((int32_t)(x / (float)0.000034142))
#define RAD2ENC2(x) ((int32_t)(x / (float)0.000030712))
#define RAD2ENC3(x) ((int32_t)(x / (float)-0.000032903))
#define RAD2ENC4(x) ((int32_t)(x / (float)-0.000054786))
#define RAD2ENC5(x) ((int32_t)(x / (float)-0.000163399))

#define MAX_TRAJECTORY_SIZE 10
#define NUM_JUNTAS 5
#define SERIAL_BINARY 1

/******** variables de ROS *******/
ros::NodeHandle nh;

/* subscriber para home */
void on_home(const std_msgs::Empty& msg);
ros::Subscriber<std_msgs::Empty> home_sub("/scorbot/home", &on_home);

/* subscribers y publishers para la garra */
void on_catch(const std_msgs::Empty& msg);
ros::Subscriber<std_msgs::Empty> claw_catch_sub("/scorbot/claw_catch", &on_catch);

void on_release(const std_msgs::Empty& msg);
ros::Subscriber<std_msgs::Empty> claw_release_sub("/scorbot/claw_release", &on_release);

std_msgs::Empty claw_caught;
ros::Publisher claw_caught_pub("/scorbot/claw_caught", &claw_caught);

/* publisher de robot state */
sensor_msgs::JointState joint_state;
ros::Publisher joint_state_pub("/scorbot/joint_states", &joint_state);

/* subscriber de velocidad */
void on_velocities(const scorbot::JointVelocities& vel_msg);
ros::Subscriber<scorbot::JointVelocities> vel_sub("/scorbot/joint_velocities", &on_velocities);

//void on_trajectory(const scorbot::JointTrajectory& trajectory);
//ros::Subscriber<scorbot::JointTrajectory> trajectory_sub("/scorbot/joint_path_command_enc", &on_trajectory);
void on_trajectory(const std_msgs::Int32MultiArray& trajectory);
ros::Subscriber<std_msgs::Int32MultiArray> trajectory_sub("/scorbot/joint_path_command_enc", &on_trajectory);

control_msgs::FollowJointTrajectoryFeedback trajectory_feedback;
ros::Publisher trajectory_feedback_pub("/scorbot/feedback_states", &trajectory_feedback);

/* debugging */
std_msgs::Empty empty_msg;
ros::Publisher debug_pub("/scorbot/debug", &empty_msg);

/********* variables globales ********/

int32_t pos_juntas[NUM_JUNTAS];
char* joint_names[] = { "joint1", "joint2", "joint3", "joint4", "joint5" };

int32_t joint_trajectory_goals[MAX_TRAJECTORY_SIZE][NUM_JUNTAS];
bool reached_current_goal[NUM_JUNTAS] = { false, false, false, false, false };
int current_goal_index = -1;
int current_goal_length = 0;

enum ClawState {openClaw, closedClaw, holdingClaw};
#define IDNAME(name) #name
const char* clawStatesStr[] = {IDNAME(openClaw), IDNAME(closedClaw), IDNAME(holdingClaw)};

unsigned char stateClaw = openClaw; 

/********* pins de la garra ********/

int sendInterruptToClawPin = 41;  //pin through wich we interrupt to read the receivePin
int isHoldingClawPin = 39;        //pin through wich we receive if we are holding (1) something or not (0) with the claw
int isClosedClawPin = 37;         //pin through wich we receive if the claw is open (0) or closed (1)
int sendClawCommandPin = 35;      //pin through wich we send the servo position to move to

/*********** setup ****************/
void setup(void)
{  
  /* init vars */
  for (int i = 0; i < NUM_JUNTAS; i++) pos_juntas[i] = 0;
  
  /* init i2c */
  i2c_init();
  
  /* setup LED */
  pinMode(13, OUTPUT);

  /* claw pins */

  pinMode(sendClawCommandPin, OUTPUT);
  digitalWrite(sendClawCommandPin, 0); //open the claw
  pinMode(isClosedClawPin, INPUT);
  pinMode(isHoldingClawPin, INPUT);
  pinMode(sendInterruptToClawPin, OUTPUT);
  digitalWrite(sendClawCommandPin, 1); // make te claw listen to the command
  delay(10);
  digitalWrite(sendClawCommandPin, 0);
  
  #if (SERIAL_DEBUG)
  /* init ROS */
  Serial.begin(115200);  
  Serial.println("Bienvenido al Scorbot-ER VII");
  #else
  nh.getHardware()->setBaud(115200);
  nh.initNode();
  nh.subscribe(vel_sub);
  nh.subscribe(home_sub);
  nh.subscribe(trajectory_sub);
  nh.subscribe(claw_catch_sub);
  nh.subscribe(claw_release_sub);

  nh.advertise(joint_state_pub);
  nh.advertise(trajectory_feedback_pub);
  nh.advertise(claw_caught_pub);
  
  nh.advertise(debug_pub);
  
  #endif
  /* (optionally) set constants */
  setear_constantes();
}

/***************** ROS **************/
void on_velocities(const scorbot::JointVelocities& vel_msg)
{  
  current_goal_index = -1; /* desactiva la trayectoria actual */

  for (int i = 0; i < vel_msg.joint_velocities_length; i++)
  {
    float vel = vel_msg.joint_velocities[i];
    
    switch(i) {
      case 0:
        if (vel == 0) set_position(1, pos_juntas[0]);
        else set_speed_junta(0, vel);
      break;
      case 1:
        if (vel == 0) set_position(2, pos_juntas[1]);
        else set_speed_junta(1, vel);
      break;
      case 2:
        if (vel == 0) set_position(3, pos_juntas[2]);        
        else set_speed_junta(2, vel);
      break;
      case 3:
        if (vel == 0) set_position(4, pos_juntas[3]);        
        else set_speed_junta(3, vel);
      break;
      case 4:
        if (vel == 0) set_position(5, pos_juntas[4]);        
        else set_speed_junta(4, vel);
      break;
    }
  }
}

void on_home(const std_msgs::Empty& msg)
{
  buscar_home();
}

//when ordered to catch something we send the close signal to the claw and the wait 3,5seconds to check if it closed correctly.
void on_catch(const std_msgs::Empty& msg){
  if(stateClaw == openClaw){
    digitalWrite(sendClawCommandPin, 1);
    digitalWrite(sendInterruptToClawPin, 0);
    delay(10);
    digitalWrite(sendInterruptToClawPin, 1);

    int clawIsClosed = digitalRead(isClosedClawPin);
    int clawIsHolding = digitalRead(isHoldingClawPin);
    int i = 7;
    while((clawIsClosed != 1) && (clawIsHolding != 1) && (i>0)){
      int clawIsClosed = digitalRead(isClosedClawPin);
      int clawIsHolding = digitalRead(isHoldingClawPin);
      SERIAL_DBG(Serial.print("pins de la garra: "); Serial.print(clawIsClosed); Serial.print(" , "); Serial.println(clawIsHolding));
      delay(500);
      i=i-1;
    }
    if(clawIsClosed){
      stateClaw = closedClaw;
    }else if(clawIsHolding){
      stateClaw = holdingClaw;
    }
    digitalWrite(sendInterruptToClawPin, 0);
  }
  SERIAL_DBG(Serial.print("Estado de la garra: "); Serial.println(clawStatesStr[stateClaw]));
}

//when ordered to release something we send the open signal to the claw and the wait 3,5seconds to check if it opened correctly.
void on_release(const std_msgs::Empty& msg){
  if(stateClaw != openClaw){
    digitalWrite(sendClawCommandPin, 0);
    digitalWrite(sendInterruptToClawPin, 0);
    delay(10);
    digitalWrite(sendInterruptToClawPin, 1);

    int clawIsClosed = digitalRead(isClosedClawPin);
    int clawIsHolding = digitalRead(isHoldingClawPin);
    int i = 7;
    while((clawIsClosed) && (i>0)){
      int clawIsClosed = digitalRead(isClosedClawPin);
      int clawIsHolding = digitalRead(isHoldingClawPin);
      SERIAL_DBG(Serial.print("pins de la garra: "); Serial.print(clawIsClosed); Serial.print(" , "); Serial.println(clawIsHolding));
      delay(500);
      i=i-1;
    }
    if(i!=0){
      stateClaw = openClaw;
    }
    digitalWrite(sendInterruptToClawPin, 0);
  }
  SERIAL_DBG(Serial.print("Estado de la garra: "); Serial.println(clawStatesStr[stateClaw]));
}

//void on_trajectory(const scorbot::JointTrajectory& trajectory)
void on_trajectory(const std_msgs::Int32MultiArray& trajectory)
{
  debug_pub.publish(&empty_msg);
  
  current_goal_length = trajectory.data_length/ 5;
  if (current_goal_length > MAX_TRAJECTORY_SIZE || current_goal_length == 0) return;
  
  current_goal_index = 0;
  
  for (int i = 0; i < current_goal_length; i++)
  {
    debug_pub.publish(&empty_msg);
    joint_trajectory_goals[i][0] = trajectory.data[i*NUM_JUNTAS+0];
    joint_trajectory_goals[i][1] = trajectory.data[i*NUM_JUNTAS+1];
    joint_trajectory_goals[i][2] = trajectory.data[i*NUM_JUNTAS+2];
    joint_trajectory_goals[i][3] = trajectory.data[i*NUM_JUNTAS+3];
    joint_trajectory_goals[i][4] = trajectory.data[i*NUM_JUNTAS+4];
  }
  debug_pub.publish(&empty_msg);
  
  reached_current_goal[0] = false;
  reached_current_goal[1] = false;
  reached_current_goal[2] = false;
  reached_current_goal[3] = false;
  reached_current_goal[4] = false;  
  
  debug_pub.publish(&empty_msg);
  /* set initial point as goal */
  set_position(1, joint_trajectory_goals[0][0]);
  set_position(2, joint_trajectory_goals[0][1]);
  set_position(3, joint_trajectory_goals[0][2]);
  set_position(4, joint_trajectory_goals[0][3]);
  set_position(5, joint_trajectory_goals[0][4]); 
  
  debug_pub.publish(&empty_msg); 
}

void publish_state(void)
{
  float positions[NUM_JUNTAS];
  joint_state.header.stamp = nh.now();
  joint_state.name = joint_names;
  joint_state.name_length = NUM_JUNTAS;
  joint_state.position = positions;
    joint_state.position_length = NUM_JUNTAS;
  joint_state.velocity_length = 0; // TODO: llenar
  joint_state.effort_length = 0;
  
  positions[0] = ENC2RAD1(pos_juntas[0]);
  positions[1] = ENC2RAD2(pos_juntas[1]);
  positions[2] = ENC2RAD3(pos_juntas[2]);
  positions[3] = ENC2RAD4(pos_juntas[3]);
  positions[4] = ENC2RAD5(pos_juntas[4]);  
  joint_state_pub.publish(&joint_state);
  
  trajectory_feedback.header.stamp = nh.now();
  trajectory_feedback.joint_names_length = NUM_JUNTAS;
  trajectory_feedback.joint_names = joint_names;

  float desired_positions[NUM_JUNTAS];
  if (current_goal_index == -1) {
    trajectory_feedback.desired.positions_length = 0;
  }
  else {
    trajectory_feedback.desired.positions_length = NUM_JUNTAS;
    desired_positions[0] = ENC2RAD1(joint_trajectory_goals[current_goal_index][0]);
    desired_positions[1] = ENC2RAD2(joint_trajectory_goals[current_goal_index][1]);
    desired_positions[2] = ENC2RAD3(joint_trajectory_goals[current_goal_index][2]);
    desired_positions[3] = ENC2RAD4(joint_trajectory_goals[current_goal_index][3]);
    desired_positions[4] = ENC2RAD5(joint_trajectory_goals[current_goal_index][4]);    
    trajectory_feedback.desired.positions = desired_positions;
  }
  trajectory_feedback.desired.accelerations_length = 0;
  trajectory_feedback.desired.effort_length = 0;
  trajectory_feedback.desired.velocities_length = 0;  
  
  trajectory_feedback.error.positions_length = 0;
  trajectory_feedback.error.accelerations_length = 0;
  trajectory_feedback.error.effort_length = 0;
  trajectory_feedback.error.velocities_length = 0;  
  
  trajectory_feedback.actual.positions_length = NUM_JUNTAS;
  trajectory_feedback.actual.positions = positions;
  trajectory_feedback.actual.accelerations_length = 0;
  trajectory_feedback.actual.velocities_length = 0;
  trajectory_feedback.actual.effort_length = 0;

  trajectory_feedback_pub.publish(&trajectory_feedback);
}

/***************** i2c **************/
void i2c_init(void) {
  Wire.begin();
  Wire.setClock(400000L);
}

void i2c_send_addr(int slave, int addr, bool do_read) {
  Wire.beginTransmission(slave); // transmit to device #4
  Wire.write((addr << 1) | (do_read ? 1 : 0));
  if (do_read) Wire.endTransmission();
} 

/***************** comandos i2c ***************/

void set_action(int slave, uint8_t action)
{
  delay(10);
  i2c_send_addr(slave, I2C_REG_ACTION, false);
  Wire.write(action);
  Wire.endTransmission();
}

void set_speed(int slave, int8_t vel) {
  i2c_send_addr(slave, I2C_REG_VELOCITY, false);
  Wire.write(vel);
  Wire.endTransmission();
  
  set_action(slave, I2C_ACTION_VEL);
}

double get_speed(int slave) {
  i2c_send_addr(slave, I2C_REG_VELOCITY, true);
  delay(10); // let arduino time to fill data

  int8_t sp = 0;  
  Wire.requestFrom(slave, sizeof(sp));
  Wire.readBytes((char*)&sp, sizeof(sp));
  return (double)sp / 10;
}


int32_t get_position(int slave) {
  i2c_send_addr(slave, I2C_REG_POSITION, true);
  delay(10); // let arduino time to fill data

  int32_t pos = 0;  
  Wire.requestFrom(slave, sizeof(pos));
  Wire.readBytes((char*)&pos, sizeof(pos));
  return pos;
}

void set_position(int slave, int32_t pos) {
  i2c_send_addr(slave, I2C_REG_POSITION, false);
  Wire.write((uint8_t*)&pos, 4);
  Wire.endTransmission();
  
  set_action(slave, I2C_ACTION_POS);
}

void set_homing(int slave) {
  set_action(slave, I2C_ACTION_HOM);
}

uint8_t get_action(int slave) {
  i2c_send_addr(slave, I2C_REG_ACTION, true);
  delay(10); // let arduino time to fill data

  uint8_t action;  
  Wire.requestFrom(slave, sizeof(action));
  Wire.readBytes((char*)&action, sizeof(action));
  return action;
}

void set_constants(int slave, const pid_constants_t& constants)
{
  SERIAL_DBG(Serial.print("Enviando constantes a junta "); Serial.println (slave));
  i2c_send_addr(slave, I2C_REG_CONSTANTS_A, false);
  Wire.write((uint8_t*)&constants, 30);
  Wire.endTransmission();
  
  i2c_send_addr(slave, I2C_REG_CONSTANTS_B, false);
  Wire.write((uint8_t*)(&constants.ki_pos), 20);
  Wire.endTransmission();
}

/******************* serial *********************/
#if SERIAL_DEBUG
String serial_buffer;
void serial_process(void) {  
  while (Serial.available() > 0) {
    char received = Serial.read();
    if (received == '\n') {
      if (!serial_parse()) Serial.println("ERR unknown/incorrect command"); 
      serial_buffer = String();
    }
    else {
      serial_buffer += received;
    }
  }
}

bool serial_parse(void) {
  String command, arg;
  int idx;
  if ((idx = serial_buffer.indexOf(' ')) != -1) {
    command = serial_buffer.substring(0, idx);
    arg = serial_buffer.substring(idx + 1);
  }
  else {
    command = serial_buffer;
    command.trim();
  }
  //control por serial monitor del mega:
  //cada motor está asignado a 1-5, q-t y a-g para hacer que vayan hacía adelante, paren o hacía atras, respectivamente
  // con c se cierra la pinza y con v se la abre
  if (command.length() == 1) {
    if (command[0] >= '1' && command[0] <= '5') set_speed_junta(command[0] - '1', 1);
    else if (command[0] == 'h') buscar_home();
    else if (command[0] == 'x') frenar_todo();
    else if (command[0] == 'z') frenar_todo_posta();
    else {
      switch(command[0]) {
        case 'q': set_speed_junta(0, 0); break;
        case 'w': set_speed_junta(1, 0); break;
        case 'e': set_speed_junta(2, 0); break;
        case 'r': set_speed_junta(3, 0); break;
        case 't': set_speed_junta(4, 0); break;        
        
        case 'a': set_speed_junta(0, -1); break;
        case 's': set_speed_junta(1, -1); break;
        case 'd': set_speed_junta(2, -1); break;
        case 'f': set_speed_junta(3, -1); break;
        case 'g': set_speed_junta(4, -1); break;

        case 'c' : on_catch(empty_msg); break;
        case 'v' : on_release(empty_msg); break;
      }
    }
  }
  else {
    if (command == "pos") {
      if ((idx = arg.indexOf(' ')) == -1) {
        long pos = atol((const char*)&arg[0]);
        for (int i = 0; i < NUM_JUNTAS; i++) {
          set_pos_junta(i, pos);
        }
      }
      else {
        String junta = arg.substring(0, idx);
        String pos = arg.substring(idx + 1);
        return set_pos_junta(junta.toInt(), atol(&pos[0]));/*.toInt());*/
      }
    }
    else return false;
  }
  return true;
}
#endif

/******************** control *****************/
void set_speed_junta(int j, float vel)
{
  set_speed(j + 1, (int8_t)(vel * 127));
}

bool set_pos_junta(int j, int32_t pos)
{
  if (j >= NUM_JUNTAS) return false;
  set_position(j + 1, pos);
  return true;
}

void frenar_todo(void)
{
  SERIAL_DBG(Serial.println("frenando"));
  for (int i = 0; i < NUM_JUNTAS; i++)
    set_speed(i + 1, 0);  
}

void frenar_todo_posta(void)
{
  SERIAL_DBG(Serial.println("frenando (pero posta)"));
  for (int i = 0; i < NUM_JUNTAS; i++)
    set_action(i + 1, I2C_ACTION_STOP);  
}

void buscar_home(void) {
  for (int i = 0; i < NUM_JUNTAS; i++)
    set_homing(i + 1);  
}

void get_pos_juntas(void) {
  for (int i = 1; i <= NUM_JUNTAS; i++){
    pos_juntas[i-1] = get_position(i);
  }
}

#if SERIAL_DEBUG
void print_status(void) {
  for (int i = 0; i < NUM_JUNTAS; i++) {
    uint8_t action = get_action(i + 1);
    int32_t pos = get_position(i + 1);
    double sp = get_speed(i + 1);
    Serial.print(i); Serial.print(": "); Serial.print(action); Serial.print(" "); Serial.print(pos); Serial.print(" "); Serial.println(sp);
  }
  Serial.print("estado garra : ");
  Serial.println(clawStatesStr[stateClaw]);
}
#endif

/******************** control de trayectoria ************/
#define JOINT_GOAL_TOLERANCE 100
void check_trajectory_goal(void)
{
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
      set_position(1, joint_trajectory_goals[current_goal_index][0]);
      set_position(2, joint_trajectory_goals[current_goal_index][1]);
      set_position(3, joint_trajectory_goals[current_goal_index][2]);
      set_position(4, joint_trajectory_goals[current_goal_index][3]);
      set_position(5, joint_trajectory_goals[current_goal_index][4]);  
    }
  }  
}


/******************** main loop ***********************/
void loop(void)
{
  get_pos_juntas();
  check_trajectory_goal();
  
  #if SERIAL_DEBUG
  serial_process();
  print_status();
  #else
  nh.spinOnce();
  publish_state();
  #endif
  int clawIsHolding = digitalRead(isHoldingClawPin);
  if(clawIsHolding){
    stateClaw = holdingClaw;
  }
  delay(100);
}

void setear_constantes(void)
{
  /* seteo de constantes */
  pid_constants_t constants;
  
  #if SETEAR_CONSTS
  /* junta 1 */
  constants.pwm_max = 128; 
  constants.pwm_min = 35;
  constants.cte_PID_agg = 500;
  constants.kp_vel = 0.8;
  constants.ki_vel = 20;
  constants.kd_vel = 0.1;
  constants.vel_max = 3;
  constants.vel_min = 0;
  constants.kp_pos = 0.003;
  constants.ki_pos = 0.0005;
  constants.kd_pos = 0.001;
  //le pongo otras constantes aggresive para cuando estoy muy lejos  */
  constants.agg_kp_pos = 0.0025;
  constants.agg_ki_pos = 0.001;
  constants.agg_kd_pos = 0.001;  
  set_constants(1, constants);
  #endif  
 
  #if SETEAR_CONSTS
  /* junta 2 */
  constants.pwm_max = 128; 
  constants.pwm_min = 45;
  constants.cte_PID_agg = 0;
  constants.kp_vel = 10; //era 0.8
  constants.ki_vel = 1; //era 20 antes
  constants.kd_vel = 0.1;
  constants.vel_max = 5;
  constants.vel_min = 0;
  constants.kp_pos = 0.02;
  constants.ki_pos = 0.1;
  constants.kd_pos = 0.0;
  //le pongo otras constantes aggresive para cuando estoy muy lejos  */
  constants.agg_kp_pos = 0.02;
  constants.agg_ki_pos = 0.1;
  constants.agg_kd_pos = 0.0;  
  set_constants(2, constants);
  #endif  

  #if SETEAR_CONSTS
  /* junta 3 */
  constants.pwm_max = 128; 
  constants.pwm_min = 45;
  constants.cte_PID_agg = 0;
  constants.kp_vel = 10;    // era 0.8
  constants.ki_vel = 0.51;    // era 20
  constants.kd_vel = 0.1;
  constants.vel_max = 8;
  constants.vel_min = 0;
  constants.kp_pos = 0.02;
  constants.ki_pos = 0.1;
  constants.kd_pos = 0.0;
  //le pongo otras constantes aggresive para cuando estoy muy lejos  */
  constants.agg_kp_pos = 0.07;
  constants.agg_ki_pos = 0.1;
  constants.agg_kd_pos = 0.000;  
  set_constants(3, constants);
  #endif  

  #if SETEAR_CONSTS
  /* junta 4 */
  constants.pwm_max = 128; 
  constants.pwm_min = 45;
  constants.cte_PID_agg = 0;
  constants.kp_vel = 40;
  constants.ki_vel = 0.5;
  constants.kd_vel = 0.0;
  constants.vel_max = 8;
  constants.vel_min = 0;
  constants.kp_pos = 0.003;
  constants.ki_pos = 0;
  constants.kd_pos = 0.001;
  //le pongo otras constantes aggresive para cuando estoy muy lejos  */
  constants.agg_kp_pos = 10000;
  constants.agg_ki_pos = 1000;
  constants.agg_kd_pos = 0.00;  
  set_constants(4, constants);
  #endif
  
  #if SETEAR_CONSTS
  /* junta 5 */
  constants.pwm_max = 128; 
  constants.pwm_min = 45;
  constants.cte_PID_agg = 0;
  constants.kp_vel = 10;
  constants.ki_vel = 0.5;
  constants.kd_vel = 0.01;
  constants.vel_max = 8;
  constants.vel_min = 0;
  constants.kp_pos = 0.05;
  constants.ki_pos = 0.0001;
  constants.kd_pos = 0.001;
  //le pongo otras constantes aggresive para cuando estoy muy lejos  */
  constants.agg_kp_pos = 1.5;
  constants.agg_ki_pos = 1;
  constants.agg_kd_pos = 0.00;  
  set_constants(5, constants);
  #endif
}
