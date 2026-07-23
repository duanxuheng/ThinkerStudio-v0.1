// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrlItem.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__SetTsHandCtrlItem __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__SetTsHandCtrlItem __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetTsHandCtrlItem_
{
  using Type = SetTsHandCtrlItem_<ContainerAllocator>;

  explicit SetTsHandCtrlItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel = 0;
      this->start_angle = 0;
      this->max_angle = 0;
    }
  }

  explicit SetTsHandCtrlItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel = 0;
      this->start_angle = 0;
      this->max_angle = 0;
    }
  }

  // field types and members
  using _vel_type =
    uint16_t;
  _vel_type vel;
  using _start_angle_type =
    uint16_t;
  _start_angle_type start_angle;
  using _max_angle_type =
    uint16_t;
  _max_angle_type max_angle;

  // setters for named parameter idiom
  Type & set__vel(
    const uint16_t & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__start_angle(
    const uint16_t & _arg)
  {
    this->start_angle = _arg;
    return *this;
  }
  Type & set__max_angle(
    const uint16_t & _arg)
  {
    this->max_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__SetTsHandCtrlItem
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__SetTsHandCtrlItem
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTsHandCtrlItem_ & other) const
  {
    if (this->vel != other.vel) {
      return false;
    }
    if (this->start_angle != other.start_angle) {
      return false;
    }
    if (this->max_angle != other.max_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTsHandCtrlItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTsHandCtrlItem_

// alias to use template instance with default allocator
using SetTsHandCtrlItem =
  bodyctrl_msgs::msg::SetTsHandCtrlItem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__STRUCT_HPP_
