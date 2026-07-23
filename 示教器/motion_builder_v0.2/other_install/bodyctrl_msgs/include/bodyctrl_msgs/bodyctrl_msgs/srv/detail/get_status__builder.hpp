// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/GetStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__GET_STATUS__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__GET_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/get_status__struct.hpp"
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
auto build<::bodyctrl_msgs::srv::GetStatus_Request>()
{
  return ::bodyctrl_msgs::srv::GetStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_GetStatus_Response_statusvalue
{
public:
  Init_GetStatus_Response_statusvalue()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::GetStatus_Response statusvalue(::bodyctrl_msgs::srv::GetStatus_Response::_statusvalue_type arg)
  {
    msg_.statusvalue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::GetStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::GetStatus_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_GetStatus_Response_statusvalue();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__GET_STATUS__BUILDER_HPP_
