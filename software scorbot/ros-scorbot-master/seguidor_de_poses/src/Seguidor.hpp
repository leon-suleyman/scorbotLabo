#pragma once

#include <ros/ros.h>
#include <trajectory_msgs/JointTrajectory.h>
#include <control_msgs/FollowJointTrajectoryFeedback.h>

class SeguidorDePoses
{
  public:

    typedef trajectory_msgs::JointTrajectory Pose;

    typedef std::list< Pose > ListaDePoses;

    SeguidorDePoses( ros::NodeHandle& nh, const ListaDePoses& objetivos );

    static Pose crearPose( double a0, double a1, double a2, double a3, double a4 );

  private:

    ListaDePoses objetivos_;

    // el objetivo actual de la lista
    ListaDePoses::const_iterator objetivo_actual_;
    
    bool loopear, primer_objetivo;

    double joint_goal_threshold_;

    // Escucha los mensajes periodicos del estado actual de las juntas
    ros::Subscriber joint_state_sub_;

    // Informa al scorbot cuando que debe moverse a un nuevo objetivo
    ros::Publisher new_target_pub_;

  // funciones auxiliares

    void actualizarEstado( const control_msgs::FollowJointTrajectoryFeedback::ConstPtr& msg );
};
