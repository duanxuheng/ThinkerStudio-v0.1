// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/PowerBoardKeyStatus.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/power_board_key_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `is_estop`
// Member `is_remote_estop`
// Member `is_power_on`
#include "std_msgs/msg/detail/bool__functions.h"

bool
bodyctrl_msgs__msg__PowerBoardKeyStatus__init(bodyctrl_msgs__msg__PowerBoardKeyStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(msg);
    return false;
  }
  // work_time
  // is_estop
  if (!std_msgs__msg__Bool__init(&msg->is_estop)) {
    bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(msg);
    return false;
  }
  // is_remote_estop
  if (!std_msgs__msg__Bool__init(&msg->is_remote_estop)) {
    bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(msg);
    return false;
  }
  // is_power_on
  if (!std_msgs__msg__Bool__init(&msg->is_power_on)) {
    bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(msg);
    return false;
  }
  return true;
}

void
bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(bodyctrl_msgs__msg__PowerBoardKeyStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // work_time
  // is_estop
  std_msgs__msg__Bool__fini(&msg->is_estop);
  // is_remote_estop
  std_msgs__msg__Bool__fini(&msg->is_remote_estop);
  // is_power_on
  std_msgs__msg__Bool__fini(&msg->is_power_on);
}

bool
bodyctrl_msgs__msg__PowerBoardKeyStatus__are_equal(const bodyctrl_msgs__msg__PowerBoardKeyStatus * lhs, const bodyctrl_msgs__msg__PowerBoardKeyStatus * rhs)
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
  // work_time
  if (lhs->work_time != rhs->work_time) {
    return false;
  }
  // is_estop
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->is_estop), &(rhs->is_estop)))
  {
    return false;
  }
  // is_remote_estop
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->is_remote_estop), &(rhs->is_remote_estop)))
  {
    return false;
  }
  // is_power_on
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->is_power_on), &(rhs->is_power_on)))
  {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__PowerBoardKeyStatus__copy(
  const bodyctrl_msgs__msg__PowerBoardKeyStatus * input,
  bodyctrl_msgs__msg__PowerBoardKeyStatus * output)
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
  // work_time
  output->work_time = input->work_time;
  // is_estop
  if (!std_msgs__msg__Bool__copy(
      &(input->is_estop), &(output->is_estop)))
  {
    return false;
  }
  // is_remote_estop
  if (!std_msgs__msg__Bool__copy(
      &(input->is_remote_estop), &(output->is_remote_estop)))
  {
    return false;
  }
  // is_power_on
  if (!std_msgs__msg__Bool__copy(
      &(input->is_power_on), &(output->is_power_on)))
  {
    return false;
  }
  return true;
}

bodyctrl_msgs__msg__PowerBoardKeyStatus *
bodyctrl_msgs__msg__PowerBoardKeyStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__PowerBoardKeyStatus * msg = (bodyctrl_msgs__msg__PowerBoardKeyStatus *)allocator.allocate(sizeof(bodyctrl_msgs__msg__PowerBoardKeyStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__PowerBoardKeyStatus));
  bool success = bodyctrl_msgs__msg__PowerBoardKeyStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__PowerBoardKeyStatus__destroy(bodyctrl_msgs__msg__PowerBoardKeyStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence__init(bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__PowerBoardKeyStatus * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__PowerBoardKeyStatus *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__PowerBoardKeyStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__PowerBoardKeyStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence__fini(bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence * array)
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
      bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(&array->data[i]);
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

bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence *
bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence * array = (bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence__destroy(bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence__are_equal(const bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence * lhs, const bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__PowerBoardKeyStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence__copy(
  const bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence * input,
  bodyctrl_msgs__msg__PowerBoardKeyStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__PowerBoardKeyStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__PowerBoardKeyStatus * data =
      (bodyctrl_msgs__msg__PowerBoardKeyStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__PowerBoardKeyStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__PowerBoardKeyStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__PowerBoardKeyStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
