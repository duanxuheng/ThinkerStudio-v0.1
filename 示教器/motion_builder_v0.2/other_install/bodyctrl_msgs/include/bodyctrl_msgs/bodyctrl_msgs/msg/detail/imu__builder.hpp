// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_Imu_linear_acceleration_covariance
{
public:
  explicit Init_Imu_linear_acceleration_covariance(::bodyctrl_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::Imu linear_acceleration_covariance(::bodyctrl_msgs::msg::Imu::_linear_acceleration_covariance_type arg)
  {
    msg_.linear_acceleration_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Imu msg_;
};

class Init_Imu_orientation_covariance
{
public:
  explicit Init_Imu_orientation_covariance(::bodyctrl_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_linear_acceleration_covariance orientation_covariance(::bodyctrl_msgs::msg::Imu::_orientation_covariance_type arg)
  {
    msg_.orientation_covariance = std::move(arg);
    return Init_Imu_linear_acceleration_covariance(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Imu msg_;
};

class Init_Imu_angular_velocity_covariance
{
public:
  explicit Init_Imu_angular_velocity_covariance(::bodyctrl_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_orientation_covariance angular_velocity_covariance(::bodyctrl_msgs::msg::Imu::_angular_velocity_covariance_type arg)
  {
    msg_.angular_velocity_covariance = std::move(arg);
    return Init_Imu_orientation_covariance(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Imu msg_;
};

class Init_Imu_error
{
public:
  explicit Init_Imu_error(::bodyctrl_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angular_velocity_covariance error(::bodyctrl_msgs::msg::Imu::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_Imu_angular_velocity_covariance(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Imu msg_;
};

class Init_Imu_euler
{
public:
  explicit Init_Imu_euler(::bodyctrl_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_error euler(::bodyctrl_msgs::msg::Imu::_euler_type arg)
  {
    msg_.euler = std::move(arg);
    return Init_Imu_error(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Imu msg_;
};

class Init_Imu_linear_acceleration
{
public:
  explicit Init_Imu_linear_acceleration(::bodyctrl_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_euler linear_acceleration(::bodyctrl_msgs::msg::Imu::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Imu_euler(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Imu msg_;
};

class Init_Imu_angular_velocity
{
public:
  explicit Init_Imu_angular_velocity(::bodyctrl_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_linear_acceleration angular_velocity(::bodyctrl_msgs::msg::Imu::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Imu_linear_acceleration(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Imu msg_;
};

class Init_Imu_orientation
{
public:
  explicit Init_Imu_orientation(::bodyctrl_msgs::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angular_velocity orientation(::bodyctrl_msgs::msg::Imu::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Imu_angular_velocity(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Imu msg_;
};

class Init_Imu_header
{
public:
  Init_Imu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_orientation header(::bodyctrl_msgs::msg::Imu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Imu_orientation(msg_);
  }

private:
  ::bodyctrl_msgs::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::Imu>()
{
  return bodyctrl_msgs::msg::builder::Init_Imu_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
