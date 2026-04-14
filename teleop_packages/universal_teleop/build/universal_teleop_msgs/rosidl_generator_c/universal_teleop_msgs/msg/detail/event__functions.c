// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from universal_teleop_msgs:msg/Event.idl
// generated code does not contain a copyright notice
#include "universal_teleop_msgs/msg/detail/event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `event`
#include "rosidl_runtime_c/string_functions.h"

bool
universal_teleop_msgs__msg__Event__init(universal_teleop_msgs__msg__Event * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    universal_teleop_msgs__msg__Event__fini(msg);
    return false;
  }
  // event
  if (!rosidl_runtime_c__String__init(&msg->event)) {
    universal_teleop_msgs__msg__Event__fini(msg);
    return false;
  }
  // state
  return true;
}

void
universal_teleop_msgs__msg__Event__fini(universal_teleop_msgs__msg__Event * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // event
  rosidl_runtime_c__String__fini(&msg->event);
  // state
}

bool
universal_teleop_msgs__msg__Event__are_equal(const universal_teleop_msgs__msg__Event * lhs, const universal_teleop_msgs__msg__Event * rhs)
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
  // event
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->event), &(rhs->event)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
universal_teleop_msgs__msg__Event__copy(
  const universal_teleop_msgs__msg__Event * input,
  universal_teleop_msgs__msg__Event * output)
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
  // event
  if (!rosidl_runtime_c__String__copy(
      &(input->event), &(output->event)))
  {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

universal_teleop_msgs__msg__Event *
universal_teleop_msgs__msg__Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  universal_teleop_msgs__msg__Event * msg = (universal_teleop_msgs__msg__Event *)allocator.allocate(sizeof(universal_teleop_msgs__msg__Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(universal_teleop_msgs__msg__Event));
  bool success = universal_teleop_msgs__msg__Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
universal_teleop_msgs__msg__Event__destroy(universal_teleop_msgs__msg__Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    universal_teleop_msgs__msg__Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
universal_teleop_msgs__msg__Event__Sequence__init(universal_teleop_msgs__msg__Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  universal_teleop_msgs__msg__Event * data = NULL;

  if (size) {
    data = (universal_teleop_msgs__msg__Event *)allocator.zero_allocate(size, sizeof(universal_teleop_msgs__msg__Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = universal_teleop_msgs__msg__Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        universal_teleop_msgs__msg__Event__fini(&data[i - 1]);
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
universal_teleop_msgs__msg__Event__Sequence__fini(universal_teleop_msgs__msg__Event__Sequence * array)
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
      universal_teleop_msgs__msg__Event__fini(&array->data[i]);
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

universal_teleop_msgs__msg__Event__Sequence *
universal_teleop_msgs__msg__Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  universal_teleop_msgs__msg__Event__Sequence * array = (universal_teleop_msgs__msg__Event__Sequence *)allocator.allocate(sizeof(universal_teleop_msgs__msg__Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = universal_teleop_msgs__msg__Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
universal_teleop_msgs__msg__Event__Sequence__destroy(universal_teleop_msgs__msg__Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    universal_teleop_msgs__msg__Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
universal_teleop_msgs__msg__Event__Sequence__are_equal(const universal_teleop_msgs__msg__Event__Sequence * lhs, const universal_teleop_msgs__msg__Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!universal_teleop_msgs__msg__Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
universal_teleop_msgs__msg__Event__Sequence__copy(
  const universal_teleop_msgs__msg__Event__Sequence * input,
  universal_teleop_msgs__msg__Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(universal_teleop_msgs__msg__Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    universal_teleop_msgs__msg__Event * data =
      (universal_teleop_msgs__msg__Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!universal_teleop_msgs__msg__Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          universal_teleop_msgs__msg__Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!universal_teleop_msgs__msg__Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
