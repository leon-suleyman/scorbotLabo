#include "angle_to_vel.h"

scorbot::Angle_To_Vel::Angle_To_Vel(ros::NodeHandle& nh){
    nh.param("control_frequency", control_frequency, 5);

    claw_catch_pub = n.advertise<std_msgs::Empty>("/scorbot/claw_catch", 1);
    claw_release_pub = n.advertise<std_msgs::Empty>("/scorbot/claw_release", 1);

    vel_pub = n.advertise<scorbot::JointVelocities>("/scorbot/joint_velocities", 1);

    joint_state_sub = nh.subscribe("/joint_states", 1, &Conector::on_joint_state, this);

    home_offset_joints      = [0.0, 0.0, 0.0, 0.0, 0.0] ;
    current_pos_joints      = [0.0, 0.0, 0.0, 0.0, 0.0] ;
    objective_pos_joints    = [0.0, 0.0, 0.0, 0.0, 0.0] ;


    velocities.joint_velocities.resize(5, 0);   

    intialized = false;
}

float truncate_to_third_digit(float n){
    int to_third_digit = msg->position[i] * 1000;
    float truncated = ( (float) to_third_digit ) / 1000;
    return truncated;
}

void scorbot::Conector::on_joint_state(const sensor_msgs::JointStateConstPtr& msg){
    if (msg->position.size() == 5){
        if ( !intialized ) {
            for(int i = 0; i < 5; i++){
                home_offset_joints[i] = truncate_to_third_digit(msg->position[i]);
            }
            initialized = true;
        }else{
            for(int i = 0; i < 5; i++){
                current_pos_joints[i] = truncate_to_third_digit(msg->position[i]) - home_offset_joints[i];
            }
            if(current_pos_joints != objective_pos_joints){
                vector<float> difference = current_pos_joints - objective_pos_joints;
                velocities.header = msg.header;

                for(int i = 0; i<5; i++){
                    if(difference[i] != 0){
                        velocities.joint_velocities[i] = (difference[i] > 0 ? 1 : -1) * 5 ;
                    }else{
                        velocities.joint_velocities[i] = 0;
                    }
                }
                vel_pub.publish(velocities);
            }

        }
    }
}