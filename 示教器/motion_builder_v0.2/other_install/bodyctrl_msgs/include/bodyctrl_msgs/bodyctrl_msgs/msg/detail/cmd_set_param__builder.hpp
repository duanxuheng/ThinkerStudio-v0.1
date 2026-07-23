// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/CmdSetParam.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_PARAM__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/cmd_set_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_CmdSetParam_cmds
{
public:
  explicit Init_CmdSetParam_cmds(::bodyctrl_msgs::msg::CmdSetParam & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::CmdSetParam cmds(::bodyctrl_msgs::msg::CmdSetParam::_cmds_type arg)
  {
    msg_.cmds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetParam msg_;
};

class Init_CmdSetParam_header
{
public:
  Init_CmdSetParam_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdSetParam_cmds header(::bodyctrl_msgs::msg::CmdSetParam::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CmdSetParam_cmds(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::CmdSetParam>()
{
  return bodyctrl_msgs::msg::builder::Init_CmdSetParam_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_PARAM__BUILDER_HPP_
