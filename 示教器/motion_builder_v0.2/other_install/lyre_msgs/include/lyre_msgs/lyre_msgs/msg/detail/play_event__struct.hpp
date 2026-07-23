// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lyre_msgs:msg/PlayEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__PLAY_EVENT__STRUCT_HPP_
#define LYRE_MSGS__MSG__DETAIL__PLAY_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__msg__PlayEvent __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__msg__PlayEvent __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlayEvent_
{
  using Type = PlayEvent_<ContainerAllocator>;

  explicit PlayEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->seq = 0ul;
      this->event = 0;
      this->message = "";
    }
  }

  explicit PlayEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sid(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->seq = 0ul;
      this->event = 0;
      this->message = "";
    }
  }

  // field types and members
  using _sid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sid_type sid;
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _event_type =
    int8_t;
  _event_type event;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__sid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sid = _arg;
    return *this;
  }
  Type & set__seq(
    const uint32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__event(
    const int8_t & _arg)
  {
    this->event = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TOPIC_NAME;
  static constexpr int8_t EVENT_STARTED =
    0;
  static constexpr int8_t EVENT_COMPLETED =
    1;
  static constexpr int8_t EVENT_STOPPED =
    2;
  static constexpr int8_t EVENT_CANCELLED =
    3;
  static constexpr int8_t EVENT_FAILED =
    4;

  // pointer types
  using RawPtr =
    lyre_msgs::msg::PlayEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::msg::PlayEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::msg::PlayEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::msg::PlayEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::PlayEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::PlayEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::PlayEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::PlayEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::msg::PlayEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::msg::PlayEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__msg__PlayEvent
    std::shared_ptr<lyre_msgs::msg::PlayEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__msg__PlayEvent
    std::shared_ptr<lyre_msgs::msg::PlayEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayEvent_ & other) const
  {
    if (this->sid != other.sid) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayEvent_

// alias to use template instance with default allocator
using PlayEvent =
  lyre_msgs::msg::PlayEvent_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
PlayEvent_<ContainerAllocator>::TOPIC_NAME = "/audio_play/event";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlayEvent_<ContainerAllocator>::EVENT_STARTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlayEvent_<ContainerAllocator>::EVENT_COMPLETED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlayEvent_<ContainerAllocator>::EVENT_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlayEvent_<ContainerAllocator>::EVENT_CANCELLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlayEvent_<ContainerAllocator>::EVENT_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__PLAY_EVENT__STRUCT_HPP_
