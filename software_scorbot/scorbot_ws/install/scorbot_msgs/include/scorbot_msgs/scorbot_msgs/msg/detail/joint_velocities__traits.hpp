// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scorbot_msgs:msg/JointVelocities.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__TRAITS_HPP_
#define SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "scorbot_msgs/msg/detail/joint_velocities__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace scorbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointVelocities & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: joint_velocities
  {
    if (msg.joint_velocities.size() == 0) {
      out << "joint_velocities: []";
    } else {
      out << "joint_velocities: [";
      size_t pending_items = msg.joint_velocities.size();
      for (auto item : msg.joint_velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: scaled_flag
  {
    out << "scaled_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointVelocities & msg,
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

  // member: joint_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_velocities.size() == 0) {
      out << "joint_velocities: []\n";
    } else {
      out << "joint_velocities:\n";
      for (auto item : msg.joint_velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: scaled_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointVelocities & msg, bool use_flow_style = false)
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
  const scorbot_msgs::msg::JointVelocities & msg,
  std::ostream & out, size_t indentation = 0)
{
  scorbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scorbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const scorbot_msgs::msg::JointVelocities & msg)
{
  return scorbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<scorbot_msgs::msg::JointVelocities>()
{
  return "scorbot_msgs::msg::JointVelocities";
}

template<>
inline const char * name<scorbot_msgs::msg::JointVelocities>()
{
  return "scorbot_msgs/msg/JointVelocities";
}

template<>
struct has_fixed_size<scorbot_msgs::msg::JointVelocities>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<scorbot_msgs::msg::JointVelocities>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<scorbot_msgs::msg::JointVelocities>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__TRAITS_HPP_
