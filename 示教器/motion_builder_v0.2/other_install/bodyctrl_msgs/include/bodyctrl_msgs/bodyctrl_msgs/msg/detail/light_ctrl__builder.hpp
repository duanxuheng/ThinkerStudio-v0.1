// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/LightCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__LIGHT_CTRL__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__LIGHT_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/light_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_LightCtrl_caller_msg
{
public:
  explicit Init_LightCtrl_caller_msg(::bodyctrl_msgs::msg::LightCtrl & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::LightCtrl caller_msg(::bodyctrl_msgs::msg::LightCtrl::_caller_msg_type arg)
  {
    msg_.caller_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::LightCtrl msg_;
};

class Init_LightCtrl_caller_id
{
public:
  explicit Init_LightCtrl_caller_id(::bodyctrl_msgs::msg::LightCtrl & msg)
  : msg_(msg)
  {}
  Init_LightCtrl_caller_msg caller_id(::bodyctrl_msgs::msg::LightCtrl::_caller_id_type arg)
  {
    msg_.caller_id = std::move(arg);
    return Init_LightCtrl_caller_msg(msg_);
  }

private:
  ::bodyctrl_msgs::msg::LightCtrl msg_;
};

class Init_LightCtrl_data
{
public:
  explicit Init_LightCtrl_data(::bodyctrl_msgs::msg::LightCtrl & msg)
  : msg_(msg)
  {}
  Init_LightCtrl_caller_id data(::bodyctrl_msgs::msg::LightCtrl::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_LightCtrl_caller_id(msg_);
  }

private:
  ::bodyctrl_msgs::msg::LightCtrl msg_;
};

class Init_LightCtrl_cmd
{
public:
  explicit Init_LightCtrl_cmd(::bodyctrl_msgs::msg::LightCtrl & msg)
  : msg_(msg)
  {}
  Init_LightCtrl_data cmd(::bodyctrl_msgs::msg::LightCtrl::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_LightCtrl_data(msg_);
  }

private:
  ::bodyctrl_msgs::msg::LightCtrl msg_;
};

class Init_LightCtrl_header
{
public:
  Init_LightCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightCtrl_cmd header(::bodyctrl_msgs::msg::LightCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LightCtrl_cmd(msg_);
  }

private:
  ::bodyctrl_msgs::msg::LightCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::LightCtrl>()
{
  return bodyctrl_msgs::msg::builder::Init_LightCtrl_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__LIGHT_CTRL__BUILDER_HPP_
