#ifndef SCORBOT_H
#define SCORBOT_H

#include <ros/ros.h>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream> 

#include <universal_teleop/Control.h>
#include <universal_teleop/Event.h>
#include <trajectory_msgs/JointTrajectory.h>
#include <control_msgs/FollowJointTrajectoryActionGoal.h>
#include <control_msgs/FollowJointTrajectoryActionResult.h>
#include <control_msgs/FollowJointTrajectoryFeedback.h>
#include <actionlib_msgs/GoalID.h>
#include <actionlib_msgs/GoalStatus.h>
#include <sensor_msgs/JointState.h>
#include <std_msgs/Empty.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Int32MultiArray.h>
#include <std_msgs/String.h>
#include <scorbot/JointVelocities.h>
#include <scorbot/JointTrajectory.h>


namespace scorbot {
  class Teleop
  {
    public:
      Teleop(ros::NodeHandle& n);

      ros::Subscriber joint_trajectory_sub;
      ros::Subscriber joint_states_sub;
      void on_trajectory(const control_msgs::FollowJointTrajectoryActionGoalConstPtr& msg);
      void on_joint_states(const sensor_msgs::JointStateConstPtr& msg);
      ros::Publisher joint_pos_array_pub;
      ros::Publisher trajectory_finished_pub;


      ros::Subscriber tolerance_param_sub;
      ros::Subscriber feedback_filename_sub;
      void on_tolerance(const std_msgs::Float64ConstPtr& msg);
      void on_filename(const std_msgs::StringConstPtr& msg);

      ros::Subscriber sub_events, sub_control;
      ros::Publisher vel_pub, home_pub;
      void on_controls(const universal_teleop::ControlConstPtr& msg);
      void on_events(const universal_teleop::EventConstPtr& msg);

      ros::Publisher claw_catch_pub, claw_release_pub;
      
      ros::Publisher debug_pub;

      void on_control_cycle(const ros::TimerEvent& ev);
      void check_trajectory_progress();

    private:
      int control_frequency;
      ros::Timer control_timer;
      bool override_enabled, slow_mode_enabled;
      double joint_goal_tolerance;
      std::string filename;
      int writing_trajectory_index;

      std::vector<double> pos_juntas;
      std::vector<double> last_known_pos;

      std::vector<std::vector<double>> joint_trajectory_goals;
      std::vector<std::vector<double>> joint_trajectory_actual_pos;
      std::vector<std::vector<double>> joint_trajectory_velocities;
      std::vector<bool> reached_current_goal;
      int current_goal_index;
      int current_goal_length;
      actionlib_msgs::GoalID trajectory_goal_id;

      scorbot::JointVelocities velocities;
      std::vector<int> joint_states;

      std_msgs::Empty empty_msg;
      std_msgs::Int32MultiArray joint_pos_msg;
      control_msgs::FollowJointTrajectoryActionResult result_msg;
  };
}

#endif // SCORBOT_H
