// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/set_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeed_Request_speed5_ratio
{
public:
  explicit Init_SetSpeed_Request_speed5_ratio(::bodyctrl_msgs::srv::SetSpeed_Request & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::srv::SetSpeed_Request speed5_ratio(::bodyctrl_msgs::srv::SetSpeed_Request::_speed5_ratio_type arg)
  {
    msg_.speed5_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetSpeed_Request msg_;
};

class Init_SetSpeed_Request_speed4_ratio
{
public:
  explicit Init_SetSpeed_Request_speed4_ratio(::bodyctrl_msgs::srv::SetSpeed_Request & msg)
  : msg_(msg)
  {}
  Init_SetSpeed_Request_speed5_ratio speed4_ratio(::bodyctrl_msgs::srv::SetSpeed_Request::_speed4_ratio_type arg)
  {
    msg_.speed4_ratio = std::move(arg);
    return Init_SetSpeed_Request_speed5_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetSpeed_Request msg_;
};

class Init_SetSpeed_Request_speed3_ratio
{
public:
  explicit Init_SetSpeed_Request_speed3_ratio(::bodyctrl_msgs::srv::SetSpeed_Request & msg)
  : msg_(msg)
  {}
  Init_SetSpeed_Request_speed4_ratio speed3_ratio(::bodyctrl_msgs::srv::SetSpeed_Request::_speed3_ratio_type arg)
  {
    msg_.speed3_ratio = std::move(arg);
    return Init_SetSpeed_Request_speed4_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetSpeed_Request msg_;
};

class Init_SetSpeed_Request_speed2_ratio
{
public:
  explicit Init_SetSpeed_Request_speed2_ratio(::bodyctrl_msgs::srv::SetSpeed_Request & msg)
  : msg_(msg)
  {}
  Init_SetSpeed_Request_speed3_ratio speed2_ratio(::bodyctrl_msgs::srv::SetSpeed_Request::_speed2_ratio_type arg)
  {
    msg_.speed2_ratio = std::move(arg);
    return Init_SetSpeed_Request_speed3_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetSpeed_Request msg_;
};

class Init_SetSpeed_Request_speed1_ratio
{
public:
  explicit Init_SetSpeed_Request_speed1_ratio(::bodyctrl_msgs::srv::SetSpeed_Request & msg)
  : msg_(msg)
  {}
  Init_SetSpeed_Request_speed2_ratio speed1_ratio(::bodyctrl_msgs::srv::SetSpeed_Request::_speed1_ratio_type arg)
  {
    msg_.speed1_ratio = std::move(arg);
    return Init_SetSpeed_Request_speed2_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetSpeed_Request msg_;
};

class Init_SetSpeed_Request_speed0_ratio
{
public:
  Init_SetSpeed_Request_speed0_ratio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeed_Request_speed1_ratio speed0_ratio(::bodyctrl_msgs::srv::SetSpeed_Request::_speed0_ratio_type arg)
  {
    msg_.speed0_ratio = std::move(arg);
    return Init_SetSpeed_Request_speed1_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetSpeed_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_SetSpeed_Request_speed0_ratio();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeed_Response_speed_accepted
{
public:
  Init_SetSpeed_Response_speed_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::SetSpeed_Response speed_accepted(::bodyctrl_msgs::srv::SetSpeed_Response::_speed_accepted_type arg)
  {
    msg_.speed_accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetSpeed_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_SetSpeed_Response_speed_accepted();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_SPEED__BUILDER_HPP_
