// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lyre_msgs:msg/LlmRst.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__LLM_RST__STRUCT_HPP_
#define LYRE_MSGS__MSG__DETAIL__LLM_RST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__msg__LlmRst __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__msg__LlmRst __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LlmRst_
{
  using Type = LlmRst_<ContainerAllocator>;

  explicit LlmRst_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->seq = 0ul;
      this->last = false;
      this->text = "";
    }
  }

  explicit LlmRst_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sid(_alloc),
    text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->seq = 0ul;
      this->last = false;
      this->text = "";
    }
  }

  // field types and members
  using _sid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sid_type sid;
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _last_type =
    bool;
  _last_type last;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

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
  Type & set__last(
    const bool & _arg)
  {
    this->last = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TOPIC_NAME;

  // pointer types
  using RawPtr =
    lyre_msgs::msg::LlmRst_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::msg::LlmRst_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::msg::LlmRst_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::msg::LlmRst_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::LlmRst_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::LlmRst_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::msg::LlmRst_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::msg::LlmRst_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::msg::LlmRst_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::msg::LlmRst_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__msg__LlmRst
    std::shared_ptr<lyre_msgs::msg::LlmRst_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__msg__LlmRst
    std::shared_ptr<lyre_msgs::msg::LlmRst_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LlmRst_ & other) const
  {
    if (this->sid != other.sid) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->last != other.last) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const LlmRst_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LlmRst_

// alias to use template instance with default allocator
using LlmRst =
  lyre_msgs::msg::LlmRst_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LlmRst_<ContainerAllocator>::TOPIC_NAME = "/audio_llm/rst";

}  // namespace msg

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__MSG__DETAIL__LLM_RST__STRUCT_HPP_
