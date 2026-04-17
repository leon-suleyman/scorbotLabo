// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from universal_teleop_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
#define UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "universal_teleop_msgs/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace universal_teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_Event_state
{
public:
  explicit Init_Event_state(::universal_teleop_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  ::universal_teleop_msgs::msg::Event state(::universal_teleop_msgs::msg::Event::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::universal_teleop_msgs::msg::Event msg_;
};

class Init_Event_event
{
public:
  explicit Init_Event_event(::universal_teleop_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_state event(::universal_teleop_msgs::msg::Event::_event_type arg)
  {
    msg_.event = std::move(arg);
    return Init_Event_state(msg_);
  }

private:
  ::universal_teleop_msgs::msg::Event msg_;
};

class Init_Event_header
{
public:
  Init_Event_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Event_event header(::universal_teleop_msgs::msg::Event::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Event_event(msg_);
  }

private:
  ::universal_teleop_msgs::msg::Event msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::universal_teleop_msgs::msg::Event>()
{
  return universal_teleop_msgs::msg::builder::Init_Event_header();
}

}  // namespace universal_teleop_msgs

#endif  // UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
