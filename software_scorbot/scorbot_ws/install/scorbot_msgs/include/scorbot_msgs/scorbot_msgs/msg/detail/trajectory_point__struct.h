// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scorbot_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TrajectoryPoint in the package scorbot_msgs.
typedef struct scorbot_msgs__msg__TrajectoryPoint
{
  rosidl_runtime_c__int32__Sequence positions;
} scorbot_msgs__msg__TrajectoryPoint;

// Struct for a sequence of scorbot_msgs__msg__TrajectoryPoint.
typedef struct scorbot_msgs__msg__TrajectoryPoint__Sequence
{
  scorbot_msgs__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scorbot_msgs__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
