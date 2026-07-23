// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:srv/PlanEefRelLine.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_REL_LINE__TRAITS_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_REL_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/srv/detail/plan_eef_rel_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanEefRelLine_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_name
  {
    out << "arm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_name, out);
    out << ", ";
  }

  // member: dx
  {
    out << "dx: ";
    rosidl_generator_traits::value_to_yaml(msg.dx, out);
    out << ", ";
  }

  // member: dy
  {
    out << "dy: ";
    rosidl_generator_traits::value_to_yaml(msg.dy, out);
    out << ", ";
  }

  // member: dz
  {
    out << "dz: ";
    rosidl_generator_traits::value_to_yaml(msg.dz, out);
    out << ", ";
  }

  // member: vel_percent
  {
    out << "vel_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_percent, out);
    out << ", ";
  }

  // member: acc_percent
  {
    out << "acc_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanEefRelLine_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_name, out);
    out << "\n";
  }

  // member: dx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dx: ";
    rosidl_generator_traits::value_to_yaml(msg.dx, out);
    out << "\n";
  }

  // member: dy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dy: ";
    rosidl_generator_traits::value_to_yaml(msg.dy, out);
    out << "\n";
  }

  // member: dz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dz: ";
    rosidl_generator_traits::value_to_yaml(msg.dz, out);
    out << "\n";
  }

  // member: vel_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_percent, out);
    out << "\n";
  }

  // member: acc_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanEefRelLine_Request & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::PlanEefRelLine_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::PlanEefRelLine_Request & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::PlanEefRelLine_Request>()
{
  return "bodyctrl_msgs::srv::PlanEefRelLine_Request";
}

template<>
inline const char * name<bodyctrl_msgs::srv::PlanEefRelLine_Request>()
{
  return "bodyctrl_msgs/srv/PlanEefRelLine_Request";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::PlanEefRelLine_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::PlanEefRelLine_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::srv::PlanEefRelLine_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanEefRelLine_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanEefRelLine_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanEefRelLine_Response & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::PlanEefRelLine_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::PlanEefRelLine_Response & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::PlanEefRelLine_Response>()
{
  return "bodyctrl_msgs::srv::PlanEefRelLine_Response";
}

template<>
inline const char * name<bodyctrl_msgs::srv::PlanEefRelLine_Response>()
{
  return "bodyctrl_msgs/srv/PlanEefRelLine_Response";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::PlanEefRelLine_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::PlanEefRelLine_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::srv::PlanEefRelLine_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bodyctrl_msgs::srv::PlanEefRelLine>()
{
  return "bodyctrl_msgs::srv::PlanEefRelLine";
}

template<>
inline const char * name<bodyctrl_msgs::srv::PlanEefRelLine>()
{
  return "bodyctrl_msgs/srv/PlanEefRelLine";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::PlanEefRelLine>
  : std::integral_constant<
    bool,
    has_fixed_size<bodyctrl_msgs::srv::PlanEefRelLine_Request>::value &&
    has_fixed_size<bodyctrl_msgs::srv::PlanEefRelLine_Response>::value
  >
{
};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::PlanEefRelLine>
  : std::integral_constant<
    bool,
    has_bounded_size<bodyctrl_msgs::srv::PlanEefRelLine_Request>::value &&
    has_bounded_size<bodyctrl_msgs::srv::PlanEefRelLine_Response>::value
  >
{
};

template<>
struct is_service<bodyctrl_msgs::srv::PlanEefRelLine>
  : std::true_type
{
};

template<>
struct is_service_request<bodyctrl_msgs::srv::PlanEefRelLine_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bodyctrl_msgs::srv::PlanEefRelLine_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__SRV__DETAIL__PLAN_EEF_REL_LINE__TRAITS_HPP_
