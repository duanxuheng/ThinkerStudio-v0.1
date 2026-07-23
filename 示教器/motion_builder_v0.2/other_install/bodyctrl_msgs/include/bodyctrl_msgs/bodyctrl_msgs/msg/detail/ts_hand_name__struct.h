// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/TsHandName.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_NAME__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TSINGHUA_HAND_LEFT'.
enum
{
  bodyctrl_msgs__msg__TsHandName__TSINGHUA_HAND_LEFT = 1l
};

/// Constant 'TSINGHUA_HAND_RIGHT'.
enum
{
  bodyctrl_msgs__msg__TsHandName__TSINGHUA_HAND_RIGHT = 2l
};

/// Struct defined in msg/TsHandName in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__TsHandName
{
  uint8_t structure_needs_at_least_one_member;
} bodyctrl_msgs__msg__TsHandName;

// Struct for a sequence of bodyctrl_msgs__msg__TsHandName.
typedef struct bodyctrl_msgs__msg__TsHandName__Sequence
{
  bodyctrl_msgs__msg__TsHandName * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__TsHandName__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__TS_HAND_NAME__STRUCT_H_
