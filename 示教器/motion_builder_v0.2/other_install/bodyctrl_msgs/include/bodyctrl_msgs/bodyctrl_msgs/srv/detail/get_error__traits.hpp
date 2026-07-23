// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:srv/GetError.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__GET_ERROR__TRAITS_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__GET_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/srv/detail/get_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetError_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetError_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetError_Request & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::GetError_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::GetError_Request & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::GetError_Request>()
{
  return "bodyctrl_msgs::srv::GetError_Request";
}

template<>
inline const char * name<bodyctrl_msgs::srv::GetError_Request>()
{
  return "bodyctrl_msgs/srv/GetError_Request";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::GetError_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::GetError_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::GetError_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bodyctrl_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetError_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: errorvalue
  {
    if (msg.errorvalue.size() == 0) {
      out << "errorvalue: []";
    } else {
      out << "errorvalue: [";
      size_t pending_items = msg.errorvalue.size();
      for (auto item : msg.errorvalue) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetError_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: errorvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.errorvalue.size() == 0) {
      out << "errorvalue: []\n";
    } else {
      out << "errorvalue:\n";
      for (auto item : msg.errorvalue) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetError_Response & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::srv::GetError_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::srv::GetError_Response & msg)
{
  return bodyctrl_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::srv::GetError_Response>()
{
  return "bodyctrl_msgs::srv::GetError_Response";
}

template<>
inline const char * name<bodyctrl_msgs::srv::GetError_Response>()
{
  return "bodyctrl_msgs/srv/GetError_Response";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::GetError_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::GetError_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bodyctrl_msgs::srv::GetError_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bodyctrl_msgs::srv::GetError>()
{
  return "bodyctrl_msgs::srv::GetError";
}

template<>
inline const char * name<bodyctrl_msgs::srv::GetError>()
{
  return "bodyctrl_msgs/srv/GetError";
}

template<>
struct has_fixed_size<bodyctrl_msgs::srv::GetError>
  : std::integral_constant<
    bool,
    has_fixed_size<bodyctrl_msgs::srv::GetError_Request>::value &&
    has_fixed_size<bodyctrl_msgs::srv::GetError_Response>::value
  >
{
};

template<>
struct has_bounded_size<bodyctrl_msgs::srv::GetError>
  : std::integral_constant<
    bool,
    has_bounded_size<bodyctrl_msgs::srv::GetError_Request>::value &&
    has_bounded_size<bodyctrl_msgs::srv::GetError_Response>::value
  >
{
};

template<>
struct is_service<bodyctrl_msgs::srv::GetError>
  : std::true_type
{
};

template<>
struct is_service_request<bodyctrl_msgs::srv::GetError_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bodyctrl_msgs::srv::GetError_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__SRV__DETAIL__GET_ERROR__TRAITS_HPP_
