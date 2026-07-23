// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatusMsgPlate.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__TRAITS_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bodyctrl_msgs/msg/detail/motor_status_msg_plate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace bodyctrl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatusMsgPlate & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name1
  {
    out << "name1: ";
    rosidl_generator_traits::value_to_yaml(msg.name1, out);
    out << ", ";
  }

  // member: pos1
  {
    out << "pos1: ";
    rosidl_generator_traits::value_to_yaml(msg.pos1, out);
    out << ", ";
  }

  // member: speed1
  {
    out << "speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.speed1, out);
    out << ", ";
  }

  // member: current1
  {
    out << "current1: ";
    rosidl_generator_traits::value_to_yaml(msg.current1, out);
    out << ", ";
  }

  // member: name2
  {
    out << "name2: ";
    rosidl_generator_traits::value_to_yaml(msg.name2, out);
    out << ", ";
  }

  // member: pos2
  {
    out << "pos2: ";
    rosidl_generator_traits::value_to_yaml(msg.pos2, out);
    out << ", ";
  }

  // member: speed2
  {
    out << "speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.speed2, out);
    out << ", ";
  }

  // member: current2
  {
    out << "current2: ";
    rosidl_generator_traits::value_to_yaml(msg.current2, out);
    out << ", ";
  }

  // member: name3
  {
    out << "name3: ";
    rosidl_generator_traits::value_to_yaml(msg.name3, out);
    out << ", ";
  }

  // member: pos3
  {
    out << "pos3: ";
    rosidl_generator_traits::value_to_yaml(msg.pos3, out);
    out << ", ";
  }

  // member: speed3
  {
    out << "speed3: ";
    rosidl_generator_traits::value_to_yaml(msg.speed3, out);
    out << ", ";
  }

  // member: current3
  {
    out << "current3: ";
    rosidl_generator_traits::value_to_yaml(msg.current3, out);
    out << ", ";
  }

  // member: name4
  {
    out << "name4: ";
    rosidl_generator_traits::value_to_yaml(msg.name4, out);
    out << ", ";
  }

  // member: pos4
  {
    out << "pos4: ";
    rosidl_generator_traits::value_to_yaml(msg.pos4, out);
    out << ", ";
  }

  // member: speed4
  {
    out << "speed4: ";
    rosidl_generator_traits::value_to_yaml(msg.speed4, out);
    out << ", ";
  }

  // member: current4
  {
    out << "current4: ";
    rosidl_generator_traits::value_to_yaml(msg.current4, out);
    out << ", ";
  }

  // member: name5
  {
    out << "name5: ";
    rosidl_generator_traits::value_to_yaml(msg.name5, out);
    out << ", ";
  }

  // member: pos5
  {
    out << "pos5: ";
    rosidl_generator_traits::value_to_yaml(msg.pos5, out);
    out << ", ";
  }

  // member: speed5
  {
    out << "speed5: ";
    rosidl_generator_traits::value_to_yaml(msg.speed5, out);
    out << ", ";
  }

  // member: current5
  {
    out << "current5: ";
    rosidl_generator_traits::value_to_yaml(msg.current5, out);
    out << ", ";
  }

  // member: name6
  {
    out << "name6: ";
    rosidl_generator_traits::value_to_yaml(msg.name6, out);
    out << ", ";
  }

  // member: pos6
  {
    out << "pos6: ";
    rosidl_generator_traits::value_to_yaml(msg.pos6, out);
    out << ", ";
  }

  // member: speed6
  {
    out << "speed6: ";
    rosidl_generator_traits::value_to_yaml(msg.speed6, out);
    out << ", ";
  }

  // member: current6
  {
    out << "current6: ";
    rosidl_generator_traits::value_to_yaml(msg.current6, out);
    out << ", ";
  }

  // member: name7
  {
    out << "name7: ";
    rosidl_generator_traits::value_to_yaml(msg.name7, out);
    out << ", ";
  }

  // member: pos7
  {
    out << "pos7: ";
    rosidl_generator_traits::value_to_yaml(msg.pos7, out);
    out << ", ";
  }

  // member: speed7
  {
    out << "speed7: ";
    rosidl_generator_traits::value_to_yaml(msg.speed7, out);
    out << ", ";
  }

  // member: current7
  {
    out << "current7: ";
    rosidl_generator_traits::value_to_yaml(msg.current7, out);
    out << ", ";
  }

  // member: name8
  {
    out << "name8: ";
    rosidl_generator_traits::value_to_yaml(msg.name8, out);
    out << ", ";
  }

  // member: pos8
  {
    out << "pos8: ";
    rosidl_generator_traits::value_to_yaml(msg.pos8, out);
    out << ", ";
  }

  // member: speed8
  {
    out << "speed8: ";
    rosidl_generator_traits::value_to_yaml(msg.speed8, out);
    out << ", ";
  }

  // member: current8
  {
    out << "current8: ";
    rosidl_generator_traits::value_to_yaml(msg.current8, out);
    out << ", ";
  }

  // member: name9
  {
    out << "name9: ";
    rosidl_generator_traits::value_to_yaml(msg.name9, out);
    out << ", ";
  }

  // member: pos9
  {
    out << "pos9: ";
    rosidl_generator_traits::value_to_yaml(msg.pos9, out);
    out << ", ";
  }

  // member: speed9
  {
    out << "speed9: ";
    rosidl_generator_traits::value_to_yaml(msg.speed9, out);
    out << ", ";
  }

  // member: current9
  {
    out << "current9: ";
    rosidl_generator_traits::value_to_yaml(msg.current9, out);
    out << ", ";
  }

  // member: name10
  {
    out << "name10: ";
    rosidl_generator_traits::value_to_yaml(msg.name10, out);
    out << ", ";
  }

  // member: pos10
  {
    out << "pos10: ";
    rosidl_generator_traits::value_to_yaml(msg.pos10, out);
    out << ", ";
  }

  // member: speed10
  {
    out << "speed10: ";
    rosidl_generator_traits::value_to_yaml(msg.speed10, out);
    out << ", ";
  }

  // member: current10
  {
    out << "current10: ";
    rosidl_generator_traits::value_to_yaml(msg.current10, out);
    out << ", ";
  }

  // member: name11
  {
    out << "name11: ";
    rosidl_generator_traits::value_to_yaml(msg.name11, out);
    out << ", ";
  }

  // member: pos11
  {
    out << "pos11: ";
    rosidl_generator_traits::value_to_yaml(msg.pos11, out);
    out << ", ";
  }

  // member: speed11
  {
    out << "speed11: ";
    rosidl_generator_traits::value_to_yaml(msg.speed11, out);
    out << ", ";
  }

  // member: current11
  {
    out << "current11: ";
    rosidl_generator_traits::value_to_yaml(msg.current11, out);
    out << ", ";
  }

  // member: name12
  {
    out << "name12: ";
    rosidl_generator_traits::value_to_yaml(msg.name12, out);
    out << ", ";
  }

  // member: pos12
  {
    out << "pos12: ";
    rosidl_generator_traits::value_to_yaml(msg.pos12, out);
    out << ", ";
  }

  // member: speed12
  {
    out << "speed12: ";
    rosidl_generator_traits::value_to_yaml(msg.speed12, out);
    out << ", ";
  }

  // member: current12
  {
    out << "current12: ";
    rosidl_generator_traits::value_to_yaml(msg.current12, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatusMsgPlate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: name1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name1: ";
    rosidl_generator_traits::value_to_yaml(msg.name1, out);
    out << "\n";
  }

  // member: pos1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos1: ";
    rosidl_generator_traits::value_to_yaml(msg.pos1, out);
    out << "\n";
  }

  // member: speed1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.speed1, out);
    out << "\n";
  }

  // member: current1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current1: ";
    rosidl_generator_traits::value_to_yaml(msg.current1, out);
    out << "\n";
  }

  // member: name2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name2: ";
    rosidl_generator_traits::value_to_yaml(msg.name2, out);
    out << "\n";
  }

  // member: pos2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos2: ";
    rosidl_generator_traits::value_to_yaml(msg.pos2, out);
    out << "\n";
  }

  // member: speed2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.speed2, out);
    out << "\n";
  }

  // member: current2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current2: ";
    rosidl_generator_traits::value_to_yaml(msg.current2, out);
    out << "\n";
  }

  // member: name3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name3: ";
    rosidl_generator_traits::value_to_yaml(msg.name3, out);
    out << "\n";
  }

  // member: pos3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos3: ";
    rosidl_generator_traits::value_to_yaml(msg.pos3, out);
    out << "\n";
  }

  // member: speed3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed3: ";
    rosidl_generator_traits::value_to_yaml(msg.speed3, out);
    out << "\n";
  }

  // member: current3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current3: ";
    rosidl_generator_traits::value_to_yaml(msg.current3, out);
    out << "\n";
  }

  // member: name4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name4: ";
    rosidl_generator_traits::value_to_yaml(msg.name4, out);
    out << "\n";
  }

  // member: pos4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos4: ";
    rosidl_generator_traits::value_to_yaml(msg.pos4, out);
    out << "\n";
  }

  // member: speed4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed4: ";
    rosidl_generator_traits::value_to_yaml(msg.speed4, out);
    out << "\n";
  }

  // member: current4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current4: ";
    rosidl_generator_traits::value_to_yaml(msg.current4, out);
    out << "\n";
  }

  // member: name5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name5: ";
    rosidl_generator_traits::value_to_yaml(msg.name5, out);
    out << "\n";
  }

  // member: pos5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos5: ";
    rosidl_generator_traits::value_to_yaml(msg.pos5, out);
    out << "\n";
  }

  // member: speed5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed5: ";
    rosidl_generator_traits::value_to_yaml(msg.speed5, out);
    out << "\n";
  }

  // member: current5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current5: ";
    rosidl_generator_traits::value_to_yaml(msg.current5, out);
    out << "\n";
  }

  // member: name6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name6: ";
    rosidl_generator_traits::value_to_yaml(msg.name6, out);
    out << "\n";
  }

  // member: pos6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos6: ";
    rosidl_generator_traits::value_to_yaml(msg.pos6, out);
    out << "\n";
  }

  // member: speed6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed6: ";
    rosidl_generator_traits::value_to_yaml(msg.speed6, out);
    out << "\n";
  }

  // member: current6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current6: ";
    rosidl_generator_traits::value_to_yaml(msg.current6, out);
    out << "\n";
  }

  // member: name7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name7: ";
    rosidl_generator_traits::value_to_yaml(msg.name7, out);
    out << "\n";
  }

  // member: pos7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos7: ";
    rosidl_generator_traits::value_to_yaml(msg.pos7, out);
    out << "\n";
  }

  // member: speed7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed7: ";
    rosidl_generator_traits::value_to_yaml(msg.speed7, out);
    out << "\n";
  }

  // member: current7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current7: ";
    rosidl_generator_traits::value_to_yaml(msg.current7, out);
    out << "\n";
  }

  // member: name8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name8: ";
    rosidl_generator_traits::value_to_yaml(msg.name8, out);
    out << "\n";
  }

  // member: pos8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos8: ";
    rosidl_generator_traits::value_to_yaml(msg.pos8, out);
    out << "\n";
  }

  // member: speed8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed8: ";
    rosidl_generator_traits::value_to_yaml(msg.speed8, out);
    out << "\n";
  }

  // member: current8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current8: ";
    rosidl_generator_traits::value_to_yaml(msg.current8, out);
    out << "\n";
  }

  // member: name9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name9: ";
    rosidl_generator_traits::value_to_yaml(msg.name9, out);
    out << "\n";
  }

  // member: pos9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos9: ";
    rosidl_generator_traits::value_to_yaml(msg.pos9, out);
    out << "\n";
  }

  // member: speed9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed9: ";
    rosidl_generator_traits::value_to_yaml(msg.speed9, out);
    out << "\n";
  }

  // member: current9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current9: ";
    rosidl_generator_traits::value_to_yaml(msg.current9, out);
    out << "\n";
  }

  // member: name10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name10: ";
    rosidl_generator_traits::value_to_yaml(msg.name10, out);
    out << "\n";
  }

  // member: pos10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos10: ";
    rosidl_generator_traits::value_to_yaml(msg.pos10, out);
    out << "\n";
  }

  // member: speed10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed10: ";
    rosidl_generator_traits::value_to_yaml(msg.speed10, out);
    out << "\n";
  }

  // member: current10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current10: ";
    rosidl_generator_traits::value_to_yaml(msg.current10, out);
    out << "\n";
  }

  // member: name11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name11: ";
    rosidl_generator_traits::value_to_yaml(msg.name11, out);
    out << "\n";
  }

  // member: pos11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos11: ";
    rosidl_generator_traits::value_to_yaml(msg.pos11, out);
    out << "\n";
  }

  // member: speed11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed11: ";
    rosidl_generator_traits::value_to_yaml(msg.speed11, out);
    out << "\n";
  }

  // member: current11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current11: ";
    rosidl_generator_traits::value_to_yaml(msg.current11, out);
    out << "\n";
  }

  // member: name12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name12: ";
    rosidl_generator_traits::value_to_yaml(msg.name12, out);
    out << "\n";
  }

  // member: pos12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos12: ";
    rosidl_generator_traits::value_to_yaml(msg.pos12, out);
    out << "\n";
  }

  // member: speed12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed12: ";
    rosidl_generator_traits::value_to_yaml(msg.speed12, out);
    out << "\n";
  }

  // member: current12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current12: ";
    rosidl_generator_traits::value_to_yaml(msg.current12, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatusMsgPlate & msg, bool use_flow_style = false)
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
  const bodyctrl_msgs::msg::MotorStatusMsgPlate & msg,
  std::ostream & out, size_t indentation = 0)
{
  bodyctrl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bodyctrl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
{
  return bodyctrl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bodyctrl_msgs::msg::MotorStatusMsgPlate>()
{
  return "bodyctrl_msgs::msg::MotorStatusMsgPlate";
}

template<>
inline const char * name<bodyctrl_msgs::msg::MotorStatusMsgPlate>()
{
  return "bodyctrl_msgs/msg/MotorStatusMsgPlate";
}

template<>
struct has_fixed_size<bodyctrl_msgs::msg::MotorStatusMsgPlate>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<bodyctrl_msgs::msg::MotorStatusMsgPlate>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<bodyctrl_msgs::msg::MotorStatusMsgPlate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__TRAITS_HPP_
