// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lyre_msgs:msg/AsrKeyword.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__TRAITS_HPP_
#define LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lyre_msgs/msg/detail/asr_keyword__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lyre_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AsrKeyword & msg,
  std::ostream & out)
{
  out << "{";
  // member: keyword
  {
    out << "keyword: ";
    rosidl_generator_traits::value_to_yaml(msg.keyword, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AsrKeyword & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: keyword
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keyword: ";
    rosidl_generator_traits::value_to_yaml(msg.keyword, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AsrKeyword & msg, bool use_flow_style = false)
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

}  // namespace lyre_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lyre_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lyre_msgs::msg::AsrKeyword & msg,
  std::ostream & out, size_t indentation = 0)
{
  lyre_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lyre_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lyre_msgs::msg::AsrKeyword & msg)
{
  return lyre_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lyre_msgs::msg::AsrKeyword>()
{
  return "lyre_msgs::msg::AsrKeyword";
}

template<>
inline const char * name<lyre_msgs::msg::AsrKeyword>()
{
  return "lyre_msgs/msg/AsrKeyword";
}

template<>
struct has_fixed_size<lyre_msgs::msg::AsrKeyword>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lyre_msgs::msg::AsrKeyword>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lyre_msgs::msg::AsrKeyword>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_KEYWORD__TRAITS_HPP_
