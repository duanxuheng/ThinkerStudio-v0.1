// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/PowerStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__STRUCT_H_

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
// Member 'software_version'
// Member 'hardware_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PowerStatus in the package bodyctrl_msgs.
/**
  * @brief 电源板电压、电流、电量、温度等信息
 */
typedef struct bodyctrl_msgs__msg__PowerStatus
{
  std_msgs__msg__Header header;
  /// temperature information
  /// 腰部MOS温度
  float waist_temp;
  /// 臂A MOS温度
  float arm_a_temp;
  /// 臂B MOS温度
  float arm_b_temp;
  /// 腿A MOS温度
  float leg_a_temp;
  /// 腿B MOS温度
  float leg_b_temp;
  /// 腰部MOS温度最大值
  float waist_temp_max;
  /// 臂A MOS温度最大值
  float arm_a_temp_max;
  /// 臂B MOS温度最大值
  float arm_b_temp_max;
  /// 腿A MOS温度最大值
  float leg_a_temp_max;
  /// 腿B MOS温度最大值
  float leg_b_temp_max;
  /// 腰部MOS温度最小值
  float waist_temp_min;
  /// 臂A MOS温度最小值
  float arm_a_temp_min;
  /// 臂B MOS温度最小值
  float arm_b_temp_min;
  /// 腿A MOS温度最小值
  float leg_a_temp_min;
  /// 腿B MOS温度最小值
  float leg_b_temp_min;
  /// current information
  /// 臂A电流
  float arm_a_curr;
  /// 臂B电流
  float arm_b_curr;
  /// 腿A电流
  float leg_a_curr;
  /// 腿B电流
  float leg_b_curr;
  /// 腰部电流
  float waist_curr;
  /// 头部电流
  float head_curr;
  /// 臂A电流最大值
  float arm_a_curr_max;
  /// 臂B电流最大值
  float arm_b_curr_max;
  /// 腿A电流最大值
  float leg_a_curr_max;
  /// 腿B电流最大值
  float leg_b_curr_max;
  /// 腰部电流最大值
  float waist_curr_max;
  /// 头部电流最大值
  float head_curr_max;
  /// 臂A电流最小值
  float arm_a_curr_min;
  /// 臂B电流最小值
  float arm_b_curr_min;
  /// 腿A电流最小值
  float leg_a_curr_min;
  /// 腿B电流最小值
  float leg_b_curr_min;
  /// 腰部电流最小值
  float waist_curr_min;
  /// 头部电流最小值
  float head_curr_min;
  /// 臂A电压
  float arm_a_volt;
  /// 臂B电压
  float arm_b_volt;
  /// 腿A电压
  float leg_a_volt;
  /// 腿B电压
  float leg_b_volt;
  /// 腰部电压
  float waist_volt;
  /// 母线电压
  float bus_volt;
  /// 臂A电压最大值
  float arm_a_volt_max;
  /// 臂B电压最大值
  float arm_b_volt_max;
  /// 腿A电压最大值
  float leg_a_volt_max;
  /// 腿B电压最大值
  float leg_b_volt_max;
  /// 腰部电压最大值
  float waist_volt_max;
  /// 母线电压最大值
  float bus_volt_max;
  /// 臂A电压最小值
  float arm_a_volt_min;
  /// 臂B电压最小值
  float arm_b_volt_min;
  /// 腿A电压最小值
  float leg_a_volt_min;
  /// 腿B电压最小值
  float leg_b_volt_min;
  /// 腰部电压最小值
  float waist_volt_min;
  /// 母线电压最小值
  float bus_volt_min;
  /// version information
  /// 软件版本
  rosidl_runtime_c__String software_version;
  /// 硬件版本
  rosidl_runtime_c__String hardware_version;
  /// battery status information
  /// 电池电压信息
  float battery_voltage;
  /// 电池电流信息
  float battery_current;
  /// 电池电量
  float battery_power;
} bodyctrl_msgs__msg__PowerStatus;

// Struct for a sequence of bodyctrl_msgs__msg__PowerStatus.
typedef struct bodyctrl_msgs__msg__PowerStatus__Sequence
{
  bodyctrl_msgs__msg__PowerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__PowerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__POWER_STATUS__STRUCT_H_
