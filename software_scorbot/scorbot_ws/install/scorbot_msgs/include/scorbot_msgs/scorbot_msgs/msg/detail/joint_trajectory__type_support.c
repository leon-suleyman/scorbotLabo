// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from scorbot_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "scorbot_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
#include "scorbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "scorbot_msgs/msg/detail/joint_trajectory__functions.h"
#include "scorbot_msgs/msg/detail/joint_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scorbot_msgs__msg__JointTrajectory__init(message_memory);
}

void scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_fini_function(void * message_memory)
{
  scorbot_msgs__msg__JointTrajectory__fini(message_memory);
}

size_t scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__size_function__JointTrajectory__points(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory__points(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__get_function__JointTrajectory__points(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory__points(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__assign_function__JointTrajectory__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__get_function__JointTrajectory__points(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__resize_function__JointTrajectory__points(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scorbot_msgs__msg__JointTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scorbot_msgs__msg__JointTrajectory, points),  // bytes offset in struct
    NULL,  // default value
    scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__size_function__JointTrajectory__points,  // size() function pointer
    scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory__points,  // get_const(index) function pointer
    scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__get_function__JointTrajectory__points,  // get(index) function pointer
    scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory__points,  // fetch(index, &value) function pointer
    scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__assign_function__JointTrajectory__points,  // assign(index, value) function pointer
    scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__resize_function__JointTrajectory__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_members = {
  "scorbot_msgs__msg",  // message namespace
  "JointTrajectory",  // message name
  2,  // number of fields
  sizeof(scorbot_msgs__msg__JointTrajectory),
  scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_member_array,  // message members
  scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_type_support_handle = {
  0,
  &scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scorbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scorbot_msgs, msg, JointTrajectory)() {
  scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_type_support_handle.typesupport_identifier) {
    scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &scorbot_msgs__msg__JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
