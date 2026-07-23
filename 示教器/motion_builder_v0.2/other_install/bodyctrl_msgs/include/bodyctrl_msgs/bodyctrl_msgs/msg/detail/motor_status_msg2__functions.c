// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/MotorStatusMsg2.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/motor_status_msg2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "std_msgs/msg/detail/int32_multi_array__functions.h"
// Member `pos`
// Member `speed`
// Member `current`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
bodyctrl_msgs__msg__MotorStatusMsg2__init(bodyctrl_msgs__msg__MotorStatusMsg2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    bodyctrl_msgs__msg__MotorStatusMsg2__fini(msg);
    return false;
  }
  // name
  if (!std_msgs__msg__Int32MultiArray__init(&msg->name)) {
    bodyctrl_msgs__msg__MotorStatusMsg2__fini(msg);
    return false;
  }
  // pos
  if (!std_msgs__msg__Float32MultiArray__init(&msg->pos)) {
    bodyctrl_msgs__msg__MotorStatusMsg2__fini(msg);
    return false;
  }
  // speed
  if (!std_msgs__msg__Float32MultiArray__init(&msg->speed)) {
    bodyctrl_msgs__msg__MotorStatusMsg2__fini(msg);
    return false;
  }
  // current
  if (!std_msgs__msg__Float32MultiArray__init(&msg->current)) {
    bodyctrl_msgs__msg__MotorStatusMsg2__fini(msg);
    return false;
  }
  return true;
}

void
bodyctrl_msgs__msg__MotorStatusMsg2__fini(bodyctrl_msgs__msg__MotorStatusMsg2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  std_msgs__msg__Int32MultiArray__fini(&msg->name);
  // pos
  std_msgs__msg__Float32MultiArray__fini(&msg->pos);
  // speed
  std_msgs__msg__Float32MultiArray__fini(&msg->speed);
  // current
  std_msgs__msg__Float32MultiArray__fini(&msg->current);
}

bool
bodyctrl_msgs__msg__MotorStatusMsg2__are_equal(const bodyctrl_msgs__msg__MotorStatusMsg2 * lhs, const bodyctrl_msgs__msg__MotorStatusMsg2 * rhs)
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
  // name
  if (!std_msgs__msg__Int32MultiArray__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // pos
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // speed
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // current
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->current), &(rhs->current)))
  {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__MotorStatusMsg2__copy(
  const bodyctrl_msgs__msg__MotorStatusMsg2 * input,
  bodyctrl_msgs__msg__MotorStatusMsg2 * output)
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
  // name
  if (!std_msgs__msg__Int32MultiArray__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // pos
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // speed
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // current
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->current), &(output->current)))
  {
    return false;
  }
  return true;
}

bodyctrl_msgs__msg__MotorStatusMsg2 *
bodyctrl_msgs__msg__MotorStatusMsg2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__MotorStatusMsg2 * msg = (bodyctrl_msgs__msg__MotorStatusMsg2 *)allocator.allocate(sizeof(bodyctrl_msgs__msg__MotorStatusMsg2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__MotorStatusMsg2));
  bool success = bodyctrl_msgs__msg__MotorStatusMsg2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__MotorStatusMsg2__destroy(bodyctrl_msgs__msg__MotorStatusMsg2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__MotorStatusMsg2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__MotorStatusMsg2__Sequence__init(bodyctrl_msgs__msg__MotorStatusMsg2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__MotorStatusMsg2 * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__MotorStatusMsg2 *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__MotorStatusMsg2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__MotorStatusMsg2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__MotorStatusMsg2__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__MotorStatusMsg2__Sequence__fini(bodyctrl_msgs__msg__MotorStatusMsg2__Sequence * array)
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
      bodyctrl_msgs__msg__MotorStatusMsg2__fini(&array->data[i]);
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

bodyctrl_msgs__msg__MotorStatusMsg2__Sequence *
bodyctrl_msgs__msg__MotorStatusMsg2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__MotorStatusMsg2__Sequence * array = (bodyctrl_msgs__msg__MotorStatusMsg2__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__MotorStatusMsg2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__MotorStatusMsg2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__MotorStatusMsg2__Sequence__destroy(bodyctrl_msgs__msg__MotorStatusMsg2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__MotorStatusMsg2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__MotorStatusMsg2__Sequence__are_equal(const bodyctrl_msgs__msg__MotorStatusMsg2__Sequence * lhs, const bodyctrl_msgs__msg__MotorStatusMsg2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__MotorStatusMsg2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__MotorStatusMsg2__Sequence__copy(
  const bodyctrl_msgs__msg__MotorStatusMsg2__Sequence * input,
  bodyctrl_msgs__msg__MotorStatusMsg2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__MotorStatusMsg2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__MotorStatusMsg2 * data =
      (bodyctrl_msgs__msg__MotorStatusMsg2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__MotorStatusMsg2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__MotorStatusMsg2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__MotorStatusMsg2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
