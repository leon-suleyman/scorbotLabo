// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scorbot_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
#define SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scorbot_msgs/msg/detail/joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scorbot_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTrajectory_points
{
public:
  explicit Init_JointTrajectory_points(::scorbot_msgs::msg::JointTrajectory & msg)
  : msg_(msg)
  {}
  ::scorbot_msgs::msg::JointTrajectory points(::scorbot_msgs::msg::JointTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scorbot_msgs::msg::JointTrajectory msg_;
};

class Init_JointTrajectory_header
{
public:
  Init_JointTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_points header(::scorbot_msgs::msg::JointTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointTrajectory_points(msg_);
  }

private:
  ::scorbot_msgs::msg::JointTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scorbot_msgs::msg::JointTrajectory>()
{
  return scorbot_msgs::msg::builder::Init_JointTrajectory_header();
}

}  // namespace scorbot_msgs

#endif  // SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
