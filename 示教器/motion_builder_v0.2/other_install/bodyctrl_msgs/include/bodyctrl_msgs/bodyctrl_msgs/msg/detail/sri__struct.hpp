// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/Sri.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SRI__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SRI__STRUCT_HPP_

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
# define DEPRECATED__bodyctrl_msgs__msg__Sri __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__Sri __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sri_
{
  using Type = Sri_<ContainerAllocator>;

  explicit Sri_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0l;
      this->fx = 0.0f;
      this->fy = 0.0f;
      this->fz = 0.0f;
      this->mx = 0.0f;
      this->my = 0.0f;
      this->mz = 0.0f;
    }
  }

  explicit Sri_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0l;
      this->fx = 0.0f;
      this->fy = 0.0f;
      this->fz = 0.0f;
      this->mx = 0.0f;
      this->my = 0.0f;
      this->mz = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    int32_t;
  _name_type name;
  using _fx_type =
    float;
  _fx_type fx;
  using _fy_type =
    float;
  _fy_type fy;
  using _fz_type =
    float;
  _fz_type fz;
  using _mx_type =
    float;
  _mx_type mx;
  using _my_type =
    float;
  _my_type my;
  using _mz_type =
    float;
  _mz_type mz;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const int32_t & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__fx(
    const float & _arg)
  {
    this->fx = _arg;
    return *this;
  }
  Type & set__fy(
    const float & _arg)
  {
    this->fy = _arg;
    return *this;
  }
  Type & set__fz(
    const float & _arg)
  {
    this->fz = _arg;
    return *this;
  }
  Type & set__mx(
    const float & _arg)
  {
    this->mx = _arg;
    return *this;
  }
  Type & set__my(
    const float & _arg)
  {
    this->my = _arg;
    return *this;
  }
  Type & set__mz(
    const float & _arg)
  {
    this->mz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::Sri_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::Sri_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::Sri_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::Sri_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::Sri_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::Sri_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::Sri_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::Sri_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::Sri_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::Sri_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__Sri
    std::shared_ptr<bodyctrl_msgs::msg::Sri_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__Sri
    std::shared_ptr<bodyctrl_msgs::msg::Sri_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sri_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->fx != other.fx) {
      return false;
    }
    if (this->fy != other.fy) {
      return false;
    }
    if (this->fz != other.fz) {
      return false;
    }
    if (this->mx != other.mx) {
      return false;
    }
    if (this->my != other.my) {
      return false;
    }
    if (this->mz != other.mz) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sri_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sri_

// alias to use template instance with default allocator
using Sri =
  bodyctrl_msgs::msg::Sri_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SRI__STRUCT_HPP_
