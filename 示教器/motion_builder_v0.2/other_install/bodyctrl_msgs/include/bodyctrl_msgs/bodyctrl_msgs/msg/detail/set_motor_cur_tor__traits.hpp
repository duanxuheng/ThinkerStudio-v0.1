// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/SetMotorCurTor.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/set_motor_cur_tor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetMotorCurTor & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: cur_tor
  {
    out << "cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_tor, out);
    out << ", ";
  }

  // member: ctrl_status
  {
    out << "ctrl_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMotorCurTor & msg,
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

  // member: cur_tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_tor: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_tor, out);
    out << "\n";
  }

  // member: ctrl_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMotorCurTor & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::SetMotorCurTor & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::SetMotorCurTor & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::SetMotorCurTor>()
{
  return "bodyctrl_msgs::msg::SetMotorCurTor";
}

template<>
inline const char * name<bodyctrl_msgs::msg::SetMotorCurTor>()
{
  return "bodyctrl_msgs/msg/SetMotorCurTor";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::SetMotorCurTor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::SetMotorCurTor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::msg::SetMotorCurTor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_CUR_TOR__TRAITS_HPP_
