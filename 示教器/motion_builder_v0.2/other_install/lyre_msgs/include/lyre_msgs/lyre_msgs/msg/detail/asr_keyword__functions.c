// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lyre_msgs:msg/AsrKeyword.idl
// generated code does not contain a copyright notice
#include "lyre_msgs/msg/detail/asr_keyword__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `keyword`
#include "rosidl_runtime_c/string_functions.h"

bool
lyre_msgs__msg__AsrKeyword__init(lyre_msgs__msg__AsrKeyword * msg)
{
  if (!msg) {
    return false;
  }
  // keyword
  if (!rosidl_runtime_c__String__init(&msg->keyword)) {
    lyre_msgs__msg__AsrKeyword__fini(msg);
    return false;
  }
  // angle
  return true;
}

void
lyre_msgs__msg__AsrKeyword__fini(lyre_msgs__msg__AsrKeyword * msg)
{
  if (!msg) {
    return;
  }
  // keyword
  rosidl_runtime_c__String__fini(&msg->keyword);
  // angle
}

bool
lyre_msgs__msg__AsrKeyword__are_equal(const lyre_msgs__msg__AsrKeyword * lhs, const lyre_msgs__msg__AsrKeyword * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // keyword
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->keyword), &(rhs->keyword)))
  {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
lyre_msgs__msg__AsrKeyword__copy(
  const lyre_msgs__msg__AsrKeyword * input,
  lyre_msgs__msg__AsrKeyword * output)
{
  if (!input || !output) {
    return false;
  }
  // keyword
  if (!rosidl_runtime_c__String__copy(
      &(input->keyword), &(output->keyword)))
  {
    return false;
  }
  // angle
  output->angle = input->angle;
  return true;
}

lyre_msgs__msg__AsrKeyword *
lyre_msgs__msg__AsrKeyword__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lyre_msgs__msg__AsrKeyword * msg = (lyre_msgs__msg__AsrKeyword *)allocator.allocate(sizeof(lyre_msgs__msg__AsrKeyword), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lyre_msgs__msg__AsrKeyword));
  bool success = lyre_msgs__msg__AsrKeyword__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lyre_msgs__msg__AsrKeyword__destroy(lyre_msgs__msg__AsrKeyword * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lyre_msgs__msg__AsrKeyword__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lyre_msgs__msg__AsrKeyword__Sequence__init(lyre_msgs__msg__AsrKeyword__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lyre_msgs__msg__AsrKeyword * data = NULL;

  if (size) {
    data = (lyre_msgs__msg__AsrKeyword *)allocator.zero_allocate(size, sizeof(lyre_msgs__msg__AsrKeyword), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lyre_msgs__msg__AsrKeyword__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lyre_msgs__msg__AsrKeyword__fini(&data[i - 1]);
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
lyre_msgs__msg__AsrKeyword__Sequence__fini(lyre_msgs__msg__AsrKeyword__Sequence * array)
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
      lyre_msgs__msg__AsrKeyword__fini(&array->data[i]);
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

lyre_msgs__msg__AsrKeyword__Sequence *
lyre_msgs__msg__AsrKeyword__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lyre_msgs__msg__AsrKeyword__Sequence * array = (lyre_msgs__msg__AsrKeyword__Sequence *)allocator.allocate(sizeof(lyre_msgs__msg__AsrKeyword__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lyre_msgs__msg__AsrKeyword__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lyre_msgs__msg__AsrKeyword__Sequence__destroy(lyre_msgs__msg__AsrKeyword__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lyre_msgs__msg__AsrKeyword__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lyre_msgs__msg__AsrKeyword__Sequence__are_equal(const lyre_msgs__msg__AsrKeyword__Sequence * lhs, const lyre_msgs__msg__AsrKeyword__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lyre_msgs__msg__AsrKeyword__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lyre_msgs__msg__AsrKeyword__Sequence__copy(
  const lyre_msgs__msg__AsrKeyword__Sequence * input,
  lyre_msgs__msg__AsrKeyword__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lyre_msgs__msg__AsrKeyword);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lyre_msgs__msg__AsrKeyword * data =
      (lyre_msgs__msg__AsrKeyword *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lyre_msgs__msg__AsrKeyword__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lyre_msgs__msg__AsrKeyword__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lyre_msgs__msg__AsrKeyword__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
