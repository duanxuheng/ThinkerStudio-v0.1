// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lyre_msgs:srv/LlmAsk.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__LLM_ASK__TRAITS_HPP_
#define LYRE_MSGS__SRV__DETAIL__LLM_ASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lyre_msgs/srv/detail/llm_ask__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lyre_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LlmAsk_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LlmAsk_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LlmAsk_Request & msg, bool use_flow_style = false)
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

}  // namespace lyre_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lyre_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lyre_msgs::srv::LlmAsk_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lyre_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lyre_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lyre_msgs::srv::LlmAsk_Request & msg)
{
  return lyre_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lyre_msgs::srv::LlmAsk_Request>()
{
  return "lyre_msgs::srv::LlmAsk_Request";
}

template<>
inline const char * name<lyre_msgs::srv::LlmAsk_Request>()
{
  return "lyre_msgs/srv/LlmAsk_Request";
}

template<>
struct has_fixed_size<lyre_msgs::srv::LlmAsk_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lyre_msgs::srv::LlmAsk_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lyre_msgs::srv::LlmAsk_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lyre_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LlmAsk_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sid
  {
    out << "sid: ";
    rosidl_generator_traits::value_to_yaml(msg.sid, out);
    out << ", ";
  }

  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
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
  const LlmAsk_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sid: ";
    rosidl_generator_traits::value_to_yaml(msg.sid, out);
    out << "\n";
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
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

inline std::string to_yaml(const LlmAsk_Response & msg, bool use_flow_style = false)
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

}  // namespace lyre_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lyre_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lyre_msgs::srv::LlmAsk_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lyre_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lyre_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lyre_msgs::srv::LlmAsk_Response & msg)
{
  return lyre_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lyre_msgs::srv::LlmAsk_Response>()
{
  return "lyre_msgs::srv::LlmAsk_Response";
}

template<>
inline const char * name<lyre_msgs::srv::LlmAsk_Response>()
{
  return "lyre_msgs/srv/LlmAsk_Response";
}

template<>
struct has_fixed_size<lyre_msgs::srv::LlmAsk_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lyre_msgs::srv::LlmAsk_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lyre_msgs::srv::LlmAsk_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lyre_msgs::srv::LlmAsk>()
{
  return "lyre_msgs::srv::LlmAsk";
}

template<>
inline const char * name<lyre_msgs::srv::LlmAsk>()
{
  return "lyre_msgs/srv/LlmAsk";
}

template<>
struct has_fixed_size<lyre_msgs::srv::LlmAsk>
  : std::integral_constant<
    bool,
    has_fixed_size<lyre_msgs::srv::LlmAsk_Request>::value &&
    has_fixed_size<lyre_msgs::srv::LlmAsk_Response>::value
  >
{
};

template<>
struct has_bounded_size<lyre_msgs::srv::LlmAsk>
  : std::integral_constant<
    bool,
    has_bounded_size<lyre_msgs::srv::LlmAsk_Request>::value &&
    has_bounded_size<lyre_msgs::srv::LlmAsk_Response>::value
  >
{
};

template<>
struct is_service<lyre_msgs::srv::LlmAsk>
  : std::true_type
{
};

template<>
struct is_service_request<lyre_msgs::srv::LlmAsk_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lyre_msgs::srv::LlmAsk_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LYRE_MSGS__SRV__DETAIL__LLM_ASK__TRAITS_HPP_
