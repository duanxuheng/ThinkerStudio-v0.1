// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/PowerBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__STRUCT_HPP_

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
# define DEPRECATED__bodyctrl_msgs__msg__PowerBatteryStatus __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__PowerBatteryStatus __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerBatteryStatus_
{
  using Type = PowerBatteryStatus_<ContainerAllocator>;

  explicit PowerBatteryStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_installed = 0l;
      this->battery_working = 0l;
      this->master_battery_voltage = 0.0f;
      this->master_battery_current = 0.0f;
      this->master_battery_power = 0.0f;
      this->little_battery_voltage = 0.0f;
      this->little_battery_current = 0.0f;
      this->little_battery_power = 0.0f;
      this->pg12a = 0;
      this->pg12b = 0;
      this->pg12c = 0;
      this->pg12d = 0;
      this->pg5cd = 0;
      this->pg5ab = 0;
      this->pgrdc2 = 0;
      this->pgrdc1 = 0;
      this->pgheader = 0;
      this->pgbutton2 = 0;
    }
  }

  explicit PowerBatteryStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_installed = 0l;
      this->battery_working = 0l;
      this->master_battery_voltage = 0.0f;
      this->master_battery_current = 0.0f;
      this->master_battery_power = 0.0f;
      this->little_battery_voltage = 0.0f;
      this->little_battery_current = 0.0f;
      this->little_battery_power = 0.0f;
      this->pg12a = 0;
      this->pg12b = 0;
      this->pg12c = 0;
      this->pg12d = 0;
      this->pg5cd = 0;
      this->pg5ab = 0;
      this->pgrdc2 = 0;
      this->pgrdc1 = 0;
      this->pgheader = 0;
      this->pgbutton2 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _battery_installed_type =
    int32_t;
  _battery_installed_type battery_installed;
  using _battery_working_type =
    int32_t;
  _battery_working_type battery_working;
  using _master_battery_voltage_type =
    float;
  _master_battery_voltage_type master_battery_voltage;
  using _master_battery_current_type =
    float;
  _master_battery_current_type master_battery_current;
  using _master_battery_power_type =
    float;
  _master_battery_power_type master_battery_power;
  using _little_battery_voltage_type =
    float;
  _little_battery_voltage_type little_battery_voltage;
  using _little_battery_current_type =
    float;
  _little_battery_current_type little_battery_current;
  using _little_battery_power_type =
    float;
  _little_battery_power_type little_battery_power;
  using _pg12a_type =
    int8_t;
  _pg12a_type pg12a;
  using _pg12b_type =
    int8_t;
  _pg12b_type pg12b;
  using _pg12c_type =
    int8_t;
  _pg12c_type pg12c;
  using _pg12d_type =
    int8_t;
  _pg12d_type pg12d;
  using _pg5cd_type =
    int8_t;
  _pg5cd_type pg5cd;
  using _pg5ab_type =
    int8_t;
  _pg5ab_type pg5ab;
  using _pgrdc2_type =
    int8_t;
  _pgrdc2_type pgrdc2;
  using _pgrdc1_type =
    int8_t;
  _pgrdc1_type pgrdc1;
  using _pgheader_type =
    int8_t;
  _pgheader_type pgheader;
  using _pgbutton2_type =
    int8_t;
  _pgbutton2_type pgbutton2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__battery_installed(
    const int32_t & _arg)
  {
    this->battery_installed = _arg;
    return *this;
  }
  Type & set__battery_working(
    const int32_t & _arg)
  {
    this->battery_working = _arg;
    return *this;
  }
  Type & set__master_battery_voltage(
    const float & _arg)
  {
    this->master_battery_voltage = _arg;
    return *this;
  }
  Type & set__master_battery_current(
    const float & _arg)
  {
    this->master_battery_current = _arg;
    return *this;
  }
  Type & set__master_battery_power(
    const float & _arg)
  {
    this->master_battery_power = _arg;
    return *this;
  }
  Type & set__little_battery_voltage(
    const float & _arg)
  {
    this->little_battery_voltage = _arg;
    return *this;
  }
  Type & set__little_battery_current(
    const float & _arg)
  {
    this->little_battery_current = _arg;
    return *this;
  }
  Type & set__little_battery_power(
    const float & _arg)
  {
    this->little_battery_power = _arg;
    return *this;
  }
  Type & set__pg12a(
    const int8_t & _arg)
  {
    this->pg12a = _arg;
    return *this;
  }
  Type & set__pg12b(
    const int8_t & _arg)
  {
    this->pg12b = _arg;
    return *this;
  }
  Type & set__pg12c(
    const int8_t & _arg)
  {
    this->pg12c = _arg;
    return *this;
  }
  Type & set__pg12d(
    const int8_t & _arg)
  {
    this->pg12d = _arg;
    return *this;
  }
  Type & set__pg5cd(
    const int8_t & _arg)
  {
    this->pg5cd = _arg;
    return *this;
  }
  Type & set__pg5ab(
    const int8_t & _arg)
  {
    this->pg5ab = _arg;
    return *this;
  }
  Type & set__pgrdc2(
    const int8_t & _arg)
  {
    this->pgrdc2 = _arg;
    return *this;
  }
  Type & set__pgrdc1(
    const int8_t & _arg)
  {
    this->pgrdc1 = _arg;
    return *this;
  }
  Type & set__pgheader(
    const int8_t & _arg)
  {
    this->pgheader = _arg;
    return *this;
  }
  Type & set__pgbutton2(
    const int8_t & _arg)
  {
    this->pgbutton2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__PowerBatteryStatus
    std::shared_ptr<bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__PowerBatteryStatus
    std::shared_ptr<bodyctrl_msgs::msg::PowerBatteryStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerBatteryStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->battery_installed != other.battery_installed) {
      return false;
    }
    if (this->battery_working != other.battery_working) {
      return false;
    }
    if (this->master_battery_voltage != other.master_battery_voltage) {
      return false;
    }
    if (this->master_battery_current != other.master_battery_current) {
      return false;
    }
    if (this->master_battery_power != other.master_battery_power) {
      return false;
    }
    if (this->little_battery_voltage != other.little_battery_voltage) {
      return false;
    }
    if (this->little_battery_current != other.little_battery_current) {
      return false;
    }
    if (this->little_battery_power != other.little_battery_power) {
      return false;
    }
    if (this->pg12a != other.pg12a) {
      return false;
    }
    if (this->pg12b != other.pg12b) {
      return false;
    }
    if (this->pg12c != other.pg12c) {
      return false;
    }
    if (this->pg12d != other.pg12d) {
      return false;
    }
    if (this->pg5cd != other.pg5cd) {
      return false;
    }
    if (this->pg5ab != other.pg5ab) {
      return false;
    }
    if (this->pgrdc2 != other.pgrdc2) {
      return false;
    }
    if (this->pgrdc1 != other.pgrdc1) {
      return false;
    }
    if (this->pgheader != other.pgheader) {
      return false;
    }
    if (this->pgbutton2 != other.pgbutton2) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerBatteryStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerBatteryStatus_

// alias to use template instance with default allocator
using PowerBatteryStatus =
  bodyctrl_msgs::msg::PowerBatteryStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__STRUCT_HPP_
