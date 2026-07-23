// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/MotorStatusMsgPlate.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/motor_status_msg_plate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
bodyctrl_msgs__msg__MotorStatusMsgPlate__init(bodyctrl_msgs__msg__MotorStatusMsgPlate * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    bodyctrl_msgs__msg__MotorStatusMsgPlate__fini(msg);
    return false;
  }
  // name1
  // pos1
  // speed1
  // current1
  // name2
  // pos2
  // speed2
  // current2
  // name3
  // pos3
  // speed3
  // current3
  // name4
  // pos4
  // speed4
  // current4
  // name5
  // pos5
  // speed5
  // current5
  // name6
  // pos6
  // speed6
  // current6
  // name7
  // pos7
  // speed7
  // current7
  // name8
  // pos8
  // speed8
  // current8
  // name9
  // pos9
  // speed9
  // current9
  // name10
  // pos10
  // speed10
  // current10
  // name11
  // pos11
  // speed11
  // current11
  // name12
  // pos12
  // speed12
  // current12
  return true;
}

void
bodyctrl_msgs__msg__MotorStatusMsgPlate__fini(bodyctrl_msgs__msg__MotorStatusMsgPlate * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name1
  // pos1
  // speed1
  // current1
  // name2
  // pos2
  // speed2
  // current2
  // name3
  // pos3
  // speed3
  // current3
  // name4
  // pos4
  // speed4
  // current4
  // name5
  // pos5
  // speed5
  // current5
  // name6
  // pos6
  // speed6
  // current6
  // name7
  // pos7
  // speed7
  // current7
  // name8
  // pos8
  // speed8
  // current8
  // name9
  // pos9
  // speed9
  // current9
  // name10
  // pos10
  // speed10
  // current10
  // name11
  // pos11
  // speed11
  // current11
  // name12
  // pos12
  // speed12
  // current12
}

bool
bodyctrl_msgs__msg__MotorStatusMsgPlate__are_equal(const bodyctrl_msgs__msg__MotorStatusMsgPlate * lhs, const bodyctrl_msgs__msg__MotorStatusMsgPlate * rhs)
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
  // name1
  if (lhs->name1 != rhs->name1) {
    return false;
  }
  // pos1
  if (lhs->pos1 != rhs->pos1) {
    return false;
  }
  // speed1
  if (lhs->speed1 != rhs->speed1) {
    return false;
  }
  // current1
  if (lhs->current1 != rhs->current1) {
    return false;
  }
  // name2
  if (lhs->name2 != rhs->name2) {
    return false;
  }
  // pos2
  if (lhs->pos2 != rhs->pos2) {
    return false;
  }
  // speed2
  if (lhs->speed2 != rhs->speed2) {
    return false;
  }
  // current2
  if (lhs->current2 != rhs->current2) {
    return false;
  }
  // name3
  if (lhs->name3 != rhs->name3) {
    return false;
  }
  // pos3
  if (lhs->pos3 != rhs->pos3) {
    return false;
  }
  // speed3
  if (lhs->speed3 != rhs->speed3) {
    return false;
  }
  // current3
  if (lhs->current3 != rhs->current3) {
    return false;
  }
  // name4
  if (lhs->name4 != rhs->name4) {
    return false;
  }
  // pos4
  if (lhs->pos4 != rhs->pos4) {
    return false;
  }
  // speed4
  if (lhs->speed4 != rhs->speed4) {
    return false;
  }
  // current4
  if (lhs->current4 != rhs->current4) {
    return false;
  }
  // name5
  if (lhs->name5 != rhs->name5) {
    return false;
  }
  // pos5
  if (lhs->pos5 != rhs->pos5) {
    return false;
  }
  // speed5
  if (lhs->speed5 != rhs->speed5) {
    return false;
  }
  // current5
  if (lhs->current5 != rhs->current5) {
    return false;
  }
  // name6
  if (lhs->name6 != rhs->name6) {
    return false;
  }
  // pos6
  if (lhs->pos6 != rhs->pos6) {
    return false;
  }
  // speed6
  if (lhs->speed6 != rhs->speed6) {
    return false;
  }
  // current6
  if (lhs->current6 != rhs->current6) {
    return false;
  }
  // name7
  if (lhs->name7 != rhs->name7) {
    return false;
  }
  // pos7
  if (lhs->pos7 != rhs->pos7) {
    return false;
  }
  // speed7
  if (lhs->speed7 != rhs->speed7) {
    return false;
  }
  // current7
  if (lhs->current7 != rhs->current7) {
    return false;
  }
  // name8
  if (lhs->name8 != rhs->name8) {
    return false;
  }
  // pos8
  if (lhs->pos8 != rhs->pos8) {
    return false;
  }
  // speed8
  if (lhs->speed8 != rhs->speed8) {
    return false;
  }
  // current8
  if (lhs->current8 != rhs->current8) {
    return false;
  }
  // name9
  if (lhs->name9 != rhs->name9) {
    return false;
  }
  // pos9
  if (lhs->pos9 != rhs->pos9) {
    return false;
  }
  // speed9
  if (lhs->speed9 != rhs->speed9) {
    return false;
  }
  // current9
  if (lhs->current9 != rhs->current9) {
    return false;
  }
  // name10
  if (lhs->name10 != rhs->name10) {
    return false;
  }
  // pos10
  if (lhs->pos10 != rhs->pos10) {
    return false;
  }
  // speed10
  if (lhs->speed10 != rhs->speed10) {
    return false;
  }
  // current10
  if (lhs->current10 != rhs->current10) {
    return false;
  }
  // name11
  if (lhs->name11 != rhs->name11) {
    return false;
  }
  // pos11
  if (lhs->pos11 != rhs->pos11) {
    return false;
  }
  // speed11
  if (lhs->speed11 != rhs->speed11) {
    return false;
  }
  // current11
  if (lhs->current11 != rhs->current11) {
    return false;
  }
  // name12
  if (lhs->name12 != rhs->name12) {
    return false;
  }
  // pos12
  if (lhs->pos12 != rhs->pos12) {
    return false;
  }
  // speed12
  if (lhs->speed12 != rhs->speed12) {
    return false;
  }
  // current12
  if (lhs->current12 != rhs->current12) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__MotorStatusMsgPlate__copy(
  const bodyctrl_msgs__msg__MotorStatusMsgPlate * input,
  bodyctrl_msgs__msg__MotorStatusMsgPlate * output)
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
  // name1
  output->name1 = input->name1;
  // pos1
  output->pos1 = input->pos1;
  // speed1
  output->speed1 = input->speed1;
  // current1
  output->current1 = input->current1;
  // name2
  output->name2 = input->name2;
  // pos2
  output->pos2 = input->pos2;
  // speed2
  output->speed2 = input->speed2;
  // current2
  output->current2 = input->current2;
  // name3
  output->name3 = input->name3;
  // pos3
  output->pos3 = input->pos3;
  // speed3
  output->speed3 = input->speed3;
  // current3
  output->current3 = input->current3;
  // name4
  output->name4 = input->name4;
  // pos4
  output->pos4 = input->pos4;
  // speed4
  output->speed4 = input->speed4;
  // current4
  output->current4 = input->current4;
  // name5
  output->name5 = input->name5;
  // pos5
  output->pos5 = input->pos5;
  // speed5
  output->speed5 = input->speed5;
  // current5
  output->current5 = input->current5;
  // name6
  output->name6 = input->name6;
  // pos6
  output->pos6 = input->pos6;
  // speed6
  output->speed6 = input->speed6;
  // current6
  output->current6 = input->current6;
  // name7
  output->name7 = input->name7;
  // pos7
  output->pos7 = input->pos7;
  // speed7
  output->speed7 = input->speed7;
  // current7
  output->current7 = input->current7;
  // name8
  output->name8 = input->name8;
  // pos8
  output->pos8 = input->pos8;
  // speed8
  output->speed8 = input->speed8;
  // current8
  output->current8 = input->current8;
  // name9
  output->name9 = input->name9;
  // pos9
  output->pos9 = input->pos9;
  // speed9
  output->speed9 = input->speed9;
  // current9
  output->current9 = input->current9;
  // name10
  output->name10 = input->name10;
  // pos10
  output->pos10 = input->pos10;
  // speed10
  output->speed10 = input->speed10;
  // current10
  output->current10 = input->current10;
  // name11
  output->name11 = input->name11;
  // pos11
  output->pos11 = input->pos11;
  // speed11
  output->speed11 = input->speed11;
  // current11
  output->current11 = input->current11;
  // name12
  output->name12 = input->name12;
  // pos12
  output->pos12 = input->pos12;
  // speed12
  output->speed12 = input->speed12;
  // current12
  output->current12 = input->current12;
  return true;
}

bodyctrl_msgs__msg__MotorStatusMsgPlate *
bodyctrl_msgs__msg__MotorStatusMsgPlate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__MotorStatusMsgPlate * msg = (bodyctrl_msgs__msg__MotorStatusMsgPlate *)allocator.allocate(sizeof(bodyctrl_msgs__msg__MotorStatusMsgPlate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__MotorStatusMsgPlate));
  bool success = bodyctrl_msgs__msg__MotorStatusMsgPlate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__MotorStatusMsgPlate__destroy(bodyctrl_msgs__msg__MotorStatusMsgPlate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__MotorStatusMsgPlate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence__init(bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__MotorStatusMsgPlate * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__MotorStatusMsgPlate *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__MotorStatusMsgPlate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__MotorStatusMsgPlate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__MotorStatusMsgPlate__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence__fini(bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence * array)
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
      bodyctrl_msgs__msg__MotorStatusMsgPlate__fini(&array->data[i]);
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

bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence *
bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence * array = (bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence__destroy(bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence__are_equal(const bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence * lhs, const bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__MotorStatusMsgPlate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence__copy(
  const bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence * input,
  bodyctrl_msgs__msg__MotorStatusMsgPlate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__MotorStatusMsgPlate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__MotorStatusMsgPlate * data =
      (bodyctrl_msgs__msg__MotorStatusMsgPlate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__MotorStatusMsgPlate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__MotorStatusMsgPlate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__MotorStatusMsgPlate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
