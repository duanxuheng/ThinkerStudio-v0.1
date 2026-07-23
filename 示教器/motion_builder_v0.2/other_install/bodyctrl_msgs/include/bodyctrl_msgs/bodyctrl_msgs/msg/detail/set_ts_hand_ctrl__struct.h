// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrl.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rotation'
// Member 'bend'
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__struct.h"
// Member 'threshold'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SetTsHandCtrl in the package bodyctrl_msgs.
/**
  * type TsHandName
 */
typedef struct bodyctrl_msgs__msg__SetTsHandCtrl
{
  int32_t name;
  /// thumb
  bodyctrl_msgs__msg__SetTsHandCtrlItem rotation;
  /// 0 - thumb, 1 - fore, 2 - middle, 3 - ring, 4 - little
  bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence bend;
  /// 0 - thumb, 1 - fore, 2 - middle, 3 - ring, 4 - little
  /// range: 20 ~ 1000
  rosidl_runtime_c__uint16__Sequence threshold;
} bodyctrl_msgs__msg__SetTsHandCtrl;

// Struct for a sequence of bodyctrl_msgs__msg__SetTsHandCtrl.
typedef struct bodyctrl_msgs__msg__SetTsHandCtrl__Sequence
{
  bodyctrl_msgs__msg__SetTsHandCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__SetTsHandCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_TS_HAND_CTRL__STRUCT_H_
