// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/PowerBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/power_battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerBatteryStatus_pgbutton2
{
public:
  explicit Init_PowerBatteryStatus_pgbutton2(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::PowerBatteryStatus pgbutton2(::bodyctrl_msgs::msg::PowerBatteryStatus::_pgbutton2_type arg)
  {
    msg_.pgbutton2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_pgheader
{
public:
  explicit Init_PowerBatteryStatus_pgheader(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pgbutton2 pgheader(::bodyctrl_msgs::msg::PowerBatteryStatus::_pgheader_type arg)
  {
    msg_.pgheader = std::move(arg);
    return Init_PowerBatteryStatus_pgbutton2(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_pgrdc1
{
public:
  explicit Init_PowerBatteryStatus_pgrdc1(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pgheader pgrdc1(::bodyctrl_msgs::msg::PowerBatteryStatus::_pgrdc1_type arg)
  {
    msg_.pgrdc1 = std::move(arg);
    return Init_PowerBatteryStatus_pgheader(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_pgrdc2
{
public:
  explicit Init_PowerBatteryStatus_pgrdc2(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pgrdc1 pgrdc2(::bodyctrl_msgs::msg::PowerBatteryStatus::_pgrdc2_type arg)
  {
    msg_.pgrdc2 = std::move(arg);
    return Init_PowerBatteryStatus_pgrdc1(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_pg5ab
{
public:
  explicit Init_PowerBatteryStatus_pg5ab(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pgrdc2 pg5ab(::bodyctrl_msgs::msg::PowerBatteryStatus::_pg5ab_type arg)
  {
    msg_.pg5ab = std::move(arg);
    return Init_PowerBatteryStatus_pgrdc2(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_pg5cd
{
public:
  explicit Init_PowerBatteryStatus_pg5cd(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pg5ab pg5cd(::bodyctrl_msgs::msg::PowerBatteryStatus::_pg5cd_type arg)
  {
    msg_.pg5cd = std::move(arg);
    return Init_PowerBatteryStatus_pg5ab(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_pg12d
{
public:
  explicit Init_PowerBatteryStatus_pg12d(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pg5cd pg12d(::bodyctrl_msgs::msg::PowerBatteryStatus::_pg12d_type arg)
  {
    msg_.pg12d = std::move(arg);
    return Init_PowerBatteryStatus_pg5cd(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_pg12c
{
public:
  explicit Init_PowerBatteryStatus_pg12c(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pg12d pg12c(::bodyctrl_msgs::msg::PowerBatteryStatus::_pg12c_type arg)
  {
    msg_.pg12c = std::move(arg);
    return Init_PowerBatteryStatus_pg12d(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_pg12b
{
public:
  explicit Init_PowerBatteryStatus_pg12b(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pg12c pg12b(::bodyctrl_msgs::msg::PowerBatteryStatus::_pg12b_type arg)
  {
    msg_.pg12b = std::move(arg);
    return Init_PowerBatteryStatus_pg12c(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_pg12a
{
public:
  explicit Init_PowerBatteryStatus_pg12a(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pg12b pg12a(::bodyctrl_msgs::msg::PowerBatteryStatus::_pg12a_type arg)
  {
    msg_.pg12a = std::move(arg);
    return Init_PowerBatteryStatus_pg12b(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_little_battery_power
{
public:
  explicit Init_PowerBatteryStatus_little_battery_power(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_pg12a little_battery_power(::bodyctrl_msgs::msg::PowerBatteryStatus::_little_battery_power_type arg)
  {
    msg_.little_battery_power = std::move(arg);
    return Init_PowerBatteryStatus_pg12a(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_little_battery_current
{
public:
  explicit Init_PowerBatteryStatus_little_battery_current(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_little_battery_power little_battery_current(::bodyctrl_msgs::msg::PowerBatteryStatus::_little_battery_current_type arg)
  {
    msg_.little_battery_current = std::move(arg);
    return Init_PowerBatteryStatus_little_battery_power(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_little_battery_voltage
{
public:
  explicit Init_PowerBatteryStatus_little_battery_voltage(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_little_battery_current little_battery_voltage(::bodyctrl_msgs::msg::PowerBatteryStatus::_little_battery_voltage_type arg)
  {
    msg_.little_battery_voltage = std::move(arg);
    return Init_PowerBatteryStatus_little_battery_current(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_master_battery_power
{
public:
  explicit Init_PowerBatteryStatus_master_battery_power(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_little_battery_voltage master_battery_power(::bodyctrl_msgs::msg::PowerBatteryStatus::_master_battery_power_type arg)
  {
    msg_.master_battery_power = std::move(arg);
    return Init_PowerBatteryStatus_little_battery_voltage(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_master_battery_current
{
public:
  explicit Init_PowerBatteryStatus_master_battery_current(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_master_battery_power master_battery_current(::bodyctrl_msgs::msg::PowerBatteryStatus::_master_battery_current_type arg)
  {
    msg_.master_battery_current = std::move(arg);
    return Init_PowerBatteryStatus_master_battery_power(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_master_battery_voltage
{
public:
  explicit Init_PowerBatteryStatus_master_battery_voltage(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_master_battery_current master_battery_voltage(::bodyctrl_msgs::msg::PowerBatteryStatus::_master_battery_voltage_type arg)
  {
    msg_.master_battery_voltage = std::move(arg);
    return Init_PowerBatteryStatus_master_battery_current(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_battery_working
{
public:
  explicit Init_PowerBatteryStatus_battery_working(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_master_battery_voltage battery_working(::bodyctrl_msgs::msg::PowerBatteryStatus::_battery_working_type arg)
  {
    msg_.battery_working = std::move(arg);
    return Init_PowerBatteryStatus_master_battery_voltage(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_battery_installed
{
public:
  explicit Init_PowerBatteryStatus_battery_installed(::bodyctrl_msgs::msg::PowerBatteryStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBatteryStatus_battery_working battery_installed(::bodyctrl_msgs::msg::PowerBatteryStatus::_battery_installed_type arg)
  {
    msg_.battery_installed = std::move(arg);
    return Init_PowerBatteryStatus_battery_working(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

class Init_PowerBatteryStatus_header
{
public:
  Init_PowerBatteryStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerBatteryStatus_battery_installed header(::bodyctrl_msgs::msg::PowerBatteryStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowerBatteryStatus_battery_installed(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::PowerBatteryStatus>()
{
  return bodyctrl_msgs::msg::builder::Init_PowerBatteryStatus_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__BUILDER_HPP_
