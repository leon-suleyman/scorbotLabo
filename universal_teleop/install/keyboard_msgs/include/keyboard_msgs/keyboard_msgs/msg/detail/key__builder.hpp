// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from keyboard_msgs:msg/Key.idl
// generated code does not contain a copyright notice

#ifndef KEYBOARD_MSGS__MSG__DETAIL__KEY__BUILDER_HPP_
#define KEYBOARD_MSGS__MSG__DETAIL__KEY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "keyboard_msgs/msg/detail/key__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace keyboard_msgs
{

namespace msg
{

namespace builder
{

class Init_Key_modifiers
{
public:
  explicit Init_Key_modifiers(::keyboard_msgs::msg::Key & msg)
  : msg_(msg)
  {}
  ::keyboard_msgs::msg::Key modifiers(::keyboard_msgs::msg::Key::_modifiers_type arg)
  {
    msg_.modifiers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::keyboard_msgs::msg::Key msg_;
};

class Init_Key_code
{
public:
  explicit Init_Key_code(::keyboard_msgs::msg::Key & msg)
  : msg_(msg)
  {}
  Init_Key_modifiers code(::keyboard_msgs::msg::Key::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Key_modifiers(msg_);
  }

private:
  ::keyboard_msgs::msg::Key msg_;
};

class Init_Key_header
{
public:
  Init_Key_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Key_code header(::keyboard_msgs::msg::Key::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Key_code(msg_);
  }

private:
  ::keyboard_msgs::msg::Key msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::keyboard_msgs::msg::Key>()
{
  return keyboard_msgs::msg::builder::Init_Key_header();
}

}  // namespace keyboard_msgs

#endif  // KEYBOARD_MSGS__MSG__DETAIL__KEY__BUILDER_HPP_
