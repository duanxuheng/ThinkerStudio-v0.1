// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/MotorCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/motor_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCtrl & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pos, out);
    out << ", ";
  }

  // member: spd
  {
    out << "spd: ";
    rosidl_generator_traits::value_to_yaml(msg.spd, out);
    out << ", ";
  }

  // member: tor
  {
    out << "tor: ";
    rosidl_generator_traits::value_to_yaml(msg.tor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCtrl & msg,
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

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pos, out);
    out << "\n";
  }

  // member: spd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd: ";
    rosidl_generator_traits::value_to_yaml(msg.spd, out);
    out << "\n";
  }

  // member: tor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tor: ";
    rosidl_generator_traits::value_to_yaml(msg.tor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCtrl & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::MotorCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::MotorCtrl & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::MotorCtrl>()
{
  return "bodyctrl_msgs::msg::MotorCtrl";
}

template<>
inline const char * name<bodyctrl_msgs::msg::MotorCtrl>()
{
  return "bodyctrl_msgs/msg/MotorCtrl";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::MotorCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::MotorCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::msg::MotorCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_CTRL__TRAITS_HPP_
