#include "Seguidor.hpp"

#define UN_GRADO_EN_RAD 0.017453292519943295

SeguidorDePoses::SeguidorDePoses( ros::NodeHandle& nh, const ListaDePoses& objetivos )
  : objetivos_( objetivos ), objetivo_actual_( objetivos_.begin() ), joint_goal_threshold_( 0.03/*0.1 * UN_GRADO_EN_RAD */)
{
  joint_state_sub_ = nh.subscribe("/scorbot/feedback_states", 1, &SeguidorDePoses::actualizarEstado, this);

  new_target_pub_ = nh.advertise<Pose>("/scorbot/joint_path_command", 1);
  
  nh.param("loopear",loopear, false);
  
  primer_objetivo = true;
}

SeguidorDePoses::Pose SeguidorDePoses::crearPose( double a0, double a1, double a2, double a3, double a4 )
{
	ROS_INFO_STREAM("aca");
  // http://docs.ros.org/indigo/api/trajectory_msgs/html/msg/JointTrajectory.html
  trajectory_msgs::JointTrajectoryPoint una_pose;
  una_pose.positions = { a0, a1, a2, a3, a4 };
  //~ nueva_pose.velocities = { ... };
  //~ nueva_pose.accelerations = { ... };
  //~ nueva_pose.effort = { ... };
  //~ nueva_pose.time_from_start = ...;

  SeguidorDePoses::Pose nueva_pose;
  //~ nueva_pose.joint_names = { ... }; ???
  nueva_pose.points.push_back( una_pose );
  return nueva_pose;
}

void SeguidorDePoses::actualizarEstado( const control_msgs::FollowJointTrajectoryFeedback::ConstPtr& msg )
{
  if (primer_objetivo) {
    new_target_pub_.publish( *objetivo_actual_ );
    primer_objetivo = false;
    return;
  }
  
  if (msg->desired.positions.empty()) return;
    
  bool llego = true;
  for ( size_t i=0; i<msg->joint_names.size(); i++ ) {
    // Si alguna junta todavía no alcanzó su objetivo, no hago nada
    ROS_INFO_STREAM("diff " << i << " " << std::abs(msg->desired.positions[ i ] - msg->actual.positions[ i ]) << " thres " << joint_goal_threshold_);
    if ( joint_goal_threshold_ < std::abs(msg->desired.positions[ i ] - msg->actual.positions[ i ]) )  return;
  }

  // Si todas las juntas alcanzaron su objetivo, mando el nuevo.

  objetivo_actual_++;

  // Si no me quedan objetivos, termino el programa.
  if ( objetivo_actual_ == objetivos_.end() )
  {
	if (loopear) objetivo_actual_ = objetivos_.begin();
	else {
	  ros::shutdown();
      return;
    }
  }

  new_target_pub_.publish( *objetivo_actual_ );
}
