// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from universal_teleop_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__TRAITS_HPP_
#define UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "universal_teleop_msgs/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace universal_teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: event
  {
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Event & msg,
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

  // member: event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Event & msg, bool use_flow_style = false)
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
  const universal_teleop_msgs::msg::Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  universal_teleop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use universal_teleop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const universal_teleop_msgs::msg::Event & msg)
{
  return universal_teleop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<universal_teleop_msgs::msg::Event>()
{
  return "universal_teleop_msgs::msg::Event";
}

template<>
inline const char * name<universal_teleop_msgs::msg::Event>()
{
  return "universal_teleop_msgs/msg/Event";
}

template<>
struct has_fixed_size<universal_teleop_msgs::msg::Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<universal_teleop_msgs::msg::Event>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<universal_teleop_msgs::msg::Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__TRAITS_HPP_
