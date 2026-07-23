// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatusMsgPlate.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__STRUCT_HPP_

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
# define DEPRECATED__bodyctrl_msgs__msg__MotorStatusMsgPlate __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__MotorStatusMsgPlate __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatusMsgPlate_
{
  using Type = MotorStatusMsgPlate_<ContainerAllocator>;

  explicit MotorStatusMsgPlate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name1 = 0;
      this->pos1 = 0.0f;
      this->speed1 = 0.0f;
      this->current1 = 0.0f;
      this->name2 = 0;
      this->pos2 = 0.0f;
      this->speed2 = 0.0f;
      this->current2 = 0.0f;
      this->name3 = 0;
      this->pos3 = 0.0f;
      this->speed3 = 0.0f;
      this->current3 = 0.0f;
      this->name4 = 0;
      this->pos4 = 0.0f;
      this->speed4 = 0.0f;
      this->current4 = 0.0f;
      this->name5 = 0;
      this->pos5 = 0.0f;
      this->speed5 = 0.0f;
      this->current5 = 0.0f;
      this->name6 = 0;
      this->pos6 = 0.0f;
      this->speed6 = 0.0f;
      this->current6 = 0.0f;
      this->name7 = 0;
      this->pos7 = 0.0f;
      this->speed7 = 0.0f;
      this->current7 = 0.0f;
      this->name8 = 0;
      this->pos8 = 0.0f;
      this->speed8 = 0.0f;
      this->current8 = 0.0f;
      this->name9 = 0;
      this->pos9 = 0.0f;
      this->speed9 = 0.0f;
      this->current9 = 0.0f;
      this->name10 = 0;
      this->pos10 = 0.0f;
      this->speed10 = 0.0f;
      this->current10 = 0.0f;
      this->name11 = 0;
      this->pos11 = 0.0f;
      this->speed11 = 0.0f;
      this->current11 = 0.0f;
      this->name12 = 0;
      this->pos12 = 0.0f;
      this->speed12 = 0.0f;
      this->current12 = 0.0f;
    }
  }

  explicit MotorStatusMsgPlate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name1 = 0;
      this->pos1 = 0.0f;
      this->speed1 = 0.0f;
      this->current1 = 0.0f;
      this->name2 = 0;
      this->pos2 = 0.0f;
      this->speed2 = 0.0f;
      this->current2 = 0.0f;
      this->name3 = 0;
      this->pos3 = 0.0f;
      this->speed3 = 0.0f;
      this->current3 = 0.0f;
      this->name4 = 0;
      this->pos4 = 0.0f;
      this->speed4 = 0.0f;
      this->current4 = 0.0f;
      this->name5 = 0;
      this->pos5 = 0.0f;
      this->speed5 = 0.0f;
      this->current5 = 0.0f;
      this->name6 = 0;
      this->pos6 = 0.0f;
      this->speed6 = 0.0f;
      this->current6 = 0.0f;
      this->name7 = 0;
      this->pos7 = 0.0f;
      this->speed7 = 0.0f;
      this->current7 = 0.0f;
      this->name8 = 0;
      this->pos8 = 0.0f;
      this->speed8 = 0.0f;
      this->current8 = 0.0f;
      this->name9 = 0;
      this->pos9 = 0.0f;
      this->speed9 = 0.0f;
      this->current9 = 0.0f;
      this->name10 = 0;
      this->pos10 = 0.0f;
      this->speed10 = 0.0f;
      this->current10 = 0.0f;
      this->name11 = 0;
      this->pos11 = 0.0f;
      this->speed11 = 0.0f;
      this->current11 = 0.0f;
      this->name12 = 0;
      this->pos12 = 0.0f;
      this->speed12 = 0.0f;
      this->current12 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name1_type =
    uint16_t;
  _name1_type name1;
  using _pos1_type =
    float;
  _pos1_type pos1;
  using _speed1_type =
    float;
  _speed1_type speed1;
  using _current1_type =
    float;
  _current1_type current1;
  using _name2_type =
    uint16_t;
  _name2_type name2;
  using _pos2_type =
    float;
  _pos2_type pos2;
  using _speed2_type =
    float;
  _speed2_type speed2;
  using _current2_type =
    float;
  _current2_type current2;
  using _name3_type =
    uint16_t;
  _name3_type name3;
  using _pos3_type =
    float;
  _pos3_type pos3;
  using _speed3_type =
    float;
  _speed3_type speed3;
  using _current3_type =
    float;
  _current3_type current3;
  using _name4_type =
    uint16_t;
  _name4_type name4;
  using _pos4_type =
    float;
  _pos4_type pos4;
  using _speed4_type =
    float;
  _speed4_type speed4;
  using _current4_type =
    float;
  _current4_type current4;
  using _name5_type =
    uint16_t;
  _name5_type name5;
  using _pos5_type =
    float;
  _pos5_type pos5;
  using _speed5_type =
    float;
  _speed5_type speed5;
  using _current5_type =
    float;
  _current5_type current5;
  using _name6_type =
    uint16_t;
  _name6_type name6;
  using _pos6_type =
    float;
  _pos6_type pos6;
  using _speed6_type =
    float;
  _speed6_type speed6;
  using _current6_type =
    float;
  _current6_type current6;
  using _name7_type =
    uint16_t;
  _name7_type name7;
  using _pos7_type =
    float;
  _pos7_type pos7;
  using _speed7_type =
    float;
  _speed7_type speed7;
  using _current7_type =
    float;
  _current7_type current7;
  using _name8_type =
    uint16_t;
  _name8_type name8;
  using _pos8_type =
    float;
  _pos8_type pos8;
  using _speed8_type =
    float;
  _speed8_type speed8;
  using _current8_type =
    float;
  _current8_type current8;
  using _name9_type =
    uint16_t;
  _name9_type name9;
  using _pos9_type =
    float;
  _pos9_type pos9;
  using _speed9_type =
    float;
  _speed9_type speed9;
  using _current9_type =
    float;
  _current9_type current9;
  using _name10_type =
    uint16_t;
  _name10_type name10;
  using _pos10_type =
    float;
  _pos10_type pos10;
  using _speed10_type =
    float;
  _speed10_type speed10;
  using _current10_type =
    float;
  _current10_type current10;
  using _name11_type =
    uint16_t;
  _name11_type name11;
  using _pos11_type =
    float;
  _pos11_type pos11;
  using _speed11_type =
    float;
  _speed11_type speed11;
  using _current11_type =
    float;
  _current11_type current11;
  using _name12_type =
    uint16_t;
  _name12_type name12;
  using _pos12_type =
    float;
  _pos12_type pos12;
  using _speed12_type =
    float;
  _speed12_type speed12;
  using _current12_type =
    float;
  _current12_type current12;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name1(
    const uint16_t & _arg)
  {
    this->name1 = _arg;
    return *this;
  }
  Type & set__pos1(
    const float & _arg)
  {
    this->pos1 = _arg;
    return *this;
  }
  Type & set__speed1(
    const float & _arg)
  {
    this->speed1 = _arg;
    return *this;
  }
  Type & set__current1(
    const float & _arg)
  {
    this->current1 = _arg;
    return *this;
  }
  Type & set__name2(
    const uint16_t & _arg)
  {
    this->name2 = _arg;
    return *this;
  }
  Type & set__pos2(
    const float & _arg)
  {
    this->pos2 = _arg;
    return *this;
  }
  Type & set__speed2(
    const float & _arg)
  {
    this->speed2 = _arg;
    return *this;
  }
  Type & set__current2(
    const float & _arg)
  {
    this->current2 = _arg;
    return *this;
  }
  Type & set__name3(
    const uint16_t & _arg)
  {
    this->name3 = _arg;
    return *this;
  }
  Type & set__pos3(
    const float & _arg)
  {
    this->pos3 = _arg;
    return *this;
  }
  Type & set__speed3(
    const float & _arg)
  {
    this->speed3 = _arg;
    return *this;
  }
  Type & set__current3(
    const float & _arg)
  {
    this->current3 = _arg;
    return *this;
  }
  Type & set__name4(
    const uint16_t & _arg)
  {
    this->name4 = _arg;
    return *this;
  }
  Type & set__pos4(
    const float & _arg)
  {
    this->pos4 = _arg;
    return *this;
  }
  Type & set__speed4(
    const float & _arg)
  {
    this->speed4 = _arg;
    return *this;
  }
  Type & set__current4(
    const float & _arg)
  {
    this->current4 = _arg;
    return *this;
  }
  Type & set__name5(
    const uint16_t & _arg)
  {
    this->name5 = _arg;
    return *this;
  }
  Type & set__pos5(
    const float & _arg)
  {
    this->pos5 = _arg;
    return *this;
  }
  Type & set__speed5(
    const float & _arg)
  {
    this->speed5 = _arg;
    return *this;
  }
  Type & set__current5(
    const float & _arg)
  {
    this->current5 = _arg;
    return *this;
  }
  Type & set__name6(
    const uint16_t & _arg)
  {
    this->name6 = _arg;
    return *this;
  }
  Type & set__pos6(
    const float & _arg)
  {
    this->pos6 = _arg;
    return *this;
  }
  Type & set__speed6(
    const float & _arg)
  {
    this->speed6 = _arg;
    return *this;
  }
  Type & set__current6(
    const float & _arg)
  {
    this->current6 = _arg;
    return *this;
  }
  Type & set__name7(
    const uint16_t & _arg)
  {
    this->name7 = _arg;
    return *this;
  }
  Type & set__pos7(
    const float & _arg)
  {
    this->pos7 = _arg;
    return *this;
  }
  Type & set__speed7(
    const float & _arg)
  {
    this->speed7 = _arg;
    return *this;
  }
  Type & set__current7(
    const float & _arg)
  {
    this->current7 = _arg;
    return *this;
  }
  Type & set__name8(
    const uint16_t & _arg)
  {
    this->name8 = _arg;
    return *this;
  }
  Type & set__pos8(
    const float & _arg)
  {
    this->pos8 = _arg;
    return *this;
  }
  Type & set__speed8(
    const float & _arg)
  {
    this->speed8 = _arg;
    return *this;
  }
  Type & set__current8(
    const float & _arg)
  {
    this->current8 = _arg;
    return *this;
  }
  Type & set__name9(
    const uint16_t & _arg)
  {
    this->name9 = _arg;
    return *this;
  }
  Type & set__pos9(
    const float & _arg)
  {
    this->pos9 = _arg;
    return *this;
  }
  Type & set__speed9(
    const float & _arg)
  {
    this->speed9 = _arg;
    return *this;
  }
  Type & set__current9(
    const float & _arg)
  {
    this->current9 = _arg;
    return *this;
  }
  Type & set__name10(
    const uint16_t & _arg)
  {
    this->name10 = _arg;
    return *this;
  }
  Type & set__pos10(
    const float & _arg)
  {
    this->pos10 = _arg;
    return *this;
  }
  Type & set__speed10(
    const float & _arg)
  {
    this->speed10 = _arg;
    return *this;
  }
  Type & set__current10(
    const float & _arg)
  {
    this->current10 = _arg;
    return *this;
  }
  Type & set__name11(
    const uint16_t & _arg)
  {
    this->name11 = _arg;
    return *this;
  }
  Type & set__pos11(
    const float & _arg)
  {
    this->pos11 = _arg;
    return *this;
  }
  Type & set__speed11(
    const float & _arg)
  {
    this->speed11 = _arg;
    return *this;
  }
  Type & set__current11(
    const float & _arg)
  {
    this->current11 = _arg;
    return *this;
  }
  Type & set__name12(
    const uint16_t & _arg)
  {
    this->name12 = _arg;
    return *this;
  }
  Type & set__pos12(
    const float & _arg)
  {
    this->pos12 = _arg;
    return *this;
  }
  Type & set__speed12(
    const float & _arg)
  {
    this->speed12 = _arg;
    return *this;
  }
  Type & set__current12(
    const float & _arg)
  {
    this->current12 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorStatusMsgPlate
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorStatusMsgPlate
    std::shared_ptr<bodyctrl_msgs::msg::MotorStatusMsgPlate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatusMsgPlate_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name1 != other.name1) {
      return false;
    }
    if (this->pos1 != other.pos1) {
      return false;
    }
    if (this->speed1 != other.speed1) {
      return false;
    }
    if (this->current1 != other.current1) {
      return false;
    }
    if (this->name2 != other.name2) {
      return false;
    }
    if (this->pos2 != other.pos2) {
      return false;
    }
    if (this->speed2 != other.speed2) {
      return false;
    }
    if (this->current2 != other.current2) {
      return false;
    }
    if (this->name3 != other.name3) {
      return false;
    }
    if (this->pos3 != other.pos3) {
      return false;
    }
    if (this->speed3 != other.speed3) {
      return false;
    }
    if (this->current3 != other.current3) {
      return false;
    }
    if (this->name4 != other.name4) {
      return false;
    }
    if (this->pos4 != other.pos4) {
      return false;
    }
    if (this->speed4 != other.speed4) {
      return false;
    }
    if (this->current4 != other.current4) {
      return false;
    }
    if (this->name5 != other.name5) {
      return false;
    }
    if (this->pos5 != other.pos5) {
      return false;
    }
    if (this->speed5 != other.speed5) {
      return false;
    }
    if (this->current5 != other.current5) {
      return false;
    }
    if (this->name6 != other.name6) {
      return false;
    }
    if (this->pos6 != other.pos6) {
      return false;
    }
    if (this->speed6 != other.speed6) {
      return false;
    }
    if (this->current6 != other.current6) {
      return false;
    }
    if (this->name7 != other.name7) {
      return false;
    }
    if (this->pos7 != other.pos7) {
      return false;
    }
    if (this->speed7 != other.speed7) {
      return false;
    }
    if (this->current7 != other.current7) {
      return false;
    }
    if (this->name8 != other.name8) {
      return false;
    }
    if (this->pos8 != other.pos8) {
      return false;
    }
    if (this->speed8 != other.speed8) {
      return false;
    }
    if (this->current8 != other.current8) {
      return false;
    }
    if (this->name9 != other.name9) {
      return false;
    }
    if (this->pos9 != other.pos9) {
      return false;
    }
    if (this->speed9 != other.speed9) {
      return false;
    }
    if (this->current9 != other.current9) {
      return false;
    }
    if (this->name10 != other.name10) {
      return false;
    }
    if (this->pos10 != other.pos10) {
      return false;
    }
    if (this->speed10 != other.speed10) {
      return false;
    }
    if (this->current10 != other.current10) {
      return false;
    }
    if (this->name11 != other.name11) {
      return false;
    }
    if (this->pos11 != other.pos11) {
      return false;
    }
    if (this->speed11 != other.speed11) {
      return false;
    }
    if (this->current11 != other.current11) {
      return false;
    }
    if (this->name12 != other.name12) {
      return false;
    }
    if (this->pos12 != other.pos12) {
      return false;
    }
    if (this->speed12 != other.speed12) {
      return false;
    }
    if (this->current12 != other.current12) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatusMsgPlate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatusMsgPlate_

// alias to use template instance with default allocator
using MotorStatusMsgPlate =
  bodyctrl_msgs::msg::MotorStatusMsgPlate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__STRUCT_HPP_
