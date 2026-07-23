// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/PowerStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/power_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: waist_temp
  {
    out << "waist_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_temp, out);
    out << ", ";
  }

  // member: arm_a_temp
  {
    out << "arm_a_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_temp, out);
    out << ", ";
  }

  // member: arm_b_temp
  {
    out << "arm_b_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_temp, out);
    out << ", ";
  }

  // member: leg_a_temp
  {
    out << "leg_a_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_temp, out);
    out << ", ";
  }

  // member: leg_b_temp
  {
    out << "leg_b_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_temp, out);
    out << ", ";
  }

  // member: waist_temp_max
  {
    out << "waist_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_temp_max, out);
    out << ", ";
  }

  // member: arm_a_temp_max
  {
    out << "arm_a_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_temp_max, out);
    out << ", ";
  }

  // member: arm_b_temp_max
  {
    out << "arm_b_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_temp_max, out);
    out << ", ";
  }

  // member: leg_a_temp_max
  {
    out << "leg_a_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_temp_max, out);
    out << ", ";
  }

  // member: leg_b_temp_max
  {
    out << "leg_b_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_temp_max, out);
    out << ", ";
  }

  // member: waist_temp_min
  {
    out << "waist_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_temp_min, out);
    out << ", ";
  }

  // member: arm_a_temp_min
  {
    out << "arm_a_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_temp_min, out);
    out << ", ";
  }

  // member: arm_b_temp_min
  {
    out << "arm_b_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_temp_min, out);
    out << ", ";
  }

  // member: leg_a_temp_min
  {
    out << "leg_a_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_temp_min, out);
    out << ", ";
  }

  // member: leg_b_temp_min
  {
    out << "leg_b_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_temp_min, out);
    out << ", ";
  }

  // member: arm_a_curr
  {
    out << "arm_a_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_curr, out);
    out << ", ";
  }

  // member: arm_b_curr
  {
    out << "arm_b_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_curr, out);
    out << ", ";
  }

  // member: leg_a_curr
  {
    out << "leg_a_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_curr, out);
    out << ", ";
  }

  // member: leg_b_curr
  {
    out << "leg_b_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_curr, out);
    out << ", ";
  }

  // member: waist_curr
  {
    out << "waist_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_curr, out);
    out << ", ";
  }

  // member: head_curr
  {
    out << "head_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.head_curr, out);
    out << ", ";
  }

  // member: arm_a_curr_max
  {
    out << "arm_a_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_curr_max, out);
    out << ", ";
  }

  // member: arm_b_curr_max
  {
    out << "arm_b_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_curr_max, out);
    out << ", ";
  }

  // member: leg_a_curr_max
  {
    out << "leg_a_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_curr_max, out);
    out << ", ";
  }

  // member: leg_b_curr_max
  {
    out << "leg_b_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_curr_max, out);
    out << ", ";
  }

  // member: waist_curr_max
  {
    out << "waist_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_curr_max, out);
    out << ", ";
  }

  // member: head_curr_max
  {
    out << "head_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.head_curr_max, out);
    out << ", ";
  }

  // member: arm_a_curr_min
  {
    out << "arm_a_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_curr_min, out);
    out << ", ";
  }

  // member: arm_b_curr_min
  {
    out << "arm_b_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_curr_min, out);
    out << ", ";
  }

  // member: leg_a_curr_min
  {
    out << "leg_a_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_curr_min, out);
    out << ", ";
  }

  // member: leg_b_curr_min
  {
    out << "leg_b_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_curr_min, out);
    out << ", ";
  }

  // member: waist_curr_min
  {
    out << "waist_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_curr_min, out);
    out << ", ";
  }

  // member: head_curr_min
  {
    out << "head_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.head_curr_min, out);
    out << ", ";
  }

  // member: arm_a_volt
  {
    out << "arm_a_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_volt, out);
    out << ", ";
  }

  // member: arm_b_volt
  {
    out << "arm_b_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_volt, out);
    out << ", ";
  }

  // member: leg_a_volt
  {
    out << "leg_a_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_volt, out);
    out << ", ";
  }

  // member: leg_b_volt
  {
    out << "leg_b_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_volt, out);
    out << ", ";
  }

  // member: waist_volt
  {
    out << "waist_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_volt, out);
    out << ", ";
  }

  // member: bus_volt
  {
    out << "bus_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_volt, out);
    out << ", ";
  }

  // member: arm_a_volt_max
  {
    out << "arm_a_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_volt_max, out);
    out << ", ";
  }

  // member: arm_b_volt_max
  {
    out << "arm_b_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_volt_max, out);
    out << ", ";
  }

  // member: leg_a_volt_max
  {
    out << "leg_a_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_volt_max, out);
    out << ", ";
  }

  // member: leg_b_volt_max
  {
    out << "leg_b_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_volt_max, out);
    out << ", ";
  }

  // member: waist_volt_max
  {
    out << "waist_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_volt_max, out);
    out << ", ";
  }

  // member: bus_volt_max
  {
    out << "bus_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_volt_max, out);
    out << ", ";
  }

  // member: arm_a_volt_min
  {
    out << "arm_a_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_volt_min, out);
    out << ", ";
  }

  // member: arm_b_volt_min
  {
    out << "arm_b_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_volt_min, out);
    out << ", ";
  }

  // member: leg_a_volt_min
  {
    out << "leg_a_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_volt_min, out);
    out << ", ";
  }

  // member: leg_b_volt_min
  {
    out << "leg_b_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_volt_min, out);
    out << ", ";
  }

  // member: waist_volt_min
  {
    out << "waist_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_volt_min, out);
    out << ", ";
  }

  // member: bus_volt_min
  {
    out << "bus_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_volt_min, out);
    out << ", ";
  }

  // member: software_version
  {
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << ", ";
  }

  // member: hardware_version
  {
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: battery_current
  {
    out << "battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_current, out);
    out << ", ";
  }

  // member: battery_power
  {
    out << "battery_power: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerStatus & msg,
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

  // member: waist_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_temp, out);
    out << "\n";
  }

  // member: arm_a_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_a_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_temp, out);
    out << "\n";
  }

  // member: arm_b_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_b_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_temp, out);
    out << "\n";
  }

  // member: leg_a_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_a_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_temp, out);
    out << "\n";
  }

  // member: leg_b_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_b_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_temp, out);
    out << "\n";
  }

  // member: waist_temp_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_temp_max, out);
    out << "\n";
  }

  // member: arm_a_temp_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_a_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_temp_max, out);
    out << "\n";
  }

  // member: arm_b_temp_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_b_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_temp_max, out);
    out << "\n";
  }

  // member: leg_a_temp_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_a_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_temp_max, out);
    out << "\n";
  }

  // member: leg_b_temp_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_b_temp_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_temp_max, out);
    out << "\n";
  }

  // member: waist_temp_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_temp_min, out);
    out << "\n";
  }

  // member: arm_a_temp_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_a_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_temp_min, out);
    out << "\n";
  }

  // member: arm_b_temp_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_b_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_temp_min, out);
    out << "\n";
  }

  // member: leg_a_temp_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_a_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_temp_min, out);
    out << "\n";
  }

  // member: leg_b_temp_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_b_temp_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_temp_min, out);
    out << "\n";
  }

  // member: arm_a_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_a_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_curr, out);
    out << "\n";
  }

  // member: arm_b_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_b_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_curr, out);
    out << "\n";
  }

  // member: leg_a_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_a_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_curr, out);
    out << "\n";
  }

  // member: leg_b_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_b_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_curr, out);
    out << "\n";
  }

  // member: waist_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_curr, out);
    out << "\n";
  }

  // member: head_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_curr: ";
    rosidl_generator_traits::value_to_yaml(msg.head_curr, out);
    out << "\n";
  }

  // member: arm_a_curr_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_a_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_curr_max, out);
    out << "\n";
  }

  // member: arm_b_curr_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_b_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_curr_max, out);
    out << "\n";
  }

  // member: leg_a_curr_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_a_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_curr_max, out);
    out << "\n";
  }

  // member: leg_b_curr_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_b_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_curr_max, out);
    out << "\n";
  }

  // member: waist_curr_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_curr_max, out);
    out << "\n";
  }

  // member: head_curr_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_curr_max: ";
    rosidl_generator_traits::value_to_yaml(msg.head_curr_max, out);
    out << "\n";
  }

  // member: arm_a_curr_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_a_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_curr_min, out);
    out << "\n";
  }

  // member: arm_b_curr_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_b_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_curr_min, out);
    out << "\n";
  }

  // member: leg_a_curr_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_a_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_curr_min, out);
    out << "\n";
  }

  // member: leg_b_curr_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_b_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_curr_min, out);
    out << "\n";
  }

  // member: waist_curr_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_curr_min, out);
    out << "\n";
  }

  // member: head_curr_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_curr_min: ";
    rosidl_generator_traits::value_to_yaml(msg.head_curr_min, out);
    out << "\n";
  }

  // member: arm_a_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_a_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_volt, out);
    out << "\n";
  }

  // member: arm_b_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_b_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_volt, out);
    out << "\n";
  }

  // member: leg_a_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_a_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_volt, out);
    out << "\n";
  }

  // member: leg_b_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_b_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_volt, out);
    out << "\n";
  }

  // member: waist_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_volt, out);
    out << "\n";
  }

  // member: bus_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_volt, out);
    out << "\n";
  }

  // member: arm_a_volt_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_a_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_volt_max, out);
    out << "\n";
  }

  // member: arm_b_volt_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_b_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_volt_max, out);
    out << "\n";
  }

  // member: leg_a_volt_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_a_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_volt_max, out);
    out << "\n";
  }

  // member: leg_b_volt_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_b_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_volt_max, out);
    out << "\n";
  }

  // member: waist_volt_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_volt_max, out);
    out << "\n";
  }

  // member: bus_volt_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_volt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_volt_max, out);
    out << "\n";
  }

  // member: arm_a_volt_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_a_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_a_volt_min, out);
    out << "\n";
  }

  // member: arm_b_volt_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_b_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_b_volt_min, out);
    out << "\n";
  }

  // member: leg_a_volt_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_a_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_a_volt_min, out);
    out << "\n";
  }

  // member: leg_b_volt_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_b_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_b_volt_min, out);
    out << "\n";
  }

  // member: waist_volt_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_volt_min, out);
    out << "\n";
  }

  // member: bus_volt_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_volt_min: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_volt_min, out);
    out << "\n";
  }

  // member: software_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << "\n";
  }

  // member: hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_version, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: battery_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_current, out);
    out << "\n";
  }

  // member: battery_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_power: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerStatus & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::PowerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::PowerStatus & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::PowerStatus>()
{
  return "bodyctrl_msgs::msg::PowerStatus";
}

template<>
inline const char * name<bodyctrl_msgs::msg::PowerStatus>()
{
  return "bodyctrl_msgs/msg/PowerStatus";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::PowerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::PowerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::msg::PowerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__TRAITS_HPP_
