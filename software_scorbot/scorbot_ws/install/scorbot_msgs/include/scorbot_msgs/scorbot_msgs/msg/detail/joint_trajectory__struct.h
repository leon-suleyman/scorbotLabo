// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scorbot_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
#define SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'points'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointTrajectory in the package scorbot_msgs.
typedef struct scorbot_msgs__msg__JointTrajectory
{
  std_msgs__msg__Header header;
  /// num_juntas x points
  rosidl_runtime_c__int32__Sequence points;
} scorbot_msgs__msg__JointTrajectory;

// Struct for a sequence of scorbot_msgs__msg__JointTrajectory.
typedef struct scorbot_msgs__msg__JointTrajectory__Sequence
{
  scorbot_msgs__msg__JointTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scorbot_msgs__msg__JointTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
