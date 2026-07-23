// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rotation'
// Member 'bend'
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetTsHandCtrl & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: rotation
  {
    out << "rotation: ";
    to_flow_style_yaml(msg.rotation, out);
    out << ", ";
  }

  // member: bend
  {
    if (msg.bend.size() == 0) {
      out << "bend: []";
    } else {
      out << "bend: [";
      size_t pending_items = msg.bend.size();
      for (auto item : msg.bend) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: threshold
  {
    if (msg.threshold.size() == 0) {
      out << "threshold: []";
    } else {
      out << "threshold: [";
      size_t pending_items = msg.threshold.size();
      for (auto item : msg.threshold) {
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
  const SetTsHandCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation:\n";
    to_block_style_yaml(msg.rotation, out, indentation + 2);
  }

  // member: bend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bend.size() == 0) {
      out << "bend: []\n";
    } else {
      out << "bend:\n";
      for (auto item : msg.bend) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.threshold.size() == 0) {
      out << "threshold: []\n";
    } else {
      out << "threshold:\n";
      for (auto item : msg.threshold) {
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

inline std::string to_yaml(const SetTsHandCtrl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bodyctrl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bodyctrl_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bodyctrl_msgs::msg::SetTsHandCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::SetTsHandCtrl & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::SetTsHandCtrl>()
{
  return "bodyctrl_msgs::msg::SetTsHandCtrl";
}

template<>
inline const char * name<bodyctrl_msgs::msg::SetTsHandCtrl>()
{
  return "bodyctrl_msgs/msg/SetTsHandCtrl";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::SetTsHandCtrl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::SetTsHandCtrl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bodyctrl_msgs::msg::SetTsHandCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__TRAITS_HPP_
