// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:srv/PlanJointTraj.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/srv/detail/plan_joint_traj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `arm_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_pos`
// Member `joint_vel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bodyctrl_msgs__srv__PlanJointTraj_Request__init(bodyctrl_msgs__srv__PlanJointTraj_Request * msg)
{
  if (!msg) {
    return false;
  }
  // arm_name
  if (!rosidl_runtime_c__String__init(&msg->arm_name)) {
    bodyctrl_msgs__srv__PlanJointTraj_Request__fini(msg);
    return false;
  }
  // joint_pos
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_pos, 0)) {
    bodyctrl_msgs__srv__PlanJointTraj_Request__fini(msg);
    return false;
  }
  // joint_vel
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_vel, 0)) {
    bodyctrl_msgs__srv__PlanJointTraj_Request__fini(msg);
    return false;
  }
  // vel_percent
  // acc_percent
  // jerk_percent
  // mode
  return true;
}

void
bodyctrl_msgs__srv__PlanJointTraj_Request__fini(bodyctrl_msgs__srv__PlanJointTraj_Request * msg)
{
  if (!msg) {
    return;
  }
  // arm_name
  rosidl_runtime_c__String__fini(&msg->arm_name);
  // joint_pos
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_pos);
  // joint_vel
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_vel);
  // vel_percent
  // acc_percent
  // jerk_percent
  // mode
}

bool
bodyctrl_msgs__srv__PlanJointTraj_Request__are_equal(const bodyctrl_msgs__srv__PlanJointTraj_Request * lhs, const bodyctrl_msgs__srv__PlanJointTraj_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arm_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->arm_name), &(rhs->arm_name)))
  {
    return false;
  }
  // joint_pos
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_pos), &(rhs->joint_pos)))
  {
    return false;
  }
  // joint_vel
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_vel), &(rhs->joint_vel)))
  {
    return false;
  }
  // vel_percent
  if (lhs->vel_percent != rhs->vel_percent) {
    return false;
  }
  // acc_percent
  if (lhs->acc_percent != rhs->acc_percent) {
    return false;
  }
  // jerk_percent
  if (lhs->jerk_percent != rhs->jerk_percent) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__srv__PlanJointTraj_Request__copy(
  const bodyctrl_msgs__srv__PlanJointTraj_Request * input,
  bodyctrl_msgs__srv__PlanJointTraj_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // arm_name
  if (!rosidl_runtime_c__String__copy(
      &(input->arm_name), &(output->arm_name)))
  {
    return false;
  }
  // joint_pos
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_pos), &(output->joint_pos)))
  {
    return false;
  }
  // joint_vel
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_vel), &(output->joint_vel)))
  {
    return false;
  }
  // vel_percent
  output->vel_percent = input->vel_percent;
  // acc_percent
  output->acc_percent = input->acc_percent;
  // jerk_percent
  output->jerk_percent = input->jerk_percent;
  // mode
  output->mode = input->mode;
  return true;
}

bodyctrl_msgs__srv__PlanJointTraj_Request *
bodyctrl_msgs__srv__PlanJointTraj_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__PlanJointTraj_Request * msg = (bodyctrl_msgs__srv__PlanJointTraj_Request *)allocator.allocate(sizeof(bodyctrl_msgs__srv__PlanJointTraj_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__srv__PlanJointTraj_Request));
  bool success = bodyctrl_msgs__srv__PlanJointTraj_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__srv__PlanJointTraj_Request__destroy(bodyctrl_msgs__srv__PlanJointTraj_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__srv__PlanJointTraj_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence__init(bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__PlanJointTraj_Request * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__srv__PlanJointTraj_Request *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__srv__PlanJointTraj_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__srv__PlanJointTraj_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__srv__PlanJointTraj_Request__fini(&data[i - 1]);
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
bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence__fini(bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence * array)
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
      bodyctrl_msgs__srv__PlanJointTraj_Request__fini(&array->data[i]);
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

bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence *
bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence * array = (bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence__destroy(bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence__are_equal(const bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence * lhs, const bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__srv__PlanJointTraj_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence__copy(
  const bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence * input,
  bodyctrl_msgs__srv__PlanJointTraj_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__srv__PlanJointTraj_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__srv__PlanJointTraj_Request * data =
      (bodyctrl_msgs__srv__PlanJointTraj_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__srv__PlanJointTraj_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__srv__PlanJointTraj_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__srv__PlanJointTraj_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
bodyctrl_msgs__srv__PlanJointTraj_Response__init(bodyctrl_msgs__srv__PlanJointTraj_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    bodyctrl_msgs__srv__PlanJointTraj_Response__fini(msg);
    return false;
  }
  return true;
}

void
bodyctrl_msgs__srv__PlanJointTraj_Response__fini(bodyctrl_msgs__srv__PlanJointTraj_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
bodyctrl_msgs__srv__PlanJointTraj_Response__are_equal(const bodyctrl_msgs__srv__PlanJointTraj_Response * lhs, const bodyctrl_msgs__srv__PlanJointTraj_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
bodyctrl_msgs__srv__PlanJointTraj_Response__copy(
  const bodyctrl_msgs__srv__PlanJointTraj_Response * input,
  bodyctrl_msgs__srv__PlanJointTraj_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

bodyctrl_msgs__srv__PlanJointTraj_Response *
bodyctrl_msgs__srv__PlanJointTraj_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__PlanJointTraj_Response * msg = (bodyctrl_msgs__srv__PlanJointTraj_Response *)allocator.allocate(sizeof(bodyctrl_msgs__srv__PlanJointTraj_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__srv__PlanJointTraj_Response));
  bool success = bodyctrl_msgs__srv__PlanJointTraj_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__srv__PlanJointTraj_Response__destroy(bodyctrl_msgs__srv__PlanJointTraj_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__srv__PlanJointTraj_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence__init(bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__PlanJointTraj_Response * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__srv__PlanJointTraj_Response *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__srv__PlanJointTraj_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__srv__PlanJointTraj_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__srv__PlanJointTraj_Response__fini(&data[i - 1]);
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
bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence__fini(bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence * array)
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
      bodyctrl_msgs__srv__PlanJointTraj_Response__fini(&array->data[i]);
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

bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence *
bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence * array = (bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence__destroy(bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence__are_equal(const bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence * lhs, const bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__srv__PlanJointTraj_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence__copy(
  const bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence * input,
  bodyctrl_msgs__srv__PlanJointTraj_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__srv__PlanJointTraj_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__srv__PlanJointTraj_Response * data =
      (bodyctrl_msgs__srv__PlanJointTraj_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__srv__PlanJointTraj_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__srv__PlanJointTraj_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__srv__PlanJointTraj_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
