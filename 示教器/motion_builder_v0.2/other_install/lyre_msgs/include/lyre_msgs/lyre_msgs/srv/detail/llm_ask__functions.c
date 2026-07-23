// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lyre_msgs:srv/LlmAsk.idl
// generated code does not contain a copyright notice
#include "lyre_msgs/srv/detail/llm_ask__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `id`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
lyre_msgs__srv__LlmAsk_Request__init(lyre_msgs__srv__LlmAsk_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    lyre_msgs__srv__LlmAsk_Request__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    lyre_msgs__srv__LlmAsk_Request__fini(msg);
    return false;
  }
  return true;
}

void
lyre_msgs__srv__LlmAsk_Request__fini(lyre_msgs__srv__LlmAsk_Request * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
}

bool
lyre_msgs__srv__LlmAsk_Request__are_equal(const lyre_msgs__srv__LlmAsk_Request * lhs, const lyre_msgs__srv__LlmAsk_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
lyre_msgs__srv__LlmAsk_Request__copy(
  const lyre_msgs__srv__LlmAsk_Request * input,
  lyre_msgs__srv__LlmAsk_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

lyre_msgs__srv__LlmAsk_Request *
lyre_msgs__srv__LlmAsk_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lyre_msgs__srv__LlmAsk_Request * msg = (lyre_msgs__srv__LlmAsk_Request *)allocator.allocate(sizeof(lyre_msgs__srv__LlmAsk_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lyre_msgs__srv__LlmAsk_Request));
  bool success = lyre_msgs__srv__LlmAsk_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lyre_msgs__srv__LlmAsk_Request__destroy(lyre_msgs__srv__LlmAsk_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lyre_msgs__srv__LlmAsk_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lyre_msgs__srv__LlmAsk_Request__Sequence__init(lyre_msgs__srv__LlmAsk_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lyre_msgs__srv__LlmAsk_Request * data = NULL;

  if (size) {
    data = (lyre_msgs__srv__LlmAsk_Request *)allocator.zero_allocate(size, sizeof(lyre_msgs__srv__LlmAsk_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lyre_msgs__srv__LlmAsk_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lyre_msgs__srv__LlmAsk_Request__fini(&data[i - 1]);
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
lyre_msgs__srv__LlmAsk_Request__Sequence__fini(lyre_msgs__srv__LlmAsk_Request__Sequence * array)
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
      lyre_msgs__srv__LlmAsk_Request__fini(&array->data[i]);
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

lyre_msgs__srv__LlmAsk_Request__Sequence *
lyre_msgs__srv__LlmAsk_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lyre_msgs__srv__LlmAsk_Request__Sequence * array = (lyre_msgs__srv__LlmAsk_Request__Sequence *)allocator.allocate(sizeof(lyre_msgs__srv__LlmAsk_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lyre_msgs__srv__LlmAsk_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lyre_msgs__srv__LlmAsk_Request__Sequence__destroy(lyre_msgs__srv__LlmAsk_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lyre_msgs__srv__LlmAsk_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lyre_msgs__srv__LlmAsk_Request__Sequence__are_equal(const lyre_msgs__srv__LlmAsk_Request__Sequence * lhs, const lyre_msgs__srv__LlmAsk_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lyre_msgs__srv__LlmAsk_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lyre_msgs__srv__LlmAsk_Request__Sequence__copy(
  const lyre_msgs__srv__LlmAsk_Request__Sequence * input,
  lyre_msgs__srv__LlmAsk_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lyre_msgs__srv__LlmAsk_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lyre_msgs__srv__LlmAsk_Request * data =
      (lyre_msgs__srv__LlmAsk_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lyre_msgs__srv__LlmAsk_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lyre_msgs__srv__LlmAsk_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lyre_msgs__srv__LlmAsk_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `sid`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
lyre_msgs__srv__LlmAsk_Response__init(lyre_msgs__srv__LlmAsk_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sid
  if (!rosidl_runtime_c__String__init(&msg->sid)) {
    lyre_msgs__srv__LlmAsk_Response__fini(msg);
    return false;
  }
  // code
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    lyre_msgs__srv__LlmAsk_Response__fini(msg);
    return false;
  }
  return true;
}

void
lyre_msgs__srv__LlmAsk_Response__fini(lyre_msgs__srv__LlmAsk_Response * msg)
{
  if (!msg) {
    return;
  }
  // sid
  rosidl_runtime_c__String__fini(&msg->sid);
  // code
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
lyre_msgs__srv__LlmAsk_Response__are_equal(const lyre_msgs__srv__LlmAsk_Response * lhs, const lyre_msgs__srv__LlmAsk_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sid), &(rhs->sid)))
  {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
lyre_msgs__srv__LlmAsk_Response__copy(
  const lyre_msgs__srv__LlmAsk_Response * input,
  lyre_msgs__srv__LlmAsk_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sid
  if (!rosidl_runtime_c__String__copy(
      &(input->sid), &(output->sid)))
  {
    return false;
  }
  // code
  output->code = input->code;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

lyre_msgs__srv__LlmAsk_Response *
lyre_msgs__srv__LlmAsk_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lyre_msgs__srv__LlmAsk_Response * msg = (lyre_msgs__srv__LlmAsk_Response *)allocator.allocate(sizeof(lyre_msgs__srv__LlmAsk_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lyre_msgs__srv__LlmAsk_Response));
  bool success = lyre_msgs__srv__LlmAsk_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lyre_msgs__srv__LlmAsk_Response__destroy(lyre_msgs__srv__LlmAsk_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lyre_msgs__srv__LlmAsk_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lyre_msgs__srv__LlmAsk_Response__Sequence__init(lyre_msgs__srv__LlmAsk_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lyre_msgs__srv__LlmAsk_Response * data = NULL;

  if (size) {
    data = (lyre_msgs__srv__LlmAsk_Response *)allocator.zero_allocate(size, sizeof(lyre_msgs__srv__LlmAsk_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lyre_msgs__srv__LlmAsk_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lyre_msgs__srv__LlmAsk_Response__fini(&data[i - 1]);
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
lyre_msgs__srv__LlmAsk_Response__Sequence__fini(lyre_msgs__srv__LlmAsk_Response__Sequence * array)
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
      lyre_msgs__srv__LlmAsk_Response__fini(&array->data[i]);
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

lyre_msgs__srv__LlmAsk_Response__Sequence *
lyre_msgs__srv__LlmAsk_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lyre_msgs__srv__LlmAsk_Response__Sequence * array = (lyre_msgs__srv__LlmAsk_Response__Sequence *)allocator.allocate(sizeof(lyre_msgs__srv__LlmAsk_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lyre_msgs__srv__LlmAsk_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lyre_msgs__srv__LlmAsk_Response__Sequence__destroy(lyre_msgs__srv__LlmAsk_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lyre_msgs__srv__LlmAsk_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lyre_msgs__srv__LlmAsk_Response__Sequence__are_equal(const lyre_msgs__srv__LlmAsk_Response__Sequence * lhs, const lyre_msgs__srv__LlmAsk_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lyre_msgs__srv__LlmAsk_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lyre_msgs__srv__LlmAsk_Response__Sequence__copy(
  const lyre_msgs__srv__LlmAsk_Response__Sequence * input,
  lyre_msgs__srv__LlmAsk_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lyre_msgs__srv__LlmAsk_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lyre_msgs__srv__LlmAsk_Response * data =
      (lyre_msgs__srv__LlmAsk_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lyre_msgs__srv__LlmAsk_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lyre_msgs__srv__LlmAsk_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lyre_msgs__srv__LlmAsk_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
