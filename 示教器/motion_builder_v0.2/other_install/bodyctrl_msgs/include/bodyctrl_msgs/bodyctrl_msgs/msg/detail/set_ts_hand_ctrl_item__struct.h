// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrlItem.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SetTsHandCtrlItem in the package bodyctrl_msgs.
/**
  * range: 20 ~ 200
 */
typedef struct bodyctrl_msgs__msg__SetTsHandCtrlItem
{
  uint16_t vel;
  /// range: 0 ~ 90
  uint16_t start_angle;
  /// range: 0 ~ 90
  uint16_t max_angle;
} bodyctrl_msgs__msg__SetTsHandCtrlItem;

// Struct for a sequence of bodyctrl_msgs__msg__SetTsHandCtrlItem.
typedef struct bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence
{
  bodyctrl_msgs__msg__SetTsHandCtrlItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL_ITEM__STRUCT_H_
