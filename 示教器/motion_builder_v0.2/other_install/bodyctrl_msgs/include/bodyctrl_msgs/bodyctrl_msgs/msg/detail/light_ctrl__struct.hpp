// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/LightCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__LIGHT_CTRL__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__LIGHT_CTRL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__LightCtrl __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__LightCtrl __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightCtrl_
{
  using Type = LightCtrl_<ContainerAllocator>;

  explicit LightCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0l;
      this->caller_id = "";
      this->caller_msg = "";
    }
  }

  explicit LightCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    caller_id(_alloc),
    caller_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0l;
      this->caller_id = "";
      this->caller_msg = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cmd_type =
    int32_t;
  _cmd_type cmd;
  using _data_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _data_type data;
  using _caller_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _caller_id_type caller_id;
  using _caller_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _caller_msg_type caller_msg;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cmd(
    const int32_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__caller_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->caller_id = _arg;
    return *this;
  }
  Type & set__caller_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->caller_msg = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TOPIC_NAME;
  static constexpr int32_t CMD_SYSTEM_SHUTTING =
    0;
  static constexpr int32_t CMD_SYSTEM_ERROR_OCCUR =
    10;
  static constexpr int32_t CMD_SYSTEM_ERROR_CLEAR =
    11;
  static constexpr int32_t CMD_SYSTEM_WARN_OCCUR =
    12;
  static constexpr int32_t CMD_SYSTEM_WARN_CLEAR =
    13;
  static constexpr int32_t CMD_SYSTEM_SERVICE_WAIT =
    20;
  static constexpr int32_t CMD_SYSTEM_SERVICE_START =
    21;
  static constexpr int32_t CMD_SYSTEM_SERVICE_READY =
    22;
  static constexpr int32_t CMD_SYSTEM_SERVICE_FAILED =
    23;
  static constexpr int32_t CMD_SYSTEM_STANDBY =
    99;
  static constexpr int32_t CMD_OTA_QUIT =
    100;
  static constexpr int32_t CMD_OTA_START =
    101;
  static constexpr int32_t CMD_POWER_QUIT =
    200;
  static constexpr int32_t CMD_POWER_BATTERY_NORMAL =
    201;
  static constexpr int32_t CMD_POWER_BATTERY_LOW =
    202;
  static constexpr int32_t CMD_POWER_BATTERY_CRITICAL =
    203;
  static constexpr int32_t CMD_POWER_CHARGING =
    210;
  static constexpr int32_t CMD_POWER_CHARGING_FULL =
    211;
  static constexpr int32_t CMD_POWER_BACKUP_NORMAL =
    220;
  static constexpr int32_t CMD_CHAT_QUIT =
    300;
  static constexpr int32_t CMD_CHAT_WAKEUP =
    301;
  static constexpr int32_t CMD_CHAT_ASR =
    310;
  static constexpr int32_t CMD_CHAT_LLM =
    311;
  static constexpr int32_t CMD_CHAT_TTS =
    312;
  static constexpr int32_t CMD_CHAT_PLAY =
    313;
  static constexpr int32_t CMD_CHAT_NET_OFFLINE =
    320;
  static constexpr int32_t CMD_CHAT_NET_ONLINE =
    321;
  static constexpr int32_t CMD_MOTION_QUIT =
    400;
  static constexpr int32_t CMD_MOTION_RUNNING =
    401;

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__LightCtrl
    std::shared_ptr<bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__LightCtrl
    std::shared_ptr<bodyctrl_msgs::msg::LightCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightCtrl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->caller_id != other.caller_id) {
      return false;
    }
    if (this->caller_msg != other.caller_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightCtrl_

// alias to use template instance with default allocator
using LightCtrl =
  bodyctrl_msgs::msg::LightCtrl_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LightCtrl_<ContainerAllocator>::TOPIC_NAME = "/xsys/light/ctrl";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_SHUTTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_ERROR_OCCUR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_ERROR_CLEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_WARN_OCCUR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_WARN_CLEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_SERVICE_WAIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_SERVICE_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_SERVICE_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_SERVICE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_SYSTEM_STANDBY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_OTA_QUIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_OTA_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_POWER_QUIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_POWER_BATTERY_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_POWER_BATTERY_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_POWER_BATTERY_CRITICAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_POWER_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_POWER_CHARGING_FULL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_POWER_BACKUP_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_CHAT_QUIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_CHAT_WAKEUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_CHAT_ASR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_CHAT_LLM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_CHAT_TTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_CHAT_PLAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_CHAT_NET_OFFLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_CHAT_NET_ONLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_MOTION_QUIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LightCtrl_<ContainerAllocator>::CMD_MOTION_RUNNING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__LIGHT_CTRL__STRUCT_HPP_
