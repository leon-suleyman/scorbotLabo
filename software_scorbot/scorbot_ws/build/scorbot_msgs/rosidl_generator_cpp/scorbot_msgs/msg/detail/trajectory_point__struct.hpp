// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scorbot_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_
#define SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__scorbot_msgs__msg__TrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__scorbot_msgs__msg__TrajectoryPoint __declspec(deprecated)
#endif

namespace scorbot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPoint_
{
  using Type = TrajectoryPoint_<ContainerAllocator>;

  explicit TrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _positions_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _positions_type positions;

  // setters for named parameter idiom
  Type & set__positions(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scorbot_msgs__msg__TrajectoryPoint
    std::shared_ptr<scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scorbot_msgs__msg__TrajectoryPoint
    std::shared_ptr<scorbot_msgs::msg::TrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPoint_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPoint_

// alias to use template instance with default allocator
using TrajectoryPoint =
  scorbot_msgs::msg::TrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scorbot_msgs

#endif  // SCORBOT_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_
