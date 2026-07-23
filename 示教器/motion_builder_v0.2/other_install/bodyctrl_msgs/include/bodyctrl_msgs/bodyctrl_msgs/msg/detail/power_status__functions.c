// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/PowerStatus.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/power_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `software_version`
// Member `hardware_version`
#include "rosidl_runtime_c/string_functions.h"

bool
bodyctrl_msgs__msg__PowerStatus__init(bodyctrl_msgs__msg__PowerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    bodyctrl_msgs__msg__PowerStatus__fini(msg);
    return false;
  }
  // waist_temp
  // arm_a_temp
  // arm_b_temp
  // leg_a_temp
  // leg_b_temp
  // waist_temp_max
  // arm_a_temp_max
  // arm_b_temp_max
  // leg_a_temp_max
  // leg_b_temp_max
  // waist_temp_min
  // arm_a_temp_min
  // arm_b_temp_min
  // leg_a_temp_min
  // leg_b_temp_min
  // arm_a_curr
  // arm_b_curr
  // leg_a_curr
  // leg_b_curr
  // waist_curr
  // head_curr
  // arm_a_curr_max
  // arm_b_curr_max
  // leg_a_curr_max
  // leg_b_curr_max
  // waist_curr_max
  // head_curr_max
  // arm_a_curr_min
  // arm_b_curr_min
  // leg_a_curr_min
  // leg_b_curr_min
  // waist_curr_min
  // head_curr_min
  // arm_a_volt
  // arm_b_volt
  // leg_a_volt
  // leg_b_volt
  // waist_volt
  // bus_volt
  // arm_a_volt_max
  // arm_b_volt_max
  // leg_a_volt_max
  // leg_b_volt_max
  // waist_volt_max
  // bus_volt_max
  // arm_a_volt_min
  // arm_b_volt_min
  // leg_a_volt_min
  // leg_b_volt_min
  // waist_volt_min
  // bus_volt_min
  // software_version
  if (!rosidl_runtime_c__String__init(&msg->software_version)) {
    bodyctrl_msgs__msg__PowerStatus__fini(msg);
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__init(&msg->hardware_version)) {
    bodyctrl_msgs__msg__PowerStatus__fini(msg);
    return false;
  }
  // battery_voltage
  // battery_current
  // battery_power
  return true;
}

void
bodyctrl_msgs__msg__PowerStatus__fini(bodyctrl_msgs__msg__PowerStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // waist_temp
  // arm_a_temp
  // arm_b_temp
  // leg_a_temp
  // leg_b_temp
  // waist_temp_max
  // arm_a_temp_max
  // arm_b_temp_max
  // leg_a_temp_max
  // leg_b_temp_max
  // waist_temp_min
  // arm_a_temp_min
  // arm_b_temp_min
  // leg_a_temp_min
  // leg_b_temp_min
  // arm_a_curr
  // arm_b_curr
  // leg_a_curr
  // leg_b_curr
  // waist_curr
  // head_curr
  // arm_a_curr_max
  // arm_b_curr_max
  // leg_a_curr_max
  // leg_b_curr_max
  // waist_curr_max
  // head_curr_max
  // arm_a_curr_min
  // arm_b_curr_min
  // leg_a_curr_min
  // leg_b_curr_min
  // waist_curr_min
  // head_curr_min
  // arm_a_volt
  // arm_b_volt
  // leg_a_volt
  // leg_b_volt
  // waist_volt
  // bus_volt
  // arm_a_volt_max
  // arm_b_volt_max
  // leg_a_volt_max
  // leg_b_volt_max
  // waist_volt_max
  // bus_volt_max
  // arm_a_volt_min
  // arm_b_volt_min
  // leg_a_volt_min
  // leg_b_volt_min
  // waist_volt_min
  // bus_volt_min
  // software_version
  rosidl_runtime_c__String__fini(&msg->software_version);
  // hardware_version
  rosidl_runtime_c__String__fini(&msg->hardware_version);
  // battery_voltage
  // battery_current
  // battery_power
}

bool
bodyctrl_msgs__msg__PowerStatus__are_equal(const bodyctrl_msgs__msg__PowerStatus * lhs, const bodyctrl_msgs__msg__PowerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // waist_temp
  if (lhs->waist_temp != rhs->waist_temp) {
    return false;
  }
  // arm_a_temp
  if (lhs->arm_a_temp != rhs->arm_a_temp) {
    return false;
  }
  // arm_b_temp
  if (lhs->arm_b_temp != rhs->arm_b_temp) {
    return false;
  }
  // leg_a_temp
  if (lhs->leg_a_temp != rhs->leg_a_temp) {
    return false;
  }
  // leg_b_temp
  if (lhs->leg_b_temp != rhs->leg_b_temp) {
    return false;
  }
  // waist_temp_max
  if (lhs->waist_temp_max != rhs->waist_temp_max) {
    return false;
  }
  // arm_a_temp_max
  if (lhs->arm_a_temp_max != rhs->arm_a_temp_max) {
    return false;
  }
  // arm_b_temp_max
  if (lhs->arm_b_temp_max != rhs->arm_b_temp_max) {
    return false;
  }
  // leg_a_temp_max
  if (lhs->leg_a_temp_max != rhs->leg_a_temp_max) {
    return false;
  }
  // leg_b_temp_max
  if (lhs->leg_b_temp_max != rhs->leg_b_temp_max) {
    return false;
  }
  // waist_temp_min
  if (lhs->waist_temp_min != rhs->waist_temp_min) {
    return false;
  }
  // arm_a_temp_min
  if (lhs->arm_a_temp_min != rhs->arm_a_temp_min) {
    return false;
  }
  // arm_b_temp_min
  if (lhs->arm_b_temp_min != rhs->arm_b_temp_min) {
    return false;
  }
  // leg_a_temp_min
  if (lhs->leg_a_temp_min != rhs->leg_a_temp_min) {
    return false;
  }
  // leg_b_temp_min
  if (lhs->leg_b_temp_min != rhs->leg_b_temp_min) {
    return false;
  }
  // arm_a_curr
  if (lhs->arm_a_curr != rhs->arm_a_curr) {
    return false;
  }
  // arm_b_curr
  if (lhs->arm_b_curr != rhs->arm_b_curr) {
    return false;
  }
  // leg_a_curr
  if (lhs->leg_a_curr != rhs->leg_a_curr) {
    return false;
  }
  // leg_b_curr
  if (lhs->leg_b_curr != rhs->leg_b_curr) {
    return false;
  }
  // waist_curr
  if (lhs->waist_curr != rhs->waist_curr) {
    return false;
  }
  // head_curr
  if (lhs->head_curr != rhs->head_curr) {
    return false;
  }
  // arm_a_curr_max
  if (lhs->arm_a_curr_max != rhs->arm_a_curr_max) {
    return false;
  }
  // arm_b_curr_max
  if (lhs->arm_b_curr_max != rhs->arm_b_curr_max) {
    return false;
  }
  // leg_a_curr_max
  if (lhs->leg_a_curr_max != rhs->leg_a_curr_max) {
    return false;
  }
  // leg_b_curr_max
  if (lhs->leg_b_curr_max != rhs->leg_b_curr_max) {
    return false;
  }
  // waist_curr_max
  if (lhs->waist_curr_max != rhs->waist_curr_max) {
    return false;
  }
  // head_curr_max
  if (lhs->head_curr_max != rhs->head_curr_max) {
    return false;
  }
  // arm_a_curr_min
  if (lhs->arm_a_curr_min != rhs->arm_a_curr_min) {
    return false;
  }
  // arm_b_curr_min
  if (lhs->arm_b_curr_min != rhs->arm_b_curr_min) {
    return false;
  }
  // leg_a_curr_min
  if (lhs->leg_a_curr_min != rhs->leg_a_curr_min) {
    return false;
  }
  // leg_b_curr_min
  if (lhs->leg_b_curr_min != rhs->leg_b_curr_min) {
    return false;
  }
  // waist_curr_min
  if (lhs->waist_curr_min != rhs->waist_curr_min) {
    return false;
  }
  // head_curr_min
  if (lhs->head_curr_min != rhs->head_curr_min) {
    return false;
  }
  // arm_a_volt
  if (lhs->arm_a_volt != rhs->arm_a_volt) {
    return false;
  }
  // arm_b_volt
  if (lhs->arm_b_volt != rhs->arm_b_volt) {
    return false;
  }
  // leg_a_volt
  if (lhs->leg_a_volt != rhs->leg_a_volt) {
    return false;
  }
  // leg_b_volt
  if (lhs->leg_b_volt != rhs->leg_b_volt) {
    return false;
  }
  // waist_volt
  if (lhs->waist_volt != rhs->waist_volt) {
    return false;
  }
  // bus_volt
  if (lhs->bus_volt != rhs->bus_volt) {
    return false;
  }
  // arm_a_volt_max
  if (lhs->arm_a_volt_max != rhs->arm_a_volt_max) {
    return false;
  }
  // arm_b_volt_max
  if (lhs->arm_b_volt_max != rhs->arm_b_volt_max) {
    return false;
  }
  // leg_a_volt_max
  if (lhs->leg_a_volt_max != rhs->leg_a_volt_max) {
    return false;
  }
  // leg_b_volt_max
  if (lhs->leg_b_volt_max != rhs->leg_b_volt_max) {
    return false;
  }
  // waist_volt_max
  if (lhs->waist_volt_max != rhs->waist_volt_max) {
    return false;
  }
  // bus_volt_max
  if (lhs->bus_volt_max != rhs->bus_volt_max) {
    return false;
  }
  // arm_a_volt_min
  if (lhs->arm_a_volt_min != rhs->arm_a_volt_min) {
    return false;
  }
  // arm_b_volt_min
  if (lhs->arm_b_volt_min != rhs->arm_b_volt_min) {
    return false;
  }
  // leg_a_volt_min
  if (lhs->leg_a_volt_min != rhs->leg_a_volt_min) {
    return false;
  }
  // leg_b_volt_min
  if (lhs->leg_b_volt_min != rhs->leg_b_volt_min) {
    return false;
  }
  // waist_volt_min
  if (lhs->waist_volt_min != rhs->waist_volt_min) {
    return false;
  }
  // bus_volt_min
  if (lhs->bus_volt_min != rhs->bus_volt_min) {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->software_version), &(rhs->software_version)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_version), &(rhs->hardware_version)))
  {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // battery_current
  if (lhs->battery_current != rhs->battery_current) {
    return false;
  }
  // battery_power
  if (lhs->battery_power != rhs->battery_power) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__PowerStatus__copy(
  const bodyctrl_msgs__msg__PowerStatus * input,
  bodyctrl_msgs__msg__PowerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // waist_temp
  output->waist_temp = input->waist_temp;
  // arm_a_temp
  output->arm_a_temp = input->arm_a_temp;
  // arm_b_temp
  output->arm_b_temp = input->arm_b_temp;
  // leg_a_temp
  output->leg_a_temp = input->leg_a_temp;
  // leg_b_temp
  output->leg_b_temp = input->leg_b_temp;
  // waist_temp_max
  output->waist_temp_max = input->waist_temp_max;
  // arm_a_temp_max
  output->arm_a_temp_max = input->arm_a_temp_max;
  // arm_b_temp_max
  output->arm_b_temp_max = input->arm_b_temp_max;
  // leg_a_temp_max
  output->leg_a_temp_max = input->leg_a_temp_max;
  // leg_b_temp_max
  output->leg_b_temp_max = input->leg_b_temp_max;
  // waist_temp_min
  output->waist_temp_min = input->waist_temp_min;
  // arm_a_temp_min
  output->arm_a_temp_min = input->arm_a_temp_min;
  // arm_b_temp_min
  output->arm_b_temp_min = input->arm_b_temp_min;
  // leg_a_temp_min
  output->leg_a_temp_min = input->leg_a_temp_min;
  // leg_b_temp_min
  output->leg_b_temp_min = input->leg_b_temp_min;
  // arm_a_curr
  output->arm_a_curr = input->arm_a_curr;
  // arm_b_curr
  output->arm_b_curr = input->arm_b_curr;
  // leg_a_curr
  output->leg_a_curr = input->leg_a_curr;
  // leg_b_curr
  output->leg_b_curr = input->leg_b_curr;
  // waist_curr
  output->waist_curr = input->waist_curr;
  // head_curr
  output->head_curr = input->head_curr;
  // arm_a_curr_max
  output->arm_a_curr_max = input->arm_a_curr_max;
  // arm_b_curr_max
  output->arm_b_curr_max = input->arm_b_curr_max;
  // leg_a_curr_max
  output->leg_a_curr_max = input->leg_a_curr_max;
  // leg_b_curr_max
  output->leg_b_curr_max = input->leg_b_curr_max;
  // waist_curr_max
  output->waist_curr_max = input->waist_curr_max;
  // head_curr_max
  output->head_curr_max = input->head_curr_max;
  // arm_a_curr_min
  output->arm_a_curr_min = input->arm_a_curr_min;
  // arm_b_curr_min
  output->arm_b_curr_min = input->arm_b_curr_min;
  // leg_a_curr_min
  output->leg_a_curr_min = input->leg_a_curr_min;
  // leg_b_curr_min
  output->leg_b_curr_min = input->leg_b_curr_min;
  // waist_curr_min
  output->waist_curr_min = input->waist_curr_min;
  // head_curr_min
  output->head_curr_min = input->head_curr_min;
  // arm_a_volt
  output->arm_a_volt = input->arm_a_volt;
  // arm_b_volt
  output->arm_b_volt = input->arm_b_volt;
  // leg_a_volt
  output->leg_a_volt = input->leg_a_volt;
  // leg_b_volt
  output->leg_b_volt = input->leg_b_volt;
  // waist_volt
  output->waist_volt = input->waist_volt;
  // bus_volt
  output->bus_volt = input->bus_volt;
  // arm_a_volt_max
  output->arm_a_volt_max = input->arm_a_volt_max;
  // arm_b_volt_max
  output->arm_b_volt_max = input->arm_b_volt_max;
  // leg_a_volt_max
  output->leg_a_volt_max = input->leg_a_volt_max;
  // leg_b_volt_max
  output->leg_b_volt_max = input->leg_b_volt_max;
  // waist_volt_max
  output->waist_volt_max = input->waist_volt_max;
  // bus_volt_max
  output->bus_volt_max = input->bus_volt_max;
  // arm_a_volt_min
  output->arm_a_volt_min = input->arm_a_volt_min;
  // arm_b_volt_min
  output->arm_b_volt_min = input->arm_b_volt_min;
  // leg_a_volt_min
  output->leg_a_volt_min = input->leg_a_volt_min;
  // leg_b_volt_min
  output->leg_b_volt_min = input->leg_b_volt_min;
  // waist_volt_min
  output->waist_volt_min = input->waist_volt_min;
  // bus_volt_min
  output->bus_volt_min = input->bus_volt_min;
  // software_version
  if (!rosidl_runtime_c__String__copy(
      &(input->software_version), &(output->software_version)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_version), &(output->hardware_version)))
  {
    return false;
  }
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // battery_current
  output->battery_current = input->battery_current;
  // battery_power
  output->battery_power = input->battery_power;
  return true;
}

bodyctrl_msgs__msg__PowerStatus *
bodyctrl_msgs__msg__PowerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__PowerStatus * msg = (bodyctrl_msgs__msg__PowerStatus *)allocator.allocate(sizeof(bodyctrl_msgs__msg__PowerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__PowerStatus));
  bool success = bodyctrl_msgs__msg__PowerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__PowerStatus__destroy(bodyctrl_msgs__msg__PowerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__PowerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__PowerStatus__Sequence__init(bodyctrl_msgs__msg__PowerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__PowerStatus * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__PowerStatus *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__PowerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__PowerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__PowerStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bodyctrl_msgs__msg__PowerStatus__Sequence__fini(bodyctrl_msgs__msg__PowerStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bodyctrl_msgs__msg__PowerStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bodyctrl_msgs__msg__PowerStatus__Sequence *
bodyctrl_msgs__msg__PowerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__PowerStatus__Sequence * array = (bodyctrl_msgs__msg__PowerStatus__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__PowerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__PowerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__PowerStatus__Sequence__destroy(bodyctrl_msgs__msg__PowerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__PowerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__PowerStatus__Sequence__are_equal(const bodyctrl_msgs__msg__PowerStatus__Sequence * lhs, const bodyctrl_msgs__msg__PowerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__PowerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__PowerStatus__Sequence__copy(
  const bodyctrl_msgs__msg__PowerStatus__Sequence * input,
  bodyctrl_msgs__msg__PowerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__PowerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__PowerStatus * data =
      (bodyctrl_msgs__msg__PowerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__PowerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__PowerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__PowerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
