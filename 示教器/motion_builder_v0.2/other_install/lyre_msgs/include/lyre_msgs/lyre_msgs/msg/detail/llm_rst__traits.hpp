// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lyre_msgs:msg/LlmRst.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__LLM_RST__TRAITS_HPP_
#define LYRE_MSGS__MSG__DETAIL__LLM_RST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lyre_msgs/msg/detail/llm_rst__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lyre_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LlmRst & msg,
  std::ostream & out)
{
  out << "{";
  // member: sid
  {
    out << "sid: ";
    rosidl_generator_traits::value_to_yaml(msg.sid, out);
    out << ", ";
  }

  // member: seq
  {
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << ", ";
  }

  // member: last
  {
    out << "last: ";
    rosidl_generator_traits::value_to_yaml(msg.last, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LlmRst & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sid: ";
    rosidl_generator_traits::value_to_yaml(msg.sid, out);
    out << "\n";
  }

  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << "\n";
  }

  // member: last
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last: ";
    rosidl_generator_traits::value_to_yaml(msg.last, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LlmRst & msg, bool use_flow_style = false)
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
  const lyre_msgs::msg::LlmRst & msg,
  std::ostream & out, size_t indentation = 0)
{
  lyre_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lyre_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lyre_msgs::msg::LlmRst & msg)
{
  return lyre_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lyre_msgs::msg::LlmRst>()
{
  return "lyre_msgs::msg::LlmRst";
}

template<>
inline const char * name<lyre_msgs::msg::LlmRst>()
{
  return "lyre_msgs/msg/LlmRst";
}

template<>
struct has_fixed_size<lyre_msgs::msg::LlmRst>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lyre_msgs::msg::LlmRst>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lyre_msgs::msg::LlmRst>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LYRE_MSGS__MSG__DETAIL__LLM_RST__TRAITS_HPP_
