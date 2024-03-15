#ifndef SCORBOT_H
#define SCORBOT_H

#include <ros/ros.h>
#include <trajectory_msgs/JointTrajectory.h>



#define MAX_TRAJECTORY_SIZE 10
#define NUM_JUNTAS 5


namespace scorbot{
    class Sim_Master{
        public:
        Sim_Master(ros::NodeHandle& n);

        void on_trajectory(const scorbot::JointTrajectory& trajectory);
        ros::Subscriber trajectory_sub;
        ros::Publisher pub_base;
        ros::Publisher pub_shoulder;
        ros::Publisher pub_elbow;
        ros::Publisher pub_pitch;
        ros::Publisher pub_roll;

        private:

        int control_frequency;
        int32_t joint_trajectory_goals[MAX_TRAJECTORY_SIZE][NUM_JUNTAS];
        bool reached_current_goal[NUM_JUNTAS];
        int current_goal_index;
        int current_goal_length;
    }
}

#endif