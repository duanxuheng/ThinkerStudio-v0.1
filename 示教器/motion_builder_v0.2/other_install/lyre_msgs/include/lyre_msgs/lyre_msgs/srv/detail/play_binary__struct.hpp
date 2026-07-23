// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lyre_msgs:srv/PlayBinary.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__PLAY_BINARY__STRUCT_HPP_
#define LYRE_MSGS__SRV__DETAIL__PLAY_BINARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__srv__PlayBinary_Request __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__srv__PlayBinary_Request __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayBinary_Request_
{
  using Type = PlayBinary_Request_<ContainerAllocator>;

  explicit PlayBinary_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->seq = 0ul;
      this->last = false;
      this->force = false;
    }
  }

  explicit PlayBinary_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->seq = 0ul;
      this->last = false;
      this->force = false;
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
  using _force_type =
    bool;
  _force_type force;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

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
  Type & set__force(
    const bool & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SERVICE_NAME;

  // pointer types
  using RawPtr =
    lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__srv__PlayBinary_Request
    std::shared_ptr<lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__srv__PlayBinary_Request
    std::shared_ptr<lyre_msgs::srv::PlayBinary_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayBinary_Request_ & other) const
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
    if (this->force != other.force) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayBinary_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayBinary_Request_

// alias to use template instance with default allocator
using PlayBinary_Request =
  lyre_msgs::srv::PlayBinary_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
PlayBinary_Request_<ContainerAllocator>::SERVICE_NAME = "/audio_play/play_binary";

}  // namespace srv

}  // namespace lyre_msgs


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__srv__PlayBinary_Response __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__srv__PlayBinary_Response __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayBinary_Response_
{
  using Type = PlayBinary_Response_<ContainerAllocator>;

  explicit PlayBinary_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sid = "";
      this->code = 0;
      this->message = "";
    }
  }

  explicit PlayBinary_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__srv__PlayBinary_Response
    std::shared_ptr<lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__srv__PlayBinary_Response
    std::shared_ptr<lyre_msgs::srv::PlayBinary_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayBinary_Response_ & other) const
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
  bool operator!=(const PlayBinary_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayBinary_Response_

// alias to use template instance with default allocator
using PlayBinary_Response =
  lyre_msgs::srv::PlayBinary_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlayBinary_Response_<ContainerAllocator>::CODE_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlayBinary_Response_<ContainerAllocator>::CODE_INVALID_PARAMS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlayBinary_Response_<ContainerAllocator>::CODE_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace lyre_msgs

namespace lyre_msgs
{

namespace srv
{

struct PlayBinary
{
  using Request = lyre_msgs::srv::PlayBinary_Request;
  using Response = lyre_msgs::srv::PlayBinary_Response;
};

}  // namespace srv

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__SRV__DETAIL__PLAY_BINARY__STRUCT_HPP_
