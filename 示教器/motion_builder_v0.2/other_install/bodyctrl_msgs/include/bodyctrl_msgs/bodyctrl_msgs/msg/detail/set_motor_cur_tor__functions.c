// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/SetMotorCurTor.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/set_motor_cur_tor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bodyctrl_msgs__msg__SetMotorCurTor__init(bodyctrl_msgs__msg__SetMotorCurTor * msg)
{
  if (!msg) {
    return false;
  }
  // name
  // cur_tor
  // ctrl_status
  return true;
}

void
bodyctrl_msgs__msg__SetMotorCurTor__fini(bodyctrl_msgs__msg__SetMotorCurTor * msg)
{
  if (!msg) {
    return;
  }
  // name
  // cur_tor
  // ctrl_status
}

bool
bodyctrl_msgs__msg__SetMotorCurTor__are_equal(const bodyctrl_msgs__msg__SetMotorCurTor * lhs, const bodyctrl_msgs__msg__SetMotorCurTor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (lhs->name != rhs->name) {
    return false;
  }
  // cur_tor
  if (lhs->cur_tor != rhs->cur_tor) {
    return false;
  }
  // ctrl_status
  if (lhs->ctrl_status != rhs->ctrl_status) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__SetMotorCurTor__copy(
  const bodyctrl_msgs__msg__SetMotorCurTor * input,
  bodyctrl_msgs__msg__SetMotorCurTor * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  output->name = input->name;
  // cur_tor
  output->cur_tor = input->cur_tor;
  // ctrl_status
  output->ctrl_status = input->ctrl_status;
  return true;
}

bodyctrl_msgs__msg__SetMotorCurTor *
bodyctrl_msgs__msg__SetMotorCurTor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SetMotorCurTor * msg = (bodyctrl_msgs__msg__SetMotorCurTor *)allocator.allocate(sizeof(bodyctrl_msgs__msg__SetMotorCurTor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__SetMotorCurTor));
  bool success = bodyctrl_msgs__msg__SetMotorCurTor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__SetMotorCurTor__destroy(bodyctrl_msgs__msg__SetMotorCurTor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__SetMotorCurTor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__SetMotorCurTor__Sequence__init(bodyctrl_msgs__msg__SetMotorCurTor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SetMotorCurTor * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__SetMotorCurTor *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__SetMotorCurTor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__SetMotorCurTor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__SetMotorCurTor__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__SetMotorCurTor__Sequence__fini(bodyctrl_msgs__msg__SetMotorCurTor__Sequence * array)
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
      bodyctrl_msgs__msg__SetMotorCurTor__fini(&array->data[i]);
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

bodyctrl_msgs__msg__SetMotorCurTor__Sequence *
bodyctrl_msgs__msg__SetMotorCurTor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SetMotorCurTor__Sequence * array = (bodyctrl_msgs__msg__SetMotorCurTor__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__SetMotorCurTor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__SetMotorCurTor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__SetMotorCurTor__Sequence__destroy(bodyctrl_msgs__msg__SetMotorCurTor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__SetMotorCurTor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__SetMotorCurTor__Sequence__are_equal(const bodyctrl_msgs__msg__SetMotorCurTor__Sequence * lhs, const bodyctrl_msgs__msg__SetMotorCurTor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__SetMotorCurTor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__SetMotorCurTor__Sequence__copy(
  const bodyctrl_msgs__msg__SetMotorCurTor__Sequence * input,
  bodyctrl_msgs__msg__SetMotorCurTor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__SetMotorCurTor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__SetMotorCurTor * data =
      (bodyctrl_msgs__msg__SetMotorCurTor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__SetMotorCurTor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__SetMotorCurTor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__SetMotorCurTor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
