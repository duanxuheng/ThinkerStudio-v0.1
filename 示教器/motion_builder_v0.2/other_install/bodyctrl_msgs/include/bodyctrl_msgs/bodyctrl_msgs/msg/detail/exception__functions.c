// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/Exception.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/exception__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `desc`
// Member `nodename`
#include "rosidl_runtime_c/string_functions.h"

bool
bodyctrl_msgs__msg__Exception__init(bodyctrl_msgs__msg__Exception * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    bodyctrl_msgs__msg__Exception__fini(msg);
    return false;
  }
  // code
  // desc
  if (!rosidl_runtime_c__String__init(&msg->desc)) {
    bodyctrl_msgs__msg__Exception__fini(msg);
    return false;
  }
  // nodename
  if (!rosidl_runtime_c__String__init(&msg->nodename)) {
    bodyctrl_msgs__msg__Exception__fini(msg);
    return false;
  }
  return true;
}

void
bodyctrl_msgs__msg__Exception__fini(bodyctrl_msgs__msg__Exception * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // code
  // desc
  rosidl_runtime_c__String__fini(&msg->desc);
  // nodename
  rosidl_runtime_c__String__fini(&msg->nodename);
}

bool
bodyctrl_msgs__msg__Exception__are_equal(const bodyctrl_msgs__msg__Exception * lhs, const bodyctrl_msgs__msg__Exception * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // desc
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->desc), &(rhs->desc)))
  {
    return false;
  }
  // nodename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nodename), &(rhs->nodename)))
  {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__Exception__copy(
  const bodyctrl_msgs__msg__Exception * input,
  bodyctrl_msgs__msg__Exception * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // code
  output->code = input->code;
  // desc
  if (!rosidl_runtime_c__String__copy(
      &(input->desc), &(output->desc)))
  {
    return false;
  }
  // nodename
  if (!rosidl_runtime_c__String__copy(
      &(input->nodename), &(output->nodename)))
  {
    return false;
  }
  return true;
}

bodyctrl_msgs__msg__Exception *
bodyctrl_msgs__msg__Exception__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__Exception * msg = (bodyctrl_msgs__msg__Exception *)allocator.allocate(sizeof(bodyctrl_msgs__msg__Exception), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__Exception));
  bool success = bodyctrl_msgs__msg__Exception__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__Exception__destroy(bodyctrl_msgs__msg__Exception * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__Exception__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__Exception__Sequence__init(bodyctrl_msgs__msg__Exception__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__Exception * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__Exception *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__Exception), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__Exception__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__Exception__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__Exception__Sequence__fini(bodyctrl_msgs__msg__Exception__Sequence * array)
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
      bodyctrl_msgs__msg__Exception__fini(&array->data[i]);
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

bodyctrl_msgs__msg__Exception__Sequence *
bodyctrl_msgs__msg__Exception__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__Exception__Sequence * array = (bodyctrl_msgs__msg__Exception__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__Exception__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__Exception__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__Exception__Sequence__destroy(bodyctrl_msgs__msg__Exception__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__Exception__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__Exception__Sequence__are_equal(const bodyctrl_msgs__msg__Exception__Sequence * lhs, const bodyctrl_msgs__msg__Exception__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__Exception__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__Exception__Sequence__copy(
  const bodyctrl_msgs__msg__Exception__Sequence * input,
  bodyctrl_msgs__msg__Exception__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__Exception);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__Exception * data =
      (bodyctrl_msgs__msg__Exception *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__Exception__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__Exception__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__Exception__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
