// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scorbot_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_
#define SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "scorbot_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace scorbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
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
  const TrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
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

inline std::string to_yaml(const TrajectoryPoint & msg, bool use_flow_style = false)
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
  const scorbot_msgs::msg::TrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  scorbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scorbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const scorbot_msgs::msg::TrajectoryPoint & msg)
{
  return scorbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<scorbot_msgs::msg::TrajectoryPoint>()
{
  return "scorbot_msgs::msg::TrajectoryPoint";
}

template<>
inline const char * name<scorbot_msgs::msg::TrajectoryPoint>()
{
  return "scorbot_msgs/msg/TrajectoryPoint";
}

template<>
struct has_fixed_size<scorbot_msgs::msg::TrajectoryPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<scorbot_msgs::msg::TrajectoryPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<scorbot_msgs::msg::TrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_
