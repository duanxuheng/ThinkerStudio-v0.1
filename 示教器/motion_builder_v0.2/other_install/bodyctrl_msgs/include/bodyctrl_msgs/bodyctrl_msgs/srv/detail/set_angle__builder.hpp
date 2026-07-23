// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/SetAngle.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/set_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAngle_Request_angle5_ratio
{
public:
  explicit Init_SetAngle_Request_angle5_ratio(::bodyctrl_msgs::srv::SetAngle_Request & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::srv::SetAngle_Request angle5_ratio(::bodyctrl_msgs::srv::SetAngle_Request::_angle5_ratio_type arg)
  {
    msg_.angle5_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngle_Request msg_;
};

class Init_SetAngle_Request_angle4_ratio
{
public:
  explicit Init_SetAngle_Request_angle4_ratio(::bodyctrl_msgs::srv::SetAngle_Request & msg)
  : msg_(msg)
  {}
  Init_SetAngle_Request_angle5_ratio angle4_ratio(::bodyctrl_msgs::srv::SetAngle_Request::_angle4_ratio_type arg)
  {
    msg_.angle4_ratio = std::move(arg);
    return Init_SetAngle_Request_angle5_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngle_Request msg_;
};

class Init_SetAngle_Request_angle3_ratio
{
public:
  explicit Init_SetAngle_Request_angle3_ratio(::bodyctrl_msgs::srv::SetAngle_Request & msg)
  : msg_(msg)
  {}
  Init_SetAngle_Request_angle4_ratio angle3_ratio(::bodyctrl_msgs::srv::SetAngle_Request::_angle3_ratio_type arg)
  {
    msg_.angle3_ratio = std::move(arg);
    return Init_SetAngle_Request_angle4_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngle_Request msg_;
};

class Init_SetAngle_Request_angle2_ratio
{
public:
  explicit Init_SetAngle_Request_angle2_ratio(::bodyctrl_msgs::srv::SetAngle_Request & msg)
  : msg_(msg)
  {}
  Init_SetAngle_Request_angle3_ratio angle2_ratio(::bodyctrl_msgs::srv::SetAngle_Request::_angle2_ratio_type arg)
  {
    msg_.angle2_ratio = std::move(arg);
    return Init_SetAngle_Request_angle3_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngle_Request msg_;
};

class Init_SetAngle_Request_angle1_ratio
{
public:
  explicit Init_SetAngle_Request_angle1_ratio(::bodyctrl_msgs::srv::SetAngle_Request & msg)
  : msg_(msg)
  {}
  Init_SetAngle_Request_angle2_ratio angle1_ratio(::bodyctrl_msgs::srv::SetAngle_Request::_angle1_ratio_type arg)
  {
    msg_.angle1_ratio = std::move(arg);
    return Init_SetAngle_Request_angle2_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngle_Request msg_;
};

class Init_SetAngle_Request_angle0_ratio
{
public:
  Init_SetAngle_Request_angle0_ratio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAngle_Request_angle1_ratio angle0_ratio(::bodyctrl_msgs::srv::SetAngle_Request::_angle0_ratio_type arg)
  {
    msg_.angle0_ratio = std::move(arg);
    return Init_SetAngle_Request_angle1_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetAngle_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_SetAngle_Request_angle0_ratio();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAngle_Response_angle_accepted
{
public:
  Init_SetAngle_Response_angle_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::SetAngle_Response angle_accepted(::bodyctrl_msgs::srv::SetAngle_Response::_angle_accepted_type arg)
  {
    msg_.angle_accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetAngle_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_SetAngle_Response_angle_accepted();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_ANGLE__BUILDER_HPP_
