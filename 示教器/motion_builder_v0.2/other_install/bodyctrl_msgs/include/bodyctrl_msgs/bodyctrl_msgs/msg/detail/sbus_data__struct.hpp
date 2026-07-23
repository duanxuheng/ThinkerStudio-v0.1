// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/SbusData.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__STRUCT_HPP_

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
# define DEPRECATED__bodyctrl_msgs__msg__SbusData __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__SbusData __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbusData_
{
  using Type = SbusData_<ContainerAllocator>;

  explicit SbusData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key_event_new = 0l;
      this->key_event_old = 0l;
      this->button_a = 0;
      this->button_b = 0;
      this->button_c = 0;
      this->button_d = 0;
      this->button_e = 0;
      this->button_f = 0;
      this->button_g = 0;
      this->button_h = 0;
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
    }
  }

  explicit SbusData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key_event_new = 0l;
      this->key_event_old = 0l;
      this->button_a = 0;
      this->button_b = 0;
      this->button_c = 0;
      this->button_d = 0;
      this->button_e = 0;
      this->button_f = 0;
      this->button_g = 0;
      this->button_h = 0;
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _key_event_new_type =
    int32_t;
  _key_event_new_type key_event_new;
  using _key_event_old_type =
    int32_t;
  _key_event_old_type key_event_old;
  using _button_a_type =
    int8_t;
  _button_a_type button_a;
  using _button_b_type =
    int8_t;
  _button_b_type button_b;
  using _button_c_type =
    int8_t;
  _button_c_type button_c;
  using _button_d_type =
    int8_t;
  _button_d_type button_d;
  using _button_e_type =
    int8_t;
  _button_e_type button_e;
  using _button_f_type =
    int8_t;
  _button_f_type button_f;
  using _button_g_type =
    int8_t;
  _button_g_type button_g;
  using _button_h_type =
    int8_t;
  _button_h_type button_h;
  using _x1_type =
    float;
  _x1_type x1;
  using _y1_type =
    float;
  _y1_type y1;
  using _x2_type =
    float;
  _x2_type x2;
  using _y2_type =
    float;
  _y2_type y2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__key_event_new(
    const int32_t & _arg)
  {
    this->key_event_new = _arg;
    return *this;
  }
  Type & set__key_event_old(
    const int32_t & _arg)
  {
    this->key_event_old = _arg;
    return *this;
  }
  Type & set__button_a(
    const int8_t & _arg)
  {
    this->button_a = _arg;
    return *this;
  }
  Type & set__button_b(
    const int8_t & _arg)
  {
    this->button_b = _arg;
    return *this;
  }
  Type & set__button_c(
    const int8_t & _arg)
  {
    this->button_c = _arg;
    return *this;
  }
  Type & set__button_d(
    const int8_t & _arg)
  {
    this->button_d = _arg;
    return *this;
  }
  Type & set__button_e(
    const int8_t & _arg)
  {
    this->button_e = _arg;
    return *this;
  }
  Type & set__button_f(
    const int8_t & _arg)
  {
    this->button_f = _arg;
    return *this;
  }
  Type & set__button_g(
    const int8_t & _arg)
  {
    this->button_g = _arg;
    return *this;
  }
  Type & set__button_h(
    const int8_t & _arg)
  {
    this->button_h = _arg;
    return *this;
  }
  Type & set__x1(
    const float & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const float & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__x2(
    const float & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const float & _arg)
  {
    this->y2 = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t KEY_NONE =
    0;
  static constexpr int32_t KEY_A_UP =
    1;
  static constexpr int32_t KEY_A_DOWN =
    2;
  static constexpr int32_t KEY_B_UP =
    3;
  static constexpr int32_t KEY_B_DOWN =
    4;
  static constexpr int32_t KEY_C_UP =
    5;
  static constexpr int32_t KEY_C_DOWN =
    6;
  static constexpr int32_t KEY_D_UP =
    7;
  static constexpr int32_t KEY_D_DOWN =
    8;
  static constexpr int32_t KEY_E_UP =
    9;
  static constexpr int32_t KEY_E_MID =
    10;
  static constexpr int32_t KEY_E_DOWN =
    11;
  static constexpr int32_t KEY_F_UP =
    12;
  static constexpr int32_t KEY_F_MID =
    13;
  static constexpr int32_t KEY_F_DOWN =
    14;
  static constexpr int32_t KEY_G_LEFT =
    15;
  static constexpr int32_t KEY_G_MID =
    16;
  static constexpr int32_t KEY_G_RIGHT =
    17;
  static constexpr int32_t KEY_H_LEFT =
    18;
  static constexpr int32_t KEY_H_MID =
    19;
  static constexpr int32_t KEY_H_RIGHT =
    20;

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::SbusData_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::SbusData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SbusData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SbusData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SbusData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SbusData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SbusData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SbusData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SbusData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SbusData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__SbusData
    std::shared_ptr<bodyctrl_msgs::msg::SbusData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__SbusData
    std::shared_ptr<bodyctrl_msgs::msg::SbusData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbusData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->key_event_new != other.key_event_new) {
      return false;
    }
    if (this->key_event_old != other.key_event_old) {
      return false;
    }
    if (this->button_a != other.button_a) {
      return false;
    }
    if (this->button_b != other.button_b) {
      return false;
    }
    if (this->button_c != other.button_c) {
      return false;
    }
    if (this->button_d != other.button_d) {
      return false;
    }
    if (this->button_e != other.button_e) {
      return false;
    }
    if (this->button_f != other.button_f) {
      return false;
    }
    if (this->button_g != other.button_g) {
      return false;
    }
    if (this->button_h != other.button_h) {
      return false;
    }
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbusData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbusData_

// alias to use template instance with default allocator
using SbusData =
  bodyctrl_msgs::msg::SbusData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_A_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_A_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_B_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_B_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_C_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_C_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_D_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_D_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_E_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_E_MID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_E_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_F_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_F_MID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_F_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_G_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_G_MID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_G_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_H_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_H_MID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SbusData_<ContainerAllocator>::KEY_H_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__STRUCT_HPP_
