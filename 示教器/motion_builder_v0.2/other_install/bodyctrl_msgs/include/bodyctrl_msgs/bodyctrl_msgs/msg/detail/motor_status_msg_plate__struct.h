// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/MotorStatusMsgPlate.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/MotorStatusMsgPlate in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__MotorStatusMsgPlate
{
  std_msgs__msg__Header header;
  /// MotorName
  uint16_t name1;
  /// rad
  float pos1;
  /// rad
  float speed1;
  float current1;
  /// MotorName
  uint16_t name2;
  /// rad
  float pos2;
  /// rad
  float speed2;
  float current2;
  /// MotorName
  uint16_t name3;
  /// rad
  float pos3;
  /// rad
  float speed3;
  float current3;
  /// MotorName
  uint16_t name4;
  /// rad
  float pos4;
  /// rad
  float speed4;
  float current4;
  /// MotorName
  uint16_t name5;
  /// rad
  float pos5;
  /// rad
  float speed5;
  float current5;
  /// MotorName
  uint16_t name6;
  /// rad
  float pos6;
  /// rad
  float speed6;
  float current6;
  /// MotorName
  uint16_t name7;
  /// rad
  float pos7;
  /// rad
  float speed7;
  float current7;
  /// MotorName
  uint16_t name8;
  /// rad
  float pos8;
  /// rad
  float speed8;
  float current8;
  /// MotorName
  uint16_t name9;
  /// rad
  float pos9;
  /// rad
  float speed9;
  float current9;
  /// MotorName
  uint16_t name10;
  /// rad
  float pos10;
  /// rad
  float speed10;
  float current10;
  /// MotorName
  uint16_t name11;
  /// rad
  float pos11;
  /// rad
  float speed11;
  float current11;
  /// MotorName
  uint16_t name12;
  /// rad
  float pos12;
  /// rad
  float speed12;
  float current12;
} bodyctrl_msgs__msg__MotorStatusMsgPlate;

// Struct for a sequence of bodyctrl_msgs__msg__MotorStatusMsgPlate.
typedef struct bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence
{
  bodyctrl_msgs__msg__MotorStatusMsgPlate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG_PLATE__STRUCT_H_
