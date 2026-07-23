// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/SetTsHandCtrl.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rotation`
// Member `bend`
#include "bodyctrl_msgs/msg/detail/set_ts_hand_ctrl_item__functions.h"
// Member `threshold`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bodyctrl_msgs__msg__SetTsHandCtrl__init(bodyctrl_msgs__msg__SetTsHandCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // name
  // rotation
  if (!bodyctrl_msgs__msg__SetTsHandCtrlItem__init(&msg->rotation)) {
    bodyctrl_msgs__msg__SetTsHandCtrl__fini(msg);
    return false;
  }
  // bend
  if (!bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence__init(&msg->bend, 0)) {
    bodyctrl_msgs__msg__SetTsHandCtrl__fini(msg);
    return false;
  }
  // threshold
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->threshold, 0)) {
    bodyctrl_msgs__msg__SetTsHandCtrl__fini(msg);
    return false;
  }
  return true;
}

void
bodyctrl_msgs__msg__SetTsHandCtrl__fini(bodyctrl_msgs__msg__SetTsHandCtrl * msg)
{
  if (!msg) {
    return;
  }
  // name
  // rotation
  bodyctrl_msgs__msg__SetTsHandCtrlItem__fini(&msg->rotation);
  // bend
  bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence__fini(&msg->bend);
  // threshold
  rosidl_runtime_c__uint16__Sequence__fini(&msg->threshold);
}

bool
bodyctrl_msgs__msg__SetTsHandCtrl__are_equal(const bodyctrl_msgs__msg__SetTsHandCtrl * lhs, const bodyctrl_msgs__msg__SetTsHandCtrl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (lhs->name != rhs->name) {
    return false;
  }
  // rotation
  if (!bodyctrl_msgs__msg__SetTsHandCtrlItem__are_equal(
      &(lhs->rotation), &(rhs->rotation)))
  {
    return false;
  }
  // bend
  if (!bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence__are_equal(
      &(lhs->bend), &(rhs->bend)))
  {
    return false;
  }
  // threshold
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->threshold), &(rhs->threshold)))
  {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__SetTsHandCtrl__copy(
  const bodyctrl_msgs__msg__SetTsHandCtrl * input,
  bodyctrl_msgs__msg__SetTsHandCtrl * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  output->name = input->name;
  // rotation
  if (!bodyctrl_msgs__msg__SetTsHandCtrlItem__copy(
      &(input->rotation), &(output->rotation)))
  {
    return false;
  }
  // bend
  if (!bodyctrl_msgs__msg__SetTsHandCtrlItem__Sequence__copy(
      &(input->bend), &(output->bend)))
  {
    return false;
  }
  // threshold
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->threshold), &(output->threshold)))
  {
    return false;
  }
  return true;
}

bodyctrl_msgs__msg__SetTsHandCtrl *
bodyctrl_msgs__msg__SetTsHandCtrl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SetTsHandCtrl * msg = (bodyctrl_msgs__msg__SetTsHandCtrl *)allocator.allocate(sizeof(bodyctrl_msgs__msg__SetTsHandCtrl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__SetTsHandCtrl));
  bool success = bodyctrl_msgs__msg__SetTsHandCtrl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__SetTsHandCtrl__destroy(bodyctrl_msgs__msg__SetTsHandCtrl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__SetTsHandCtrl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__SetTsHandCtrl__Sequence__init(bodyctrl_msgs__msg__SetTsHandCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SetTsHandCtrl * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__SetTsHandCtrl *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__SetTsHandCtrl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__SetTsHandCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__SetTsHandCtrl__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__SetTsHandCtrl__Sequence__fini(bodyctrl_msgs__msg__SetTsHandCtrl__Sequence * array)
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
      bodyctrl_msgs__msg__SetTsHandCtrl__fini(&array->data[i]);
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

bodyctrl_msgs__msg__SetTsHandCtrl__Sequence *
bodyctrl_msgs__msg__SetTsHandCtrl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SetTsHandCtrl__Sequence * array = (bodyctrl_msgs__msg__SetTsHandCtrl__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__SetTsHandCtrl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__SetTsHandCtrl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__SetTsHandCtrl__Sequence__destroy(bodyctrl_msgs__msg__SetTsHandCtrl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__SetTsHandCtrl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__SetTsHandCtrl__Sequence__are_equal(const bodyctrl_msgs__msg__SetTsHandCtrl__Sequence * lhs, const bodyctrl_msgs__msg__SetTsHandCtrl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__SetTsHandCtrl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__SetTsHandCtrl__Sequence__copy(
  const bodyctrl_msgs__msg__SetTsHandCtrl__Sequence * input,
  bodyctrl_msgs__msg__SetTsHandCtrl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__SetTsHandCtrl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__SetTsHandCtrl * data =
      (bodyctrl_msgs__msg__SetTsHandCtrl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__SetTsHandCtrl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__SetTsHandCtrl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__SetTsHandCtrl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
