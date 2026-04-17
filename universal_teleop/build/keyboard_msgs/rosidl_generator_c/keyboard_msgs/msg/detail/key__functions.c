// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from keyboard_msgs:msg/Key.idl
// generated code does not contain a copyright notice
#include "keyboard_msgs/msg/detail/key__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
keyboard_msgs__msg__Key__init(keyboard_msgs__msg__Key * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    keyboard_msgs__msg__Key__fini(msg);
    return false;
  }
  // code
  // modifiers
  return true;
}

void
keyboard_msgs__msg__Key__fini(keyboard_msgs__msg__Key * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // code
  // modifiers
}

bool
keyboard_msgs__msg__Key__are_equal(const keyboard_msgs__msg__Key * lhs, const keyboard_msgs__msg__Key * rhs)
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
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // modifiers
  if (lhs->modifiers != rhs->modifiers) {
    return false;
  }
  return true;
}

bool
keyboard_msgs__msg__Key__copy(
  const keyboard_msgs__msg__Key * input,
  keyboard_msgs__msg__Key * output)
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
  // code
  output->code = input->code;
  // modifiers
  output->modifiers = input->modifiers;
  return true;
}

keyboard_msgs__msg__Key *
keyboard_msgs__msg__Key__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  keyboard_msgs__msg__Key * msg = (keyboard_msgs__msg__Key *)allocator.allocate(sizeof(keyboard_msgs__msg__Key), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(keyboard_msgs__msg__Key));
  bool success = keyboard_msgs__msg__Key__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
keyboard_msgs__msg__Key__destroy(keyboard_msgs__msg__Key * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    keyboard_msgs__msg__Key__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
keyboard_msgs__msg__Key__Sequence__init(keyboard_msgs__msg__Key__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  keyboard_msgs__msg__Key * data = NULL;

  if (size) {
    data = (keyboard_msgs__msg__Key *)allocator.zero_allocate(size, sizeof(keyboard_msgs__msg__Key), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = keyboard_msgs__msg__Key__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        keyboard_msgs__msg__Key__fini(&data[i - 1]);
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
keyboard_msgs__msg__Key__Sequence__fini(keyboard_msgs__msg__Key__Sequence * array)
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
      keyboard_msgs__msg__Key__fini(&array->data[i]);
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

keyboard_msgs__msg__Key__Sequence *
keyboard_msgs__msg__Key__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  keyboard_msgs__msg__Key__Sequence * array = (keyboard_msgs__msg__Key__Sequence *)allocator.allocate(sizeof(keyboard_msgs__msg__Key__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = keyboard_msgs__msg__Key__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
keyboard_msgs__msg__Key__Sequence__destroy(keyboard_msgs__msg__Key__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    keyboard_msgs__msg__Key__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
keyboard_msgs__msg__Key__Sequence__are_equal(const keyboard_msgs__msg__Key__Sequence * lhs, const keyboard_msgs__msg__Key__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!keyboard_msgs__msg__Key__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
keyboard_msgs__msg__Key__Sequence__copy(
  const keyboard_msgs__msg__Key__Sequence * input,
  keyboard_msgs__msg__Key__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(keyboard_msgs__msg__Key);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    keyboard_msgs__msg__Key * data =
      (keyboard_msgs__msg__Key *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!keyboard_msgs__msg__Key__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          keyboard_msgs__msg__Key__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!keyboard_msgs__msg__Key__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
