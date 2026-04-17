// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from universal_teleop_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__STRUCT_H_
#define UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__STRUCT_H_

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
// Member 'event'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Event in the package universal_teleop_msgs.
typedef struct universal_teleop_msgs__msg__Event
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String event;
  bool state;
} universal_teleop_msgs__msg__Event;

// Struct for a sequence of universal_teleop_msgs__msg__Event.
typedef struct universal_teleop_msgs__msg__Event__Sequence
{
  universal_teleop_msgs__msg__Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} universal_teleop_msgs__msg__Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__STRUCT_H_
