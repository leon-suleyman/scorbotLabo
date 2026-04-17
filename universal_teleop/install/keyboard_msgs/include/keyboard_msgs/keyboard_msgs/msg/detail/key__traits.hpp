// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from keyboard_msgs:msg/Key.idl
// generated code does not contain a copyright notice

#ifndef KEYBOARD_MSGS__MSG__DETAIL__KEY__TRAITS_HPP_
#define KEYBOARD_MSGS__MSG__DETAIL__KEY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "keyboard_msgs/msg/detail/key__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace keyboard_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Key & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: modifiers
  {
    out << "modifiers: ";
    rosidl_generator_traits::value_to_yaml(msg.modifiers, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Key & msg,
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

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: modifiers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modifiers: ";
    rosidl_generator_traits::value_to_yaml(msg.modifiers, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Key & msg, bool use_flow_style = false)
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

}  // namespace keyboard_msgs

namespace rosidl_generator_traits
{

[[deprecated("use keyboard_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const keyboard_msgs::msg::Key & msg,
  std::ostream & out, size_t indentation = 0)
{
  keyboard_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use keyboard_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const keyboard_msgs::msg::Key & msg)
{
  return keyboard_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<keyboard_msgs::msg::Key>()
{
  return "keyboard_msgs::msg::Key";
}

template<>
inline const char * name<keyboard_msgs::msg::Key>()
{
  return "keyboard_msgs/msg/Key";
}

template<>
struct has_fixed_size<keyboard_msgs::msg::Key>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<keyboard_msgs::msg::Key>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<keyboard_msgs::msg::Key>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KEYBOARD_MSGS__MSG__DETAIL__KEY__TRAITS_HPP_
