// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lyre_msgs:srv/PlayBinary.idl
// generated code does not contain a copyright notice

#ifndef LYRE_MSGS__SRV__DETAIL__PLAY_BINARY__TRAITS_HPP_
#define LYRE_MSGS__SRV__DETAIL__PLAY_BINARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lyre_msgs/srv/detail/play_binary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lyre_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayBinary_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: sid
  {
    out << "sid: ";
    rosidl_generator_traits::value_to_yaml(msg.sid, out);
    out << ", ";
  }

  // member: seq
  {
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << ", ";
  }

  // member: last
  {
    out << "last: ";
    rosidl_generator_traits::value_to_yaml(msg.last, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const PlayBinary_Request & msg,
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

  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << "\n";
  }

  // member: last
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last: ";
    rosidl_generator_traits::value_to_yaml(msg.last, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const PlayBinary_Request & msg, bool use_flow_style = false)
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
  const lyre_msgs::srv::PlayBinary_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lyre_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lyre_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lyre_msgs::srv::PlayBinary_Request & msg)
{
  return lyre_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lyre_msgs::srv::PlayBinary_Request>()
{
  return "lyre_msgs::srv::PlayBinary_Request";
}

template<>
inline const char * name<lyre_msgs::srv::PlayBinary_Request>()
{
  return "lyre_msgs/srv/PlayBinary_Request";
}

template<>
struct has_fixed_size<lyre_msgs::srv::PlayBinary_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lyre_msgs::srv::PlayBinary_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lyre_msgs::srv::PlayBinary_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lyre_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayBinary_Response & msg,
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
  const PlayBinary_Response & msg,
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

inline std::string to_yaml(const PlayBinary_Response & msg, bool use_flow_style = false)
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
  const lyre_msgs::srv::PlayBinary_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lyre_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lyre_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lyre_msgs::srv::PlayBinary_Response & msg)
{
  return lyre_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lyre_msgs::srv::PlayBinary_Response>()
{
  return "lyre_msgs::srv::PlayBinary_Response";
}

template<>
inline const char * name<lyre_msgs::srv::PlayBinary_Response>()
{
  return "lyre_msgs/srv/PlayBinary_Response";
}

template<>
struct has_fixed_size<lyre_msgs::srv::PlayBinary_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lyre_msgs::srv::PlayBinary_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lyre_msgs::srv::PlayBinary_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lyre_msgs::srv::PlayBinary>()
{
  return "lyre_msgs::srv::PlayBinary";
}

template<>
inline const char * name<lyre_msgs::srv::PlayBinary>()
{
  return "lyre_msgs/srv/PlayBinary";
}

template<>
struct has_fixed_size<lyre_msgs::srv::PlayBinary>
  : std::integral_constant<
    bool,
    has_fixed_size<lyre_msgs::srv::PlayBinary_Request>::value &&
    has_fixed_size<lyre_msgs::srv::PlayBinary_Response>::value
  >
{
};

template<>
struct has_bounded_size<lyre_msgs::srv::PlayBinary>
  : std::integral_constant<
    bool,
    has_bounded_size<lyre_msgs::srv::PlayBinary_Request>::value &&
    has_bounded_size<lyre_msgs::srv::PlayBinary_Response>::value
  >
{
};

template<>
struct is_service<lyre_msgs::srv::PlayBinary>
  : std::true_type
{
};

template<>
struct is_service_request<lyre_msgs::srv::PlayBinary_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lyre_msgs::srv::PlayBinary_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LYRE_MSGS__SRV__DETAIL__PLAY_BINARY__TRAITS_HPP_
