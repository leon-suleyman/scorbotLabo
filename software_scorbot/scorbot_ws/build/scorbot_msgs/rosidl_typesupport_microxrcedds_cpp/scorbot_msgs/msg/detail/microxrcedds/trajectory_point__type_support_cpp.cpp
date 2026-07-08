// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from scorbot_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "scorbot_msgs/msg/detail/trajectory_point__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "scorbot_msgs/msg/detail/trajectory_point__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace scorbot_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_scorbot_msgs
cdr_serialize(
  const scorbot_msgs::msg::TrajectoryPoint & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: positions
  {
    size_t size = ros_message.positions.size();
    rv = ucdr_serialize_sequence_int32_t(cdr, &ros_message.positions[0], size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_scorbot_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  scorbot_msgs::msg::TrajectoryPoint & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: positions
  {
    uint32_t size;
    const size_t capacity = ros_message.positions.capacity();
    ros_message.positions.resize(capacity);
    rv = ucdr_deserialize_sequence_int32_t(cdr, &ros_message.positions[0], capacity, &size);
    if (rv) {
      ros_message.positions.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_scorbot_msgs
get_serialized_size(
  const scorbot_msgs::msg::TrajectoryPoint & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: positions
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.positions.size();
    size_t item_size = sizeof(ros_message.positions[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_scorbot_msgs
max_serialized_size_TrajectoryPoint(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: positions
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _TrajectoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const scorbot_msgs::msg::TrajectoryPoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrajectoryPoint__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<scorbot_msgs::msg::TrajectoryPoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrajectoryPoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const scorbot_msgs::msg::TrajectoryPoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrajectoryPoint__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const scorbot_msgs::msg::TrajectoryPoint *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _TrajectoryPoint__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_TrajectoryPoint(&full_bounded, 0);
}

static message_type_support_callbacks_t _TrajectoryPoint__callbacks = {
  "scorbot_msgs::msg",
  "TrajectoryPoint",
  _TrajectoryPoint__cdr_serialize,
  _TrajectoryPoint__cdr_deserialize,
  _TrajectoryPoint__get_serialized_size,
  _TrajectoryPoint__get_serialized_size_with_initial_alignment,
  _TrajectoryPoint__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryPoint__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TrajectoryPoint__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace scorbot_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_scorbot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<scorbot_msgs::msg::TrajectoryPoint>()
{
  return &scorbot_msgs::msg::typesupport_microxrcedds_cpp::_TrajectoryPoint__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, scorbot_msgs, msg, TrajectoryPoint)() {
  return &scorbot_msgs::msg::typesupport_microxrcedds_cpp::_TrajectoryPoint__handle;
}

#ifdef __cplusplus
}
#endif
