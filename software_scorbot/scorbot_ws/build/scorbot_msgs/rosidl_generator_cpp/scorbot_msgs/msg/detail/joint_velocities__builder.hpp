// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scorbot_msgs:msg/JointVelocities.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__BUILDER_HPP_
#define SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scorbot_msgs/msg/detail/joint_velocities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scorbot_msgs
{

namespace msg
{

namespace builder
{

class Init_JointVelocities_scaled_flag
{
public:
  explicit Init_JointVelocities_scaled_flag(::scorbot_msgs::msg::JointVelocities & msg)
  : msg_(msg)
  {}
  ::scorbot_msgs::msg::JointVelocities scaled_flag(::scorbot_msgs::msg::JointVelocities::_scaled_flag_type arg)
  {
    msg_.scaled_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scorbot_msgs::msg::JointVelocities msg_;
};

class Init_JointVelocities_joint_velocities
{
public:
  explicit Init_JointVelocities_joint_velocities(::scorbot_msgs::msg::JointVelocities & msg)
  : msg_(msg)
  {}
  Init_JointVelocities_scaled_flag joint_velocities(::scorbot_msgs::msg::JointVelocities::_joint_velocities_type arg)
  {
    msg_.joint_velocities = std::move(arg);
    return Init_JointVelocities_scaled_flag(msg_);
  }

private:
  ::scorbot_msgs::msg::JointVelocities msg_;
};

class Init_JointVelocities_header
{
public:
  Init_JointVelocities_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointVelocities_joint_velocities header(::scorbot_msgs::msg::JointVelocities::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointVelocities_joint_velocities(msg_);
  }

private:
  ::scorbot_msgs::msg::JointVelocities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scorbot_msgs::msg::JointVelocities>()
{
  return scorbot_msgs::msg::builder::Init_JointVelocities_header();
}

}  // namespace scorbot_msgs

#endif  // SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__BUILDER_HPP_
