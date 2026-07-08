// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from scorbot_msgs:msg/JointVelocities.idl
// generated code does not contain a copyright notice
#include "scorbot_msgs/msg/detail/joint_velocities__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "scorbot_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "scorbot_msgs/msg/detail/joint_velocities__struct.h"
#include "scorbot_msgs/msg/detail/joint_velocities__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // joint_velocities
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint_velocities
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_scorbot_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_scorbot_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_scorbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef scorbot_msgs__msg__JointVelocities _JointVelocities__ros_msg_type;

static bool _JointVelocities__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _JointVelocities__ros_msg_type * ros_message = (_JointVelocities__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: joint_velocities
  {
    const size_t size = ros_message->joint_velocities.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->joint_velocities.data, size);
  }
  // Member: scaled_flag
  rv = ucdr_serialize_bool(cdr, (ros_message->scaled_flag) ? 0x01 : 0x00);

  return rv;
}

static bool _JointVelocities__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _JointVelocities__ros_msg_type * ros_message = (_JointVelocities__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: joint_velocities
  {
    uint32_t size;
    const size_t capacity = ros_message->joint_velocities.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->joint_velocities.data, capacity, &size);
    if (rv) {
      ros_message->joint_velocities.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->joint_velocities.size = 0;
      ucdr_align_to(cdr, sizeof(float));
      ucdr_advance_buffer(cdr, size * sizeof(float));
    }
  }
  // Field name: scaled_flag
  rv = ucdr_deserialize_bool(cdr, &ros_message->scaled_flag);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_scorbot_msgs
size_t get_serialized_size_scorbot_msgs__msg__JointVelocities(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _JointVelocities__ros_msg_type * ros_message = (const _JointVelocities__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: joint_velocities
  {
    size_t sequence_size = ros_message->joint_velocities.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->joint_velocities.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: scaled_flag
  {
    const size_t item_size = sizeof(ros_message->scaled_flag);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointVelocities__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_scorbot_msgs__msg__JointVelocities(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_scorbot_msgs
size_t max_serialized_size_scorbot_msgs__msg__JointVelocities(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: joint_velocities
  {
    *full_bounded = false;
  }
  // Member: scaled_flag
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _JointVelocities__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_scorbot_msgs__msg__JointVelocities(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_JointVelocities = {
  "scorbot_msgs::msg",
  "JointVelocities",
  _JointVelocities__cdr_serialize,
  _JointVelocities__cdr_deserialize,
  _JointVelocities__get_serialized_size,
  get_serialized_size_scorbot_msgs__msg__JointVelocities,
  _JointVelocities__max_serialized_size
};

static rosidl_message_type_support_t _JointVelocities__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_JointVelocities,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, scorbot_msgs, msg, JointVelocities)() {
  return &_JointVelocities__type_support;
}

#if defined(__cplusplus)
}
#endif
