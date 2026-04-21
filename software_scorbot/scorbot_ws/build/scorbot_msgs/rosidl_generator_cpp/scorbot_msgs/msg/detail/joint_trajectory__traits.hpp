// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scorbot_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
#define SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "scorbot_msgs/msg/detail/joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace scorbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointTrajectory & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace scorbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use scorbot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const scorbot_msgs::msg::JointTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  scorbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scorbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const scorbot_msgs::msg::JointTrajectory & msg)
{
  return scorbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<scorbot_msgs::msg::JointTrajectory>()
{
  return "scorbot_msgs::msg::JointTrajectory";
}

template<>
inline const char * name<scorbot_msgs::msg::JointTrajectory>()
{
  return "scorbot_msgs/msg/JointTrajectory";
}

template<>
struct has_fixed_size<scorbot_msgs::msg::JointTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<scorbot_msgs::msg::JointTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<scorbot_msgs::msg::JointTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
