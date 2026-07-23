// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/GetAngleAct.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__GET_ANGLE_ACT__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__GET_ANGLE_ACT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/get_angle_act__struct.hpp"
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
auto build<::bodyctrl_msgs::srv::GetAngleAct_Request>()
{
  return ::bodyctrl_msgs::srv::GetAngleAct_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAngleAct_Response_curangle_ratio
{
public:
  Init_GetAngleAct_Response_curangle_ratio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::GetAngleAct_Response curangle_ratio(::bodyctrl_msgs::srv::GetAngleAct_Response::_curangle_ratio_type arg)
  {
    msg_.curangle_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::GetAngleAct_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::GetAngleAct_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_GetAngleAct_Response_curangle_ratio();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__GET_ANGLE_ACT__BUILDER_HPP_
