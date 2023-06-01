#include <std_msgs/Empty.h>
#include <scorbot/JointTrajectory.h>
#include "teleop.h"

scorbot::Teleop::Teleop(ros::NodeHandle& n)
{
  n.param("control_frequency", control_frequency, 5);

  sub_control = n.subscribe("/universal_teleop/controls", 1, &Teleop::on_controls, this);
  sub_events = n.subscribe("/universal_teleop/events", 1, &Teleop::on_events, this);
  vel_pub = n.advertise<scorbot::JointVelocities>("/scorbot/joint_velocities", 1);
  home_pub = n.advertise<std_msgs::Empty>("/scorbot/home", 1);

  joint_trajectory_sub = n.subscribe<trajectory_msgs::JointTrajectory>("/scorbot/joint_path_command", 1, &Teleop::on_trajectory, this);
  joint_trajectory_pub = n.advertise<scorbot::JointTrajectory>("/scorbot/joint_path_command_enc", 1);

  override_enabled = slow_mode_enabled = false;

  joint_states.resize(5, 0);
  velocities.joint_velocities.resize(5, 0);

  control_timer = n.createTimer(ros::Duration(ros::Rate(control_frequency)), &Teleop::on_control_cycle, this);
}

#define RAD2ENC1(x) ((int32_t)(x / (double)0.000034142) + 7000)
#define RAD2ENC2(x) ((int32_t)(x / (double)0.000030712) + 22500)
#define RAD2ENC3(x) ((int32_t)(x / (double)-0.000032903) + 16500)
#define RAD2ENC4(x) ((int32_t)(x / (double)-0.000054786) + 0)
#define RAD2ENC5(x) ((int32_t)(x / (double)-0.000163399) + 2200)


void scorbot::Teleop::on_trajectory(const trajectory_msgs::JointTrajectoryConstPtr& msg)
{
  if (msg->points.empty()) return;
  scorbot::JointTrajectory joint_trajectory_enc;
  joint_trajectory_enc.points.resize(5);
  ROS_INFO_STREAM("size: " << msg->points.size() << " " << joint_trajectory_enc.points.size());
  size_t last_point = msg->points.size() - 1;
  ROS_INFO_STREAM("pos: " << msg->points[last_point].positions.size());
  joint_trajectory_enc.points[0] = RAD2ENC1(msg->points[last_point].positions[0]);
  joint_trajectory_enc.points[1] = RAD2ENC2(msg->points[last_point].positions[1]);
  joint_trajectory_enc.points[2] = RAD2ENC3(msg->points[last_point].positions[2]);
  joint_trajectory_enc.points[3] = RAD2ENC4(msg->points[last_point].positions[3]);
  joint_trajectory_enc.points[4] = RAD2ENC5(msg->points[last_point].positions[4]);
  joint_trajectory_pub.publish(joint_trajectory_enc);
}

void scorbot::Teleop::on_controls(const universal_teleop::ControlConstPtr& msg)
{
  if (!override_enabled) return;

  for (int i = 0; i < msg->control.size(); i++)
  {
    if (*(msg->control[i]) == "joint1" || *(msg->control[i]) == "joint2")
    {
      joint_states[*(msg->control[i]) == "joint1" ? 0 : 1] = (int)(fabsf(msg->values[i]) < 0.1 ? 0 : msg->values[i]);
   
      velocities.header = msg->header; 
      velocities.joint_velocities[*(msg->control[i]) == "joint1" ? 0 : 1] = joint_states[*(msg->control[i]) == "joint1" ? 0 : 1] * (slow_mode_enabled ? 0.5 : 1);
      vel_pub.publish(velocities);
    }
  }
}

void scorbot::Teleop::on_events(const universal_teleop::EventConstPtr& msg)
{
  if (msg->event == "slow") {
    slow_mode_enabled = msg->state;
  }
  
  if (msg->event == "override")
  { 
	override_enabled = msg->state;   
	
    velocities.header = msg->header;
    for (int i = 0; i < velocities.joint_velocities.size(); i++) {
      velocities.joint_velocities[i] = 0;
      joint_states[i] = 0;
    }
    
    vel_pub.publish(velocities);
  }

  if (override_enabled)
  {
    if (msg->event == "home" && msg->state) {
      home_pub.publish(std_msgs::Empty());
    }
    else if (msg->event == "joint3_up") {
	  joint_states[2] = (msg->state ? 1 : 0);
      velocities.joint_velocities[2] = joint_states[2] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "joint3_down") {
	  joint_states[2] = (msg->state ? -1 : 0);
      velocities.joint_velocities[2] = joint_states[2] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "joint4_up") {
	  joint_states[3] = (msg->state ? 1 : 0);
      velocities.joint_velocities[3] = joint_states[3] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "joint4_down") {
	  joint_states[3] = (msg->state ? -1 : 0);
      velocities.joint_velocities[3] = joint_states[3] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "rotate_cw") {
	  joint_states[4] = (msg->state ? 1 : 0);
      velocities.joint_velocities[4] = joint_states[4] * (slow_mode_enabled ? 0.5 : 1);
    }
    else if (msg->event == "rotate_ccw") {
	  joint_states[4] = (msg->state ? -1 : 0);
      velocities.joint_velocities[4] = joint_states[4] * (slow_mode_enabled ? 0.5 : 1);
    }

    velocities.header = msg->header;
    vel_pub.publish(velocities);
  }
}

void scorbot::Teleop::on_control_cycle(const ros::TimerEvent& ev)
{
  if (override_enabled) {
    velocities.header.stamp = ev.current_real;
    for (int i = 0; i < velocities.joint_velocities.size(); i++) {
	  velocities.joint_velocities[i] = joint_states[i] * (slow_mode_enabled ? 0.5 : 1);
	}
    vel_pub.publish(velocities);
  }
}
