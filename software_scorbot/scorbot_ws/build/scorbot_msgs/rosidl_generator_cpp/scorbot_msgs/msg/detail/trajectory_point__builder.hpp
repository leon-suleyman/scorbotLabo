// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scorbot_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scorbot_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scorbot_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_positions
{
public:
  Init_TrajectoryPoint_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scorbot_msgs::msg::TrajectoryPoint positions(::scorbot_msgs::msg::TrajectoryPoint::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scorbot_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scorbot_msgs::msg::TrajectoryPoint>()
{
  return scorbot_msgs::msg::builder::Init_TrajectoryPoint_positions();
}

}  // namespace scorbot_msgs

#endif  // SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
