// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lyre_msgs:srv/PlayStop.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__PLAY_STOP__STRUCT_HPP_
#define LYRE_MSGS__SRV__DETAIL__PLAY_STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__srv__PlayStop_Request __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__srv__PlayStop_Request __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayStop_Request_
{
  using Type = PlayStop_Request_<ContainerAllocator>;

  explicit PlayStop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PlayStop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SERVICE_NAME;

  // pointer types
  using RawPtr =
    lyre_msgs::srv::PlayStop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::srv::PlayStop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::srv::PlayStop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::srv::PlayStop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::PlayStop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::PlayStop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::PlayStop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::PlayStop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::srv::PlayStop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::srv::PlayStop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__srv__PlayStop_Request
    std::shared_ptr<lyre_msgs::srv::PlayStop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__srv__PlayStop_Request
    std::shared_ptr<lyre_msgs::srv::PlayStop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayStop_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayStop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayStop_Request_

// alias to use template instance with default allocator
using PlayStop_Request =
  lyre_msgs::srv::PlayStop_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
PlayStop_Request_<ContainerAllocator>::SERVICE_NAME = "/audio_play/stop";

}  // namespace srv

}  // namespace lyre_msgs


#ifndef _WIN32
# define DEPRECATED__lyre_msgs__srv__PlayStop_Response __attribute__((deprecated))
#else
# define DEPRECATED__lyre_msgs__srv__PlayStop_Response __declspec(deprecated)
#endif

namespace lyre_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayStop_Response_
{
  using Type = PlayStop_Response_<ContainerAllocator>;

  explicit PlayStop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PlayStop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    lyre_msgs::srv::PlayStop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lyre_msgs::srv::PlayStop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lyre_msgs::srv::PlayStop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lyre_msgs::srv::PlayStop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::PlayStop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::PlayStop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lyre_msgs::srv::PlayStop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lyre_msgs::srv::PlayStop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lyre_msgs::srv::PlayStop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lyre_msgs::srv::PlayStop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lyre_msgs__srv__PlayStop_Response
    std::shared_ptr<lyre_msgs::srv::PlayStop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lyre_msgs__srv__PlayStop_Response
    std::shared_ptr<lyre_msgs::srv::PlayStop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayStop_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayStop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayStop_Response_

// alias to use template instance with default allocator
using PlayStop_Response =
  lyre_msgs::srv::PlayStop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lyre_msgs

namespace lyre_msgs
{

namespace srv
{

struct PlayStop
{
  using Request = lyre_msgs::srv::PlayStop_Request;
  using Response = lyre_msgs::srv::PlayStop_Response;
};

}  // namespace srv

}  // namespace lyre_msgs

#endif  // LYRE_MSGS__SRV__DETAIL__PLAY_STOP__STRUCT_HPP_
