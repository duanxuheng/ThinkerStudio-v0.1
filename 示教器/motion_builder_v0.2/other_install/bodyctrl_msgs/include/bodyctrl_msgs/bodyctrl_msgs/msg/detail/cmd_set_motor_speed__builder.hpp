// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/CmdSetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_SPEED__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/cmd_set_motor_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_CmdSetMotorSpeed_cmds
{
public:
  explicit Init_CmdSetMotorSpeed_cmds(::bodyctrl_msgs::msg::CmdSetMotorSpeed & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::CmdSetMotorSpeed cmds(::bodyctrl_msgs::msg::CmdSetMotorSpeed::_cmds_type arg)
  {
    msg_.cmds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetMotorSpeed msg_;
};

class Init_CmdSetMotorSpeed_header
{
public:
  Init_CmdSetMotorSpeed_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdSetMotorSpeed_cmds header(::bodyctrl_msgs::msg::CmdSetMotorSpeed::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CmdSetMotorSpeed_cmds(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetMotorSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::CmdSetMotorSpeed>()
{
  return bodyctrl_msgs::msg::builder::Init_CmdSetMotorSpeed_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_SPEED__BUILDER_HPP_
