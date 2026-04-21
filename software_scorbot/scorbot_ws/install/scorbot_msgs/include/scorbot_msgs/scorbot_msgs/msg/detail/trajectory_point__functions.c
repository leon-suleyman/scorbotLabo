// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from scorbot_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "scorbot_msgs/msg/detail/trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
scorbot_msgs__msg__TrajectoryPoint__init(scorbot_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->positions, 0)) {
    scorbot_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
scorbot_msgs__msg__TrajectoryPoint__fini(scorbot_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // positions
  rosidl_runtime_c__int32__Sequence__fini(&msg->positions);
}

bool
scorbot_msgs__msg__TrajectoryPoint__are_equal(const scorbot_msgs__msg__TrajectoryPoint * lhs, const scorbot_msgs__msg__TrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  return true;
}

bool
scorbot_msgs__msg__TrajectoryPoint__copy(
  const scorbot_msgs__msg__TrajectoryPoint * input,
  scorbot_msgs__msg__TrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  return true;
}

scorbot_msgs__msg__TrajectoryPoint *
scorbot_msgs__msg__TrajectoryPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scorbot_msgs__msg__TrajectoryPoint * msg = (scorbot_msgs__msg__TrajectoryPoint *)allocator.allocate(sizeof(scorbot_msgs__msg__TrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scorbot_msgs__msg__TrajectoryPoint));
  bool success = scorbot_msgs__msg__TrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
scorbot_msgs__msg__TrajectoryPoint__destroy(scorbot_msgs__msg__TrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    scorbot_msgs__msg__TrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
scorbot_msgs__msg__TrajectoryPoint__Sequence__init(scorbot_msgs__msg__TrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scorbot_msgs__msg__TrajectoryPoint * data = NULL;

  if (size) {
    data = (scorbot_msgs__msg__TrajectoryPoint *)allocator.zero_allocate(size, sizeof(scorbot_msgs__msg__TrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scorbot_msgs__msg__TrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scorbot_msgs__msg__TrajectoryPoint__fini(&data[i - 1]);
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
scorbot_msgs__msg__TrajectoryPoint__Sequence__fini(scorbot_msgs__msg__TrajectoryPoint__Sequence * array)
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
      scorbot_msgs__msg__TrajectoryPoint__fini(&array->data[i]);
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

scorbot_msgs__msg__TrajectoryPoint__Sequence *
scorbot_msgs__msg__TrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scorbot_msgs__msg__TrajectoryPoint__Sequence * array = (scorbot_msgs__msg__TrajectoryPoint__Sequence *)allocator.allocate(sizeof(scorbot_msgs__msg__TrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = scorbot_msgs__msg__TrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
scorbot_msgs__msg__TrajectoryPoint__Sequence__destroy(scorbot_msgs__msg__TrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    scorbot_msgs__msg__TrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
scorbot_msgs__msg__TrajectoryPoint__Sequence__are_equal(const scorbot_msgs__msg__TrajectoryPoint__Sequence * lhs, const scorbot_msgs__msg__TrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scorbot_msgs__msg__TrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scorbot_msgs__msg__TrajectoryPoint__Sequence__copy(
  const scorbot_msgs__msg__TrajectoryPoint__Sequence * input,
  scorbot_msgs__msg__TrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scorbot_msgs__msg__TrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    scorbot_msgs__msg__TrajectoryPoint * data =
      (scorbot_msgs__msg__TrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scorbot_msgs__msg__TrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          scorbot_msgs__msg__TrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!scorbot_msgs__msg__TrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
