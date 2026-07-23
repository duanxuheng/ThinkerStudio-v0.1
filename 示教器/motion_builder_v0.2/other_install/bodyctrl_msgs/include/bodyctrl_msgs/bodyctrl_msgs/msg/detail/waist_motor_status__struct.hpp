// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/WaistMotorStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__WAIST_MOTOR_STATUS__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__WAIST_MOTOR_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__WaistMotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__WaistMotorStatus __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaistMotorStatus_
{
  using Type = WaistMotorStatus_<ContainerAllocator>;

  explicit WaistMotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos = 0.0;
      this->vel = 0.0;
      this->cur = 0.0;
    }
  }

  explicit WaistMotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos = 0.0;
      this->vel = 0.0;
      this->cur = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pos_type =
    double;
  _pos_type pos;
  using _vel_type =
    double;
  _vel_type vel;
  using _cur_type =
    double;
  _cur_type cur;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pos(
    const double & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const double & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__cur(
    const double & _arg)
  {
    this->cur = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__WaistMotorStatus
    std::shared_ptr<bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__WaistMotorStatus
    std::shared_ptr<bodyctrl_msgs::msg::WaistMotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistMotorStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->cur != other.cur) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistMotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistMotorStatus_

// alias to use template instance with default allocator
using WaistMotorStatus =
  bodyctrl_msgs::msg::WaistMotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__WAIST_MOTOR_STATUS__STRUCT_HPP_
