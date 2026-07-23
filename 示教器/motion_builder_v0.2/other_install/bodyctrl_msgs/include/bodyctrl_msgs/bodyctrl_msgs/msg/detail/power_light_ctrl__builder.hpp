// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/PowerLightCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_LIGHT_CTRL__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_LIGHT_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/power_light_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerLightCtrl_cmd
{
public:
  explicit Init_PowerLightCtrl_cmd(::bodyctrl_msgs::msg::PowerLightCtrl & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::PowerLightCtrl cmd(::bodyctrl_msgs::msg::PowerLightCtrl::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerLightCtrl msg_;
};

class Init_PowerLightCtrl_header
{
public:
  Init_PowerLightCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerLightCtrl_cmd header(::bodyctrl_msgs::msg::PowerLightCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowerLightCtrl_cmd(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerLightCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::PowerLightCtrl>()
{
  return bodyctrl_msgs::msg::builder::Init_PowerLightCtrl_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_LIGHT_CTRL__BUILDER_HPP_
