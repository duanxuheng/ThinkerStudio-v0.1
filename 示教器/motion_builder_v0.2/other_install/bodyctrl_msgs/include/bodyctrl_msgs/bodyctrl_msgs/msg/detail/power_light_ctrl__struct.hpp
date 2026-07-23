// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/PowerLightCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_LIGHT_CTRL__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_LIGHT_CTRL__STRUCT_HPP_

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
# define DEPRECATED__bodyctrl_msgs__msg__PowerLightCtrl __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__PowerLightCtrl __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerLightCtrl_
{
  using Type = PowerLightCtrl_<ContainerAllocator>;

  explicit PowerLightCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0l;
    }
  }

  explicit PowerLightCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cmd_type =
    int32_t;
  _cmd_type cmd;

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

  // constant declarations
  static constexpr int32_t POWER_LIGHT_BATTERY_SUPPLY =
    1;
  static constexpr int32_t POWER_LIGHT_POWER_ON_START =
    2;
  static constexpr int32_t POWER_LIGHT_POWER_ON_FINISH =
    3;
  static constexpr int32_t POWER_LIGHT_SERVICE_START =
    4;
  static constexpr int32_t POWER_LIGHT_SERVICE_FINISH =
    5;
  static constexpr int32_t POWER_LIGHT_SELF_CHECK_START =
    6;
  static constexpr int32_t POWER_LIGHT_SELF_CHECK_FAILED =
    7;
  static constexpr int32_t POWER_LIGHT_SELF_CHECK_SUCCESS =
    8;
  static constexpr int32_t POWER_LIGHT_FAULT_OCCUR =
    9;
  static constexpr int32_t POWER_LIGHT_FAULT_CLEAR =
    10;
  static constexpr int32_t POWER_LIGHT_VOICE_WAKEUP =
    11;
  static constexpr int32_t POWER_LIGHT_VOICE_RESPONSE =
    12;
  static constexpr int32_t POWER_LIGHT_VOICE_EXIT =
    13;
  static constexpr int32_t POWER_LIGHT_RUNNING_START =
    14;
  static constexpr int32_t POWER_LIGHT_RUNNING_FINISH =
    15;
  static constexpr int32_t POWER_LIGHT_POWER_OFF =
    16;
  static constexpr int32_t POWER_LIGHT_WARN_OCCUR =
    17;
  static constexpr int32_t POWER_LIGHT_WARN_CLEAR =
    18;

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__PowerLightCtrl
    std::shared_ptr<bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__PowerLightCtrl
    std::shared_ptr<bodyctrl_msgs::msg::PowerLightCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerLightCtrl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerLightCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerLightCtrl_

// alias to use template instance with default allocator
using PowerLightCtrl =
  bodyctrl_msgs::msg::PowerLightCtrl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_BATTERY_SUPPLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_POWER_ON_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_POWER_ON_FINISH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_SERVICE_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_SERVICE_FINISH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_SELF_CHECK_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_SELF_CHECK_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_SELF_CHECK_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_FAULT_OCCUR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_FAULT_CLEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_VOICE_WAKEUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_VOICE_RESPONSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_VOICE_EXIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_RUNNING_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_RUNNING_FINISH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_POWER_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_WARN_OCCUR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PowerLightCtrl_<ContainerAllocator>::POWER_LIGHT_WARN_CLEAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_LIGHT_CTRL__STRUCT_HPP_
