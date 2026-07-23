// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:srv/XSensImuInit.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__SRV__DETAIL__X_SENS_IMU_INIT__BUILDER_HPP_
#define BODYCTRL_MSGS__SRV__DETAIL__X_SENS_IMU_INIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/srv/detail/x_sens_imu_init__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_XSensImuInit_Request_dev_name
{
public:
  Init_XSensImuInit_Request_dev_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::XSensImuInit_Request dev_name(::bodyctrl_msgs::srv::XSensImuInit_Request::_dev_name_type arg)
  {
    msg_.dev_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::XSensImuInit_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::XSensImuInit_Request>()
{
  return bodyctrl_msgs::srv::builder::Init_XSensImuInit_Request_dev_name();
}

}  // namespace bodyctrl_msgs


namespace bodyctrl_msgs
{

namespace srv
{

namespace builder
{

class Init_XSensImuInit_Response_ret
{
public:
  Init_XSensImuInit_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bodyctrl_msgs::srv::XSensImuInit_Response ret(::bodyctrl_msgs::srv::XSensImuInit_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::srv::XSensImuInit_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::srv::XSensImuInit_Response>()
{
  return bodyctrl_msgs::srv::builder::Init_XSensImuInit_Response_ret();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__SRV__DETAIL__X_SENS_IMU_INIT__BUILDER_HPP_
