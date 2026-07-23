// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatus1.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__MotorStatus1 __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__MotorStatus1 __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus1_
{
  using Type = MotorStatus1_<ContainerAllocator>;

  explicit MotorStatus1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->motortemperature = 0.0f;
      this->mostemperature = 0.0f;
    }
  }

  explicit MotorStatus1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->motortemperature = 0.0f;
      this->mostemperature = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    uint16_t;
  _name_type name;
  using _motortemperature_type =
    float;
  _motortemperature_type motortemperature;
  using _mostemperature_type =
    float;
  _mostemperature_type mostemperature;

  // setters for named parameter idiom
  Type & set__name(
    const uint16_t & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__motortemperature(
    const float & _arg)
  {
    this->motortemperature = _arg;
    return *this;
  }
  Type & set__mostemperature(
    const float & _arg)
  {
    this->mostemperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorStatus1
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorStatus1
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatus1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus1_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->motortemperature != other.motortemperature) {
      return false;
    }
    if (this->mostemperature != other.mostemperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus1_

// alias to use template instance with default allocator
using MotorStatus1 =
  bodyctrl_msgs::msg::MotorStatus1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__STRUCT_HPP_
