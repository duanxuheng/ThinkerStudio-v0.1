// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/MotorName.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_NAME__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MOTOR_HEAD_1'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_HEAD_1 = 1
};

/// Constant 'MOTOR_HEAD_2'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_HEAD_2 = 2
};

/// Constant 'MOTOR_HEAD_3'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_HEAD_3 = 3
};

/// Constant 'MOTOR_ARM_LEFT_1'.
/**
  * arm-left 10 + id
 */
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_LEFT_1 = 11
};

/// Constant 'MOTOR_ARM_LEFT_2'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_LEFT_2 = 12
};

/// Constant 'MOTOR_ARM_LEFT_3'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_LEFT_3 = 13
};

/// Constant 'MOTOR_ARM_LEFT_4'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_LEFT_4 = 14
};

/// Constant 'MOTOR_ARM_LEFT_5'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_LEFT_5 = 15
};

/// Constant 'MOTOR_ARM_LEFT_6'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_LEFT_6 = 16
};

/// Constant 'MOTOR_ARM_LEFT_7'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_LEFT_7 = 17
};

/// Constant 'MOTOR_ARM_RIGHT_1'.
/**
  * arm-right 20 + id
 */
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_RIGHT_1 = 21
};

/// Constant 'MOTOR_ARM_RIGHT_2'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_RIGHT_2 = 22
};

/// Constant 'MOTOR_ARM_RIGHT_3'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_RIGHT_3 = 23
};

/// Constant 'MOTOR_ARM_RIGHT_4'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_RIGHT_4 = 24
};

/// Constant 'MOTOR_ARM_RIGHT_5'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_RIGHT_5 = 25
};

/// Constant 'MOTOR_ARM_RIGHT_6'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_RIGHT_6 = 26
};

/// Constant 'MOTOR_ARM_RIGHT_7'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_ARM_RIGHT_7 = 27
};

/// Constant 'MOTOR_WAIST_1'.
/**
  * body (including waist) 30 + id
 */
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_WAIST_1 = 31
};

/// Constant 'MOTOR_WAIST_2'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_WAIST_2 = 32
};

/// Constant 'MOTOR_WAIST_3'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_WAIST_3 = 33
};

/// Constant 'MOTOR_LEG_LEFT_1'.
/**
  * 40 rfu
  * leg-left 50 + id
 */
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_LEFT_1 = 51
};

/// Constant 'MOTOR_LEG_LEFT_2'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_LEFT_2 = 52
};

/// Constant 'MOTOR_LEG_LEFT_3'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_LEFT_3 = 53
};

/// Constant 'MOTOR_LEG_LEFT_4'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_LEFT_4 = 54
};

/// Constant 'MOTOR_LEG_LEFT_5'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_LEFT_5 = 55
};

/// Constant 'MOTOR_LEG_LEFT_6'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_LEFT_6 = 56
};

/// Constant 'MOTOR_LEG_RIGHT_1'.
/**
  * leg-right 60 + id
 */
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_RIGHT_1 = 61
};

/// Constant 'MOTOR_LEG_RIGHT_2'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_RIGHT_2 = 62
};

/// Constant 'MOTOR_LEG_RIGHT_3'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_RIGHT_3 = 63
};

/// Constant 'MOTOR_LEG_RIGHT_4'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_RIGHT_4 = 64
};

/// Constant 'MOTOR_LEG_RIGHT_5'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_RIGHT_5 = 65
};

/// Constant 'MOTOR_LEG_RIGHT_6'.
enum
{
  bodyctrl_msgs__msg__MotorName__MOTOR_LEG_RIGHT_6 = 66
};

/// Struct defined in msg/MotorName in the package bodyctrl_msgs.
/**
  * head 00 + id
 */
typedef struct bodyctrl_msgs__msg__MotorName
{
  uint8_t structure_needs_at_least_one_member;
} bodyctrl_msgs__msg__MotorName;

// Struct for a sequence of bodyctrl_msgs__msg__MotorName.
typedef struct bodyctrl_msgs__msg__MotorName__Sequence
{
  bodyctrl_msgs__msg__MotorName * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__MotorName__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_NAME__STRUCT_H_
