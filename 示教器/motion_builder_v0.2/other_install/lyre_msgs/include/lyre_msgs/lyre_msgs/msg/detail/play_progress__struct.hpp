// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lyre_msgs:msg/PlayProgress.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__STRUCT_HPP_
#define LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__msg__PlayProgress __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__msg__PlayProgress __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlayProgress_
{
  using Type = PlayProgress_<ContainerAllocator>;

  explicit PlayProgress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->seq = 0ul;
      this->position = 0.0;
      this->duration = 0.0;
    }
  }

  explicit PlayProgress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->seq = 0ul;
      this->position = 0.0;
      this->duration = 0.0;
    }
  }

  // field types and members
  using _sid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sid_type sid;
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _position_type =
    double;
  _position_type position;
  using _duration_type =
    double;
  _duration_type duration;

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
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TOPIC_NAME;

  // pointer types
  using RawPtr =
    lyre_msgs::msg::PlayProgress_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::msg::PlayProgress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::msg::PlayProgress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::msg::PlayProgress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::PlayProgress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::PlayProgress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::PlayProgress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::PlayProgress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::msg::PlayProgress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::msg::PlayProgress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__msg__PlayProgress
    std::shared_ptr<lyre_msgs::msg::PlayProgress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__msg__PlayProgress
    std::shared_ptr<lyre_msgs::msg::PlayProgress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayProgress_ & other) const
  {
    if (this->sid != other.sid) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayProgress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayProgress_

// alias to use template instance with default allocator
using PlayProgress =
  lyre_msgs::msg::PlayProgress_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
PlayProgress_<ContainerAllocator>::TOPIC_NAME = "/audio_play/progress";

}  // namespace msg

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__PLAY_PROGRESS__STRUCT_HPP_
