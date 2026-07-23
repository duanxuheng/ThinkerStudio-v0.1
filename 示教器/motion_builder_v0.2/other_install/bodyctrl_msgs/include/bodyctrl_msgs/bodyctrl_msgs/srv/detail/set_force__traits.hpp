// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:srv/SetForce.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__TRAITS_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/srv/detail/set_force__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetForce_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: force0_ratio
  {
    out << "force0_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force0_ratio, out);
    out << ", ";
  }

  // member: force1_ratio
  {
    out << "force1_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force1_ratio, out);
    out << ", ";
  }

  // member: force2_ratio
  {
    out << "force2_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force2_ratio, out);
    out << ", ";
  }

  // member: force3_ratio
  {
    out << "force3_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force3_ratio, out);
    out << ", ";
  }

  // member: force4_ratio
  {
    out << "force4_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force4_ratio, out);
    out << ", ";
  }

  // member: force5_ratio
  {
    out << "force5_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force5_ratio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetForce_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: force0_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force0_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force0_ratio, out);
    out << "\n";
  }

  // member: force1_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force1_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force1_ratio, out);
    out << "\n";
  }

  // member: force2_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force2_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force2_ratio, out);
    out << "\n";
  }

  // member: force3_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force3_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force3_ratio, out);
    out << "\n";
  }

  // member: force4_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force4_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force4_ratio, out);
    out << "\n";
  }

  // member: force5_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force5_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.force5_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetForce_Request & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::SetForce_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::SetForce_Request & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::SetForce_Request>()
{
  return "bodyctrl_msgs::srv::SetForce_Request";
}

template<>
inline const char * name<bodyctrl_msgs::srv::SetForce_Request>()
{
  return "bodyctrl_msgs/srv/SetForce_Request";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::SetForce_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::SetForce_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::SetForce_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetForce_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: force_accepted
  {
    out << "force_accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.force_accepted, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetForce_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: force_accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.force_accepted, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetForce_Response & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::SetForce_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::SetForce_Response & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::SetForce_Response>()
{
  return "bodyctrl_msgs::srv::SetForce_Response";
}

template<>
inline const char * name<bodyctrl_msgs::srv::SetForce_Response>()
{
  return "bodyctrl_msgs/srv/SetForce_Response";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::SetForce_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::SetForce_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::SetForce_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bodyctrl_msgs::srv::SetForce>()
{
  return "bodyctrl_msgs::srv::SetForce";
}

template<>
inline const char * name<bodyctrl_msgs::srv::SetForce>()
{
  return "bodyctrl_msgs/srv/SetForce";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::SetForce>
  : std::integral_constant<
    bool,
    has_fixed_size<bodyctrl_msgs::srv::SetForce_Request>::value &&
    has_fixed_size<bodyctrl_msgs::srv::SetForce_Response>::value
  >
{
};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::SetForce>
  : std::integral_constant<
    bool,
    has_bounded_size<bodyctrl_msgs::srv::SetForce_Request>::value &&
    has_bounded_size<bodyctrl_msgs::srv::SetForce_Response>::value
  >
{
};

template<>
struct is_service<bodyctrl_msgs::srv::SetForce>
  : std::true_type
{
};

template<>
struct is_service_request<bodyctrl_msgs::srv::SetForce_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bodyctrl_msgs::srv::SetForce_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__TRAITS_HPP_
