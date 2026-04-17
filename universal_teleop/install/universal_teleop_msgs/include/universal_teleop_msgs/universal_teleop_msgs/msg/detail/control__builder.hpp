// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from universal_teleop_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "universal_teleop_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace universal_teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_Control_value
{
public:
  explicit Init_Control_value(::universal_teleop_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  ::universal_teleop_msgs::msg::Control value(::universal_teleop_msgs::msg::Control::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::universal_teleop_msgs::msg::Control msg_;
};

class Init_Control_control
{
public:
  explicit Init_Control_control(::universal_teleop_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_value control(::universal_teleop_msgs::msg::Control::_control_type arg)
  {
    msg_.control = std::move(arg);
    return Init_Control_value(msg_);
  }

private:
  ::universal_teleop_msgs::msg::Control msg_;
};

class Init_Control_header
{
public:
  Init_Control_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_control header(::universal_teleop_msgs::msg::Control::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Control_control(msg_);
  }

private:
  ::universal_teleop_msgs::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::universal_teleop_msgs::msg::Control>()
{
  return universal_teleop_msgs::msg::builder::Init_Control_header();
}

}  // namespace universal_teleop_msgs

#endif  // UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
