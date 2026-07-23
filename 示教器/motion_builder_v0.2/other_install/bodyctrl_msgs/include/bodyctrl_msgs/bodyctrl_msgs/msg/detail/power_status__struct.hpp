// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/PowerStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__STRUCT_HPP_

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
# define DEPRECATED__bodyctrl_msgs__msg__PowerStatus __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__PowerStatus __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerStatus_
{
  using Type = PowerStatus_<ContainerAllocator>;

  explicit PowerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waist_temp = 0.0f;
      this->arm_a_temp = 0.0f;
      this->arm_b_temp = 0.0f;
      this->leg_a_temp = 0.0f;
      this->leg_b_temp = 0.0f;
      this->waist_temp_max = 0.0f;
      this->arm_a_temp_max = 0.0f;
      this->arm_b_temp_max = 0.0f;
      this->leg_a_temp_max = 0.0f;
      this->leg_b_temp_max = 0.0f;
      this->waist_temp_min = 0.0f;
      this->arm_a_temp_min = 0.0f;
      this->arm_b_temp_min = 0.0f;
      this->leg_a_temp_min = 0.0f;
      this->leg_b_temp_min = 0.0f;
      this->arm_a_curr = 0.0f;
      this->arm_b_curr = 0.0f;
      this->leg_a_curr = 0.0f;
      this->leg_b_curr = 0.0f;
      this->waist_curr = 0.0f;
      this->head_curr = 0.0f;
      this->arm_a_curr_max = 0.0f;
      this->arm_b_curr_max = 0.0f;
      this->leg_a_curr_max = 0.0f;
      this->leg_b_curr_max = 0.0f;
      this->waist_curr_max = 0.0f;
      this->head_curr_max = 0.0f;
      this->arm_a_curr_min = 0.0f;
      this->arm_b_curr_min = 0.0f;
      this->leg_a_curr_min = 0.0f;
      this->leg_b_curr_min = 0.0f;
      this->waist_curr_min = 0.0f;
      this->head_curr_min = 0.0f;
      this->arm_a_volt = 0.0f;
      this->arm_b_volt = 0.0f;
      this->leg_a_volt = 0.0f;
      this->leg_b_volt = 0.0f;
      this->waist_volt = 0.0f;
      this->bus_volt = 0.0f;
      this->arm_a_volt_max = 0.0f;
      this->arm_b_volt_max = 0.0f;
      this->leg_a_volt_max = 0.0f;
      this->leg_b_volt_max = 0.0f;
      this->waist_volt_max = 0.0f;
      this->bus_volt_max = 0.0f;
      this->arm_a_volt_min = 0.0f;
      this->arm_b_volt_min = 0.0f;
      this->leg_a_volt_min = 0.0f;
      this->leg_b_volt_min = 0.0f;
      this->waist_volt_min = 0.0f;
      this->bus_volt_min = 0.0f;
      this->software_version = "";
      this->hardware_version = "";
      this->battery_voltage = 0.0f;
      this->battery_current = 0.0f;
      this->battery_power = 0.0f;
    }
  }

  explicit PowerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    software_version(_alloc),
    hardware_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waist_temp = 0.0f;
      this->arm_a_temp = 0.0f;
      this->arm_b_temp = 0.0f;
      this->leg_a_temp = 0.0f;
      this->leg_b_temp = 0.0f;
      this->waist_temp_max = 0.0f;
      this->arm_a_temp_max = 0.0f;
      this->arm_b_temp_max = 0.0f;
      this->leg_a_temp_max = 0.0f;
      this->leg_b_temp_max = 0.0f;
      this->waist_temp_min = 0.0f;
      this->arm_a_temp_min = 0.0f;
      this->arm_b_temp_min = 0.0f;
      this->leg_a_temp_min = 0.0f;
      this->leg_b_temp_min = 0.0f;
      this->arm_a_curr = 0.0f;
      this->arm_b_curr = 0.0f;
      this->leg_a_curr = 0.0f;
      this->leg_b_curr = 0.0f;
      this->waist_curr = 0.0f;
      this->head_curr = 0.0f;
      this->arm_a_curr_max = 0.0f;
      this->arm_b_curr_max = 0.0f;
      this->leg_a_curr_max = 0.0f;
      this->leg_b_curr_max = 0.0f;
      this->waist_curr_max = 0.0f;
      this->head_curr_max = 0.0f;
      this->arm_a_curr_min = 0.0f;
      this->arm_b_curr_min = 0.0f;
      this->leg_a_curr_min = 0.0f;
      this->leg_b_curr_min = 0.0f;
      this->waist_curr_min = 0.0f;
      this->head_curr_min = 0.0f;
      this->arm_a_volt = 0.0f;
      this->arm_b_volt = 0.0f;
      this->leg_a_volt = 0.0f;
      this->leg_b_volt = 0.0f;
      this->waist_volt = 0.0f;
      this->bus_volt = 0.0f;
      this->arm_a_volt_max = 0.0f;
      this->arm_b_volt_max = 0.0f;
      this->leg_a_volt_max = 0.0f;
      this->leg_b_volt_max = 0.0f;
      this->waist_volt_max = 0.0f;
      this->bus_volt_max = 0.0f;
      this->arm_a_volt_min = 0.0f;
      this->arm_b_volt_min = 0.0f;
      this->leg_a_volt_min = 0.0f;
      this->leg_b_volt_min = 0.0f;
      this->waist_volt_min = 0.0f;
      this->bus_volt_min = 0.0f;
      this->software_version = "";
      this->hardware_version = "";
      this->battery_voltage = 0.0f;
      this->battery_current = 0.0f;
      this->battery_power = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _waist_temp_type =
    float;
  _waist_temp_type waist_temp;
  using _arm_a_temp_type =
    float;
  _arm_a_temp_type arm_a_temp;
  using _arm_b_temp_type =
    float;
  _arm_b_temp_type arm_b_temp;
  using _leg_a_temp_type =
    float;
  _leg_a_temp_type leg_a_temp;
  using _leg_b_temp_type =
    float;
  _leg_b_temp_type leg_b_temp;
  using _waist_temp_max_type =
    float;
  _waist_temp_max_type waist_temp_max;
  using _arm_a_temp_max_type =
    float;
  _arm_a_temp_max_type arm_a_temp_max;
  using _arm_b_temp_max_type =
    float;
  _arm_b_temp_max_type arm_b_temp_max;
  using _leg_a_temp_max_type =
    float;
  _leg_a_temp_max_type leg_a_temp_max;
  using _leg_b_temp_max_type =
    float;
  _leg_b_temp_max_type leg_b_temp_max;
  using _waist_temp_min_type =
    float;
  _waist_temp_min_type waist_temp_min;
  using _arm_a_temp_min_type =
    float;
  _arm_a_temp_min_type arm_a_temp_min;
  using _arm_b_temp_min_type =
    float;
  _arm_b_temp_min_type arm_b_temp_min;
  using _leg_a_temp_min_type =
    float;
  _leg_a_temp_min_type leg_a_temp_min;
  using _leg_b_temp_min_type =
    float;
  _leg_b_temp_min_type leg_b_temp_min;
  using _arm_a_curr_type =
    float;
  _arm_a_curr_type arm_a_curr;
  using _arm_b_curr_type =
    float;
  _arm_b_curr_type arm_b_curr;
  using _leg_a_curr_type =
    float;
  _leg_a_curr_type leg_a_curr;
  using _leg_b_curr_type =
    float;
  _leg_b_curr_type leg_b_curr;
  using _waist_curr_type =
    float;
  _waist_curr_type waist_curr;
  using _head_curr_type =
    float;
  _head_curr_type head_curr;
  using _arm_a_curr_max_type =
    float;
  _arm_a_curr_max_type arm_a_curr_max;
  using _arm_b_curr_max_type =
    float;
  _arm_b_curr_max_type arm_b_curr_max;
  using _leg_a_curr_max_type =
    float;
  _leg_a_curr_max_type leg_a_curr_max;
  using _leg_b_curr_max_type =
    float;
  _leg_b_curr_max_type leg_b_curr_max;
  using _waist_curr_max_type =
    float;
  _waist_curr_max_type waist_curr_max;
  using _head_curr_max_type =
    float;
  _head_curr_max_type head_curr_max;
  using _arm_a_curr_min_type =
    float;
  _arm_a_curr_min_type arm_a_curr_min;
  using _arm_b_curr_min_type =
    float;
  _arm_b_curr_min_type arm_b_curr_min;
  using _leg_a_curr_min_type =
    float;
  _leg_a_curr_min_type leg_a_curr_min;
  using _leg_b_curr_min_type =
    float;
  _leg_b_curr_min_type leg_b_curr_min;
  using _waist_curr_min_type =
    float;
  _waist_curr_min_type waist_curr_min;
  using _head_curr_min_type =
    float;
  _head_curr_min_type head_curr_min;
  using _arm_a_volt_type =
    float;
  _arm_a_volt_type arm_a_volt;
  using _arm_b_volt_type =
    float;
  _arm_b_volt_type arm_b_volt;
  using _leg_a_volt_type =
    float;
  _leg_a_volt_type leg_a_volt;
  using _leg_b_volt_type =
    float;
  _leg_b_volt_type leg_b_volt;
  using _waist_volt_type =
    float;
  _waist_volt_type waist_volt;
  using _bus_volt_type =
    float;
  _bus_volt_type bus_volt;
  using _arm_a_volt_max_type =
    float;
  _arm_a_volt_max_type arm_a_volt_max;
  using _arm_b_volt_max_type =
    float;
  _arm_b_volt_max_type arm_b_volt_max;
  using _leg_a_volt_max_type =
    float;
  _leg_a_volt_max_type leg_a_volt_max;
  using _leg_b_volt_max_type =
    float;
  _leg_b_volt_max_type leg_b_volt_max;
  using _waist_volt_max_type =
    float;
  _waist_volt_max_type waist_volt_max;
  using _bus_volt_max_type =
    float;
  _bus_volt_max_type bus_volt_max;
  using _arm_a_volt_min_type =
    float;
  _arm_a_volt_min_type arm_a_volt_min;
  using _arm_b_volt_min_type =
    float;
  _arm_b_volt_min_type arm_b_volt_min;
  using _leg_a_volt_min_type =
    float;
  _leg_a_volt_min_type leg_a_volt_min;
  using _leg_b_volt_min_type =
    float;
  _leg_b_volt_min_type leg_b_volt_min;
  using _waist_volt_min_type =
    float;
  _waist_volt_min_type waist_volt_min;
  using _bus_volt_min_type =
    float;
  _bus_volt_min_type bus_volt_min;
  using _software_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _software_version_type software_version;
  using _hardware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hardware_version_type hardware_version;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _battery_current_type =
    float;
  _battery_current_type battery_current;
  using _battery_power_type =
    float;
  _battery_power_type battery_power;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__waist_temp(
    const float & _arg)
  {
    this->waist_temp = _arg;
    return *this;
  }
  Type & set__arm_a_temp(
    const float & _arg)
  {
    this->arm_a_temp = _arg;
    return *this;
  }
  Type & set__arm_b_temp(
    const float & _arg)
  {
    this->arm_b_temp = _arg;
    return *this;
  }
  Type & set__leg_a_temp(
    const float & _arg)
  {
    this->leg_a_temp = _arg;
    return *this;
  }
  Type & set__leg_b_temp(
    const float & _arg)
  {
    this->leg_b_temp = _arg;
    return *this;
  }
  Type & set__waist_temp_max(
    const float & _arg)
  {
    this->waist_temp_max = _arg;
    return *this;
  }
  Type & set__arm_a_temp_max(
    const float & _arg)
  {
    this->arm_a_temp_max = _arg;
    return *this;
  }
  Type & set__arm_b_temp_max(
    const float & _arg)
  {
    this->arm_b_temp_max = _arg;
    return *this;
  }
  Type & set__leg_a_temp_max(
    const float & _arg)
  {
    this->leg_a_temp_max = _arg;
    return *this;
  }
  Type & set__leg_b_temp_max(
    const float & _arg)
  {
    this->leg_b_temp_max = _arg;
    return *this;
  }
  Type & set__waist_temp_min(
    const float & _arg)
  {
    this->waist_temp_min = _arg;
    return *this;
  }
  Type & set__arm_a_temp_min(
    const float & _arg)
  {
    this->arm_a_temp_min = _arg;
    return *this;
  }
  Type & set__arm_b_temp_min(
    const float & _arg)
  {
    this->arm_b_temp_min = _arg;
    return *this;
  }
  Type & set__leg_a_temp_min(
    const float & _arg)
  {
    this->leg_a_temp_min = _arg;
    return *this;
  }
  Type & set__leg_b_temp_min(
    const float & _arg)
  {
    this->leg_b_temp_min = _arg;
    return *this;
  }
  Type & set__arm_a_curr(
    const float & _arg)
  {
    this->arm_a_curr = _arg;
    return *this;
  }
  Type & set__arm_b_curr(
    const float & _arg)
  {
    this->arm_b_curr = _arg;
    return *this;
  }
  Type & set__leg_a_curr(
    const float & _arg)
  {
    this->leg_a_curr = _arg;
    return *this;
  }
  Type & set__leg_b_curr(
    const float & _arg)
  {
    this->leg_b_curr = _arg;
    return *this;
  }
  Type & set__waist_curr(
    const float & _arg)
  {
    this->waist_curr = _arg;
    return *this;
  }
  Type & set__head_curr(
    const float & _arg)
  {
    this->head_curr = _arg;
    return *this;
  }
  Type & set__arm_a_curr_max(
    const float & _arg)
  {
    this->arm_a_curr_max = _arg;
    return *this;
  }
  Type & set__arm_b_curr_max(
    const float & _arg)
  {
    this->arm_b_curr_max = _arg;
    return *this;
  }
  Type & set__leg_a_curr_max(
    const float & _arg)
  {
    this->leg_a_curr_max = _arg;
    return *this;
  }
  Type & set__leg_b_curr_max(
    const float & _arg)
  {
    this->leg_b_curr_max = _arg;
    return *this;
  }
  Type & set__waist_curr_max(
    const float & _arg)
  {
    this->waist_curr_max = _arg;
    return *this;
  }
  Type & set__head_curr_max(
    const float & _arg)
  {
    this->head_curr_max = _arg;
    return *this;
  }
  Type & set__arm_a_curr_min(
    const float & _arg)
  {
    this->arm_a_curr_min = _arg;
    return *this;
  }
  Type & set__arm_b_curr_min(
    const float & _arg)
  {
    this->arm_b_curr_min = _arg;
    return *this;
  }
  Type & set__leg_a_curr_min(
    const float & _arg)
  {
    this->leg_a_curr_min = _arg;
    return *this;
  }
  Type & set__leg_b_curr_min(
    const float & _arg)
  {
    this->leg_b_curr_min = _arg;
    return *this;
  }
  Type & set__waist_curr_min(
    const float & _arg)
  {
    this->waist_curr_min = _arg;
    return *this;
  }
  Type & set__head_curr_min(
    const float & _arg)
  {
    this->head_curr_min = _arg;
    return *this;
  }
  Type & set__arm_a_volt(
    const float & _arg)
  {
    this->arm_a_volt = _arg;
    return *this;
  }
  Type & set__arm_b_volt(
    const float & _arg)
  {
    this->arm_b_volt = _arg;
    return *this;
  }
  Type & set__leg_a_volt(
    const float & _arg)
  {
    this->leg_a_volt = _arg;
    return *this;
  }
  Type & set__leg_b_volt(
    const float & _arg)
  {
    this->leg_b_volt = _arg;
    return *this;
  }
  Type & set__waist_volt(
    const float & _arg)
  {
    this->waist_volt = _arg;
    return *this;
  }
  Type & set__bus_volt(
    const float & _arg)
  {
    this->bus_volt = _arg;
    return *this;
  }
  Type & set__arm_a_volt_max(
    const float & _arg)
  {
    this->arm_a_volt_max = _arg;
    return *this;
  }
  Type & set__arm_b_volt_max(
    const float & _arg)
  {
    this->arm_b_volt_max = _arg;
    return *this;
  }
  Type & set__leg_a_volt_max(
    const float & _arg)
  {
    this->leg_a_volt_max = _arg;
    return *this;
  }
  Type & set__leg_b_volt_max(
    const float & _arg)
  {
    this->leg_b_volt_max = _arg;
    return *this;
  }
  Type & set__waist_volt_max(
    const float & _arg)
  {
    this->waist_volt_max = _arg;
    return *this;
  }
  Type & set__bus_volt_max(
    const float & _arg)
  {
    this->bus_volt_max = _arg;
    return *this;
  }
  Type & set__arm_a_volt_min(
    const float & _arg)
  {
    this->arm_a_volt_min = _arg;
    return *this;
  }
  Type & set__arm_b_volt_min(
    const float & _arg)
  {
    this->arm_b_volt_min = _arg;
    return *this;
  }
  Type & set__leg_a_volt_min(
    const float & _arg)
  {
    this->leg_a_volt_min = _arg;
    return *this;
  }
  Type & set__leg_b_volt_min(
    const float & _arg)
  {
    this->leg_b_volt_min = _arg;
    return *this;
  }
  Type & set__waist_volt_min(
    const float & _arg)
  {
    this->waist_volt_min = _arg;
    return *this;
  }
  Type & set__bus_volt_min(
    const float & _arg)
  {
    this->bus_volt_min = _arg;
    return *this;
  }
  Type & set__software_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->software_version = _arg;
    return *this;
  }
  Type & set__hardware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hardware_version = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__battery_current(
    const float & _arg)
  {
    this->battery_current = _arg;
    return *this;
  }
  Type & set__battery_power(
    const float & _arg)
  {
    this->battery_power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__PowerStatus
    std::shared_ptr<bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__PowerStatus
    std::shared_ptr<bodyctrl_msgs::msg::PowerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->waist_temp != other.waist_temp) {
      return false;
    }
    if (this->arm_a_temp != other.arm_a_temp) {
      return false;
    }
    if (this->arm_b_temp != other.arm_b_temp) {
      return false;
    }
    if (this->leg_a_temp != other.leg_a_temp) {
      return false;
    }
    if (this->leg_b_temp != other.leg_b_temp) {
      return false;
    }
    if (this->waist_temp_max != other.waist_temp_max) {
      return false;
    }
    if (this->arm_a_temp_max != other.arm_a_temp_max) {
      return false;
    }
    if (this->arm_b_temp_max != other.arm_b_temp_max) {
      return false;
    }
    if (this->leg_a_temp_max != other.leg_a_temp_max) {
      return false;
    }
    if (this->leg_b_temp_max != other.leg_b_temp_max) {
      return false;
    }
    if (this->waist_temp_min != other.waist_temp_min) {
      return false;
    }
    if (this->arm_a_temp_min != other.arm_a_temp_min) {
      return false;
    }
    if (this->arm_b_temp_min != other.arm_b_temp_min) {
      return false;
    }
    if (this->leg_a_temp_min != other.leg_a_temp_min) {
      return false;
    }
    if (this->leg_b_temp_min != other.leg_b_temp_min) {
      return false;
    }
    if (this->arm_a_curr != other.arm_a_curr) {
      return false;
    }
    if (this->arm_b_curr != other.arm_b_curr) {
      return false;
    }
    if (this->leg_a_curr != other.leg_a_curr) {
      return false;
    }
    if (this->leg_b_curr != other.leg_b_curr) {
      return false;
    }
    if (this->waist_curr != other.waist_curr) {
      return false;
    }
    if (this->head_curr != other.head_curr) {
      return false;
    }
    if (this->arm_a_curr_max != other.arm_a_curr_max) {
      return false;
    }
    if (this->arm_b_curr_max != other.arm_b_curr_max) {
      return false;
    }
    if (this->leg_a_curr_max != other.leg_a_curr_max) {
      return false;
    }
    if (this->leg_b_curr_max != other.leg_b_curr_max) {
      return false;
    }
    if (this->waist_curr_max != other.waist_curr_max) {
      return false;
    }
    if (this->head_curr_max != other.head_curr_max) {
      return false;
    }
    if (this->arm_a_curr_min != other.arm_a_curr_min) {
      return false;
    }
    if (this->arm_b_curr_min != other.arm_b_curr_min) {
      return false;
    }
    if (this->leg_a_curr_min != other.leg_a_curr_min) {
      return false;
    }
    if (this->leg_b_curr_min != other.leg_b_curr_min) {
      return false;
    }
    if (this->waist_curr_min != other.waist_curr_min) {
      return false;
    }
    if (this->head_curr_min != other.head_curr_min) {
      return false;
    }
    if (this->arm_a_volt != other.arm_a_volt) {
      return false;
    }
    if (this->arm_b_volt != other.arm_b_volt) {
      return false;
    }
    if (this->leg_a_volt != other.leg_a_volt) {
      return false;
    }
    if (this->leg_b_volt != other.leg_b_volt) {
      return false;
    }
    if (this->waist_volt != other.waist_volt) {
      return false;
    }
    if (this->bus_volt != other.bus_volt) {
      return false;
    }
    if (this->arm_a_volt_max != other.arm_a_volt_max) {
      return false;
    }
    if (this->arm_b_volt_max != other.arm_b_volt_max) {
      return false;
    }
    if (this->leg_a_volt_max != other.leg_a_volt_max) {
      return false;
    }
    if (this->leg_b_volt_max != other.leg_b_volt_max) {
      return false;
    }
    if (this->waist_volt_max != other.waist_volt_max) {
      return false;
    }
    if (this->bus_volt_max != other.bus_volt_max) {
      return false;
    }
    if (this->arm_a_volt_min != other.arm_a_volt_min) {
      return false;
    }
    if (this->arm_b_volt_min != other.arm_b_volt_min) {
      return false;
    }
    if (this->leg_a_volt_min != other.leg_a_volt_min) {
      return false;
    }
    if (this->leg_b_volt_min != other.leg_b_volt_min) {
      return false;
    }
    if (this->waist_volt_min != other.waist_volt_min) {
      return false;
    }
    if (this->bus_volt_min != other.bus_volt_min) {
      return false;
    }
    if (this->software_version != other.software_version) {
      return false;
    }
    if (this->hardware_version != other.hardware_version) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->battery_current != other.battery_current) {
      return false;
    }
    if (this->battery_power != other.battery_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerStatus_

// alias to use template instance with default allocator
using PowerStatus =
  bodyctrl_msgs::msg::PowerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__STRUCT_HPP_
