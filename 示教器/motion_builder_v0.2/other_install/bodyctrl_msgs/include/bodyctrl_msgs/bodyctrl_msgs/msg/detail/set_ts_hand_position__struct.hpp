// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/SetTsHandPosition.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__SetTsHandPosition __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__SetTsHandPosition __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetTsHandPosition_
{
  using Type = SetTsHandPosition_<ContainerAllocator>;

  explicit SetTsHandPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0l;
      this->rotation_angle = 0;
    }
  }

  explicit SetTsHandPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0l;
      this->rotation_angle = 0;
    }
  }

  // field types and members
  using _name_type =
    int32_t;
  _name_type name;
  using _rotation_angle_type =
    uint16_t;
  _rotation_angle_type rotation_angle;
  using _bend_angle_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _bend_angle_type bend_angle;

  // setters for named parameter idiom
  Type & set__name(
    const int32_t & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__rotation_angle(
    const uint16_t & _arg)
  {
    this->rotation_angle = _arg;
    return *this;
  }
  Type & set__bend_angle(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->bend_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__SetTsHandPosition
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__SetTsHandPosition
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTsHandPosition_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->rotation_angle != other.rotation_angle) {
      return false;
    }
    if (this->bend_angle != other.bend_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTsHandPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTsHandPosition_

// alias to use template instance with default allocator
using SetTsHandPosition =
  bodyctrl_msgs::msg::SetTsHandPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__STRUCT_HPP_
