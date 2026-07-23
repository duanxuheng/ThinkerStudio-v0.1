// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/CmdSetWaistMotorPos.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_WAIST_MOTOR_POS__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_WAIST_MOTOR_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/cmd_set_waist_motor_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_CmdSetWaistMotorPos_decel
{
public:
  explicit Init_CmdSetWaistMotorPos_decel(::bodyctrl_msgs::msg::CmdSetWaistMotorPos & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::CmdSetWaistMotorPos decel(::bodyctrl_msgs::msg::CmdSetWaistMotorPos::_decel_type arg)
  {
    msg_.decel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetWaistMotorPos msg_;
};

class Init_CmdSetWaistMotorPos_accel
{
public:
  explicit Init_CmdSetWaistMotorPos_accel(::bodyctrl_msgs::msg::CmdSetWaistMotorPos & msg)
  : msg_(msg)
  {}
  Init_CmdSetWaistMotorPos_decel accel(::bodyctrl_msgs::msg::CmdSetWaistMotorPos::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_CmdSetWaistMotorPos_decel(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetWaistMotorPos msg_;
};

class Init_CmdSetWaistMotorPos_spd
{
public:
  explicit Init_CmdSetWaistMotorPos_spd(::bodyctrl_msgs::msg::CmdSetWaistMotorPos & msg)
  : msg_(msg)
  {}
  Init_CmdSetWaistMotorPos_accel spd(::bodyctrl_msgs::msg::CmdSetWaistMotorPos::_spd_type arg)
  {
    msg_.spd = std::move(arg);
    return Init_CmdSetWaistMotorPos_accel(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetWaistMotorPos msg_;
};

class Init_CmdSetWaistMotorPos_pos
{
public:
  explicit Init_CmdSetWaistMotorPos_pos(::bodyctrl_msgs::msg::CmdSetWaistMotorPos & msg)
  : msg_(msg)
  {}
  Init_CmdSetWaistMotorPos_spd pos(::bodyctrl_msgs::msg::CmdSetWaistMotorPos::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_CmdSetWaistMotorPos_spd(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetWaistMotorPos msg_;
};

class Init_CmdSetWaistMotorPos_header
{
public:
  Init_CmdSetWaistMotorPos_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdSetWaistMotorPos_pos header(::bodyctrl_msgs::msg::CmdSetWaistMotorPos::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CmdSetWaistMotorPos_pos(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetWaistMotorPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::CmdSetWaistMotorPos>()
{
  return bodyctrl_msgs::msg::builder::Init_CmdSetWaistMotorPos_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_WAIST_MOTOR_POS__BUILDER_HPP_
