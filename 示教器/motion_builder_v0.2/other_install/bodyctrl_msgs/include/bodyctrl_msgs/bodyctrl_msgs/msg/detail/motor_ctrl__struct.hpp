// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/MotorCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__MotorCtrl __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__MotorCtrl __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCtrl_
{
  using Type = MotorCtrl_<ContainerAllocator>;

  explicit MotorCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->kp = 0.0f;
      this->kd = 0.0f;
      this->pos = 0.0f;
      this->spd = 0.0f;
      this->tor = 0.0f;
    }
  }

  explicit MotorCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->kp = 0.0f;
      this->kd = 0.0f;
      this->pos = 0.0f;
      this->spd = 0.0f;
      this->tor = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    uint16_t;
  _name_type name;
  using _kp_type =
    float;
  _kp_type kp;
  using _kd_type =
    float;
  _kd_type kd;
  using _pos_type =
    float;
  _pos_type pos;
  using _spd_type =
    float;
  _spd_type spd;
  using _tor_type =
    float;
  _tor_type tor;

  // setters for named parameter idiom
  Type & set__name(
    const uint16_t & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const float & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__pos(
    const float & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__spd(
    const float & _arg)
  {
    this->spd = _arg;
    return *this;
  }
  Type & set__tor(
    const float & _arg)
  {
    this->tor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorCtrl
    std::shared_ptr<bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorCtrl
    std::shared_ptr<bodyctrl_msgs::msg::MotorCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCtrl_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->spd != other.spd) {
      return false;
    }
    if (this->tor != other.tor) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCtrl_

// alias to use template instance with default allocator
using MotorCtrl =
  bodyctrl_msgs::msg::MotorCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__STRUCT_HPP_
