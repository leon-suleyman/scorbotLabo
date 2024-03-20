#include <ros/ros.h>
#include "sim_master.h"

#include <std_msgs/Empty.h>
#include <std_msgs/Float64.h>
#include <math.h>
#include <sim_scorbot_master/JointTrajectory.h>

#define JOINT_GOAL_TOLERANCE 100
#define MAX_TRAJECTORY_SIZE 10
#define NUM_JUNTAS 5

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

using namespace std;
/*
namespace sim_scorbot_master{
    class Sim_Master{
        public:
          Sim_Master(ros::NodeHandle& n);

          void on_trajectory(const sim_scorbot_master::JointTrajectory& trajectory);
          ros::Subscriber trajectory_sub;
          ros::Publisher pub_base;
          ros::Publisher pub_shoulder;
          ros::Publisher pub_elbow;
          ros::Publisher pub_pitch;
          ros::Publisher pub_roll;
          void check_trajectory_goal(void);

        private:

          int control_frequency;
          int32_t pos_juntas[NUM_JUNTAS];
          vector<string> joint_names[NUM_JUNTAS];
          int32_t joint_trajectory_goals[MAX_TRAJECTORY_SIZE][NUM_JUNTAS];
          bool reached_current_goal[NUM_JUNTAS];
          int current_goal_index;
          int current_goal_length;
    };
}

sim_scorbot_master::Sim_Master::Sim_Master(ros::NodeHandle& n){
//Sim_Master::Sim_Master(ros::NodeHandle& n){
  n.param("control_frequency", control_frequency, 5);

  trajectory_sub = n.subscribe("/scorbot/joint_path_command", 1, &Sim_Master::on_trajectory, this);

  pub_base = n.advertise<std_msgs::Float64>("/scorbot/base_position_controller/command", 1);
  pub_shoulder = n.advertise<std_msgs::Float64>("/scorbot/shoulder_position_controller/command", 1);
  pub_elbow = n.advertise<std_msgs::Float64>("/scorbot/elbow_position_controller/command", 1);
  pub_pitch = n.advertise<std_msgs::Float64>("/scorbot/pitch_position_controller/command", 1);
  pub_roll = n.advertise<std_msgs::Float64>("/scorbot/roll_position_controller/command", 1);

  for(int i = 0; i<5; i++){
    pos_juntas[i] = 0;
    reached_current_goal[i] = false;
  }

  vector<string> joint_names = { "joint1", "joint2", "joint3", "joint4", "joint5" };

  current_goal_index = -1;
  current_goal_length = 0;
}

void sim_scorbot_master::Sim_Master::on_trajectory(const sim_scorbot_master::JointTrajectory& trajectory){
//void Sim_Master::on_trajectory(const sim_scorbot_master::JointTrajectory& trajectory){

  current_goal_length = trajectory.points.size() / 5;

  if (current_goal_length > MAX_TRAJECTORY_SIZE || current_goal_length == 0) return;

  current_goal_index = 0;

  for (int i = 0; i < current_goal_length; i++)
  {
    joint_trajectory_goals[i][0] = trajectory.points[i*NUM_JUNTAS+0];
    joint_trajectory_goals[i][1] = trajectory.points[i*NUM_JUNTAS+1];
    joint_trajectory_goals[i][2] = trajectory.points[i*NUM_JUNTAS+2];
    joint_trajectory_goals[i][3] = trajectory.points[i*NUM_JUNTAS+3];
    joint_trajectory_goals[i][4] = trajectory.points[i*NUM_JUNTAS+4];
  }

  reached_current_goal[0] = false;
  reached_current_goal[1] = false;
  reached_current_goal[2] = false;
  reached_current_goal[3] = false;
  reached_current_goal[4] = false;  

  //set initial point as goal 
  pub_base.publish (joint_trajectory_goals[0][0]);
  pub_shoulder.publish (joint_trajectory_goals[0][1]);
  pub_elbow.publish (joint_trajectory_goals[0][2]);
  pub_pitch.publish (joint_trajectory_goals[0][3]);
  pub_roll.publish (joint_trajectory_goals[0][4]);
}

void sim_scorbot_master::Sim_Master::check_trajectory_goal(void)
//void Sim_Master::check_trajectory_goal(void)
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
      // set current point as new goal 
      pub_base.publish (joint_trajectory_goals[current_goal_index][0]);
      pub_shoulder.publish (joint_trajectory_goals[current_goal_index][1]);
      pub_elbow.publish (joint_trajectory_goals[current_goal_index][2]);
      pub_pitch.publish (joint_trajectory_goals[current_goal_index][3]);
      pub_roll.publish (joint_trajectory_goals[current_goal_index][4]);
    }
  }  
}
*/
int main(int argc, char** argv)
{
  ros::init(argc, argv, "sim_master");
  ros::NodeHandle n("~");
  sim_scorbot_master::Sim_Master t(n);

  while(ros::ok()){
    t.check_trajectory_goal();
    ros::spin();
  }
}