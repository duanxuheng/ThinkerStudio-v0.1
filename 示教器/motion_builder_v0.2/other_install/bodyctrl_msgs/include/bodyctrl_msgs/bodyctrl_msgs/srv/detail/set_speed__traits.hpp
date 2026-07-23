// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__TRAITS_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/srv/detail/set_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSpeed_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed0_ratio
  {
    out << "speed0_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed0_ratio, out);
    out << ", ";
  }

  // member: speed1_ratio
  {
    out << "speed1_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed1_ratio, out);
    out << ", ";
  }

  // member: speed2_ratio
  {
    out << "speed2_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed2_ratio, out);
    out << ", ";
  }

  // member: speed3_ratio
  {
    out << "speed3_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed3_ratio, out);
    out << ", ";
  }

  // member: speed4_ratio
  {
    out << "speed4_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed4_ratio, out);
    out << ", ";
  }

  // member: speed5_ratio
  {
    out << "speed5_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed5_ratio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSpeed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed0_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed0_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed0_ratio, out);
    out << "\n";
  }

  // member: speed1_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed1_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed1_ratio, out);
    out << "\n";
  }

  // member: speed2_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed2_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed2_ratio, out);
    out << "\n";
  }

  // member: speed3_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed3_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed3_ratio, out);
    out << "\n";
  }

  // member: speed4_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed4_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed4_ratio, out);
    out << "\n";
  }

  // member: speed5_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed5_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed5_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSpeed_Request & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::SetSpeed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::SetSpeed_Request & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::SetSpeed_Request>()
{
  return "bodyctrl_msgs::srv::SetSpeed_Request";
}

template<>
inline const char * name<bodyctrl_msgs::srv::SetSpeed_Request>()
{
  return "bodyctrl_msgs/srv/SetSpeed_Request";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::SetSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::SetSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::SetSpeed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSpeed_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_accepted
  {
    out << "speed_accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_accepted, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSpeed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_accepted, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSpeed_Response & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::SetSpeed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::SetSpeed_Response & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::SetSpeed_Response>()
{
  return "bodyctrl_msgs::srv::SetSpeed_Response";
}

template<>
inline const char * name<bodyctrl_msgs::srv::SetSpeed_Response>()
{
  return "bodyctrl_msgs/srv/SetSpeed_Response";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::SetSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::SetSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::SetSpeed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bodyctrl_msgs::srv::SetSpeed>()
{
  return "bodyctrl_msgs::srv::SetSpeed";
}

template<>
inline const char * name<bodyctrl_msgs::srv::SetSpeed>()
{
  return "bodyctrl_msgs/srv/SetSpeed";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::SetSpeed>
  : std::integral_constant<
    bool,
    has_fixed_size<bodyctrl_msgs::srv::SetSpeed_Request>::value &&
    has_fixed_size<bodyctrl_msgs::srv::SetSpeed_Response>::value
  >
{
};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::SetSpeed>
  : std::integral_constant<
    bool,
    has_bounded_size<bodyctrl_msgs::srv::SetSpeed_Request>::value &&
    has_bounded_size<bodyctrl_msgs::srv::SetSpeed_Response>::value
  >
{
};

template<>
struct is_service<bodyctrl_msgs::srv::SetSpeed>
  : std::true_type
{
};

template<>
struct is_service_request<bodyctrl_msgs::srv::SetSpeed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bodyctrl_msgs::srv::SetSpeed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__TRAITS_HPP_
