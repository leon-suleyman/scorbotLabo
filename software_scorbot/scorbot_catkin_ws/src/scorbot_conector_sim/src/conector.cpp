#include "conector.h"
#include <std_msgs/Float64.h>

scorbot::Conector::Conector(ros::NodeHandle& nh){
    nh.param("control_frequency", control_frequency, 5);

    base_pub        = nh.advertise<std_msgs::Float64>("/scorbot/base_position_controller/command",1);
    shoulder_pub    = nh.advertise<std_msgs::Float64>("/scorbot/shoulder_position_controller/command",1);
    elbow_pub       = nh.advertise<std_msgs::Float64>("/scorbot/elbow_position_controller/command",1);
    pitch_pub       = nh.advertise<std_msgs::Float64>("/scorbot/pitch_position_controller/command",1);
    roll_pub        = nh.advertise<std_msgs::Float64>("/scorbot/roll_position_controller/command",1);

    joint_state_sub = nh.subscribe("/joint_states", 1, &Conector::on_joint_state, this);
}

void scorbot::Conector::on_joint_state(const sensor_msgs::JointStateConstPtr& msg){
    if (msg->position.size() == 5){
         std_msgs::Float64 base_msg;
         base_msg.data = -(msg->position[0])-1.88444;
         base_pub.publish(base_msg);

         std_msgs::Float64 shoulder_msg;
         shoulder_msg.data = -(msg->position[1])-0.69105;
         shoulder_pub.publish(shoulder_msg);

         std_msgs::Float64 elbow_msg;
         elbow_msg.data = -(msg->position[2])+2.18627;
         elbow_pub.publish(elbow_msg);

         std_msgs::Float64 pitch_msg;
         pitch_msg.data = -(msg->position[3])-1.39468;
         pitch_pub.publish(pitch_msg);

         std_msgs::Float64 roll_msg;
         roll_msg.data = -(msg->position[4])+0.35915;
         roll_pub.publish(roll_msg);
    }
}