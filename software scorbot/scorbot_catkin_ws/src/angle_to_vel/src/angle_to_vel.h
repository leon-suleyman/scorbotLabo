#ifndef SCORBOT_H
#define SCORBOT_H

#include <ros/ros.h>
#include <sensor_msgs/JointState.h>
#include <scorbot/JointVelocities.h>
#include <std_msgs/Empty.h>


using namespace std;

namespace scorbot{
    class Angle_To_Vel{
        public :
            Angle_To_Vel(ros::NodeHandle& n);

            ros::Subscriber joint_state_sub;
            void on_joint_state(const sensor_msgs::JointStateConstPtr& msg);

            ros::Publisher vel_pub, claw_catch_pub, claw_release_pub;

        private:
            int control_frequency;
            vector<float> home_offset_joints;
            vector<float> current_pos_joints;
            vector<float> objective_pos_joints;

    };
}

#endif //SCORBOT_H