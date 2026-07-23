// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/PowerBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/power_battery_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerBatteryStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: battery_installed
  {
    out << "battery_installed: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_installed, out);
    out << ", ";
  }

  // member: battery_working
  {
    out << "battery_working: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_working, out);
    out << ", ";
  }

  // member: master_battery_voltage
  {
    out << "master_battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.master_battery_voltage, out);
    out << ", ";
  }

  // member: master_battery_current
  {
    out << "master_battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.master_battery_current, out);
    out << ", ";
  }

  // member: master_battery_power
  {
    out << "master_battery_power: ";
    rosidl_generator_traits::value_to_yaml(msg.master_battery_power, out);
    out << ", ";
  }

  // member: little_battery_voltage
  {
    out << "little_battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.little_battery_voltage, out);
    out << ", ";
  }

  // member: little_battery_current
  {
    out << "little_battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.little_battery_current, out);
    out << ", ";
  }

  // member: little_battery_power
  {
    out << "little_battery_power: ";
    rosidl_generator_traits::value_to_yaml(msg.little_battery_power, out);
    out << ", ";
  }

  // member: pg12a
  {
    out << "pg12a: ";
    rosidl_generator_traits::value_to_yaml(msg.pg12a, out);
    out << ", ";
  }

  // member: pg12b
  {
    out << "pg12b: ";
    rosidl_generator_traits::value_to_yaml(msg.pg12b, out);
    out << ", ";
  }

  // member: pg12c
  {
    out << "pg12c: ";
    rosidl_generator_traits::value_to_yaml(msg.pg12c, out);
    out << ", ";
  }

  // member: pg12d
  {
    out << "pg12d: ";
    rosidl_generator_traits::value_to_yaml(msg.pg12d, out);
    out << ", ";
  }

  // member: pg5cd
  {
    out << "pg5cd: ";
    rosidl_generator_traits::value_to_yaml(msg.pg5cd, out);
    out << ", ";
  }

  // member: pg5ab
  {
    out << "pg5ab: ";
    rosidl_generator_traits::value_to_yaml(msg.pg5ab, out);
    out << ", ";
  }

  // member: pgrdc2
  {
    out << "pgrdc2: ";
    rosidl_generator_traits::value_to_yaml(msg.pgrdc2, out);
    out << ", ";
  }

  // member: pgrdc1
  {
    out << "pgrdc1: ";
    rosidl_generator_traits::value_to_yaml(msg.pgrdc1, out);
    out << ", ";
  }

  // member: pgheader
  {
    out << "pgheader: ";
    rosidl_generator_traits::value_to_yaml(msg.pgheader, out);
    out << ", ";
  }

  // member: pgbutton2
  {
    out << "pgbutton2: ";
    rosidl_generator_traits::value_to_yaml(msg.pgbutton2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerBatteryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: battery_installed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_installed: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_installed, out);
    out << "\n";
  }

  // member: battery_working
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_working: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_working, out);
    out << "\n";
  }

  // member: master_battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "master_battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.master_battery_voltage, out);
    out << "\n";
  }

  // member: master_battery_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "master_battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.master_battery_current, out);
    out << "\n";
  }

  // member: master_battery_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "master_battery_power: ";
    rosidl_generator_traits::value_to_yaml(msg.master_battery_power, out);
    out << "\n";
  }

  // member: little_battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "little_battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.little_battery_voltage, out);
    out << "\n";
  }

  // member: little_battery_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "little_battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.little_battery_current, out);
    out << "\n";
  }

  // member: little_battery_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "little_battery_power: ";
    rosidl_generator_traits::value_to_yaml(msg.little_battery_power, out);
    out << "\n";
  }

  // member: pg12a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pg12a: ";
    rosidl_generator_traits::value_to_yaml(msg.pg12a, out);
    out << "\n";
  }

  // member: pg12b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pg12b: ";
    rosidl_generator_traits::value_to_yaml(msg.pg12b, out);
    out << "\n";
  }

  // member: pg12c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pg12c: ";
    rosidl_generator_traits::value_to_yaml(msg.pg12c, out);
    out << "\n";
  }

  // member: pg12d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pg12d: ";
    rosidl_generator_traits::value_to_yaml(msg.pg12d, out);
    out << "\n";
  }

  // member: pg5cd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pg5cd: ";
    rosidl_generator_traits::value_to_yaml(msg.pg5cd, out);
    out << "\n";
  }

  // member: pg5ab
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pg5ab: ";
    rosidl_generator_traits::value_to_yaml(msg.pg5ab, out);
    out << "\n";
  }

  // member: pgrdc2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pgrdc2: ";
    rosidl_generator_traits::value_to_yaml(msg.pgrdc2, out);
    out << "\n";
  }

  // member: pgrdc1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pgrdc1: ";
    rosidl_generator_traits::value_to_yaml(msg.pgrdc1, out);
    out << "\n";
  }

  // member: pgheader
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pgheader: ";
    rosidl_generator_traits::value_to_yaml(msg.pgheader, out);
    out << "\n";
  }

  // member: pgbutton2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pgbutton2: ";
    rosidl_generator_traits::value_to_yaml(msg.pgbutton2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerBatteryStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bodyctrl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bodyctrl_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bodyctrl_msgs::msg::PowerBatteryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::PowerBatteryStatus & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::PowerBatteryStatus>()
{
  return "bodyctrl_msgs::msg::PowerBatteryStatus";
}

template<>
inline const char * name<bodyctrl_msgs::msg::PowerBatteryStatus>()
{
  return "bodyctrl_msgs/msg/PowerBatteryStatus";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::PowerBatteryStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::PowerBatteryStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<bodyctrl_msgs::msg::PowerBatteryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__TRAITS_HPP_
