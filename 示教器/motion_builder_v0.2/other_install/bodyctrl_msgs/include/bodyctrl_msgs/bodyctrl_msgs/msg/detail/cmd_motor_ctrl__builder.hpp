// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/CmdMotorCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_MOTOR_CTRL__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_MOTOR_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/cmd_motor_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_CmdMotorCtrl_cmds
{
public:
  explicit Init_CmdMotorCtrl_cmds(::bodyctrl_msgs::msg::CmdMotorCtrl & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::CmdMotorCtrl cmds(::bodyctrl_msgs::msg::CmdMotorCtrl::_cmds_type arg)
  {
    msg_.cmds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdMotorCtrl msg_;
};

class Init_CmdMotorCtrl_header
{
public:
  Init_CmdMotorCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdMotorCtrl_cmds header(::bodyctrl_msgs::msg::CmdMotorCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CmdMotorCtrl_cmds(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdMotorCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::CmdMotorCtrl>()
{
  return bodyctrl_msgs::msg::builder::Init_CmdMotorCtrl_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_MOTOR_CTRL__BUILDER_HPP_
