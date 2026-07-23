// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/TsHandStatusMsg.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/ts_hand_status_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
#include "bodyctrl_msgs/msg/detail/ts_hand_status__functions.h"

bool
bodyctrl_msgs__msg__TsHandStatusMsg__init(bodyctrl_msgs__msg__TsHandStatusMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    bodyctrl_msgs__msg__TsHandStatusMsg__fini(msg);
    return false;
  }
  // status
  if (!bodyctrl_msgs__msg__TsHandStatus__Sequence__init(&msg->status, 0)) {
    bodyctrl_msgs__msg__TsHandStatusMsg__fini(msg);
    return false;
  }
  return true;
}

void
bodyctrl_msgs__msg__TsHandStatusMsg__fini(bodyctrl_msgs__msg__TsHandStatusMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  bodyctrl_msgs__msg__TsHandStatus__Sequence__fini(&msg->status);
}

bool
bodyctrl_msgs__msg__TsHandStatusMsg__are_equal(const bodyctrl_msgs__msg__TsHandStatusMsg * lhs, const bodyctrl_msgs__msg__TsHandStatusMsg * rhs)
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
  // status
  if (!bodyctrl_msgs__msg__TsHandStatus__Sequence__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__TsHandStatusMsg__copy(
  const bodyctrl_msgs__msg__TsHandStatusMsg * input,
  bodyctrl_msgs__msg__TsHandStatusMsg * output)
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
  // status
  if (!bodyctrl_msgs__msg__TsHandStatus__Sequence__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

bodyctrl_msgs__msg__TsHandStatusMsg *
bodyctrl_msgs__msg__TsHandStatusMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__TsHandStatusMsg * msg = (bodyctrl_msgs__msg__TsHandStatusMsg *)allocator.allocate(sizeof(bodyctrl_msgs__msg__TsHandStatusMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__TsHandStatusMsg));
  bool success = bodyctrl_msgs__msg__TsHandStatusMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__TsHandStatusMsg__destroy(bodyctrl_msgs__msg__TsHandStatusMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__TsHandStatusMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__TsHandStatusMsg__Sequence__init(bodyctrl_msgs__msg__TsHandStatusMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__TsHandStatusMsg * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__TsHandStatusMsg *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__TsHandStatusMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__TsHandStatusMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__TsHandStatusMsg__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__TsHandStatusMsg__Sequence__fini(bodyctrl_msgs__msg__TsHandStatusMsg__Sequence * array)
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
      bodyctrl_msgs__msg__TsHandStatusMsg__fini(&array->data[i]);
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

bodyctrl_msgs__msg__TsHandStatusMsg__Sequence *
bodyctrl_msgs__msg__TsHandStatusMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__TsHandStatusMsg__Sequence * array = (bodyctrl_msgs__msg__TsHandStatusMsg__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__TsHandStatusMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__TsHandStatusMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__TsHandStatusMsg__Sequence__destroy(bodyctrl_msgs__msg__TsHandStatusMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__TsHandStatusMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__TsHandStatusMsg__Sequence__are_equal(const bodyctrl_msgs__msg__TsHandStatusMsg__Sequence * lhs, const bodyctrl_msgs__msg__TsHandStatusMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__TsHandStatusMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__TsHandStatusMsg__Sequence__copy(
  const bodyctrl_msgs__msg__TsHandStatusMsg__Sequence * input,
  bodyctrl_msgs__msg__TsHandStatusMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__TsHandStatusMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__TsHandStatusMsg * data =
      (bodyctrl_msgs__msg__TsHandStatusMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__TsHandStatusMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__TsHandStatusMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__TsHandStatusMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
