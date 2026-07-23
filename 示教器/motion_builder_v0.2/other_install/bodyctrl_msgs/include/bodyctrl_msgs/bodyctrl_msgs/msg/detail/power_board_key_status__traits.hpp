// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/PowerBoardKeyStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/power_board_key_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'is_estop'
// Member 'is_remote_estop'
// Member 'is_power_on'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerBoardKeyStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: work_time
  {
    out << "work_time: ";
    rosidl_generator_traits::value_to_yaml(msg.work_time, out);
    out << ", ";
  }

  // member: is_estop
  {
    out << "is_estop: ";
    to_flow_style_yaml(msg.is_estop, out);
    out << ", ";
  }

  // member: is_remote_estop
  {
    out << "is_remote_estop: ";
    to_flow_style_yaml(msg.is_remote_estop, out);
    out << ", ";
  }

  // member: is_power_on
  {
    out << "is_power_on: ";
    to_flow_style_yaml(msg.is_power_on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerBoardKeyStatus & msg,
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

  // member: work_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "work_time: ";
    rosidl_generator_traits::value_to_yaml(msg.work_time, out);
    out << "\n";
  }

  // member: is_estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_estop:\n";
    to_block_style_yaml(msg.is_estop, out, indentation + 2);
  }

  // member: is_remote_estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_remote_estop:\n";
    to_block_style_yaml(msg.is_remote_estop, out, indentation + 2);
  }

  // member: is_power_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_power_on:\n";
    to_block_style_yaml(msg.is_power_on, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerBoardKeyStatus & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::PowerBoardKeyStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::PowerBoardKeyStatus & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::PowerBoardKeyStatus>()
{
  return "bodyctrl_msgs::msg::PowerBoardKeyStatus";
}

template<>
inline const char * name<bodyctrl_msgs::msg::PowerBoardKeyStatus>()
{
  return "bodyctrl_msgs/msg/PowerBoardKeyStatus";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::PowerBoardKeyStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::PowerBoardKeyStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<bodyctrl_msgs::msg::PowerBoardKeyStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__TRAITS_HPP_
