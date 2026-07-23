// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/SbusData.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/sbus_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbusData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: key_event_new
  {
    out << "key_event_new: ";
    rosidl_generator_traits::value_to_yaml(msg.key_event_new, out);
    out << ", ";
  }

  // member: key_event_old
  {
    out << "key_event_old: ";
    rosidl_generator_traits::value_to_yaml(msg.key_event_old, out);
    out << ", ";
  }

  // member: button_a
  {
    out << "button_a: ";
    rosidl_generator_traits::value_to_yaml(msg.button_a, out);
    out << ", ";
  }

  // member: button_b
  {
    out << "button_b: ";
    rosidl_generator_traits::value_to_yaml(msg.button_b, out);
    out << ", ";
  }

  // member: button_c
  {
    out << "button_c: ";
    rosidl_generator_traits::value_to_yaml(msg.button_c, out);
    out << ", ";
  }

  // member: button_d
  {
    out << "button_d: ";
    rosidl_generator_traits::value_to_yaml(msg.button_d, out);
    out << ", ";
  }

  // member: button_e
  {
    out << "button_e: ";
    rosidl_generator_traits::value_to_yaml(msg.button_e, out);
    out << ", ";
  }

  // member: button_f
  {
    out << "button_f: ";
    rosidl_generator_traits::value_to_yaml(msg.button_f, out);
    out << ", ";
  }

  // member: button_g
  {
    out << "button_g: ";
    rosidl_generator_traits::value_to_yaml(msg.button_g, out);
    out << ", ";
  }

  // member: button_h
  {
    out << "button_h: ";
    rosidl_generator_traits::value_to_yaml(msg.button_h, out);
    out << ", ";
  }

  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbusData & msg,
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

  // member: key_event_new
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_event_new: ";
    rosidl_generator_traits::value_to_yaml(msg.key_event_new, out);
    out << "\n";
  }

  // member: key_event_old
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_event_old: ";
    rosidl_generator_traits::value_to_yaml(msg.key_event_old, out);
    out << "\n";
  }

  // member: button_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_a: ";
    rosidl_generator_traits::value_to_yaml(msg.button_a, out);
    out << "\n";
  }

  // member: button_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_b: ";
    rosidl_generator_traits::value_to_yaml(msg.button_b, out);
    out << "\n";
  }

  // member: button_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_c: ";
    rosidl_generator_traits::value_to_yaml(msg.button_c, out);
    out << "\n";
  }

  // member: button_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_d: ";
    rosidl_generator_traits::value_to_yaml(msg.button_d, out);
    out << "\n";
  }

  // member: button_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_e: ";
    rosidl_generator_traits::value_to_yaml(msg.button_e, out);
    out << "\n";
  }

  // member: button_f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_f: ";
    rosidl_generator_traits::value_to_yaml(msg.button_f, out);
    out << "\n";
  }

  // member: button_g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_g: ";
    rosidl_generator_traits::value_to_yaml(msg.button_g, out);
    out << "\n";
  }

  // member: button_h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_h: ";
    rosidl_generator_traits::value_to_yaml(msg.button_h, out);
    out << "\n";
  }

  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbusData & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::SbusData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::SbusData & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::SbusData>()
{
  return "bodyctrl_msgs::msg::SbusData";
}

template<>
inline const char * name<bodyctrl_msgs::msg::SbusData>()
{
  return "bodyctrl_msgs/msg/SbusData";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::SbusData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::SbusData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<bodyctrl_msgs::msg::SbusData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SBUS_DATA__TRAITS_HPP_
