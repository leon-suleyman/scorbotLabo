#ifndef SCORBOT_H
#define SCORBOT_H

#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <sim_scorbot_master/JointTrajectory.h>

#define MAX_TRAJECTORY_SIZE 10
#define NUM_JUNTAS 5

using namespace std;

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

          std_msgs::Float64 base_msg;
          std_msgs::Float64 shoulder_msg;
          std_msgs::Float64 elbow_msg;
          std_msgs::Float64 pitch_msg;
          std_msgs::Float64 roll_msg;
    };
}

#endif // SCORBOT_H