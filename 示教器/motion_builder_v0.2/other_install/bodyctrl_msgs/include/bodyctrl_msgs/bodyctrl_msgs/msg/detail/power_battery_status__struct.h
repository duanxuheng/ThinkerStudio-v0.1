// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/PowerBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__STRUCT_H_

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

/// Struct defined in msg/PowerBatteryStatus in the package bodyctrl_msgs.
/**
  * @brief 电源板电压、电流、电量、温度等信息
 */
typedef struct bodyctrl_msgs__msg__PowerBatteryStatus
{
  std_msgs__msg__Header header;
  /// battery status information
  /// 0x00都不存在，0x01小电池存在，0x02大电池存在，0x03大小电池都存在
  int32_t battery_installed;
  /// 0x01大电池，0x10小电池
  int32_t battery_working;
  /// 电池电压信息
  float master_battery_voltage;
  /// 电池电流信息
  float master_battery_current;
  /// 电池电量
  float master_battery_power;
  /// 小电池电压信息
  float little_battery_voltage;
  /// 小电池电流信息
  float little_battery_current;
  /// 小电池电量
  float little_battery_power;
  /// 00低，01高
  int8_t pg12a;
  /// 00低，01高
  int8_t pg12b;
  /// 00低，01高
  int8_t pg12c;
  /// 00低，01高
  int8_t pg12d;
  /// 00低，01高
  int8_t pg5cd;
  /// 00低，01高
  int8_t pg5ab;
  /// 00低，01高
  int8_t pgrdc2;
  /// 00低，01高
  int8_t pgrdc1;
  /// 00低，01高
  int8_t pgheader;
  /// 00低，01高
  int8_t pgbutton2;
} bodyctrl_msgs__msg__PowerBatteryStatus;

// Struct for a sequence of bodyctrl_msgs__msg__PowerBatteryStatus.
typedef struct bodyctrl_msgs__msg__PowerBatteryStatus__Sequence
{
  bodyctrl_msgs__msg__PowerBatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__PowerBatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_BATTERY_STATUS__STRUCT_H_
