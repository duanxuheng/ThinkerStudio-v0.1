// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/CmdSetMotorCurTor.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_CUR_TOR__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_CUR_TOR__STRUCT_HPP_

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
// Member 'cmds'
#include "bodyctrl_msgs/msg/detail/set_motor_cur_tor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__CmdSetMotorCurTor __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__CmdSetMotorCurTor __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CmdSetMotorCurTor_
{
  using Type = CmdSetMotorCurTor_<ContainerAllocator>;

  explicit CmdSetMotorCurTor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit CmdSetMotorCurTor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cmds_type =
    std::vector<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>>>;
  _cmds_type cmds;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cmds(
    const std::vector<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bodyctrl_msgs::msg::SetMotorCurTor_<ContainerAllocator>>> & _arg)
  {
    this->cmds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__CmdSetMotorCurTor
    std::shared_ptr<bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__CmdSetMotorCurTor
    std::shared_ptr<bodyctrl_msgs::msg::CmdSetMotorCurTor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdSetMotorCurTor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cmds != other.cmds) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdSetMotorCurTor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdSetMotorCurTor_

// alias to use template instance with default allocator
using CmdSetMotorCurTor =
  bodyctrl_msgs::msg::CmdSetMotorCurTor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_CUR_TOR__STRUCT_HPP_
