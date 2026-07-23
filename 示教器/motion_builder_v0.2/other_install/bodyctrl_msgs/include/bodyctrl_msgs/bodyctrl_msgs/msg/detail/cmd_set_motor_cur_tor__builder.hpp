// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/CmdSetMotorCurTor.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_CUR_TOR__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_CUR_TOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/cmd_set_motor_cur_tor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_CmdSetMotorCurTor_cmds
{
public:
  explicit Init_CmdSetMotorCurTor_cmds(::bodyctrl_msgs::msg::CmdSetMotorCurTor & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::CmdSetMotorCurTor cmds(::bodyctrl_msgs::msg::CmdSetMotorCurTor::_cmds_type arg)
  {
    msg_.cmds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetMotorCurTor msg_;
};

class Init_CmdSetMotorCurTor_header
{
public:
  Init_CmdSetMotorCurTor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdSetMotorCurTor_cmds header(::bodyctrl_msgs::msg::CmdSetMotorCurTor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CmdSetMotorCurTor_cmds(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetMotorCurTor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::CmdSetMotorCurTor>()
{
  return bodyctrl_msgs::msg::builder::Init_CmdSetMotorCurTor_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_CUR_TOR__BUILDER_HPP_
