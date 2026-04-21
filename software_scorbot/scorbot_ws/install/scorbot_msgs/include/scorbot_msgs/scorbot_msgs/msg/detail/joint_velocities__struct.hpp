// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scorbot_msgs:msg/JointVelocities.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__STRUCT_HPP_
#define SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__scorbot_msgs__msg__JointVelocities __attribute__((deprecated))
#else
# define DEPRECATED__scorbot_msgs__msg__JointVelocities __declspec(deprecated)
#endif

namespace scorbot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointVelocities_
{
  using Type = JointVelocities_<ContainerAllocator>;

  explicit JointVelocities_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scaled_flag = false;
    }
  }

  explicit JointVelocities_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scaled_flag = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _joint_velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joint_velocities_type joint_velocities;
  using _scaled_flag_type =
    bool;
  _scaled_flag_type scaled_flag;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__joint_velocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joint_velocities = _arg;
    return *this;
  }
  Type & set__scaled_flag(
    const bool & _arg)
  {
    this->scaled_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scorbot_msgs::msg::JointVelocities_<ContainerAllocator> *;
  using ConstRawPtr =
    const scorbot_msgs::msg::JointVelocities_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scorbot_msgs::msg::JointVelocities_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scorbot_msgs::msg::JointVelocities_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scorbot_msgs::msg::JointVelocities_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scorbot_msgs::msg::JointVelocities_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scorbot_msgs::msg::JointVelocities_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scorbot_msgs::msg::JointVelocities_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scorbot_msgs::msg::JointVelocities_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scorbot_msgs::msg::JointVelocities_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scorbot_msgs__msg__JointVelocities
    std::shared_ptr<scorbot_msgs::msg::JointVelocities_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scorbot_msgs__msg__JointVelocities
    std::shared_ptr<scorbot_msgs::msg::JointVelocities_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointVelocities_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_velocities != other.joint_velocities) {
      return false;
    }
    if (this->scaled_flag != other.scaled_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointVelocities_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointVelocities_

// alias to use template instance with default allocator
using JointVelocities =
  scorbot_msgs::msg::JointVelocities_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scorbot_msgs

#endif  // SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__STRUCT_HPP_
