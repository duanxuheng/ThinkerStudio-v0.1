// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/SetTsHandPosition.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/set_ts_hand_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetTsHandPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: rotation_angle
  {
    out << "rotation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_angle, out);
    out << ", ";
  }

  // member: bend_angle
  {
    if (msg.bend_angle.size() == 0) {
      out << "bend_angle: []";
    } else {
      out << "bend_angle: [";
      size_t pending_items = msg.bend_angle.size();
      for (auto item : msg.bend_angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SetTsHandPosition & msg,
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

  // member: rotation_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_angle, out);
    out << "\n";
  }

  // member: bend_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bend_angle.size() == 0) {
      out << "bend_angle: []\n";
    } else {
      out << "bend_angle:\n";
      for (auto item : msg.bend_angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTsHandPosition & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::SetTsHandPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::SetTsHandPosition & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::SetTsHandPosition>()
{
  return "bodyctrl_msgs::msg::SetTsHandPosition";
}

template<>
inline const char * name<bodyctrl_msgs::msg::SetTsHandPosition>()
{
  return "bodyctrl_msgs/msg/SetTsHandPosition";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::SetTsHandPosition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::SetTsHandPosition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::msg::SetTsHandPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_POSITION__TRAITS_HPP_
