// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatusMsg2.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/motor_status_msg2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'name'
#include "std_msgs/msg/detail/int32_multi_array__traits.hpp"
// Member 'pos'
// Member 'speed'
// Member 'current'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatusMsg2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    to_flow_style_yaml(msg.name, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    to_flow_style_yaml(msg.speed, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    to_flow_style_yaml(msg.current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatusMsg2 & msg,
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

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name:\n";
    to_block_style_yaml(msg.name, out, indentation + 2);
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed:\n";
    to_block_style_yaml(msg.speed, out, indentation + 2);
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current:\n";
    to_block_style_yaml(msg.current, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatusMsg2 & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::MotorStatusMsg2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::MotorStatusMsg2 & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::MotorStatusMsg2>()
{
  return "bodyctrl_msgs::msg::MotorStatusMsg2";
}

template<>
inline const char * name<bodyctrl_msgs::msg::MotorStatusMsg2>()
{
  return "bodyctrl_msgs/msg/MotorStatusMsg2";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::MotorStatusMsg2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::Int32MultiArray>::value> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::MotorStatusMsg2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::Int32MultiArray>::value> {};

template<>
struct is_message<bodyctrl_msgs::msg::MotorStatusMsg2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG2__TRAITS_HPP_
