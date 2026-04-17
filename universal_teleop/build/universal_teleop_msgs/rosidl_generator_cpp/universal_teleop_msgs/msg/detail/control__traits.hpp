// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from universal_teleop_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
#define UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "universal_teleop_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace universal_teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Control & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: control
  {
    out << "control: ";
    rosidl_generator_traits::value_to_yaml(msg.control, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Control & msg,
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

  // member: control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control: ";
    rosidl_generator_traits::value_to_yaml(msg.control, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Control & msg, bool use_flow_style = false)
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

}  // namespace universal_teleop_msgs

namespace rosidl_generator_traits
{

[[deprecated("use universal_teleop_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const universal_teleop_msgs::msg::Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  universal_teleop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use universal_teleop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const universal_teleop_msgs::msg::Control & msg)
{
  return universal_teleop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<universal_teleop_msgs::msg::Control>()
{
  return "universal_teleop_msgs::msg::Control";
}

template<>
inline const char * name<universal_teleop_msgs::msg::Control>()
{
  return "universal_teleop_msgs/msg/Control";
}

template<>
struct has_fixed_size<universal_teleop_msgs::msg::Control>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<universal_teleop_msgs::msg::Control>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<universal_teleop_msgs::msg::Control>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
