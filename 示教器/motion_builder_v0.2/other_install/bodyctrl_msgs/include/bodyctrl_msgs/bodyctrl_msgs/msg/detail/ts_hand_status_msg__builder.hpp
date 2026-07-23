// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/TsHandStatusMsg.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_STATUS_MSG__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_STATUS_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/ts_hand_status_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_TsHandStatusMsg_status
{
public:
  explicit Init_TsHandStatusMsg_status(::bodyctrl_msgs::msg::TsHandStatusMsg & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::TsHandStatusMsg status(::bodyctrl_msgs::msg::TsHandStatusMsg::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::TsHandStatusMsg msg_;
};

class Init_TsHandStatusMsg_header
{
public:
  Init_TsHandStatusMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TsHandStatusMsg_status header(::bodyctrl_msgs::msg::TsHandStatusMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TsHandStatusMsg_status(msg_);
  }

private:
  ::bodyctrl_msgs::msg::TsHandStatusMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::TsHandStatusMsg>()
{
  return bodyctrl_msgs::msg::builder::Init_TsHandStatusMsg_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_STATUS_MSG__BUILDER_HPP_
