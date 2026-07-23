// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrlItem.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetTsHandCtrlItem & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << ", ";
  }

  // member: start_angle
  {
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << ", ";
  }

  // member: max_angle
  {
    out << "max_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTsHandCtrlItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }

  // member: start_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << "\n";
  }

  // member: max_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTsHandCtrlItem & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::SetTsHandCtrlItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::SetTsHandCtrlItem & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::SetTsHandCtrlItem>()
{
  return "bodyctrl_msgs::msg::SetTsHandCtrlItem";
}

template<>
inline const char * name<bodyctrl_msgs::msg::SetTsHandCtrlItem>()
{
  return "bodyctrl_msgs/msg/SetTsHandCtrlItem";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::SetTsHandCtrlItem>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::SetTsHandCtrlItem>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::msg::SetTsHandCtrlItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__TRAITS_HPP_
