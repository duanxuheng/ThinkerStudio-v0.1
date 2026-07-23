// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lyre_msgs:msg/AsrKeyword.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__STRUCT_HPP_
#define LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__msg__AsrKeyword __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__msg__AsrKeyword __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AsrKeyword_
{
  using Type = AsrKeyword_<ContainerAllocator>;

  explicit AsrKeyword_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyword = "";
      this->angle = 0l;
    }
  }

  explicit AsrKeyword_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : keyword(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyword = "";
      this->angle = 0l;
    }
  }

  // field types and members
  using _keyword_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _keyword_type keyword;
  using _angle_type =
    int32_t;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__keyword(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->keyword = _arg;
    return *this;
  }
  Type & set__angle(
    const int32_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TOPIC_NAME;

  // pointer types
  using RawPtr =
    lyre_msgs::msg::AsrKeyword_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::msg::AsrKeyword_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::msg::AsrKeyword_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::msg::AsrKeyword_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::AsrKeyword_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::AsrKeyword_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::AsrKeyword_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::AsrKeyword_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::msg::AsrKeyword_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::msg::AsrKeyword_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__msg__AsrKeyword
    std::shared_ptr<lyre_msgs::msg::AsrKeyword_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__msg__AsrKeyword
    std::shared_ptr<lyre_msgs::msg::AsrKeyword_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AsrKeyword_ & other) const
  {
    if (this->keyword != other.keyword) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const AsrKeyword_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AsrKeyword_

// alias to use template instance with default allocator
using AsrKeyword =
  lyre_msgs::msg::AsrKeyword_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AsrKeyword_<ContainerAllocator>::TOPIC_NAME = "/audio_asr/keyword";

}  // namespace msg

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__STRUCT_HPP_
