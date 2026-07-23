// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/CmdSetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_SPEED__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/cmd_set_motor_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cmds'
#include "bodyctrl_msgs/msg/detail/set_motor_speed__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CmdSetMotorSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cmds
  {
    if (msg.cmds.size() == 0) {
      out << "cmds: []";
    } else {
      out << "cmds: [";
      size_t pending_items = msg.cmds.size();
      for (auto item : msg.cmds) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CmdSetMotorSpeed & msg,
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

  // member: cmds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cmds.size() == 0) {
      out << "cmds: []\n";
    } else {
      out << "cmds:\n";
      for (auto item : msg.cmds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CmdSetMotorSpeed & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::CmdSetMotorSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::CmdSetMotorSpeed & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::CmdSetMotorSpeed>()
{
  return "bodyctrl_msgs::msg::CmdSetMotorSpeed";
}

template<>
inline const char * name<bodyctrl_msgs::msg::CmdSetMotorSpeed>()
{
  return "bodyctrl_msgs/msg/CmdSetMotorSpeed";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::CmdSetMotorSpeed>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::CmdSetMotorSpeed>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::msg::CmdSetMotorSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_SPEED__TRAITS_HPP_
