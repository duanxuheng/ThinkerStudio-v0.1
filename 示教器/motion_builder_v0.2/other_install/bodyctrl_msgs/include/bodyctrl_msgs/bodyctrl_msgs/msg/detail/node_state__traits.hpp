// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/NodeState.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__NODE_STATE__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__NODE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/node_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: topic
  {
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeState & msg,
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

  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeState & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::NodeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::NodeState & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::NodeState>()
{
  return "bodyctrl_msgs::msg::NodeState";
}

template<>
inline const char * name<bodyctrl_msgs::msg::NodeState>()
{
  return "bodyctrl_msgs/msg/NodeState";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::NodeState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::NodeState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::msg::NodeState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__NODE_STATE__TRAITS_HPP_
