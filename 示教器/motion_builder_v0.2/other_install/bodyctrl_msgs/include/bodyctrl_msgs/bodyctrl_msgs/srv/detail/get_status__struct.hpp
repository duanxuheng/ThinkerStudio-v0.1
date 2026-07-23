// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:srv/GetStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__GET_STATUS__STRUCT_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__GET_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__GetStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__GetStatus_Request __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetStatus_Request_
{
  using Type = GetStatus_Request_<ContainerAllocator>;

  explicit GetStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__GetStatus_Request
    std::shared_ptr<bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__GetStatus_Request
    std::shared_ptr<bodyctrl_msgs::srv::GetStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStatus_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStatus_Request_

// alias to use template instance with default allocator
using GetStatus_Request =
  bodyctrl_msgs::srv::GetStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__srv__GetStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__srv__GetStatus_Response __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetStatus_Response_
{
  using Type = GetStatus_Response_<ContainerAllocator>;

  explicit GetStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->statusvalue.begin(), this->statusvalue.end(), 0ul);
    }
  }

  explicit GetStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : statusvalue(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->statusvalue.begin(), this->statusvalue.end(), 0ul);
    }
  }

  // field types and members
  using _statusvalue_type =
    std::array<uint32_t, 6>;
  _statusvalue_type statusvalue;

  // setters for named parameter idiom
  Type & set__statusvalue(
    const std::array<uint32_t, 6> & _arg)
  {
    this->statusvalue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__srv__GetStatus_Response
    std::shared_ptr<bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__srv__GetStatus_Response
    std::shared_ptr<bodyctrl_msgs::srv::GetStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStatus_Response_ & other) const
  {
    if (this->statusvalue != other.statusvalue) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStatus_Response_

// alias to use template instance with default allocator
using GetStatus_Response =
  bodyctrl_msgs::srv::GetStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace bodyctrl_msgs
{

namespace srv
{

struct GetStatus
{
  using Request = bodyctrl_msgs::srv::GetStatus_Request;
  using Response = bodyctrl_msgs::srv::GetStatus_Response;
};

}  // namespace srv

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__GET_STATUS__STRUCT_HPP_
