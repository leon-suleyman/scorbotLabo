// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from scorbot_msgs:msg/JointVelocities.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "scorbot_msgs/msg/detail/joint_velocities__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace scorbot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointVelocities_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) scorbot_msgs::msg::JointVelocities(_init);
}

void JointVelocities_fini_function(void * message_memory)
{
  auto typed_message = static_cast<scorbot_msgs::msg::JointVelocities *>(message_memory);
  typed_message->~JointVelocities();
}

size_t size_function__JointVelocities__joint_velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointVelocities__joint_velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointVelocities__joint_velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointVelocities__joint_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointVelocities__joint_velocities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointVelocities__joint_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointVelocities__joint_velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__JointVelocities__joint_velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointVelocities_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scorbot_msgs::msg::JointVelocities, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scorbot_msgs::msg::JointVelocities, joint_velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointVelocities__joint_velocities,  // size() function pointer
    get_const_function__JointVelocities__joint_velocities,  // get_const(index) function pointer
    get_function__JointVelocities__joint_velocities,  // get(index) function pointer
    fetch_function__JointVelocities__joint_velocities,  // fetch(index, &value) function pointer
    assign_function__JointVelocities__joint_velocities,  // assign(index, value) function pointer
    resize_function__JointVelocities__joint_velocities  // resize(index) function pointer
  },
  {
    "scaled_flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scorbot_msgs::msg::JointVelocities, scaled_flag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointVelocities_message_members = {
  "scorbot_msgs::msg",  // message namespace
  "JointVelocities",  // message name
  3,  // number of fields
  sizeof(scorbot_msgs::msg::JointVelocities),
  JointVelocities_message_member_array,  // message members
  JointVelocities_init_function,  // function to initialize message memory (memory has to be allocated)
  JointVelocities_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointVelocities_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointVelocities_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace scorbot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<scorbot_msgs::msg::JointVelocities>()
{
  return &::scorbot_msgs::msg::rosidl_typesupport_introspection_cpp::JointVelocities_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, scorbot_msgs, msg, JointVelocities)() {
  return &::scorbot_msgs::msg::rosidl_typesupport_introspection_cpp::JointVelocities_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
