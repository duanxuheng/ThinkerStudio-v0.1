// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/GetForceAct.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__GET_FORCE_ACT__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__GET_FORCE_ACT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/get_force_act__struct.hpp"
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
auto build<::bodyctrl_msgs::srv::GetForceAct_Request>()
{
  return ::bodyctrl_msgs::srv::GetForceAct_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_GetForceAct_Response_curforce_ratio
{
public:
  Init_GetForceAct_Response_curforce_ratio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::GetForceAct_Response curforce_ratio(::bodyctrl_msgs::srv::GetForceAct_Response::_curforce_ratio_type arg)
  {
    msg_.curforce_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::GetForceAct_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::GetForceAct_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_GetForceAct_Response_curforce_ratio();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__GET_FORCE_ACT__BUILDER_HPP_
