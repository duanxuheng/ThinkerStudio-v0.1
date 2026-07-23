// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/Exception.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/exception__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Exception & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: desc
  {
    out << "desc: ";
    rosidl_generator_traits::value_to_yaml(msg.desc, out);
    out << ", ";
  }

  // member: nodename
  {
    out << "nodename: ";
    rosidl_generator_traits::value_to_yaml(msg.nodename, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Exception & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: desc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desc: ";
    rosidl_generator_traits::value_to_yaml(msg.desc, out);
    out << "\n";
  }

  // member: nodename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodename: ";
    rosidl_generator_traits::value_to_yaml(msg.nodename, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Exception & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::Exception & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::Exception & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::Exception>()
{
  return "bodyctrl_msgs::msg::Exception";
}

template<>
inline const char * name<bodyctrl_msgs::msg::Exception>()
{
  return "bodyctrl_msgs/msg/Exception";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::Exception>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::Exception>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::msg::Exception>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__EXCEPTION__TRAITS_HPP_
