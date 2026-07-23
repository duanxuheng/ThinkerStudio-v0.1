// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/MotorName.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_NAME__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_NAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__MotorName __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__MotorName __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorName_
{
  using Type = MotorName_<ContainerAllocator>;

  explicit MotorName_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MotorName_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr uint16_t MOTOR_HEAD_1 =
    1u;
  static constexpr uint16_t MOTOR_HEAD_2 =
    2u;
  static constexpr uint16_t MOTOR_HEAD_3 =
    3u;
  static constexpr uint16_t MOTOR_ARM_LEFT_1 =
    11u;
  static constexpr uint16_t MOTOR_ARM_LEFT_2 =
    12u;
  static constexpr uint16_t MOTOR_ARM_LEFT_3 =
    13u;
  static constexpr uint16_t MOTOR_ARM_LEFT_4 =
    14u;
  static constexpr uint16_t MOTOR_ARM_LEFT_5 =
    15u;
  static constexpr uint16_t MOTOR_ARM_LEFT_6 =
    16u;
  static constexpr uint16_t MOTOR_ARM_LEFT_7 =
    17u;
  static constexpr uint16_t MOTOR_ARM_RIGHT_1 =
    21u;
  static constexpr uint16_t MOTOR_ARM_RIGHT_2 =
    22u;
  static constexpr uint16_t MOTOR_ARM_RIGHT_3 =
    23u;
  static constexpr uint16_t MOTOR_ARM_RIGHT_4 =
    24u;
  static constexpr uint16_t MOTOR_ARM_RIGHT_5 =
    25u;
  static constexpr uint16_t MOTOR_ARM_RIGHT_6 =
    26u;
  static constexpr uint16_t MOTOR_ARM_RIGHT_7 =
    27u;
  static constexpr uint16_t MOTOR_WAIST_1 =
    31u;
  static constexpr uint16_t MOTOR_WAIST_2 =
    32u;
  static constexpr uint16_t MOTOR_WAIST_3 =
    33u;
  static constexpr uint16_t MOTOR_LEG_LEFT_1 =
    51u;
  static constexpr uint16_t MOTOR_LEG_LEFT_2 =
    52u;
  static constexpr uint16_t MOTOR_LEG_LEFT_3 =
    53u;
  static constexpr uint16_t MOTOR_LEG_LEFT_4 =
    54u;
  static constexpr uint16_t MOTOR_LEG_LEFT_5 =
    55u;
  static constexpr uint16_t MOTOR_LEG_LEFT_6 =
    56u;
  static constexpr uint16_t MOTOR_LEG_RIGHT_1 =
    61u;
  static constexpr uint16_t MOTOR_LEG_RIGHT_2 =
    62u;
  static constexpr uint16_t MOTOR_LEG_RIGHT_3 =
    63u;
  static constexpr uint16_t MOTOR_LEG_RIGHT_4 =
    64u;
  static constexpr uint16_t MOTOR_LEG_RIGHT_5 =
    65u;
  static constexpr uint16_t MOTOR_LEG_RIGHT_6 =
    66u;

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::MotorName_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::MotorName_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorName_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::MotorName_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorName_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorName_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::MotorName_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::MotorName_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorName_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::MotorName_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorName
    std::shared_ptr<bodyctrl_msgs::msg::MotorName_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__MotorName
    std::shared_ptr<bodyctrl_msgs::msg::MotorName_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorName_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorName_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorName_

// alias to use template instance with default allocator
using MotorName =
  bodyctrl_msgs::msg::MotorName_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_HEAD_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_HEAD_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_HEAD_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_LEFT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_LEFT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_LEFT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_LEFT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_LEFT_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_LEFT_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_LEFT_7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_RIGHT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_RIGHT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_RIGHT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_RIGHT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_RIGHT_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_RIGHT_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_ARM_RIGHT_7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_WAIST_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_WAIST_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_WAIST_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_LEFT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_LEFT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_LEFT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_LEFT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_LEFT_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_LEFT_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_RIGHT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_RIGHT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_RIGHT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_RIGHT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_RIGHT_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MotorName_<ContainerAllocator>::MOTOR_LEG_RIGHT_6;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_NAME__STRUCT_HPP_
