// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lyre_msgs:srv/LlmAsk.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__LLM_ASK__STRUCT_HPP_
#define LYRE_MSGS__SRV__DETAIL__LLM_ASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__srv__LlmAsk_Request __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__srv__LlmAsk_Request __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LlmAsk_Request_
{
  using Type = LlmAsk_Request_<ContainerAllocator>;

  explicit LlmAsk_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->text = "";
    }
  }

  explicit LlmAsk_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->text = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SERVICE_NAME;

  // pointer types
  using RawPtr =
    lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__srv__LlmAsk_Request
    std::shared_ptr<lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__srv__LlmAsk_Request
    std::shared_ptr<lyre_msgs::srv::LlmAsk_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LlmAsk_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const LlmAsk_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LlmAsk_Request_

// alias to use template instance with default allocator
using LlmAsk_Request =
  lyre_msgs::srv::LlmAsk_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LlmAsk_Request_<ContainerAllocator>::SERVICE_NAME = "/audio_llm/ask";

}  // namespace srv

}  // namespace lyre_msgs


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__srv__LlmAsk_Response __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__srv__LlmAsk_Response __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LlmAsk_Response_
{
  using Type = LlmAsk_Response_<ContainerAllocator>;

  explicit LlmAsk_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->code = 0;
      this->message = "";
    }
  }

  explicit LlmAsk_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sid(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->code = 0;
      this->message = "";
    }
  }

  // field types and members
  using _sid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sid_type sid;
  using _code_type =
    int8_t;
  _code_type code;
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
  Type & set__code(
    const int8_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t CODE_OK =
    0;
  static constexpr int8_t CODE_INVALID_PARAMS =
    1;
  static constexpr int8_t CODE_FAILED =
    -1;

  // pointer types
  using RawPtr =
    lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__srv__LlmAsk_Response
    std::shared_ptr<lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__srv__LlmAsk_Response
    std::shared_ptr<lyre_msgs::srv::LlmAsk_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LlmAsk_Response_ & other) const
  {
    if (this->sid != other.sid) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const LlmAsk_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LlmAsk_Response_

// alias to use template instance with default allocator
using LlmAsk_Response =
  lyre_msgs::srv::LlmAsk_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t LlmAsk_Response_<ContainerAllocator>::CODE_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t LlmAsk_Response_<ContainerAllocator>::CODE_INVALID_PARAMS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t LlmAsk_Response_<ContainerAllocator>::CODE_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace lyre_msgs

namespace lyre_msgs
{

namespace srv
{

struct LlmAsk
{
  using Request = lyre_msgs::srv::LlmAsk_Request;
  using Response = lyre_msgs::srv::LlmAsk_Response;
};

}  // namespace srv

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__SRV__DETAIL__LLM_ASK__STRUCT_HPP_
