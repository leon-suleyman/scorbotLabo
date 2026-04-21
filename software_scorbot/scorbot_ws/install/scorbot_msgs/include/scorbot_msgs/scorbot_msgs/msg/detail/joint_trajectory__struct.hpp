// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scorbot_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_HPP_
#define SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_HPP_

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
# define DEPRECATED__scorbot_msgs__msg__JointTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__scorbot_msgs__msg__JointTrajectory __declspec(deprecated)
#endif

namespace scorbot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointTrajectory_
{
  using Type = JointTrajectory_<ContainerAllocator>;

  explicit JointTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit JointTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _points_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scorbot_msgs::msg::JointTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const scorbot_msgs::msg::JointTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scorbot_msgs::msg::JointTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scorbot_msgs::msg::JointTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scorbot_msgs::msg::JointTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scorbot_msgs::msg::JointTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scorbot_msgs::msg::JointTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scorbot_msgs::msg::JointTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scorbot_msgs::msg::JointTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scorbot_msgs::msg::JointTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scorbot_msgs__msg__JointTrajectory
    std::shared_ptr<scorbot_msgs::msg::JointTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scorbot_msgs__msg__JointTrajectory
    std::shared_ptr<scorbot_msgs::msg::JointTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTrajectory_

// alias to use template instance with default allocator
using JointTrajectory =
  scorbot_msgs::msg::JointTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scorbot_msgs

#endif  // SCORBOT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_HPP_
