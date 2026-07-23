// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/MotorCtrl.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/motor_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bodyctrl_msgs__msg__MotorCtrl__init(bodyctrl_msgs__msg__MotorCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // name
  // kp
  // kd
  // pos
  // spd
  // tor
  return true;
}

void
bodyctrl_msgs__msg__MotorCtrl__fini(bodyctrl_msgs__msg__MotorCtrl * msg)
{
  if (!msg) {
    return;
  }
  // name
  // kp
  // kd
  // pos
  // spd
  // tor
}

bool
bodyctrl_msgs__msg__MotorCtrl__are_equal(const bodyctrl_msgs__msg__MotorCtrl * lhs, const bodyctrl_msgs__msg__MotorCtrl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (lhs->name != rhs->name) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  // pos
  if (lhs->pos != rhs->pos) {
    return false;
  }
  // spd
  if (lhs->spd != rhs->spd) {
    return false;
  }
  // tor
  if (lhs->tor != rhs->tor) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__MotorCtrl__copy(
  const bodyctrl_msgs__msg__MotorCtrl * input,
  bodyctrl_msgs__msg__MotorCtrl * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  output->name = input->name;
  // kp
  output->kp = input->kp;
  // kd
  output->kd = input->kd;
  // pos
  output->pos = input->pos;
  // spd
  output->spd = input->spd;
  // tor
  output->tor = input->tor;
  return true;
}

bodyctrl_msgs__msg__MotorCtrl *
bodyctrl_msgs__msg__MotorCtrl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__MotorCtrl * msg = (bodyctrl_msgs__msg__MotorCtrl *)allocator.allocate(sizeof(bodyctrl_msgs__msg__MotorCtrl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__MotorCtrl));
  bool success = bodyctrl_msgs__msg__MotorCtrl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__MotorCtrl__destroy(bodyctrl_msgs__msg__MotorCtrl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__MotorCtrl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__MotorCtrl__Sequence__init(bodyctrl_msgs__msg__MotorCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__MotorCtrl * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__MotorCtrl *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__MotorCtrl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__MotorCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__MotorCtrl__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__MotorCtrl__Sequence__fini(bodyctrl_msgs__msg__MotorCtrl__Sequence * array)
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
      bodyctrl_msgs__msg__MotorCtrl__fini(&array->data[i]);
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

bodyctrl_msgs__msg__MotorCtrl__Sequence *
bodyctrl_msgs__msg__MotorCtrl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__MotorCtrl__Sequence * array = (bodyctrl_msgs__msg__MotorCtrl__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__MotorCtrl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__MotorCtrl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__MotorCtrl__Sequence__destroy(bodyctrl_msgs__msg__MotorCtrl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__MotorCtrl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__MotorCtrl__Sequence__are_equal(const bodyctrl_msgs__msg__MotorCtrl__Sequence * lhs, const bodyctrl_msgs__msg__MotorCtrl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__MotorCtrl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__MotorCtrl__Sequence__copy(
  const bodyctrl_msgs__msg__MotorCtrl__Sequence * input,
  bodyctrl_msgs__msg__MotorCtrl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__MotorCtrl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__MotorCtrl * data =
      (bodyctrl_msgs__msg__MotorCtrl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__MotorCtrl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__MotorCtrl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__MotorCtrl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
