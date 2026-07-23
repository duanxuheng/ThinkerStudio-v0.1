// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatusMsg2.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__STRUCT_HPP_

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
// Member 'name'
#include "std_msgs/msg/detail/int32_multi_array__struct.hpp"
// Member 'pos'
// Member 'speed'
// Member 'current'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__MotorStatusMsg2 __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__MotorStatusMsg2 __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatusMsg2_
{
  using Type = MotorStatusMsg2_<ContainerAllocator>;

  explicit MotorStatusMsg2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    name(_init),
    pos(_init),
    speed(_init),
    current(_init)
  {
    (void)_init;
  }

  explicit MotorStatusMsg2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc, _init),
    pos(_alloc, _init),
    speed(_alloc, _init),
    current(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std_msgs::msg::Int32MultiArray_<ContainerAllocator>;
  _name_type name;
  using _pos_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _pos_type pos;
  using _speed_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _speed_type speed;
  using _current_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _current_type current;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std_msgs::msg::Int32MultiArray_<ContainerAllocator> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pos(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__speed(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__current(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorStatusMsg2
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorStatusMsg2
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatusMsg2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatusMsg2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatusMsg2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatusMsg2_

// alias to use template instance with default allocator
using MotorStatusMsg2 =
  bodyctrl_msgs::msg::MotorStatusMsg2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__STRUCT_HPP_
