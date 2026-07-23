// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_SetTsHandCtrl_threshold
{
public:
  explicit Init_SetTsHandCtrl_threshold(::bodyctrl_msgs::msg::SetTsHandCtrl & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::SetTsHandCtrl threshold(::bodyctrl_msgs::msg::SetTsHandCtrl::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandCtrl msg_;
};

class Init_SetTsHandCtrl_bend
{
public:
  explicit Init_SetTsHandCtrl_bend(::bodyctrl_msgs::msg::SetTsHandCtrl & msg)
  : msg_(msg)
  {}
  Init_SetTsHandCtrl_threshold bend(::bodyctrl_msgs::msg::SetTsHandCtrl::_bend_type arg)
  {
    msg_.bend = std::move(arg);
    return Init_SetTsHandCtrl_threshold(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandCtrl msg_;
};

class Init_SetTsHandCtrl_rotation
{
public:
  explicit Init_SetTsHandCtrl_rotation(::bodyctrl_msgs::msg::SetTsHandCtrl & msg)
  : msg_(msg)
  {}
  Init_SetTsHandCtrl_bend rotation(::bodyctrl_msgs::msg::SetTsHandCtrl::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_SetTsHandCtrl_bend(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandCtrl msg_;
};

class Init_SetTsHandCtrl_name
{
public:
  Init_SetTsHandCtrl_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTsHandCtrl_rotation name(::bodyctrl_msgs::msg::SetTsHandCtrl::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetTsHandCtrl_rotation(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::SetTsHandCtrl>()
{
  return bodyctrl_msgs::msg::builder::Init_SetTsHandCtrl_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__BUILDER_HPP_
