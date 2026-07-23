// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:srv/SetAngle.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/srv/detail/set_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
bodyctrl_msgs__srv__SetAngle_Request__init(bodyctrl_msgs__srv__SetAngle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // angle0_ratio
  // angle1_ratio
  // angle2_ratio
  // angle3_ratio
  // angle4_ratio
  // angle5_ratio
  return true;
}

void
bodyctrl_msgs__srv__SetAngle_Request__fini(bodyctrl_msgs__srv__SetAngle_Request * msg)
{
  if (!msg) {
    return;
  }
  // angle0_ratio
  // angle1_ratio
  // angle2_ratio
  // angle3_ratio
  // angle4_ratio
  // angle5_ratio
}

bool
bodyctrl_msgs__srv__SetAngle_Request__are_equal(const bodyctrl_msgs__srv__SetAngle_Request * lhs, const bodyctrl_msgs__srv__SetAngle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle0_ratio
  if (lhs->angle0_ratio != rhs->angle0_ratio) {
    return false;
  }
  // angle1_ratio
  if (lhs->angle1_ratio != rhs->angle1_ratio) {
    return false;
  }
  // angle2_ratio
  if (lhs->angle2_ratio != rhs->angle2_ratio) {
    return false;
  }
  // angle3_ratio
  if (lhs->angle3_ratio != rhs->angle3_ratio) {
    return false;
  }
  // angle4_ratio
  if (lhs->angle4_ratio != rhs->angle4_ratio) {
    return false;
  }
  // angle5_ratio
  if (lhs->angle5_ratio != rhs->angle5_ratio) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__srv__SetAngle_Request__copy(
  const bodyctrl_msgs__srv__SetAngle_Request * input,
  bodyctrl_msgs__srv__SetAngle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // angle0_ratio
  output->angle0_ratio = input->angle0_ratio;
  // angle1_ratio
  output->angle1_ratio = input->angle1_ratio;
  // angle2_ratio
  output->angle2_ratio = input->angle2_ratio;
  // angle3_ratio
  output->angle3_ratio = input->angle3_ratio;
  // angle4_ratio
  output->angle4_ratio = input->angle4_ratio;
  // angle5_ratio
  output->angle5_ratio = input->angle5_ratio;
  return true;
}

bodyctrl_msgs__srv__SetAngle_Request *
bodyctrl_msgs__srv__SetAngle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__SetAngle_Request * msg = (bodyctrl_msgs__srv__SetAngle_Request *)allocator.allocate(sizeof(bodyctrl_msgs__srv__SetAngle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__srv__SetAngle_Request));
  bool success = bodyctrl_msgs__srv__SetAngle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__srv__SetAngle_Request__destroy(bodyctrl_msgs__srv__SetAngle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__srv__SetAngle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__srv__SetAngle_Request__Sequence__init(bodyctrl_msgs__srv__SetAngle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__SetAngle_Request * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__srv__SetAngle_Request *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__srv__SetAngle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__srv__SetAngle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__srv__SetAngle_Request__fini(&data[i - 1]);
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
bodyctrl_msgs__srv__SetAngle_Request__Sequence__fini(bodyctrl_msgs__srv__SetAngle_Request__Sequence * array)
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
      bodyctrl_msgs__srv__SetAngle_Request__fini(&array->data[i]);
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

bodyctrl_msgs__srv__SetAngle_Request__Sequence *
bodyctrl_msgs__srv__SetAngle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__SetAngle_Request__Sequence * array = (bodyctrl_msgs__srv__SetAngle_Request__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__srv__SetAngle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__srv__SetAngle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__srv__SetAngle_Request__Sequence__destroy(bodyctrl_msgs__srv__SetAngle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__srv__SetAngle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__srv__SetAngle_Request__Sequence__are_equal(const bodyctrl_msgs__srv__SetAngle_Request__Sequence * lhs, const bodyctrl_msgs__srv__SetAngle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__srv__SetAngle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__srv__SetAngle_Request__Sequence__copy(
  const bodyctrl_msgs__srv__SetAngle_Request__Sequence * input,
  bodyctrl_msgs__srv__SetAngle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__srv__SetAngle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__srv__SetAngle_Request * data =
      (bodyctrl_msgs__srv__SetAngle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__srv__SetAngle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__srv__SetAngle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__srv__SetAngle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
bodyctrl_msgs__srv__SetAngle_Response__init(bodyctrl_msgs__srv__SetAngle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // angle_accepted
  return true;
}

void
bodyctrl_msgs__srv__SetAngle_Response__fini(bodyctrl_msgs__srv__SetAngle_Response * msg)
{
  if (!msg) {
    return;
  }
  // angle_accepted
}

bool
bodyctrl_msgs__srv__SetAngle_Response__are_equal(const bodyctrl_msgs__srv__SetAngle_Response * lhs, const bodyctrl_msgs__srv__SetAngle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle_accepted
  if (lhs->angle_accepted != rhs->angle_accepted) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__srv__SetAngle_Response__copy(
  const bodyctrl_msgs__srv__SetAngle_Response * input,
  bodyctrl_msgs__srv__SetAngle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // angle_accepted
  output->angle_accepted = input->angle_accepted;
  return true;
}

bodyctrl_msgs__srv__SetAngle_Response *
bodyctrl_msgs__srv__SetAngle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__SetAngle_Response * msg = (bodyctrl_msgs__srv__SetAngle_Response *)allocator.allocate(sizeof(bodyctrl_msgs__srv__SetAngle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__srv__SetAngle_Response));
  bool success = bodyctrl_msgs__srv__SetAngle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__srv__SetAngle_Response__destroy(bodyctrl_msgs__srv__SetAngle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__srv__SetAngle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__srv__SetAngle_Response__Sequence__init(bodyctrl_msgs__srv__SetAngle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__SetAngle_Response * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__srv__SetAngle_Response *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__srv__SetAngle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__srv__SetAngle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__srv__SetAngle_Response__fini(&data[i - 1]);
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
bodyctrl_msgs__srv__SetAngle_Response__Sequence__fini(bodyctrl_msgs__srv__SetAngle_Response__Sequence * array)
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
      bodyctrl_msgs__srv__SetAngle_Response__fini(&array->data[i]);
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

bodyctrl_msgs__srv__SetAngle_Response__Sequence *
bodyctrl_msgs__srv__SetAngle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__SetAngle_Response__Sequence * array = (bodyctrl_msgs__srv__SetAngle_Response__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__srv__SetAngle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__srv__SetAngle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__srv__SetAngle_Response__Sequence__destroy(bodyctrl_msgs__srv__SetAngle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__srv__SetAngle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__srv__SetAngle_Response__Sequence__are_equal(const bodyctrl_msgs__srv__SetAngle_Response__Sequence * lhs, const bodyctrl_msgs__srv__SetAngle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__srv__SetAngle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__srv__SetAngle_Response__Sequence__copy(
  const bodyctrl_msgs__srv__SetAngle_Response__Sequence * input,
  bodyctrl_msgs__srv__SetAngle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__srv__SetAngle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__srv__SetAngle_Response * data =
      (bodyctrl_msgs__srv__SetAngle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__srv__SetAngle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__srv__SetAngle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__srv__SetAngle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
