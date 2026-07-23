// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/SetParam.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_PARAM__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/set_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_SetParam_param
{
public:
  explicit Init_SetParam_param(::bodyctrl_msgs::msg::SetParam & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::SetParam param(::bodyctrl_msgs::msg::SetParam::_param_type arg)
  {
    msg_.param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetParam msg_;
};

class Init_SetParam_name
{
public:
  Init_SetParam_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetParam_param name(::bodyctrl_msgs::msg::SetParam::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetParam_param(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::SetParam>()
{
  return bodyctrl_msgs::msg::builder::Init_SetParam_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_PARAM__BUILDER_HPP_
