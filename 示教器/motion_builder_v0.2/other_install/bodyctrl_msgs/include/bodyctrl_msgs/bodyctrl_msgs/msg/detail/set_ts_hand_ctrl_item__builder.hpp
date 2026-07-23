// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrlItem.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_SetTsHandCtrlItem_max_angle
{
public:
  explicit Init_SetTsHandCtrlItem_max_angle(::bodyctrl_msgs::msg::SetTsHandCtrlItem & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::SetTsHandCtrlItem max_angle(::bodyctrl_msgs::msg::SetTsHandCtrlItem::_max_angle_type arg)
  {
    msg_.max_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandCtrlItem msg_;
};

class Init_SetTsHandCtrlItem_start_angle
{
public:
  explicit Init_SetTsHandCtrlItem_start_angle(::bodyctrl_msgs::msg::SetTsHandCtrlItem & msg)
  : msg_(msg)
  {}
  Init_SetTsHandCtrlItem_max_angle start_angle(::bodyctrl_msgs::msg::SetTsHandCtrlItem::_start_angle_type arg)
  {
    msg_.start_angle = std::move(arg);
    return Init_SetTsHandCtrlItem_max_angle(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandCtrlItem msg_;
};

class Init_SetTsHandCtrlItem_vel
{
public:
  Init_SetTsHandCtrlItem_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTsHandCtrlItem_start_angle vel(::bodyctrl_msgs::msg::SetTsHandCtrlItem::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_SetTsHandCtrlItem_start_angle(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetTsHandCtrlItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::SetTsHandCtrlItem>()
{
  return bodyctrl_msgs::msg::builder::Init_SetTsHandCtrlItem_vel();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__BUILDER_HPP_
