// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lyre_msgs:msg/AsrEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_EVENT__STRUCT_HPP_
#define LYRE_MSGS__MSG__DETAIL__ASR_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__msg__AsrEvent __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__msg__AsrEvent __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AsrEvent_
{
  using Type = AsrEvent_<ContainerAllocator>;

  explicit AsrEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event = 0;
      this->arg1 = 0;
      this->arg2 = 0;
    }
  }

  explicit AsrEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event = 0;
      this->arg1 = 0;
      this->arg2 = 0;
    }
  }

  // field types and members
  using _event_type =
    int8_t;
  _event_type event;
  using _arg1_type =
    int8_t;
  _arg1_type arg1;
  using _arg2_type =
    int8_t;
  _arg2_type arg2;

  // setters for named parameter idiom
  Type & set__event(
    const int8_t & _arg)
  {
    this->event = _arg;
    return *this;
  }
  Type & set__arg1(
    const int8_t & _arg)
  {
    this->arg1 = _arg;
    return *this;
  }
  Type & set__arg2(
    const int8_t & _arg)
  {
    this->arg2 = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TOPIC_NAME;
  static constexpr int8_t EVENT_ERROR =
    2;
  static constexpr int8_t EVENT_STATE =
    3;
  static constexpr int8_t EVENT_WAKEUP =
    4;
  static constexpr int8_t EVENT_SLEEP =
    5;
  static constexpr int8_t EVENT_VAD =
    6;
  static constexpr int8_t EVENT_PRE_SLEEP =
    10;
  static constexpr int8_t EVENT_CONNECTED_TO_SERVER =
    13;
  static constexpr int8_t EVENT_SERVER_DISCONNECTED =
    14;

  // pointer types
  using RawPtr =
    lyre_msgs::msg::AsrEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::msg::AsrEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::msg::AsrEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::msg::AsrEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::AsrEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::AsrEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::AsrEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::AsrEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::msg::AsrEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::msg::AsrEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__msg__AsrEvent
    std::shared_ptr<lyre_msgs::msg::AsrEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__msg__AsrEvent
    std::shared_ptr<lyre_msgs::msg::AsrEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AsrEvent_ & other) const
  {
    if (this->event != other.event) {
      return false;
    }
    if (this->arg1 != other.arg1) {
      return false;
    }
    if (this->arg2 != other.arg2) {
      return false;
    }
    return true;
  }
  bool operator!=(const AsrEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AsrEvent_

// alias to use template instance with default allocator
using AsrEvent =
  lyre_msgs::msg::AsrEvent_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AsrEvent_<ContainerAllocator>::TOPIC_NAME = "/audio_asr/event";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AsrEvent_<ContainerAllocator>::EVENT_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AsrEvent_<ContainerAllocator>::EVENT_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AsrEvent_<ContainerAllocator>::EVENT_WAKEUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AsrEvent_<ContainerAllocator>::EVENT_SLEEP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AsrEvent_<ContainerAllocator>::EVENT_VAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AsrEvent_<ContainerAllocator>::EVENT_PRE_SLEEP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AsrEvent_<ContainerAllocator>::EVENT_CONNECTED_TO_SERVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AsrEvent_<ContainerAllocator>::EVENT_SERVER_DISCONNECTED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_EVENT__STRUCT_HPP_
