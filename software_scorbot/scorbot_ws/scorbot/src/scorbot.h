#ifndef SCORBOT_H
#define SCORBOT_H

#include <rclcpp/rclcpp.hpp>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream> 

#include <universal_teleop_msgs/msg/control.hpp>
#include <universal_teleop_msgs/msg/event.hpp>
#include <std_msgs/msg/empty.hpp>
#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/float64.hpp>
#include <std_msgs/msg/int32_multi_array.hpp>
#include <std_msgs/msg/string.hpp>
#include <scorbot_msgs/msg/joint_velocities.hpp>
#include <scorbot_msgs/msg/joint_trajectory.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
/*
#include <trajectory_msgs/msg/joint_trajectory.hpp>
#include <control_msgs/msg/follow_joint_trajectory_action_goal.hpp>
#include <control_msgs/msg/follow_joint_trajectory_action_result.hpp>
#include <control_msgs/msg/follow_joint_trajectory_feedback.hpp>
#include <actionlib_msgs/msg/goalID.hpp>
#include <actionlib_msgs/msg/goal_status.hpp>
*/


namespace scorbot {
  class Teleop
  {
    public:
      Teleop(rclcpp::Node& n);

      std::shared_ptr<scorbot_msgs::msg::JointTrajectory> joint_trajectory_sub;
      std::shared_ptr<scorbot_msgs::msg::JointState> joint_states_sub;
      //void on_trajectory(const control_msgs::msg::FollowJointTrajectoryActionGoal& msg);
      void on_joint_states(const sensor_msgs::msg::JointState& msg);
      std::shared_ptr<std_msgs::msg::Int32MultiArray> joint_pos_array_pub;
      //std::shared_ptr<control_msgs::msg::FollowJointTrajectoryActionResult> trajectory_finished_pub;


      std::shared_ptr<std_msgs::msg::Float64> tolerance_param_sub;
      std::shared_ptr<std_msgs::msg::String> feedback_filename_sub;
      void on_tolerance(const std_msgs::msg::Float64& msg);
      void on_filename(const std_msgs::msg::String& msg);

      std::shared_ptr<universal_teleop_msgs::msg::Event> sub_events;
      std::shared_ptr<universal_teleop_msgs::msg::Control> sub_control;
      std::shared_ptr<scorbot_msgs::msg::JointVelocities> vel_pub;
      std::shared_ptr<std_msgs::msg::Empty> home_pub;
      void on_controls(const universal_teleop_msgs::msg::Control& msg);
      void on_events(const universal_teleop_msgs::msg::Event& msg);

      std::shared_ptr<std_msgs::msg::Empty> claw_catch_pub, claw_release_pub;

      void on_control_cycle(const rclcpp::TimerEvent& ev);
      void check_trajectory_progress();

    private:
      int control_frequency;
      rclcpp::Timer control_timer;
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
      actionlib_msgs::msg::GoalID trajectory_goal_id;

      scorbot_msgs::msg::JointVelocities velocities;
      std::vector<int> joint_states;

      std_msgs::msg::Empty empty_msg;
      std_msgs::msg::Int32MultiArray joint_pos_msg;
      control_msgs::msg::FollowJointTrajectoryActionResult result_msg;
  };
}

#endif // SCORBOT_H
