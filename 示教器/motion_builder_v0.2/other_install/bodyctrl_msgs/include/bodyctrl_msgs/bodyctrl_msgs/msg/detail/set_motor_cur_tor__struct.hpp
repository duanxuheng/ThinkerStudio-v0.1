// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/SetMotorCurTor.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__SetMotorCurTor __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__SetMotorCurTor __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetMotorCurTor_
{
  using Type = SetMotorCurTor_<ContainerAllocator>;

  explicit SetMotorCurTor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->cur_tor = 0.0f;
      this->ctrl_status = 0;
    }
  }

  explicit SetMotorCurTor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->cur_tor = 0.0f;
      this->ctrl_status = 0;
    }
  }

  // field types and members
  using _name_type =
    uint16_t;
  _name_type name;
  using _cur_tor_type =
    float;
  _cur_tor_type cur_tor;
  using _ctrl_status_type =
    uint8_t;
  _ctrl_status_type ctrl_status;

  // setters for named parameter idiom
  Type & set__name(
    const uint16_t & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__cur_tor(
    const float & _arg)
  {
    this->cur_tor = _arg;
    return *this;
  }
  Type & set__ctrl_status(
    const uint8_t & _arg)
  {
    this->ctrl_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__SetMotorCurTor
    std::shared_ptr<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__SetMotorCurTor
    std::shared_ptr<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotorCurTor_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->cur_tor != other.cur_tor) {
      return false;
    }
    if (this->ctrl_status != other.ctrl_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotorCurTor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotorCurTor_

// alias to use template instance with default allocator
using SetMotorCurTor =
  bodyctrl_msgs::msg::SetMotorCurTor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__STRUCT_HPP_
