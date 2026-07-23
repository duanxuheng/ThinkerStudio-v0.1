// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rotation'
// Member 'bend'
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__SetTsHandCtrl __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__SetTsHandCtrl __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetTsHandCtrl_
{
  using Type = SetTsHandCtrl_<ContainerAllocator>;

  explicit SetTsHandCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rotation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0l;
    }
  }

  explicit SetTsHandCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rotation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0l;
    }
  }

  // field types and members
  using _name_type =
    int32_t;
  _name_type name;
  using _rotation_type =
    bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>;
  _rotation_type rotation;
  using _bend_type =
    std::vector<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>>>;
  _bend_type bend;
  using _threshold_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _threshold_type threshold;

  // setters for named parameter idiom
  Type & set__name(
    const int32_t & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__rotation(
    const bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__bend(
    const std::vector<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bodyctrl_msgs::msg::SetTsHandCtrlItem_<ContainerAllocator>>> & _arg)
  {
    this->bend = _arg;
    return *this;
  }
  Type & set__threshold(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__SetTsHandCtrl
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__SetTsHandCtrl
    std::shared_ptr<bodyctrl_msgs::msg::SetTsHandCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTsHandCtrl_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->bend != other.bend) {
      return false;
    }
    if (this->threshold != other.threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTsHandCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTsHandCtrl_

// alias to use template instance with default allocator
using SetTsHandCtrl =
  bodyctrl_msgs::msg::SetTsHandCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__STRUCT_HPP_
