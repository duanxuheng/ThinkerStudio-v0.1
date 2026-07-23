// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/SetForce.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/set_force__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_SetForce_Request_force5_ratio
{
public:
  explicit Init_SetForce_Request_force5_ratio(::bodyctrl_msgs::srv::SetForce_Request & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::srv::SetForce_Request force5_ratio(::bodyctrl_msgs::srv::SetForce_Request::_force5_ratio_type arg)
  {
    msg_.force5_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetForce_Request msg_;
};

class Init_SetForce_Request_force4_ratio
{
public:
  explicit Init_SetForce_Request_force4_ratio(::bodyctrl_msgs::srv::SetForce_Request & msg)
  : msg_(msg)
  {}
  Init_SetForce_Request_force5_ratio force4_ratio(::bodyctrl_msgs::srv::SetForce_Request::_force4_ratio_type arg)
  {
    msg_.force4_ratio = std::move(arg);
    return Init_SetForce_Request_force5_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetForce_Request msg_;
};

class Init_SetForce_Request_force3_ratio
{
public:
  explicit Init_SetForce_Request_force3_ratio(::bodyctrl_msgs::srv::SetForce_Request & msg)
  : msg_(msg)
  {}
  Init_SetForce_Request_force4_ratio force3_ratio(::bodyctrl_msgs::srv::SetForce_Request::_force3_ratio_type arg)
  {
    msg_.force3_ratio = std::move(arg);
    return Init_SetForce_Request_force4_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetForce_Request msg_;
};

class Init_SetForce_Request_force2_ratio
{
public:
  explicit Init_SetForce_Request_force2_ratio(::bodyctrl_msgs::srv::SetForce_Request & msg)
  : msg_(msg)
  {}
  Init_SetForce_Request_force3_ratio force2_ratio(::bodyctrl_msgs::srv::SetForce_Request::_force2_ratio_type arg)
  {
    msg_.force2_ratio = std::move(arg);
    return Init_SetForce_Request_force3_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetForce_Request msg_;
};

class Init_SetForce_Request_force1_ratio
{
public:
  explicit Init_SetForce_Request_force1_ratio(::bodyctrl_msgs::srv::SetForce_Request & msg)
  : msg_(msg)
  {}
  Init_SetForce_Request_force2_ratio force1_ratio(::bodyctrl_msgs::srv::SetForce_Request::_force1_ratio_type arg)
  {
    msg_.force1_ratio = std::move(arg);
    return Init_SetForce_Request_force2_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetForce_Request msg_;
};

class Init_SetForce_Request_force0_ratio
{
public:
  Init_SetForce_Request_force0_ratio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetForce_Request_force1_ratio force0_ratio(::bodyctrl_msgs::srv::SetForce_Request::_force0_ratio_type arg)
  {
    msg_.force0_ratio = std::move(arg);
    return Init_SetForce_Request_force1_ratio(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetForce_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetForce_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_SetForce_Request_force0_ratio();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_SetForce_Response_force_accepted
{
public:
  Init_SetForce_Response_force_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::SetForce_Response force_accepted(::bodyctrl_msgs::srv::SetForce_Response::_force_accepted_type arg)
  {
    msg_.force_accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::SetForce_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::SetForce_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_SetForce_Response_force_accepted();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__SET_FORCE__BUILDER_HPP_
