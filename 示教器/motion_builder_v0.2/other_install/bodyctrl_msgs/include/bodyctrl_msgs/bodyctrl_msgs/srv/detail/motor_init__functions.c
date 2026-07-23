// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:srv/MotorInit.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/srv/detail/motor_init__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name_of_net`
#include "rosidl_runtime_c/string_functions.h"

bool
bodyctrl_msgs__srv__MotorInit_Request__init(bodyctrl_msgs__srv__MotorInit_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name_of_net
  if (!rosidl_runtime_c__String__init(&msg->name_of_net)) {
    bodyctrl_msgs__srv__MotorInit_Request__fini(msg);
    return false;
  }
  return true;
}

void
bodyctrl_msgs__srv__MotorInit_Request__fini(bodyctrl_msgs__srv__MotorInit_Request * msg)
{
  if (!msg) {
    return;
  }
  // name_of_net
  rosidl_runtime_c__String__fini(&msg->name_of_net);
}

bool
bodyctrl_msgs__srv__MotorInit_Request__are_equal(const bodyctrl_msgs__srv__MotorInit_Request * lhs, const bodyctrl_msgs__srv__MotorInit_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name_of_net
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name_of_net), &(rhs->name_of_net)))
  {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__srv__MotorInit_Request__copy(
  const bodyctrl_msgs__srv__MotorInit_Request * input,
  bodyctrl_msgs__srv__MotorInit_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name_of_net
  if (!rosidl_runtime_c__String__copy(
      &(input->name_of_net), &(output->name_of_net)))
  {
    return false;
  }
  return true;
}

bodyctrl_msgs__srv__MotorInit_Request *
bodyctrl_msgs__srv__MotorInit_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__MotorInit_Request * msg = (bodyctrl_msgs__srv__MotorInit_Request *)allocator.allocate(sizeof(bodyctrl_msgs__srv__MotorInit_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__srv__MotorInit_Request));
  bool success = bodyctrl_msgs__srv__MotorInit_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__srv__MotorInit_Request__destroy(bodyctrl_msgs__srv__MotorInit_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__srv__MotorInit_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__srv__MotorInit_Request__Sequence__init(bodyctrl_msgs__srv__MotorInit_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__MotorInit_Request * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__srv__MotorInit_Request *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__srv__MotorInit_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__srv__MotorInit_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__srv__MotorInit_Request__fini(&data[i - 1]);
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
bodyctrl_msgs__srv__MotorInit_Request__Sequence__fini(bodyctrl_msgs__srv__MotorInit_Request__Sequence * array)
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
      bodyctrl_msgs__srv__MotorInit_Request__fini(&array->data[i]);
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

bodyctrl_msgs__srv__MotorInit_Request__Sequence *
bodyctrl_msgs__srv__MotorInit_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__MotorInit_Request__Sequence * array = (bodyctrl_msgs__srv__MotorInit_Request__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__srv__MotorInit_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__srv__MotorInit_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__srv__MotorInit_Request__Sequence__destroy(bodyctrl_msgs__srv__MotorInit_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__srv__MotorInit_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__srv__MotorInit_Request__Sequence__are_equal(const bodyctrl_msgs__srv__MotorInit_Request__Sequence * lhs, const bodyctrl_msgs__srv__MotorInit_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__srv__MotorInit_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__srv__MotorInit_Request__Sequence__copy(
  const bodyctrl_msgs__srv__MotorInit_Request__Sequence * input,
  bodyctrl_msgs__srv__MotorInit_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__srv__MotorInit_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__srv__MotorInit_Request * data =
      (bodyctrl_msgs__srv__MotorInit_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__srv__MotorInit_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__srv__MotorInit_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__srv__MotorInit_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
bodyctrl_msgs__srv__MotorInit_Response__init(bodyctrl_msgs__srv__MotorInit_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
bodyctrl_msgs__srv__MotorInit_Response__fini(bodyctrl_msgs__srv__MotorInit_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

bool
bodyctrl_msgs__srv__MotorInit_Response__are_equal(const bodyctrl_msgs__srv__MotorInit_Response * lhs, const bodyctrl_msgs__srv__MotorInit_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ret
  if (lhs->ret != rhs->ret) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__srv__MotorInit_Response__copy(
  const bodyctrl_msgs__srv__MotorInit_Response * input,
  bodyctrl_msgs__srv__MotorInit_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ret
  output->ret = input->ret;
  return true;
}

bodyctrl_msgs__srv__MotorInit_Response *
bodyctrl_msgs__srv__MotorInit_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__MotorInit_Response * msg = (bodyctrl_msgs__srv__MotorInit_Response *)allocator.allocate(sizeof(bodyctrl_msgs__srv__MotorInit_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__srv__MotorInit_Response));
  bool success = bodyctrl_msgs__srv__MotorInit_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__srv__MotorInit_Response__destroy(bodyctrl_msgs__srv__MotorInit_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__srv__MotorInit_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__srv__MotorInit_Response__Sequence__init(bodyctrl_msgs__srv__MotorInit_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__MotorInit_Response * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__srv__MotorInit_Response *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__srv__MotorInit_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__srv__MotorInit_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__srv__MotorInit_Response__fini(&data[i - 1]);
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
bodyctrl_msgs__srv__MotorInit_Response__Sequence__fini(bodyctrl_msgs__srv__MotorInit_Response__Sequence * array)
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
      bodyctrl_msgs__srv__MotorInit_Response__fini(&array->data[i]);
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

bodyctrl_msgs__srv__MotorInit_Response__Sequence *
bodyctrl_msgs__srv__MotorInit_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__MotorInit_Response__Sequence * array = (bodyctrl_msgs__srv__MotorInit_Response__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__srv__MotorInit_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__srv__MotorInit_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__srv__MotorInit_Response__Sequence__destroy(bodyctrl_msgs__srv__MotorInit_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__srv__MotorInit_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__srv__MotorInit_Response__Sequence__are_equal(const bodyctrl_msgs__srv__MotorInit_Response__Sequence * lhs, const bodyctrl_msgs__srv__MotorInit_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__srv__MotorInit_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__srv__MotorInit_Response__Sequence__copy(
  const bodyctrl_msgs__srv__MotorInit_Response__Sequence * input,
  bodyctrl_msgs__srv__MotorInit_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__srv__MotorInit_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__srv__MotorInit_Response * data =
      (bodyctrl_msgs__srv__MotorInit_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__srv__MotorInit_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__srv__MotorInit_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__srv__MotorInit_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
