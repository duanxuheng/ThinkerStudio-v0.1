// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/AlarmArray.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__ALARM_ARRAY__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__ALARM_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/alarm_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'alarm'
#include "bodyctrl_msgs/msg/detail/alarm__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AlarmArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: alarm
  {
    if (msg.alarm.size() == 0) {
      out << "alarm: []";
    } else {
      out << "alarm: [";
      size_t pending_items = msg.alarm.size();
      for (auto item : msg.alarm) {
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
  const AlarmArray & msg,
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

  // member: alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alarm.size() == 0) {
      out << "alarm: []\n";
    } else {
      out << "alarm:\n";
      for (auto item : msg.alarm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlarmArray & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::AlarmArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::AlarmArray & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::AlarmArray>()
{
  return "bodyctrl_msgs::msg::AlarmArray";
}

template<>
inline const char * name<bodyctrl_msgs::msg::AlarmArray>()
{
  return "bodyctrl_msgs/msg/AlarmArray";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::AlarmArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::AlarmArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::msg::AlarmArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__ALARM_ARRAY__TRAITS_HPP_
