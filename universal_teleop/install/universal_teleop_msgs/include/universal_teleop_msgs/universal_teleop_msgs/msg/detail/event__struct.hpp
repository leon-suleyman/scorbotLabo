// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from universal_teleop_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__STRUCT_HPP_
#define UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__STRUCT_HPP_

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
# define DEPRECATED__universal_teleop_msgs__msg__Event __attribute__((deprecated))
#else
# define DEPRECATED__universal_teleop_msgs__msg__Event __declspec(deprecated)
#endif

namespace universal_teleop_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Event_
{
  using Type = Event_<ContainerAllocator>;

  explicit Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event = "";
      this->state = false;
    }
  }

  explicit Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    event(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event = "";
      this->state = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _event_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _event_type event;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__event(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->event = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    universal_teleop_msgs::msg::Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const universal_teleop_msgs::msg::Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<universal_teleop_msgs::msg::Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<universal_teleop_msgs::msg::Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      universal_teleop_msgs::msg::Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<universal_teleop_msgs::msg::Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      universal_teleop_msgs::msg::Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<universal_teleop_msgs::msg::Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<universal_teleop_msgs::msg::Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<universal_teleop_msgs::msg::Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__universal_teleop_msgs__msg__Event
    std::shared_ptr<universal_teleop_msgs::msg::Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__universal_teleop_msgs__msg__Event
    std::shared_ptr<universal_teleop_msgs::msg::Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Event_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Event_

// alias to use template instance with default allocator
using Event =
  universal_teleop_msgs::msg::Event_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace universal_teleop_msgs

#endif  // UNIVERSAL_TELEOP_MSGS__MSG__DETAIL__EVENT__STRUCT_HPP_
