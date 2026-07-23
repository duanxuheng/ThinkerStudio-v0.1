// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/PowerBoardKeyStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/power_board_key_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerBoardKeyStatus_is_power_on
{
public:
  explicit Init_PowerBoardKeyStatus_is_power_on(::bodyctrl_msgs::msg::PowerBoardKeyStatus & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::PowerBoardKeyStatus is_power_on(::bodyctrl_msgs::msg::PowerBoardKeyStatus::_is_power_on_type arg)
  {
    msg_.is_power_on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBoardKeyStatus msg_;
};

class Init_PowerBoardKeyStatus_is_remote_estop
{
public:
  explicit Init_PowerBoardKeyStatus_is_remote_estop(::bodyctrl_msgs::msg::PowerBoardKeyStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardKeyStatus_is_power_on is_remote_estop(::bodyctrl_msgs::msg::PowerBoardKeyStatus::_is_remote_estop_type arg)
  {
    msg_.is_remote_estop = std::move(arg);
    return Init_PowerBoardKeyStatus_is_power_on(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBoardKeyStatus msg_;
};

class Init_PowerBoardKeyStatus_is_estop
{
public:
  explicit Init_PowerBoardKeyStatus_is_estop(::bodyctrl_msgs::msg::PowerBoardKeyStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardKeyStatus_is_remote_estop is_estop(::bodyctrl_msgs::msg::PowerBoardKeyStatus::_is_estop_type arg)
  {
    msg_.is_estop = std::move(arg);
    return Init_PowerBoardKeyStatus_is_remote_estop(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBoardKeyStatus msg_;
};

class Init_PowerBoardKeyStatus_work_time
{
public:
  explicit Init_PowerBoardKeyStatus_work_time(::bodyctrl_msgs::msg::PowerBoardKeyStatus & msg)
  : msg_(msg)
  {}
  Init_PowerBoardKeyStatus_is_estop work_time(::bodyctrl_msgs::msg::PowerBoardKeyStatus::_work_time_type arg)
  {
    msg_.work_time = std::move(arg);
    return Init_PowerBoardKeyStatus_is_estop(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBoardKeyStatus msg_;
};

class Init_PowerBoardKeyStatus_header
{
public:
  Init_PowerBoardKeyStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerBoardKeyStatus_work_time header(::bodyctrl_msgs::msg::PowerBoardKeyStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowerBoardKeyStatus_work_time(msg_);
  }

private:
  ::bodyctrl_msgs::msg::PowerBoardKeyStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::PowerBoardKeyStatus>()
{
  return bodyctrl_msgs::msg::builder::Init_PowerBoardKeyStatus_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_BOARD_KEY_STATUS__BUILDER_HPP_
