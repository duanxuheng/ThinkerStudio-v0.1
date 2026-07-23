// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/SetAngleFlexible.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE_FLEXIBLE__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE_FLEXIBLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/set_angle_flexible__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAngleFlexible_Request_angle_ratio
{
public:
  explicit Init_SetAngleFlexible_Request_angle_ratio(::bodyctrl_msgs::srv::SetAngleFlexible_Request & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::srv::SetAngleFlexible_Request angle_ratio(::bodyctrl_msgs::srv::SetAngleFlexible_Request::_angle_ratio_type arg)
  {
    msg_.angle_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngleFlexible_Request msg_;
};

class Init_SetAngleFlexible_Request_name
{
public:
  Init_SetAngleFlexible_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAngleFlexible_Request_angle_ratio name(::bodyctrl_msgs::srv::SetAngleFlexible_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetAngleFlexible_Request_angle_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngleFlexible_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetAngleFlexible_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_SetAngleFlexible_Request_name();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAngleFlexible_Response_angle_accepted
{
public:
  Init_SetAngleFlexible_Response_angle_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::SetAngleFlexible_Response angle_accepted(::bodyctrl_msgs::srv::SetAngleFlexible_Response::_angle_accepted_type arg)
  {
    msg_.angle_accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngleFlexible_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetAngleFlexible_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_SetAngleFlexible_Response_angle_accepted();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE_FLEXIBLE__BUILDER_HPP_
