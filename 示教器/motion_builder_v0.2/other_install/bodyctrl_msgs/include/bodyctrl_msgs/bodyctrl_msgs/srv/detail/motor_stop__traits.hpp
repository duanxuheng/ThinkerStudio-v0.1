// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:srv/MotorStop.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__MOTOR_STOP__TRAITS_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__MOTOR_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/srv/detail/motor_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorStop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: param
  {
    out << "param: ";
    rosidl_generator_traits::value_to_yaml(msg.param, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: param
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param: ";
    rosidl_generator_traits::value_to_yaml(msg.param, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bodyctrl_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bodyctrl_msgs::srv::MotorStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::MotorStop_Request & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::MotorStop_Request>()
{
  return "bodyctrl_msgs::srv::MotorStop_Request";
}

template<>
inline const char * name<bodyctrl_msgs::srv::MotorStop_Request>()
{
  return "bodyctrl_msgs/srv/MotorStop_Request";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::MotorStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::MotorStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::MotorStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorStop_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ret
  {
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ret
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bodyctrl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bodyctrl_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bodyctrl_msgs::srv::MotorStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::MotorStop_Response & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::MotorStop_Response>()
{
  return "bodyctrl_msgs::srv::MotorStop_Response";
}

template<>
inline const char * name<bodyctrl_msgs::srv::MotorStop_Response>()
{
  return "bodyctrl_msgs/srv/MotorStop_Response";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::MotorStop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::MotorStop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::MotorStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bodyctrl_msgs::srv::MotorStop>()
{
  return "bodyctrl_msgs::srv::MotorStop";
}

template<>
inline const char * name<bodyctrl_msgs::srv::MotorStop>()
{
  return "bodyctrl_msgs/srv/MotorStop";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::MotorStop>
  : std::integral_constant<
    bool,
    has_fixed_size<bodyctrl_msgs::srv::MotorStop_Request>::value &&
    has_fixed_size<bodyctrl_msgs::srv::MotorStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::MotorStop>
  : std::integral_constant<
    bool,
    has_bounded_size<bodyctrl_msgs::srv::MotorStop_Request>::value &&
    has_bounded_size<bodyctrl_msgs::srv::MotorStop_Response>::value
  >
{
};

template<>
struct is_service<bodyctrl_msgs::srv::MotorStop>
  : std::true_type
{
};

template<>
struct is_service_request<bodyctrl_msgs::srv::MotorStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bodyctrl_msgs::srv::MotorStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__SRV__DETAIL__MOTOR_STOP__TRAITS_HPP_
