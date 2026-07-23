// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/PowerBoardKeyStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__STRUCT_HPP_

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
// Member 'is_estop'
// Member 'is_remote_estop'
// Member 'is_power_on'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__PowerBoardKeyStatus __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__PowerBoardKeyStatus __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerBoardKeyStatus_
{
  using Type = PowerBoardKeyStatus_<ContainerAllocator>;

  explicit PowerBoardKeyStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    is_estop(_init),
    is_remote_estop(_init),
    is_power_on(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->work_time = 0ul;
    }
  }

  explicit PowerBoardKeyStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    is_estop(_alloc, _init),
    is_remote_estop(_alloc, _init),
    is_power_on(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->work_time = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _work_time_type =
    uint32_t;
  _work_time_type work_time;
  using _is_estop_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _is_estop_type is_estop;
  using _is_remote_estop_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _is_remote_estop_type is_remote_estop;
  using _is_power_on_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _is_power_on_type is_power_on;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__work_time(
    const uint32_t & _arg)
  {
    this->work_time = _arg;
    return *this;
  }
  Type & set__is_estop(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->is_estop = _arg;
    return *this;
  }
  Type & set__is_remote_estop(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->is_remote_estop = _arg;
    return *this;
  }
  Type & set__is_power_on(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->is_power_on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__PowerBoardKeyStatus
    std::shared_ptr<bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__PowerBoardKeyStatus
    std::shared_ptr<bodyctrl_msgs::msg::PowerBoardKeyStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerBoardKeyStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->work_time != other.work_time) {
      return false;
    }
    if (this->is_estop != other.is_estop) {
      return false;
    }
    if (this->is_remote_estop != other.is_remote_estop) {
      return false;
    }
    if (this->is_power_on != other.is_power_on) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerBoardKeyStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerBoardKeyStatus_

// alias to use template instance with default allocator
using PowerBoardKeyStatus =
  bodyctrl_msgs::msg::PowerBoardKeyStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__STRUCT_HPP_
