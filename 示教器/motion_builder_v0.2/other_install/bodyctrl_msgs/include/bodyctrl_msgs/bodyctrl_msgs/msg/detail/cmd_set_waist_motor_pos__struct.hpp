// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/CmdSetWaistMotorPos.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_WAIST_MOTOR_POS__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_WAIST_MOTOR_POS__STRUCT_HPP_

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
# define DEPRECATED__bodyctrl_msgs__msg__CmdSetWaistMotorPos __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__CmdSetWaistMotorPos __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CmdSetWaistMotorPos_
{
  using Type = CmdSetWaistMotorPos_<ContainerAllocator>;

  explicit CmdSetWaistMotorPos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos = 0.0;
      this->spd = 0.0;
      this->accel = 0.0;
      this->decel = 0.0;
    }
  }

  explicit CmdSetWaistMotorPos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos = 0.0;
      this->spd = 0.0;
      this->accel = 0.0;
      this->decel = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pos_type =
    double;
  _pos_type pos;
  using _spd_type =
    double;
  _spd_type spd;
  using _accel_type =
    double;
  _accel_type accel;
  using _decel_type =
    double;
  _decel_type decel;

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
  Type & set__spd(
    const double & _arg)
  {
    this->spd = _arg;
    return *this;
  }
  Type & set__accel(
    const double & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__decel(
    const double & _arg)
  {
    this->decel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__CmdSetWaistMotorPos
    std::shared_ptr<bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__CmdSetWaistMotorPos
    std::shared_ptr<bodyctrl_msgs::msg::CmdSetWaistMotorPos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdSetWaistMotorPos_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->spd != other.spd) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->decel != other.decel) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdSetWaistMotorPos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdSetWaistMotorPos_

// alias to use template instance with default allocator
using CmdSetWaistMotorPos =
  bodyctrl_msgs::msg::CmdSetWaistMotorPos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_WAIST_MOTOR_POS__STRUCT_HPP_
