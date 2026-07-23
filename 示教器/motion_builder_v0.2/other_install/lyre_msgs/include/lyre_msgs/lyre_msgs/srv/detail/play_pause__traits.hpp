// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lyre_msgs:srv/PlayPause.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__PLAY_PAUSE__TRAITS_HPP_
#define LYRE_MSGS__SRV__DETAIL__PLAY_PAUSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lyre_msgs/srv/detail/play_pause__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lyre_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayPause_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayPause_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayPause_Request & msg, bool use_flow_style = false)
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
  const lyre_msgs::srv::PlayPause_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lyre_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lyre_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lyre_msgs::srv::PlayPause_Request & msg)
{
  return lyre_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lyre_msgs::srv::PlayPause_Request>()
{
  return "lyre_msgs::srv::PlayPause_Request";
}

template<>
inline const char * name<lyre_msgs::srv::PlayPause_Request>()
{
  return "lyre_msgs/srv/PlayPause_Request";
}

template<>
struct has_fixed_size<lyre_msgs::srv::PlayPause_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lyre_msgs::srv::PlayPause_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lyre_msgs::srv::PlayPause_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lyre_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayPause_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayPause_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayPause_Response & msg, bool use_flow_style = false)
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
  const lyre_msgs::srv::PlayPause_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lyre_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lyre_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lyre_msgs::srv::PlayPause_Response & msg)
{
  return lyre_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lyre_msgs::srv::PlayPause_Response>()
{
  return "lyre_msgs::srv::PlayPause_Response";
}

template<>
inline const char * name<lyre_msgs::srv::PlayPause_Response>()
{
  return "lyre_msgs/srv/PlayPause_Response";
}

template<>
struct has_fixed_size<lyre_msgs::srv::PlayPause_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lyre_msgs::srv::PlayPause_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lyre_msgs::srv::PlayPause_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lyre_msgs::srv::PlayPause>()
{
  return "lyre_msgs::srv::PlayPause";
}

template<>
inline const char * name<lyre_msgs::srv::PlayPause>()
{
  return "lyre_msgs/srv/PlayPause";
}

template<>
struct has_fixed_size<lyre_msgs::srv::PlayPause>
  : std::integral_constant<
    bool,
    has_fixed_size<lyre_msgs::srv::PlayPause_Request>::value &&
    has_fixed_size<lyre_msgs::srv::PlayPause_Response>::value
  >
{
};

template<>
struct has_bounded_size<lyre_msgs::srv::PlayPause>
  : std::integral_constant<
    bool,
    has_bounded_size<lyre_msgs::srv::PlayPause_Request>::value &&
    has_bounded_size<lyre_msgs::srv::PlayPause_Response>::value
  >
{
};

template<>
struct is_service<lyre_msgs::srv::PlayPause>
  : std::true_type
{
};

template<>
struct is_service_request<lyre_msgs::srv::PlayPause_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lyre_msgs::srv::PlayPause_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LYRE_MSGS__SRV__DETAIL__PLAY_PAUSE__TRAITS_HPP_
