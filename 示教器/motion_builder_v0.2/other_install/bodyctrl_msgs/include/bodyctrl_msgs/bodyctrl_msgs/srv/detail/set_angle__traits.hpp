// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:srv/SetAngle.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__TRAITS_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/srv/detail/set_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAngle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle0_ratio
  {
    out << "angle0_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle0_ratio, out);
    out << ", ";
  }

  // member: angle1_ratio
  {
    out << "angle1_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle1_ratio, out);
    out << ", ";
  }

  // member: angle2_ratio
  {
    out << "angle2_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle2_ratio, out);
    out << ", ";
  }

  // member: angle3_ratio
  {
    out << "angle3_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle3_ratio, out);
    out << ", ";
  }

  // member: angle4_ratio
  {
    out << "angle4_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle4_ratio, out);
    out << ", ";
  }

  // member: angle5_ratio
  {
    out << "angle5_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle5_ratio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle0_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle0_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle0_ratio, out);
    out << "\n";
  }

  // member: angle1_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle1_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle1_ratio, out);
    out << "\n";
  }

  // member: angle2_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle2_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle2_ratio, out);
    out << "\n";
  }

  // member: angle3_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle3_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle3_ratio, out);
    out << "\n";
  }

  // member: angle4_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle4_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle4_ratio, out);
    out << "\n";
  }

  // member: angle5_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle5_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.angle5_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAngle_Request & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::SetAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::SetAngle_Request & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::SetAngle_Request>()
{
  return "bodyctrl_msgs::srv::SetAngle_Request";
}

template<>
inline const char * name<bodyctrl_msgs::srv::SetAngle_Request>()
{
  return "bodyctrl_msgs/srv/SetAngle_Request";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::SetAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::SetAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::SetAngle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAngle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle_accepted
  {
    out << "angle_accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_accepted, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle_accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_accepted, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAngle_Response & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::SetAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::SetAngle_Response & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::SetAngle_Response>()
{
  return "bodyctrl_msgs::srv::SetAngle_Response";
}

template<>
inline const char * name<bodyctrl_msgs::srv::SetAngle_Response>()
{
  return "bodyctrl_msgs/srv/SetAngle_Response";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::SetAngle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::SetAngle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::SetAngle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bodyctrl_msgs::srv::SetAngle>()
{
  return "bodyctrl_msgs::srv::SetAngle";
}

template<>
inline const char * name<bodyctrl_msgs::srv::SetAngle>()
{
  return "bodyctrl_msgs/srv/SetAngle";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::SetAngle>
  : std::integral_constant<
    bool,
    has_fixed_size<bodyctrl_msgs::srv::SetAngle_Request>::value &&
    has_fixed_size<bodyctrl_msgs::srv::SetAngle_Response>::value
  >
{
};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::SetAngle>
  : std::integral_constant<
    bool,
    has_bounded_size<bodyctrl_msgs::srv::SetAngle_Request>::value &&
    has_bounded_size<bodyctrl_msgs::srv::SetAngle_Response>::value
  >
{
};

template<>
struct is_service<bodyctrl_msgs::srv::SetAngle>
  : std::true_type
{
};

template<>
struct is_service_request<bodyctrl_msgs::srv::SetAngle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bodyctrl_msgs::srv::SetAngle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__TRAITS_HPP_
