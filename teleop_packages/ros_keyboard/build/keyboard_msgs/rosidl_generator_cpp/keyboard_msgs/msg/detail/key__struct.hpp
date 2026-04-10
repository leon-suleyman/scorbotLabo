// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from keyboard_msgs:msg/Key.idl
// generated code does not contain a copyright notice

#ifndef KEYBOARD_MSGS__MSG__DETAIL__KEY__STRUCT_HPP_
#define KEYBOARD_MSGS__MSG__DETAIL__KEY__STRUCT_HPP_

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
# define DEPRECATED__keyboard_msgs__msg__Key __attribute__((deprecated))
#else
# define DEPRECATED__keyboard_msgs__msg__Key __declspec(deprecated)
#endif

namespace keyboard_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Key_
{
  using Type = Key_<ContainerAllocator>;

  explicit Key_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
      this->modifiers = 0;
    }
  }

  explicit Key_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
      this->modifiers = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _code_type =
    uint16_t;
  _code_type code;
  using _modifiers_type =
    uint16_t;
  _modifiers_type modifiers;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__code(
    const uint16_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__modifiers(
    const uint16_t & _arg)
  {
    this->modifiers = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t KEY_UNKNOWN =
    0u;
  static constexpr uint16_t KEY_FIRST =
    0u;
  static constexpr uint16_t KEY_BACKSPACE =
    8u;
  static constexpr uint16_t KEY_TAB =
    9u;
  static constexpr uint16_t KEY_CLEAR =
    12u;
  static constexpr uint16_t KEY_RETURN =
    13u;
  static constexpr uint16_t KEY_PAUSE =
    19u;
  static constexpr uint16_t KEY_ESCAPE =
    27u;
  static constexpr uint16_t KEY_SPACE =
    32u;
  static constexpr uint16_t KEY_EXCLAIM =
    33u;
  static constexpr uint16_t KEY_QUOTEDBL =
    34u;
  static constexpr uint16_t KEY_HASH =
    35u;
  static constexpr uint16_t KEY_DOLLAR =
    36u;
  static constexpr uint16_t KEY_AMPERSAND =
    38u;
  static constexpr uint16_t KEY_QUOTE =
    39u;
  static constexpr uint16_t KEY_LEFTPAREN =
    40u;
  static constexpr uint16_t KEY_RIGHTPAREN =
    41u;
  static constexpr uint16_t KEY_ASTERISK =
    42u;
  static constexpr uint16_t KEY_PLUS =
    43u;
  static constexpr uint16_t KEY_COMMA =
    44u;
  static constexpr uint16_t KEY_MINUS =
    45u;
  static constexpr uint16_t KEY_PERIOD =
    46u;
  static constexpr uint16_t KEY_SLASH =
    47u;
  static constexpr uint16_t KEY_0 =
    48u;
  static constexpr uint16_t KEY_1 =
    49u;
  static constexpr uint16_t KEY_2 =
    50u;
  static constexpr uint16_t KEY_3 =
    51u;
  static constexpr uint16_t KEY_4 =
    52u;
  static constexpr uint16_t KEY_5 =
    53u;
  static constexpr uint16_t KEY_6 =
    54u;
  static constexpr uint16_t KEY_7 =
    55u;
  static constexpr uint16_t KEY_8 =
    56u;
  static constexpr uint16_t KEY_9 =
    57u;
  static constexpr uint16_t KEY_COLON =
    58u;
  static constexpr uint16_t KEY_SEMICOLON =
    59u;
  static constexpr uint16_t KEY_LESS =
    60u;
  static constexpr uint16_t KEY_EQUALS =
    61u;
  static constexpr uint16_t KEY_GREATER =
    62u;
  static constexpr uint16_t KEY_QUESTION =
    63u;
  static constexpr uint16_t KEY_AT =
    64u;
  static constexpr uint16_t KEY_LEFTBRACKET =
    91u;
  static constexpr uint16_t KEY_BACKSLASH =
    92u;
  static constexpr uint16_t KEY_RIGHTBRACKET =
    93u;
  static constexpr uint16_t KEY_CARET =
    94u;
  static constexpr uint16_t KEY_UNDERSCORE =
    95u;
  static constexpr uint16_t KEY_BACKQUOTE =
    96u;
  static constexpr uint16_t KEY_A =
    97u;
  static constexpr uint16_t KEY_B =
    98u;
  static constexpr uint16_t KEY_C =
    99u;
  static constexpr uint16_t KEY_D =
    100u;
  static constexpr uint16_t KEY_E =
    101u;
  static constexpr uint16_t KEY_F =
    102u;
  static constexpr uint16_t KEY_G =
    103u;
  static constexpr uint16_t KEY_H =
    104u;
  static constexpr uint16_t KEY_I =
    105u;
  static constexpr uint16_t KEY_J =
    106u;
  static constexpr uint16_t KEY_K =
    107u;
  static constexpr uint16_t KEY_L =
    108u;
  static constexpr uint16_t KEY_M =
    109u;
  static constexpr uint16_t KEY_N =
    110u;
  static constexpr uint16_t KEY_O =
    111u;
  static constexpr uint16_t KEY_P =
    112u;
  static constexpr uint16_t KEY_Q =
    113u;
  static constexpr uint16_t KEY_R =
    114u;
  static constexpr uint16_t KEY_S =
    115u;
  static constexpr uint16_t KEY_T =
    116u;
  static constexpr uint16_t KEY_U =
    117u;
  static constexpr uint16_t KEY_V =
    118u;
  static constexpr uint16_t KEY_W =
    119u;
  static constexpr uint16_t KEY_X =
    120u;
  static constexpr uint16_t KEY_Y =
    121u;
  static constexpr uint16_t KEY_Z =
    122u;
  static constexpr uint16_t KEY_DELETE =
    127u;
  static constexpr uint16_t KEY_WORLD_0 =
    160u;
  static constexpr uint16_t KEY_WORLD_1 =
    161u;
  static constexpr uint16_t KEY_WORLD_2 =
    162u;
  static constexpr uint16_t KEY_WORLD_3 =
    163u;
  static constexpr uint16_t KEY_WORLD_4 =
    164u;
  static constexpr uint16_t KEY_WORLD_5 =
    165u;
  static constexpr uint16_t KEY_WORLD_6 =
    166u;
  static constexpr uint16_t KEY_WORLD_7 =
    167u;
  static constexpr uint16_t KEY_WORLD_8 =
    168u;
  static constexpr uint16_t KEY_WORLD_9 =
    169u;
  static constexpr uint16_t KEY_WORLD_10 =
    170u;
  static constexpr uint16_t KEY_WORLD_11 =
    171u;
  static constexpr uint16_t KEY_WORLD_12 =
    172u;
  static constexpr uint16_t KEY_WORLD_13 =
    173u;
  static constexpr uint16_t KEY_WORLD_14 =
    174u;
  static constexpr uint16_t KEY_WORLD_15 =
    175u;
  static constexpr uint16_t KEY_WORLD_16 =
    176u;
  static constexpr uint16_t KEY_WORLD_17 =
    177u;
  static constexpr uint16_t KEY_WORLD_18 =
    178u;
  static constexpr uint16_t KEY_WORLD_19 =
    179u;
  static constexpr uint16_t KEY_WORLD_20 =
    180u;
  static constexpr uint16_t KEY_WORLD_21 =
    181u;
  static constexpr uint16_t KEY_WORLD_22 =
    182u;
  static constexpr uint16_t KEY_WORLD_23 =
    183u;
  static constexpr uint16_t KEY_WORLD_24 =
    184u;
  static constexpr uint16_t KEY_WORLD_25 =
    185u;
  static constexpr uint16_t KEY_WORLD_26 =
    186u;
  static constexpr uint16_t KEY_WORLD_27 =
    187u;
  static constexpr uint16_t KEY_WORLD_28 =
    188u;
  static constexpr uint16_t KEY_WORLD_29 =
    189u;
  static constexpr uint16_t KEY_WORLD_30 =
    190u;
  static constexpr uint16_t KEY_WORLD_31 =
    191u;
  static constexpr uint16_t KEY_WORLD_32 =
    192u;
  static constexpr uint16_t KEY_WORLD_33 =
    193u;
  static constexpr uint16_t KEY_WORLD_34 =
    194u;
  static constexpr uint16_t KEY_WORLD_35 =
    195u;
  static constexpr uint16_t KEY_WORLD_36 =
    196u;
  static constexpr uint16_t KEY_WORLD_37 =
    197u;
  static constexpr uint16_t KEY_WORLD_38 =
    198u;
  static constexpr uint16_t KEY_WORLD_39 =
    199u;
  static constexpr uint16_t KEY_WORLD_40 =
    200u;
  static constexpr uint16_t KEY_WORLD_41 =
    201u;
  static constexpr uint16_t KEY_WORLD_42 =
    202u;
  static constexpr uint16_t KEY_WORLD_43 =
    203u;
  static constexpr uint16_t KEY_WORLD_44 =
    204u;
  static constexpr uint16_t KEY_WORLD_45 =
    205u;
  static constexpr uint16_t KEY_WORLD_46 =
    206u;
  static constexpr uint16_t KEY_WORLD_47 =
    207u;
  static constexpr uint16_t KEY_WORLD_48 =
    208u;
  static constexpr uint16_t KEY_WORLD_49 =
    209u;
  static constexpr uint16_t KEY_WORLD_50 =
    210u;
  static constexpr uint16_t KEY_WORLD_51 =
    211u;
  static constexpr uint16_t KEY_WORLD_52 =
    212u;
  static constexpr uint16_t KEY_WORLD_53 =
    213u;
  static constexpr uint16_t KEY_WORLD_54 =
    214u;
  static constexpr uint16_t KEY_WORLD_55 =
    215u;
  static constexpr uint16_t KEY_WORLD_56 =
    216u;
  static constexpr uint16_t KEY_WORLD_57 =
    217u;
  static constexpr uint16_t KEY_WORLD_58 =
    218u;
  static constexpr uint16_t KEY_WORLD_59 =
    219u;
  static constexpr uint16_t KEY_WORLD_60 =
    220u;
  static constexpr uint16_t KEY_WORLD_61 =
    221u;
  static constexpr uint16_t KEY_WORLD_62 =
    222u;
  static constexpr uint16_t KEY_WORLD_63 =
    223u;
  static constexpr uint16_t KEY_WORLD_64 =
    224u;
  static constexpr uint16_t KEY_WORLD_65 =
    225u;
  static constexpr uint16_t KEY_WORLD_66 =
    226u;
  static constexpr uint16_t KEY_WORLD_67 =
    227u;
  static constexpr uint16_t KEY_WORLD_68 =
    228u;
  static constexpr uint16_t KEY_WORLD_69 =
    229u;
  static constexpr uint16_t KEY_WORLD_70 =
    230u;
  static constexpr uint16_t KEY_WORLD_71 =
    231u;
  static constexpr uint16_t KEY_WORLD_72 =
    232u;
  static constexpr uint16_t KEY_WORLD_73 =
    233u;
  static constexpr uint16_t KEY_WORLD_74 =
    234u;
  static constexpr uint16_t KEY_WORLD_75 =
    235u;
  static constexpr uint16_t KEY_WORLD_76 =
    236u;
  static constexpr uint16_t KEY_WORLD_77 =
    237u;
  static constexpr uint16_t KEY_WORLD_78 =
    238u;
  static constexpr uint16_t KEY_WORLD_79 =
    239u;
  static constexpr uint16_t KEY_WORLD_80 =
    240u;
  static constexpr uint16_t KEY_WORLD_81 =
    241u;
  static constexpr uint16_t KEY_WORLD_82 =
    242u;
  static constexpr uint16_t KEY_WORLD_83 =
    243u;
  static constexpr uint16_t KEY_WORLD_84 =
    244u;
  static constexpr uint16_t KEY_WORLD_85 =
    245u;
  static constexpr uint16_t KEY_WORLD_86 =
    246u;
  static constexpr uint16_t KEY_WORLD_87 =
    247u;
  static constexpr uint16_t KEY_WORLD_88 =
    248u;
  static constexpr uint16_t KEY_WORLD_89 =
    249u;
  static constexpr uint16_t KEY_WORLD_90 =
    250u;
  static constexpr uint16_t KEY_WORLD_91 =
    251u;
  static constexpr uint16_t KEY_WORLD_92 =
    252u;
  static constexpr uint16_t KEY_WORLD_93 =
    253u;
  static constexpr uint16_t KEY_WORLD_94 =
    254u;
  static constexpr uint16_t KEY_WORLD_95 =
    255u;
  static constexpr uint16_t KEY_KP0 =
    256u;
  static constexpr uint16_t KEY_KP1 =
    257u;
  static constexpr uint16_t KEY_KP2 =
    258u;
  static constexpr uint16_t KEY_KP3 =
    259u;
  static constexpr uint16_t KEY_KP4 =
    260u;
  static constexpr uint16_t KEY_KP5 =
    261u;
  static constexpr uint16_t KEY_KP6 =
    262u;
  static constexpr uint16_t KEY_KP7 =
    263u;
  static constexpr uint16_t KEY_KP8 =
    264u;
  static constexpr uint16_t KEY_KP9 =
    265u;
  static constexpr uint16_t KEY_KP_PERIOD =
    266u;
  static constexpr uint16_t KEY_KP_DIVIDE =
    267u;
  static constexpr uint16_t KEY_KP_MULTIPLY =
    268u;
  static constexpr uint16_t KEY_KP_MINUS =
    269u;
  static constexpr uint16_t KEY_KP_PLUS =
    270u;
  static constexpr uint16_t KEY_KP_ENTER =
    271u;
  static constexpr uint16_t KEY_KP_EQUALS =
    272u;
  static constexpr uint16_t KEY_UP =
    273u;
  static constexpr uint16_t KEY_DOWN =
    274u;
  static constexpr uint16_t KEY_RIGHT =
    275u;
  static constexpr uint16_t KEY_LEFT =
    276u;
  static constexpr uint16_t KEY_INSERT =
    277u;
  static constexpr uint16_t KEY_HOME =
    278u;
  static constexpr uint16_t KEY_END =
    279u;
  static constexpr uint16_t KEY_PAGEUP =
    280u;
  static constexpr uint16_t KEY_PAGEDOWN =
    281u;
  static constexpr uint16_t KEY_F1 =
    282u;
  static constexpr uint16_t KEY_F2 =
    283u;
  static constexpr uint16_t KEY_F3 =
    284u;
  static constexpr uint16_t KEY_F4 =
    285u;
  static constexpr uint16_t KEY_F5 =
    286u;
  static constexpr uint16_t KEY_F6 =
    287u;
  static constexpr uint16_t KEY_F7 =
    288u;
  static constexpr uint16_t KEY_F8 =
    289u;
  static constexpr uint16_t KEY_F9 =
    290u;
  static constexpr uint16_t KEY_F10 =
    291u;
  static constexpr uint16_t KEY_F11 =
    292u;
  static constexpr uint16_t KEY_F12 =
    293u;
  static constexpr uint16_t KEY_F13 =
    294u;
  static constexpr uint16_t KEY_F14 =
    295u;
  static constexpr uint16_t KEY_F15 =
    296u;
  static constexpr uint16_t KEY_NUMLOCK =
    300u;
  static constexpr uint16_t KEY_CAPSLOCK =
    301u;
  static constexpr uint16_t KEY_SCROLLOCK =
    302u;
  static constexpr uint16_t KEY_RSHIFT =
    303u;
  static constexpr uint16_t KEY_LSHIFT =
    304u;
  static constexpr uint16_t KEY_RCTRL =
    305u;
  static constexpr uint16_t KEY_LCTRL =
    306u;
  static constexpr uint16_t KEY_RALT =
    307u;
  static constexpr uint16_t KEY_LALT =
    308u;
  static constexpr uint16_t KEY_RMETA =
    309u;
  static constexpr uint16_t KEY_LMETA =
    310u;
  static constexpr uint16_t KEY_LSUPER =
    311u;
  static constexpr uint16_t KEY_RSUPER =
    312u;
  static constexpr uint16_t KEY_MODE =
    313u;
  static constexpr uint16_t KEY_COMPOSE =
    314u;
  static constexpr uint16_t KEY_HELP =
    315u;
  static constexpr uint16_t KEY_PRINT =
    316u;
  static constexpr uint16_t KEY_SYSREQ =
    317u;
  static constexpr uint16_t KEY_BREAK =
    318u;
  static constexpr uint16_t KEY_MENU =
    319u;
  static constexpr uint16_t KEY_POWER =
    320u;
  static constexpr uint16_t KEY_EURO =
    321u;
  static constexpr uint16_t KEY_UNDO =
    322u;
  static constexpr uint16_t MODIFIER_NONE =
    0u;
  static constexpr uint16_t MODIFIER_LSHIFT =
    1u;
  static constexpr uint16_t MODIFIER_RSHIFT =
    2u;
  static constexpr uint16_t MODIFIER_LCTRL =
    64u;
  static constexpr uint16_t MODIFIER_RCTRL =
    128u;
  static constexpr uint16_t MODIFIER_LALT =
    256u;
  static constexpr uint16_t MODIFIER_RALT =
    512u;
  static constexpr uint16_t MODIFIER_LMETA =
    1024u;
  static constexpr uint16_t MODIFIER_RMETA =
    2048u;
  static constexpr uint16_t MODIFIER_NUM =
    4096u;
  static constexpr uint16_t MODIFIER_CAPS =
    8192u;
  static constexpr uint16_t MODIFIER_MODE =
    16384u;
  static constexpr uint16_t MODIFIER_RESERVED =
    32768u;

  // pointer types
  using RawPtr =
    keyboard_msgs::msg::Key_<ContainerAllocator> *;
  using ConstRawPtr =
    const keyboard_msgs::msg::Key_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<keyboard_msgs::msg::Key_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<keyboard_msgs::msg::Key_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      keyboard_msgs::msg::Key_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<keyboard_msgs::msg::Key_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      keyboard_msgs::msg::Key_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<keyboard_msgs::msg::Key_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<keyboard_msgs::msg::Key_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<keyboard_msgs::msg::Key_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__keyboard_msgs__msg__Key
    std::shared_ptr<keyboard_msgs::msg::Key_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__keyboard_msgs__msg__Key
    std::shared_ptr<keyboard_msgs::msg::Key_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Key_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->modifiers != other.modifiers) {
      return false;
    }
    return true;
  }
  bool operator!=(const Key_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Key_

// alias to use template instance with default allocator
using Key =
  keyboard_msgs::msg::Key_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_FIRST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_BACKSPACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_TAB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_CLEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_RETURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_ESCAPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_SPACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_EXCLAIM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_QUOTEDBL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_HASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_DOLLAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_AMPERSAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_QUOTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_LEFTPAREN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_RIGHTPAREN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_ASTERISK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_PLUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_COMMA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_MINUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_PERIOD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_SLASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_9;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_COLON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_SEMICOLON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_LESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_EQUALS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_GREATER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_QUESTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_AT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_LEFTBRACKET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_BACKSLASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_RIGHTBRACKET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_CARET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_UNDERSCORE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_BACKQUOTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_C;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_E;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_G;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_H;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_I;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_J;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_K;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_L;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_N;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_O;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_P;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_Q;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_R;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_S;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_T;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_U;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_W;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_X;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_Y;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_Z;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_DELETE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_9;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_10;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_11;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_12;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_13;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_14;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_15;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_16;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_17;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_18;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_19;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_20;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_21;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_22;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_23;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_24;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_25;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_26;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_27;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_28;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_29;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_30;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_31;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_33;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_34;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_35;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_36;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_37;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_38;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_39;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_40;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_41;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_42;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_43;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_44;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_45;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_46;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_47;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_48;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_49;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_50;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_51;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_52;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_53;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_54;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_55;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_56;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_57;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_58;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_59;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_60;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_61;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_62;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_63;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_64;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_65;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_66;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_67;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_68;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_69;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_70;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_71;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_72;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_73;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_74;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_75;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_76;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_77;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_78;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_79;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_80;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_81;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_82;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_83;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_84;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_85;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_86;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_87;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_88;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_89;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_90;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_91;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_92;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_93;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_94;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_WORLD_95;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP9;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP_PERIOD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP_DIVIDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP_MULTIPLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP_MINUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP_PLUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP_ENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_KP_EQUALS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_INSERT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_HOME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_END;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_PAGEUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_PAGEDOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F9;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F10;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F11;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F12;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F13;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F14;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_F15;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_NUMLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_CAPSLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_SCROLLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_RSHIFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_LSHIFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_RCTRL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_LCTRL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_RALT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_LALT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_RMETA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_LMETA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_LSUPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_RSUPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_COMPOSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_HELP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_PRINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_SYSREQ;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_BREAK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_MENU;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_POWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_EURO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::KEY_UNDO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_LSHIFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_RSHIFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_LCTRL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_RCTRL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_LALT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_RALT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_LMETA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_RMETA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_NUM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_CAPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Key_<ContainerAllocator>::MODIFIER_RESERVED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace keyboard_msgs

#endif  // KEYBOARD_MSGS__MSG__DETAIL__KEY__STRUCT_HPP_
