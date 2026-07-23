// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/PowerBatteryStatus.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/power_battery_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
bodyctrl_msgs__msg__PowerBatteryStatus__init(bodyctrl_msgs__msg__PowerBatteryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    bodyctrl_msgs__msg__PowerBatteryStatus__fini(msg);
    return false;
  }
  // battery_installed
  // battery_working
  // master_battery_voltage
  // master_battery_current
  // master_battery_power
  // little_battery_voltage
  // little_battery_current
  // little_battery_power
  // pg12a
  // pg12b
  // pg12c
  // pg12d
  // pg5cd
  // pg5ab
  // pgrdc2
  // pgrdc1
  // pgheader
  // pgbutton2
  return true;
}

void
bodyctrl_msgs__msg__PowerBatteryStatus__fini(bodyctrl_msgs__msg__PowerBatteryStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // battery_installed
  // battery_working
  // master_battery_voltage
  // master_battery_current
  // master_battery_power
  // little_battery_voltage
  // little_battery_current
  // little_battery_power
  // pg12a
  // pg12b
  // pg12c
  // pg12d
  // pg5cd
  // pg5ab
  // pgrdc2
  // pgrdc1
  // pgheader
  // pgbutton2
}

bool
bodyctrl_msgs__msg__PowerBatteryStatus__are_equal(const bodyctrl_msgs__msg__PowerBatteryStatus * lhs, const bodyctrl_msgs__msg__PowerBatteryStatus * rhs)
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
  // battery_installed
  if (lhs->battery_installed != rhs->battery_installed) {
    return false;
  }
  // battery_working
  if (lhs->battery_working != rhs->battery_working) {
    return false;
  }
  // master_battery_voltage
  if (lhs->master_battery_voltage != rhs->master_battery_voltage) {
    return false;
  }
  // master_battery_current
  if (lhs->master_battery_current != rhs->master_battery_current) {
    return false;
  }
  // master_battery_power
  if (lhs->master_battery_power != rhs->master_battery_power) {
    return false;
  }
  // little_battery_voltage
  if (lhs->little_battery_voltage != rhs->little_battery_voltage) {
    return false;
  }
  // little_battery_current
  if (lhs->little_battery_current != rhs->little_battery_current) {
    return false;
  }
  // little_battery_power
  if (lhs->little_battery_power != rhs->little_battery_power) {
    return false;
  }
  // pg12a
  if (lhs->pg12a != rhs->pg12a) {
    return false;
  }
  // pg12b
  if (lhs->pg12b != rhs->pg12b) {
    return false;
  }
  // pg12c
  if (lhs->pg12c != rhs->pg12c) {
    return false;
  }
  // pg12d
  if (lhs->pg12d != rhs->pg12d) {
    return false;
  }
  // pg5cd
  if (lhs->pg5cd != rhs->pg5cd) {
    return false;
  }
  // pg5ab
  if (lhs->pg5ab != rhs->pg5ab) {
    return false;
  }
  // pgrdc2
  if (lhs->pgrdc2 != rhs->pgrdc2) {
    return false;
  }
  // pgrdc1
  if (lhs->pgrdc1 != rhs->pgrdc1) {
    return false;
  }
  // pgheader
  if (lhs->pgheader != rhs->pgheader) {
    return false;
  }
  // pgbutton2
  if (lhs->pgbutton2 != rhs->pgbutton2) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__PowerBatteryStatus__copy(
  const bodyctrl_msgs__msg__PowerBatteryStatus * input,
  bodyctrl_msgs__msg__PowerBatteryStatus * output)
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
  // battery_installed
  output->battery_installed = input->battery_installed;
  // battery_working
  output->battery_working = input->battery_working;
  // master_battery_voltage
  output->master_battery_voltage = input->master_battery_voltage;
  // master_battery_current
  output->master_battery_current = input->master_battery_current;
  // master_battery_power
  output->master_battery_power = input->master_battery_power;
  // little_battery_voltage
  output->little_battery_voltage = input->little_battery_voltage;
  // little_battery_current
  output->little_battery_current = input->little_battery_current;
  // little_battery_power
  output->little_battery_power = input->little_battery_power;
  // pg12a
  output->pg12a = input->pg12a;
  // pg12b
  output->pg12b = input->pg12b;
  // pg12c
  output->pg12c = input->pg12c;
  // pg12d
  output->pg12d = input->pg12d;
  // pg5cd
  output->pg5cd = input->pg5cd;
  // pg5ab
  output->pg5ab = input->pg5ab;
  // pgrdc2
  output->pgrdc2 = input->pgrdc2;
  // pgrdc1
  output->pgrdc1 = input->pgrdc1;
  // pgheader
  output->pgheader = input->pgheader;
  // pgbutton2
  output->pgbutton2 = input->pgbutton2;
  return true;
}

bodyctrl_msgs__msg__PowerBatteryStatus *
bodyctrl_msgs__msg__PowerBatteryStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__PowerBatteryStatus * msg = (bodyctrl_msgs__msg__PowerBatteryStatus *)allocator.allocate(sizeof(bodyctrl_msgs__msg__PowerBatteryStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__PowerBatteryStatus));
  bool success = bodyctrl_msgs__msg__PowerBatteryStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__PowerBatteryStatus__destroy(bodyctrl_msgs__msg__PowerBatteryStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__PowerBatteryStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__PowerBatteryStatus__Sequence__init(bodyctrl_msgs__msg__PowerBatteryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__PowerBatteryStatus * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__PowerBatteryStatus *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__PowerBatteryStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__PowerBatteryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__PowerBatteryStatus__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__PowerBatteryStatus__Sequence__fini(bodyctrl_msgs__msg__PowerBatteryStatus__Sequence * array)
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
      bodyctrl_msgs__msg__PowerBatteryStatus__fini(&array->data[i]);
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

bodyctrl_msgs__msg__PowerBatteryStatus__Sequence *
bodyctrl_msgs__msg__PowerBatteryStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__PowerBatteryStatus__Sequence * array = (bodyctrl_msgs__msg__PowerBatteryStatus__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__PowerBatteryStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__PowerBatteryStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__PowerBatteryStatus__Sequence__destroy(bodyctrl_msgs__msg__PowerBatteryStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__PowerBatteryStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__PowerBatteryStatus__Sequence__are_equal(const bodyctrl_msgs__msg__PowerBatteryStatus__Sequence * lhs, const bodyctrl_msgs__msg__PowerBatteryStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__PowerBatteryStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__PowerBatteryStatus__Sequence__copy(
  const bodyctrl_msgs__msg__PowerBatteryStatus__Sequence * input,
  bodyctrl_msgs__msg__PowerBatteryStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__PowerBatteryStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__PowerBatteryStatus * data =
      (bodyctrl_msgs__msg__PowerBatteryStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__PowerBatteryStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__PowerBatteryStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__PowerBatteryStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
