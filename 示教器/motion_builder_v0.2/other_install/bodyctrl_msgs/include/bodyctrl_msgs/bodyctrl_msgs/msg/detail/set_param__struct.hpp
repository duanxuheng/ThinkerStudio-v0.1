// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/SetParam.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_PARAM__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__SetParam __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__SetParam __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetParam_
{
  using Type = SetParam_<ContainerAllocator>;

  explicit SetParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->param = 0.0f;
    }
  }

  explicit SetParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->param = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    uint16_t;
  _name_type name;
  using _param_type =
    float;
  _param_type param;

  // setters for named parameter idiom
  Type & set__name(
    const uint16_t & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__param(
    const float & _arg)
  {
    this->param = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::SetParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::SetParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__SetParam
    std::shared_ptr<bodyctrl_msgs::msg::SetParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__SetParam
    std::shared_ptr<bodyctrl_msgs::msg::SetParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetParam_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->param != other.param) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetParam_

// alias to use template instance with default allocator
using SetParam =
  bodyctrl_msgs::msg::SetParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_PARAM__STRUCT_HPP_
