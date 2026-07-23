// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:srv/XSensImuInit.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__X_SENS_IMU_INIT__TRAITS_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__X_SENS_IMU_INIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/srv/detail/x_sens_imu_init__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const XSensImuInit_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: dev_name
  {
    out << "dev_name: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const XSensImuInit_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dev_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dev_name: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const XSensImuInit_Request & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::XSensImuInit_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::XSensImuInit_Request & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::XSensImuInit_Request>()
{
  return "bodyctrl_msgs::srv::XSensImuInit_Request";
}

template<>
inline const char * name<bodyctrl_msgs::srv::XSensImuInit_Request>()
{
  return "bodyctrl_msgs/srv/XSensImuInit_Request";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::XSensImuInit_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::XSensImuInit_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::srv::XSensImuInit_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const XSensImuInit_Response & msg,
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
  const XSensImuInit_Response & msg,
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

inline std::string to_yaml(const XSensImuInit_Response & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::XSensImuInit_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::XSensImuInit_Response & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::XSensImuInit_Response>()
{
  return "bodyctrl_msgs::srv::XSensImuInit_Response";
}

template<>
inline const char * name<bodyctrl_msgs::srv::XSensImuInit_Response>()
{
  return "bodyctrl_msgs/srv/XSensImuInit_Response";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::XSensImuInit_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::XSensImuInit_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::XSensImuInit_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bodyctrl_msgs::srv::XSensImuInit>()
{
  return "bodyctrl_msgs::srv::XSensImuInit";
}

template<>
inline const char * name<bodyctrl_msgs::srv::XSensImuInit>()
{
  return "bodyctrl_msgs/srv/XSensImuInit";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::XSensImuInit>
  : std::integral_constant<
    bool,
    has_fixed_size<bodyctrl_msgs::srv::XSensImuInit_Request>::value &&
    has_fixed_size<bodyctrl_msgs::srv::XSensImuInit_Response>::value
  >
{
};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::XSensImuInit>
  : std::integral_constant<
    bool,
    has_bounded_size<bodyctrl_msgs::srv::XSensImuInit_Request>::value &&
    has_bounded_size<bodyctrl_msgs::srv::XSensImuInit_Response>::value
  >
{
};

template<>
struct is_service<bodyctrl_msgs::srv::XSensImuInit>
  : std::true_type
{
};

template<>
struct is_service_request<bodyctrl_msgs::srv::XSensImuInit_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bodyctrl_msgs::srv::XSensImuInit_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__SRV__DETAIL__X_SENS_IMU_INIT__TRAITS_HPP_
