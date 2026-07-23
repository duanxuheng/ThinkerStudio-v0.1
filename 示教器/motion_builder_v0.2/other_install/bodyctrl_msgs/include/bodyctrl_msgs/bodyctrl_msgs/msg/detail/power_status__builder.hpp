// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/PowerStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/power_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerStatus_battery_power
{
public:
  explicit Init_PowerStatus_battery_power(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::PowerStatus battery_power(::bodyctrl_msgs::msg::PowerStatus::_battery_power_type arg)
  {
    msg_.battery_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_battery_current
{
public:
  explicit Init_PowerStatus_battery_current(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_battery_power battery_current(::bodyctrl_msgs::msg::PowerStatus::_battery_current_type arg)
  {
    msg_.battery_current = std::move(arg);
    return Init_PowerStatus_battery_power(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_battery_voltage
{
public:
  explicit Init_PowerStatus_battery_voltage(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_battery_current battery_voltage(::bodyctrl_msgs::msg::PowerStatus::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_PowerStatus_battery_current(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_hardware_version
{
public:
  explicit Init_PowerStatus_hardware_version(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_battery_voltage hardware_version(::bodyctrl_msgs::msg::PowerStatus::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return Init_PowerStatus_battery_voltage(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_software_version
{
public:
  explicit Init_PowerStatus_software_version(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_hardware_version software_version(::bodyctrl_msgs::msg::PowerStatus::_software_version_type arg)
  {
    msg_.software_version = std::move(arg);
    return Init_PowerStatus_hardware_version(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_bus_volt_min
{
public:
  explicit Init_PowerStatus_bus_volt_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_software_version bus_volt_min(::bodyctrl_msgs::msg::PowerStatus::_bus_volt_min_type arg)
  {
    msg_.bus_volt_min = std::move(arg);
    return Init_PowerStatus_software_version(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_waist_volt_min
{
public:
  explicit Init_PowerStatus_waist_volt_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_bus_volt_min waist_volt_min(::bodyctrl_msgs::msg::PowerStatus::_waist_volt_min_type arg)
  {
    msg_.waist_volt_min = std::move(arg);
    return Init_PowerStatus_bus_volt_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_b_volt_min
{
public:
  explicit Init_PowerStatus_leg_b_volt_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_waist_volt_min leg_b_volt_min(::bodyctrl_msgs::msg::PowerStatus::_leg_b_volt_min_type arg)
  {
    msg_.leg_b_volt_min = std::move(arg);
    return Init_PowerStatus_waist_volt_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_a_volt_min
{
public:
  explicit Init_PowerStatus_leg_a_volt_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_b_volt_min leg_a_volt_min(::bodyctrl_msgs::msg::PowerStatus::_leg_a_volt_min_type arg)
  {
    msg_.leg_a_volt_min = std::move(arg);
    return Init_PowerStatus_leg_b_volt_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_b_volt_min
{
public:
  explicit Init_PowerStatus_arm_b_volt_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_a_volt_min arm_b_volt_min(::bodyctrl_msgs::msg::PowerStatus::_arm_b_volt_min_type arg)
  {
    msg_.arm_b_volt_min = std::move(arg);
    return Init_PowerStatus_leg_a_volt_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_a_volt_min
{
public:
  explicit Init_PowerStatus_arm_a_volt_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_b_volt_min arm_a_volt_min(::bodyctrl_msgs::msg::PowerStatus::_arm_a_volt_min_type arg)
  {
    msg_.arm_a_volt_min = std::move(arg);
    return Init_PowerStatus_arm_b_volt_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_bus_volt_max
{
public:
  explicit Init_PowerStatus_bus_volt_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_a_volt_min bus_volt_max(::bodyctrl_msgs::msg::PowerStatus::_bus_volt_max_type arg)
  {
    msg_.bus_volt_max = std::move(arg);
    return Init_PowerStatus_arm_a_volt_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_waist_volt_max
{
public:
  explicit Init_PowerStatus_waist_volt_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_bus_volt_max waist_volt_max(::bodyctrl_msgs::msg::PowerStatus::_waist_volt_max_type arg)
  {
    msg_.waist_volt_max = std::move(arg);
    return Init_PowerStatus_bus_volt_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_b_volt_max
{
public:
  explicit Init_PowerStatus_leg_b_volt_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_waist_volt_max leg_b_volt_max(::bodyctrl_msgs::msg::PowerStatus::_leg_b_volt_max_type arg)
  {
    msg_.leg_b_volt_max = std::move(arg);
    return Init_PowerStatus_waist_volt_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_a_volt_max
{
public:
  explicit Init_PowerStatus_leg_a_volt_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_b_volt_max leg_a_volt_max(::bodyctrl_msgs::msg::PowerStatus::_leg_a_volt_max_type arg)
  {
    msg_.leg_a_volt_max = std::move(arg);
    return Init_PowerStatus_leg_b_volt_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_b_volt_max
{
public:
  explicit Init_PowerStatus_arm_b_volt_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_a_volt_max arm_b_volt_max(::bodyctrl_msgs::msg::PowerStatus::_arm_b_volt_max_type arg)
  {
    msg_.arm_b_volt_max = std::move(arg);
    return Init_PowerStatus_leg_a_volt_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_a_volt_max
{
public:
  explicit Init_PowerStatus_arm_a_volt_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_b_volt_max arm_a_volt_max(::bodyctrl_msgs::msg::PowerStatus::_arm_a_volt_max_type arg)
  {
    msg_.arm_a_volt_max = std::move(arg);
    return Init_PowerStatus_arm_b_volt_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_bus_volt
{
public:
  explicit Init_PowerStatus_bus_volt(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_a_volt_max bus_volt(::bodyctrl_msgs::msg::PowerStatus::_bus_volt_type arg)
  {
    msg_.bus_volt = std::move(arg);
    return Init_PowerStatus_arm_a_volt_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_waist_volt
{
public:
  explicit Init_PowerStatus_waist_volt(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_bus_volt waist_volt(::bodyctrl_msgs::msg::PowerStatus::_waist_volt_type arg)
  {
    msg_.waist_volt = std::move(arg);
    return Init_PowerStatus_bus_volt(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_b_volt
{
public:
  explicit Init_PowerStatus_leg_b_volt(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_waist_volt leg_b_volt(::bodyctrl_msgs::msg::PowerStatus::_leg_b_volt_type arg)
  {
    msg_.leg_b_volt = std::move(arg);
    return Init_PowerStatus_waist_volt(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_a_volt
{
public:
  explicit Init_PowerStatus_leg_a_volt(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_b_volt leg_a_volt(::bodyctrl_msgs::msg::PowerStatus::_leg_a_volt_type arg)
  {
    msg_.leg_a_volt = std::move(arg);
    return Init_PowerStatus_leg_b_volt(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_b_volt
{
public:
  explicit Init_PowerStatus_arm_b_volt(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_a_volt arm_b_volt(::bodyctrl_msgs::msg::PowerStatus::_arm_b_volt_type arg)
  {
    msg_.arm_b_volt = std::move(arg);
    return Init_PowerStatus_leg_a_volt(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_a_volt
{
public:
  explicit Init_PowerStatus_arm_a_volt(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_b_volt arm_a_volt(::bodyctrl_msgs::msg::PowerStatus::_arm_a_volt_type arg)
  {
    msg_.arm_a_volt = std::move(arg);
    return Init_PowerStatus_arm_b_volt(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_head_curr_min
{
public:
  explicit Init_PowerStatus_head_curr_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_a_volt head_curr_min(::bodyctrl_msgs::msg::PowerStatus::_head_curr_min_type arg)
  {
    msg_.head_curr_min = std::move(arg);
    return Init_PowerStatus_arm_a_volt(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_waist_curr_min
{
public:
  explicit Init_PowerStatus_waist_curr_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_head_curr_min waist_curr_min(::bodyctrl_msgs::msg::PowerStatus::_waist_curr_min_type arg)
  {
    msg_.waist_curr_min = std::move(arg);
    return Init_PowerStatus_head_curr_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_b_curr_min
{
public:
  explicit Init_PowerStatus_leg_b_curr_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_waist_curr_min leg_b_curr_min(::bodyctrl_msgs::msg::PowerStatus::_leg_b_curr_min_type arg)
  {
    msg_.leg_b_curr_min = std::move(arg);
    return Init_PowerStatus_waist_curr_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_a_curr_min
{
public:
  explicit Init_PowerStatus_leg_a_curr_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_b_curr_min leg_a_curr_min(::bodyctrl_msgs::msg::PowerStatus::_leg_a_curr_min_type arg)
  {
    msg_.leg_a_curr_min = std::move(arg);
    return Init_PowerStatus_leg_b_curr_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_b_curr_min
{
public:
  explicit Init_PowerStatus_arm_b_curr_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_a_curr_min arm_b_curr_min(::bodyctrl_msgs::msg::PowerStatus::_arm_b_curr_min_type arg)
  {
    msg_.arm_b_curr_min = std::move(arg);
    return Init_PowerStatus_leg_a_curr_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_a_curr_min
{
public:
  explicit Init_PowerStatus_arm_a_curr_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_b_curr_min arm_a_curr_min(::bodyctrl_msgs::msg::PowerStatus::_arm_a_curr_min_type arg)
  {
    msg_.arm_a_curr_min = std::move(arg);
    return Init_PowerStatus_arm_b_curr_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_head_curr_max
{
public:
  explicit Init_PowerStatus_head_curr_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_a_curr_min head_curr_max(::bodyctrl_msgs::msg::PowerStatus::_head_curr_max_type arg)
  {
    msg_.head_curr_max = std::move(arg);
    return Init_PowerStatus_arm_a_curr_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_waist_curr_max
{
public:
  explicit Init_PowerStatus_waist_curr_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_head_curr_max waist_curr_max(::bodyctrl_msgs::msg::PowerStatus::_waist_curr_max_type arg)
  {
    msg_.waist_curr_max = std::move(arg);
    return Init_PowerStatus_head_curr_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_b_curr_max
{
public:
  explicit Init_PowerStatus_leg_b_curr_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_waist_curr_max leg_b_curr_max(::bodyctrl_msgs::msg::PowerStatus::_leg_b_curr_max_type arg)
  {
    msg_.leg_b_curr_max = std::move(arg);
    return Init_PowerStatus_waist_curr_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_a_curr_max
{
public:
  explicit Init_PowerStatus_leg_a_curr_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_b_curr_max leg_a_curr_max(::bodyctrl_msgs::msg::PowerStatus::_leg_a_curr_max_type arg)
  {
    msg_.leg_a_curr_max = std::move(arg);
    return Init_PowerStatus_leg_b_curr_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_b_curr_max
{
public:
  explicit Init_PowerStatus_arm_b_curr_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_a_curr_max arm_b_curr_max(::bodyctrl_msgs::msg::PowerStatus::_arm_b_curr_max_type arg)
  {
    msg_.arm_b_curr_max = std::move(arg);
    return Init_PowerStatus_leg_a_curr_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_a_curr_max
{
public:
  explicit Init_PowerStatus_arm_a_curr_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_b_curr_max arm_a_curr_max(::bodyctrl_msgs::msg::PowerStatus::_arm_a_curr_max_type arg)
  {
    msg_.arm_a_curr_max = std::move(arg);
    return Init_PowerStatus_arm_b_curr_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_head_curr
{
public:
  explicit Init_PowerStatus_head_curr(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_a_curr_max head_curr(::bodyctrl_msgs::msg::PowerStatus::_head_curr_type arg)
  {
    msg_.head_curr = std::move(arg);
    return Init_PowerStatus_arm_a_curr_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_waist_curr
{
public:
  explicit Init_PowerStatus_waist_curr(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_head_curr waist_curr(::bodyctrl_msgs::msg::PowerStatus::_waist_curr_type arg)
  {
    msg_.waist_curr = std::move(arg);
    return Init_PowerStatus_head_curr(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_b_curr
{
public:
  explicit Init_PowerStatus_leg_b_curr(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_waist_curr leg_b_curr(::bodyctrl_msgs::msg::PowerStatus::_leg_b_curr_type arg)
  {
    msg_.leg_b_curr = std::move(arg);
    return Init_PowerStatus_waist_curr(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_a_curr
{
public:
  explicit Init_PowerStatus_leg_a_curr(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_b_curr leg_a_curr(::bodyctrl_msgs::msg::PowerStatus::_leg_a_curr_type arg)
  {
    msg_.leg_a_curr = std::move(arg);
    return Init_PowerStatus_leg_b_curr(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_b_curr
{
public:
  explicit Init_PowerStatus_arm_b_curr(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_a_curr arm_b_curr(::bodyctrl_msgs::msg::PowerStatus::_arm_b_curr_type arg)
  {
    msg_.arm_b_curr = std::move(arg);
    return Init_PowerStatus_leg_a_curr(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_a_curr
{
public:
  explicit Init_PowerStatus_arm_a_curr(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_b_curr arm_a_curr(::bodyctrl_msgs::msg::PowerStatus::_arm_a_curr_type arg)
  {
    msg_.arm_a_curr = std::move(arg);
    return Init_PowerStatus_arm_b_curr(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_b_temp_min
{
public:
  explicit Init_PowerStatus_leg_b_temp_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_a_curr leg_b_temp_min(::bodyctrl_msgs::msg::PowerStatus::_leg_b_temp_min_type arg)
  {
    msg_.leg_b_temp_min = std::move(arg);
    return Init_PowerStatus_arm_a_curr(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_a_temp_min
{
public:
  explicit Init_PowerStatus_leg_a_temp_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_b_temp_min leg_a_temp_min(::bodyctrl_msgs::msg::PowerStatus::_leg_a_temp_min_type arg)
  {
    msg_.leg_a_temp_min = std::move(arg);
    return Init_PowerStatus_leg_b_temp_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_b_temp_min
{
public:
  explicit Init_PowerStatus_arm_b_temp_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_a_temp_min arm_b_temp_min(::bodyctrl_msgs::msg::PowerStatus::_arm_b_temp_min_type arg)
  {
    msg_.arm_b_temp_min = std::move(arg);
    return Init_PowerStatus_leg_a_temp_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_a_temp_min
{
public:
  explicit Init_PowerStatus_arm_a_temp_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_b_temp_min arm_a_temp_min(::bodyctrl_msgs::msg::PowerStatus::_arm_a_temp_min_type arg)
  {
    msg_.arm_a_temp_min = std::move(arg);
    return Init_PowerStatus_arm_b_temp_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_waist_temp_min
{
public:
  explicit Init_PowerStatus_waist_temp_min(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_a_temp_min waist_temp_min(::bodyctrl_msgs::msg::PowerStatus::_waist_temp_min_type arg)
  {
    msg_.waist_temp_min = std::move(arg);
    return Init_PowerStatus_arm_a_temp_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_b_temp_max
{
public:
  explicit Init_PowerStatus_leg_b_temp_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_waist_temp_min leg_b_temp_max(::bodyctrl_msgs::msg::PowerStatus::_leg_b_temp_max_type arg)
  {
    msg_.leg_b_temp_max = std::move(arg);
    return Init_PowerStatus_waist_temp_min(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_a_temp_max
{
public:
  explicit Init_PowerStatus_leg_a_temp_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_b_temp_max leg_a_temp_max(::bodyctrl_msgs::msg::PowerStatus::_leg_a_temp_max_type arg)
  {
    msg_.leg_a_temp_max = std::move(arg);
    return Init_PowerStatus_leg_b_temp_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_b_temp_max
{
public:
  explicit Init_PowerStatus_arm_b_temp_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_a_temp_max arm_b_temp_max(::bodyctrl_msgs::msg::PowerStatus::_arm_b_temp_max_type arg)
  {
    msg_.arm_b_temp_max = std::move(arg);
    return Init_PowerStatus_leg_a_temp_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_a_temp_max
{
public:
  explicit Init_PowerStatus_arm_a_temp_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_b_temp_max arm_a_temp_max(::bodyctrl_msgs::msg::PowerStatus::_arm_a_temp_max_type arg)
  {
    msg_.arm_a_temp_max = std::move(arg);
    return Init_PowerStatus_arm_b_temp_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_waist_temp_max
{
public:
  explicit Init_PowerStatus_waist_temp_max(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_a_temp_max waist_temp_max(::bodyctrl_msgs::msg::PowerStatus::_waist_temp_max_type arg)
  {
    msg_.waist_temp_max = std::move(arg);
    return Init_PowerStatus_arm_a_temp_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_b_temp
{
public:
  explicit Init_PowerStatus_leg_b_temp(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_waist_temp_max leg_b_temp(::bodyctrl_msgs::msg::PowerStatus::_leg_b_temp_type arg)
  {
    msg_.leg_b_temp = std::move(arg);
    return Init_PowerStatus_waist_temp_max(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_leg_a_temp
{
public:
  explicit Init_PowerStatus_leg_a_temp(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_b_temp leg_a_temp(::bodyctrl_msgs::msg::PowerStatus::_leg_a_temp_type arg)
  {
    msg_.leg_a_temp = std::move(arg);
    return Init_PowerStatus_leg_b_temp(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_b_temp
{
public:
  explicit Init_PowerStatus_arm_b_temp(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_leg_a_temp arm_b_temp(::bodyctrl_msgs::msg::PowerStatus::_arm_b_temp_type arg)
  {
    msg_.arm_b_temp = std::move(arg);
    return Init_PowerStatus_leg_a_temp(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_arm_a_temp
{
public:
  explicit Init_PowerStatus_arm_a_temp(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_b_temp arm_a_temp(::bodyctrl_msgs::msg::PowerStatus::_arm_a_temp_type arg)
  {
    msg_.arm_a_temp = std::move(arg);
    return Init_PowerStatus_arm_b_temp(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_waist_temp
{
public:
  explicit Init_PowerStatus_waist_temp(::bodyctrl_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_arm_a_temp waist_temp(::bodyctrl_msgs::msg::PowerStatus::_waist_temp_type arg)
  {
    msg_.waist_temp = std::move(arg);
    return Init_PowerStatus_arm_a_temp(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_header
{
public:
  Init_PowerStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerStatus_waist_temp header(::bodyctrl_msgs::msg::PowerStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowerStatus_waist_temp(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::PowerStatus>()
{
  return bodyctrl_msgs::msg::builder::Init_PowerStatus_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__BUILDER_HPP_
