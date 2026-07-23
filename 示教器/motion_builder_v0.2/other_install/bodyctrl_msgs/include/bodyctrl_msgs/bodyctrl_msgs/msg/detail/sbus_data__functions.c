// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/SbusData.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/sbus_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
bodyctrl_msgs__msg__SbusData__init(bodyctrl_msgs__msg__SbusData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    bodyctrl_msgs__msg__SbusData__fini(msg);
    return false;
  }
  // key_event_new
  // key_event_old
  // button_a
  // button_b
  // button_c
  // button_d
  // button_e
  // button_f
  // button_g
  // button_h
  // x1
  // y1
  // x2
  // y2
  return true;
}

void
bodyctrl_msgs__msg__SbusData__fini(bodyctrl_msgs__msg__SbusData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // key_event_new
  // key_event_old
  // button_a
  // button_b
  // button_c
  // button_d
  // button_e
  // button_f
  // button_g
  // button_h
  // x1
  // y1
  // x2
  // y2
}

bool
bodyctrl_msgs__msg__SbusData__are_equal(const bodyctrl_msgs__msg__SbusData * lhs, const bodyctrl_msgs__msg__SbusData * rhs)
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
  // key_event_new
  if (lhs->key_event_new != rhs->key_event_new) {
    return false;
  }
  // key_event_old
  if (lhs->key_event_old != rhs->key_event_old) {
    return false;
  }
  // button_a
  if (lhs->button_a != rhs->button_a) {
    return false;
  }
  // button_b
  if (lhs->button_b != rhs->button_b) {
    return false;
  }
  // button_c
  if (lhs->button_c != rhs->button_c) {
    return false;
  }
  // button_d
  if (lhs->button_d != rhs->button_d) {
    return false;
  }
  // button_e
  if (lhs->button_e != rhs->button_e) {
    return false;
  }
  // button_f
  if (lhs->button_f != rhs->button_f) {
    return false;
  }
  // button_g
  if (lhs->button_g != rhs->button_g) {
    return false;
  }
  // button_h
  if (lhs->button_h != rhs->button_h) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__SbusData__copy(
  const bodyctrl_msgs__msg__SbusData * input,
  bodyctrl_msgs__msg__SbusData * output)
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
  // key_event_new
  output->key_event_new = input->key_event_new;
  // key_event_old
  output->key_event_old = input->key_event_old;
  // button_a
  output->button_a = input->button_a;
  // button_b
  output->button_b = input->button_b;
  // button_c
  output->button_c = input->button_c;
  // button_d
  output->button_d = input->button_d;
  // button_e
  output->button_e = input->button_e;
  // button_f
  output->button_f = input->button_f;
  // button_g
  output->button_g = input->button_g;
  // button_h
  output->button_h = input->button_h;
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  return true;
}

bodyctrl_msgs__msg__SbusData *
bodyctrl_msgs__msg__SbusData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SbusData * msg = (bodyctrl_msgs__msg__SbusData *)allocator.allocate(sizeof(bodyctrl_msgs__msg__SbusData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__SbusData));
  bool success = bodyctrl_msgs__msg__SbusData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__SbusData__destroy(bodyctrl_msgs__msg__SbusData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__SbusData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__SbusData__Sequence__init(bodyctrl_msgs__msg__SbusData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SbusData * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__SbusData *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__SbusData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__SbusData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__SbusData__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__SbusData__Sequence__fini(bodyctrl_msgs__msg__SbusData__Sequence * array)
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
      bodyctrl_msgs__msg__SbusData__fini(&array->data[i]);
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

bodyctrl_msgs__msg__SbusData__Sequence *
bodyctrl_msgs__msg__SbusData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SbusData__Sequence * array = (bodyctrl_msgs__msg__SbusData__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__SbusData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__SbusData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__SbusData__Sequence__destroy(bodyctrl_msgs__msg__SbusData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__SbusData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__SbusData__Sequence__are_equal(const bodyctrl_msgs__msg__SbusData__Sequence * lhs, const bodyctrl_msgs__msg__SbusData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__SbusData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__SbusData__Sequence__copy(
  const bodyctrl_msgs__msg__SbusData__Sequence * input,
  bodyctrl_msgs__msg__SbusData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__SbusData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__SbusData * data =
      (bodyctrl_msgs__msg__SbusData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__SbusData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__SbusData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__SbusData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
