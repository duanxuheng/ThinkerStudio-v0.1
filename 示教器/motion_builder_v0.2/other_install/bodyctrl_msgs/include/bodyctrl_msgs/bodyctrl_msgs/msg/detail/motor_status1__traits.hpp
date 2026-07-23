// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatus1.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/motor_status1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatus1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: motortemperature
  {
    out << "motortemperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motortemperature, out);
    out << ", ";
  }

  // member: mostemperature
  {
    out << "mostemperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mostemperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatus1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: motortemperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motortemperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motortemperature, out);
    out << "\n";
  }

  // member: mostemperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mostemperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mostemperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatus1 & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::MotorStatus1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::MotorStatus1 & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::MotorStatus1>()
{
  return "bodyctrl_msgs::msg::MotorStatus1";
}

template<>
inline const char * name<bodyctrl_msgs::msg::MotorStatus1>()
{
  return "bodyctrl_msgs/msg/MotorStatus1";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::MotorStatus1>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::MotorStatus1>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::msg::MotorStatus1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS1__TRAITS_HPP_
