#ifndef SCORBOT_H
#define SCORBOT_H

#include <ros/ros.h>
#include <sensor_msgs/JointState.h>

namespace scorbot{
    class Conector{
        public :
            Conector(ros::NodeHandle& n);

            ros::Subscriber joint_state_sub;
            void on_joint_state(const sensor_msgs::JointStateConstPtr& msg);

            ros::Publisher base_pub, shoulder_pub, elbow_pub, pitch_pub, roll_pub;

        private:
            int control_frequency;

    };
}

#endif //SCORBOT_H