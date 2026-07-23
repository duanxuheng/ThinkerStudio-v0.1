// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lyre_msgs:msg/AsrEvent.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__MSG__DETAIL__ASR_EVENT__TRAITS_HPP_
#define LYRE_MSGS__MSG__DETAIL__ASR_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lyre_msgs/msg/detail/asr_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lyre_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AsrEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: event
  {
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
    out << ", ";
  }

  // member: arg1
  {
    out << "arg1: ";
    rosidl_generator_traits::value_to_yaml(msg.arg1, out);
    out << ", ";
  }

  // member: arg2
  {
    out << "arg2: ";
    rosidl_generator_traits::value_to_yaml(msg.arg2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AsrEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
    out << "\n";
  }

  // member: arg1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arg1: ";
    rosidl_generator_traits::value_to_yaml(msg.arg1, out);
    out << "\n";
  }

  // member: arg2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arg2: ";
    rosidl_generator_traits::value_to_yaml(msg.arg2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AsrEvent & msg, bool use_flow_style = false)
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
  const lyre_msgs::msg::AsrEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  lyre_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lyre_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lyre_msgs::msg::AsrEvent & msg)
{
  return lyre_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lyre_msgs::msg::AsrEvent>()
{
  return "lyre_msgs::msg::AsrEvent";
}

template<>
inline const char * name<lyre_msgs::msg::AsrEvent>()
{
  return "lyre_msgs/msg/AsrEvent";
}

template<>
struct has_fixed_size<lyre_msgs::msg::AsrEvent>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lyre_msgs::msg::AsrEvent>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lyre_msgs::msg::AsrEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LYRE_MSGS__MSG__DETAIL__ASR_EVENT__TRAITS_HPP_
