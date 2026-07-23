// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatusMsgPlate.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/motor_status_msg_plate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatusMsgPlate_current12
{
public:
  explicit Init_MotorStatusMsgPlate_current12(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate current12(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current12_type arg)
  {
    msg_.current12 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed12
{
public:
  explicit Init_MotorStatusMsgPlate_speed12(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current12 speed12(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed12_type arg)
  {
    msg_.speed12 = std::move(arg);
    return Init_MotorStatusMsgPlate_current12(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos12
{
public:
  explicit Init_MotorStatusMsgPlate_pos12(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed12 pos12(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos12_type arg)
  {
    msg_.pos12 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed12(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name12
{
public:
  explicit Init_MotorStatusMsgPlate_name12(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos12 name12(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name12_type arg)
  {
    msg_.name12 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos12(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current11
{
public:
  explicit Init_MotorStatusMsgPlate_current11(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name12 current11(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current11_type arg)
  {
    msg_.current11 = std::move(arg);
    return Init_MotorStatusMsgPlate_name12(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed11
{
public:
  explicit Init_MotorStatusMsgPlate_speed11(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current11 speed11(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed11_type arg)
  {
    msg_.speed11 = std::move(arg);
    return Init_MotorStatusMsgPlate_current11(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos11
{
public:
  explicit Init_MotorStatusMsgPlate_pos11(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed11 pos11(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos11_type arg)
  {
    msg_.pos11 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed11(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name11
{
public:
  explicit Init_MotorStatusMsgPlate_name11(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos11 name11(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name11_type arg)
  {
    msg_.name11 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos11(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current10
{
public:
  explicit Init_MotorStatusMsgPlate_current10(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name11 current10(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current10_type arg)
  {
    msg_.current10 = std::move(arg);
    return Init_MotorStatusMsgPlate_name11(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed10
{
public:
  explicit Init_MotorStatusMsgPlate_speed10(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current10 speed10(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed10_type arg)
  {
    msg_.speed10 = std::move(arg);
    return Init_MotorStatusMsgPlate_current10(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos10
{
public:
  explicit Init_MotorStatusMsgPlate_pos10(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed10 pos10(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos10_type arg)
  {
    msg_.pos10 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed10(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name10
{
public:
  explicit Init_MotorStatusMsgPlate_name10(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos10 name10(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name10_type arg)
  {
    msg_.name10 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos10(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current9
{
public:
  explicit Init_MotorStatusMsgPlate_current9(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name10 current9(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current9_type arg)
  {
    msg_.current9 = std::move(arg);
    return Init_MotorStatusMsgPlate_name10(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed9
{
public:
  explicit Init_MotorStatusMsgPlate_speed9(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current9 speed9(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed9_type arg)
  {
    msg_.speed9 = std::move(arg);
    return Init_MotorStatusMsgPlate_current9(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos9
{
public:
  explicit Init_MotorStatusMsgPlate_pos9(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed9 pos9(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos9_type arg)
  {
    msg_.pos9 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed9(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name9
{
public:
  explicit Init_MotorStatusMsgPlate_name9(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos9 name9(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name9_type arg)
  {
    msg_.name9 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos9(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current8
{
public:
  explicit Init_MotorStatusMsgPlate_current8(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name9 current8(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current8_type arg)
  {
    msg_.current8 = std::move(arg);
    return Init_MotorStatusMsgPlate_name9(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed8
{
public:
  explicit Init_MotorStatusMsgPlate_speed8(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current8 speed8(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed8_type arg)
  {
    msg_.speed8 = std::move(arg);
    return Init_MotorStatusMsgPlate_current8(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos8
{
public:
  explicit Init_MotorStatusMsgPlate_pos8(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed8 pos8(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos8_type arg)
  {
    msg_.pos8 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed8(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name8
{
public:
  explicit Init_MotorStatusMsgPlate_name8(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos8 name8(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name8_type arg)
  {
    msg_.name8 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos8(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current7
{
public:
  explicit Init_MotorStatusMsgPlate_current7(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name8 current7(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current7_type arg)
  {
    msg_.current7 = std::move(arg);
    return Init_MotorStatusMsgPlate_name8(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed7
{
public:
  explicit Init_MotorStatusMsgPlate_speed7(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current7 speed7(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed7_type arg)
  {
    msg_.speed7 = std::move(arg);
    return Init_MotorStatusMsgPlate_current7(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos7
{
public:
  explicit Init_MotorStatusMsgPlate_pos7(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed7 pos7(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos7_type arg)
  {
    msg_.pos7 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed7(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name7
{
public:
  explicit Init_MotorStatusMsgPlate_name7(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos7 name7(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name7_type arg)
  {
    msg_.name7 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos7(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current6
{
public:
  explicit Init_MotorStatusMsgPlate_current6(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name7 current6(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current6_type arg)
  {
    msg_.current6 = std::move(arg);
    return Init_MotorStatusMsgPlate_name7(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed6
{
public:
  explicit Init_MotorStatusMsgPlate_speed6(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current6 speed6(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed6_type arg)
  {
    msg_.speed6 = std::move(arg);
    return Init_MotorStatusMsgPlate_current6(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos6
{
public:
  explicit Init_MotorStatusMsgPlate_pos6(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed6 pos6(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos6_type arg)
  {
    msg_.pos6 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed6(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name6
{
public:
  explicit Init_MotorStatusMsgPlate_name6(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos6 name6(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name6_type arg)
  {
    msg_.name6 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos6(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current5
{
public:
  explicit Init_MotorStatusMsgPlate_current5(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name6 current5(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current5_type arg)
  {
    msg_.current5 = std::move(arg);
    return Init_MotorStatusMsgPlate_name6(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed5
{
public:
  explicit Init_MotorStatusMsgPlate_speed5(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current5 speed5(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed5_type arg)
  {
    msg_.speed5 = std::move(arg);
    return Init_MotorStatusMsgPlate_current5(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos5
{
public:
  explicit Init_MotorStatusMsgPlate_pos5(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed5 pos5(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos5_type arg)
  {
    msg_.pos5 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed5(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name5
{
public:
  explicit Init_MotorStatusMsgPlate_name5(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos5 name5(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name5_type arg)
  {
    msg_.name5 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos5(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current4
{
public:
  explicit Init_MotorStatusMsgPlate_current4(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name5 current4(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current4_type arg)
  {
    msg_.current4 = std::move(arg);
    return Init_MotorStatusMsgPlate_name5(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed4
{
public:
  explicit Init_MotorStatusMsgPlate_speed4(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current4 speed4(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed4_type arg)
  {
    msg_.speed4 = std::move(arg);
    return Init_MotorStatusMsgPlate_current4(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos4
{
public:
  explicit Init_MotorStatusMsgPlate_pos4(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed4 pos4(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos4_type arg)
  {
    msg_.pos4 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed4(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name4
{
public:
  explicit Init_MotorStatusMsgPlate_name4(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos4 name4(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name4_type arg)
  {
    msg_.name4 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos4(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current3
{
public:
  explicit Init_MotorStatusMsgPlate_current3(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name4 current3(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current3_type arg)
  {
    msg_.current3 = std::move(arg);
    return Init_MotorStatusMsgPlate_name4(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed3
{
public:
  explicit Init_MotorStatusMsgPlate_speed3(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current3 speed3(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed3_type arg)
  {
    msg_.speed3 = std::move(arg);
    return Init_MotorStatusMsgPlate_current3(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos3
{
public:
  explicit Init_MotorStatusMsgPlate_pos3(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed3 pos3(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos3_type arg)
  {
    msg_.pos3 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed3(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name3
{
public:
  explicit Init_MotorStatusMsgPlate_name3(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos3 name3(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name3_type arg)
  {
    msg_.name3 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos3(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current2
{
public:
  explicit Init_MotorStatusMsgPlate_current2(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name3 current2(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current2_type arg)
  {
    msg_.current2 = std::move(arg);
    return Init_MotorStatusMsgPlate_name3(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed2
{
public:
  explicit Init_MotorStatusMsgPlate_speed2(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current2 speed2(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed2_type arg)
  {
    msg_.speed2 = std::move(arg);
    return Init_MotorStatusMsgPlate_current2(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos2
{
public:
  explicit Init_MotorStatusMsgPlate_pos2(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed2 pos2(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos2_type arg)
  {
    msg_.pos2 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed2(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name2
{
public:
  explicit Init_MotorStatusMsgPlate_name2(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos2 name2(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name2_type arg)
  {
    msg_.name2 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos2(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_current1
{
public:
  explicit Init_MotorStatusMsgPlate_current1(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_name2 current1(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_current1_type arg)
  {
    msg_.current1 = std::move(arg);
    return Init_MotorStatusMsgPlate_name2(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_speed1
{
public:
  explicit Init_MotorStatusMsgPlate_speed1(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_current1 speed1(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_speed1_type arg)
  {
    msg_.speed1 = std::move(arg);
    return Init_MotorStatusMsgPlate_current1(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_pos1
{
public:
  explicit Init_MotorStatusMsgPlate_pos1(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_speed1 pos1(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_pos1_type arg)
  {
    msg_.pos1 = std::move(arg);
    return Init_MotorStatusMsgPlate_speed1(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_name1
{
public:
  explicit Init_MotorStatusMsgPlate_name1(::bodyctrl_msgs::msg::MotorStatusMsgPlate & msg)
  : msg_(msg)
  {}
  Init_MotorStatusMsgPlate_pos1 name1(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_name1_type arg)
  {
    msg_.name1 = std::move(arg);
    return Init_MotorStatusMsgPlate_pos1(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

class Init_MotorStatusMsgPlate_header
{
public:
  Init_MotorStatusMsgPlate_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatusMsgPlate_name1 header(::bodyctrl_msgs::msg::MotorStatusMsgPlate::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorStatusMsgPlate_name1(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatusMsgPlate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::MotorStatusMsgPlate>()
{
  return bodyctrl_msgs::msg::builder::Init_MotorStatusMsgPlate_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__BUILDER_HPP_
