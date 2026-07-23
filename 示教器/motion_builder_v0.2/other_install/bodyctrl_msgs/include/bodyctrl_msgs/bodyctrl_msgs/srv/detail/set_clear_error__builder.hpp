// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/SetClearError.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_CLEAR_ERROR__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_CLEAR_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/set_clear_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetClearError_Request>()
{
  return ::bodyctrl_msgs::srv::SetClearError_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_SetClearError_Response_setclear_error_accepted
{
public:
  Init_SetClearError_Response_setclear_error_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::SetClearError_Response setclear_error_accepted(::bodyctrl_msgs::srv::SetClearError_Response::_setclear_error_accepted_type arg)
  {
    msg_.setclear_error_accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetClearError_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetClearError_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_SetClearError_Response_setclear_error_accepted();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_CLEAR_ERROR__BUILDER_HPP_
