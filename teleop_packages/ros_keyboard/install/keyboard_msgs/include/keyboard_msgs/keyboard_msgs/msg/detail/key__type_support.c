// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from keyboard_msgs:msg/Key.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "keyboard_msgs/msg/detail/key__rosidl_typesupport_introspection_c.h"
#include "keyboard_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "keyboard_msgs/msg/detail/key__functions.h"
#include "keyboard_msgs/msg/detail/key__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  keyboard_msgs__msg__Key__init(message_memory);
}

void keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_fini_function(void * message_memory)
{
  keyboard_msgs__msg__Key__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(keyboard_msgs__msg__Key, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(keyboard_msgs__msg__Key, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "modifiers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(keyboard_msgs__msg__Key, modifiers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_message_members = {
  "keyboard_msgs__msg",  // message namespace
  "Key",  // message name
  3,  // number of fields
  sizeof(keyboard_msgs__msg__Key),
  keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_message_member_array,  // message members
  keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_init_function,  // function to initialize message memory (memory has to be allocated)
  keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_message_type_support_handle = {
  0,
  &keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_keyboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, keyboard_msgs, msg, Key)() {
  keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_message_type_support_handle.typesupport_identifier) {
    keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &keyboard_msgs__msg__Key__rosidl_typesupport_introspection_c__Key_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
