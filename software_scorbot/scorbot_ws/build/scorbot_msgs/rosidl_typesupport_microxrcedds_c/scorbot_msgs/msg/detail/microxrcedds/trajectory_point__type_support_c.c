// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from scorbot_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "scorbot_msgs/msg/detail/trajectory_point__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "scorbot_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "scorbot_msgs/msg/detail/trajectory_point__struct.h"
#include "scorbot_msgs/msg/detail/trajectory_point__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // positions
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // positions

// forward declare type support functions


typedef scorbot_msgs__msg__TrajectoryPoint _TrajectoryPoint__ros_msg_type;

static bool _TrajectoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _TrajectoryPoint__ros_msg_type * ros_message = (_TrajectoryPoint__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: positions
  {
    const size_t size = ros_message->positions.size;
    rv = ucdr_serialize_sequence_int32_t(cdr, ros_message->positions.data, size);
  }

  return rv;
}

static bool _TrajectoryPoint__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _TrajectoryPoint__ros_msg_type * ros_message = (_TrajectoryPoint__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: positions
  {
    uint32_t size;
    const size_t capacity = ros_message->positions.capacity;
    rv = ucdr_deserialize_sequence_int32_t(cdr, ros_message->positions.data, capacity, &size);
    if (rv) {
      ros_message->positions.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->positions.size = 0;
      ucdr_align_to(cdr, sizeof(int32_t));
      ucdr_advance_buffer(cdr, size * sizeof(int32_t));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_scorbot_msgs
size_t get_serialized_size_scorbot_msgs__msg__TrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _TrajectoryPoint__ros_msg_type * ros_message = (const _TrajectoryPoint__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: positions
  {
    size_t sequence_size = ros_message->positions.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->positions.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryPoint__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_scorbot_msgs__msg__TrajectoryPoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_scorbot_msgs
size_t max_serialized_size_scorbot_msgs__msg__TrajectoryPoint(
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

static size_t _TrajectoryPoint__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_scorbot_msgs__msg__TrajectoryPoint(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_TrajectoryPoint = {
  "scorbot_msgs::msg",
  "TrajectoryPoint",
  _TrajectoryPoint__cdr_serialize,
  _TrajectoryPoint__cdr_deserialize,
  _TrajectoryPoint__get_serialized_size,
  get_serialized_size_scorbot_msgs__msg__TrajectoryPoint,
  _TrajectoryPoint__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryPoint__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_TrajectoryPoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, scorbot_msgs, msg, TrajectoryPoint)() {
  return &_TrajectoryPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
