// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from scorbot_msgs:msg/JointVelocities.idl
// generated code does not contain a copyright notice
#include "scorbot_msgs/msg/detail/joint_velocities__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
scorbot_msgs__msg__JointVelocities__init(scorbot_msgs__msg__JointVelocities * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    scorbot_msgs__msg__JointVelocities__fini(msg);
    return false;
  }
  // joint_velocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_velocities, 0)) {
    scorbot_msgs__msg__JointVelocities__fini(msg);
    return false;
  }
  // scaled_flag
  return true;
}

void
scorbot_msgs__msg__JointVelocities__fini(scorbot_msgs__msg__JointVelocities * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_velocities
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_velocities);
  // scaled_flag
}

bool
scorbot_msgs__msg__JointVelocities__are_equal(const scorbot_msgs__msg__JointVelocities * lhs, const scorbot_msgs__msg__JointVelocities * rhs)
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
  // joint_velocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_velocities), &(rhs->joint_velocities)))
  {
    return false;
  }
  // scaled_flag
  if (lhs->scaled_flag != rhs->scaled_flag) {
    return false;
  }
  return true;
}

bool
scorbot_msgs__msg__JointVelocities__copy(
  const scorbot_msgs__msg__JointVelocities * input,
  scorbot_msgs__msg__JointVelocities * output)
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
  // joint_velocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_velocities), &(output->joint_velocities)))
  {
    return false;
  }
  // scaled_flag
  output->scaled_flag = input->scaled_flag;
  return true;
}

scorbot_msgs__msg__JointVelocities *
scorbot_msgs__msg__JointVelocities__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scorbot_msgs__msg__JointVelocities * msg = (scorbot_msgs__msg__JointVelocities *)allocator.allocate(sizeof(scorbot_msgs__msg__JointVelocities), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scorbot_msgs__msg__JointVelocities));
  bool success = scorbot_msgs__msg__JointVelocities__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
scorbot_msgs__msg__JointVelocities__destroy(scorbot_msgs__msg__JointVelocities * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    scorbot_msgs__msg__JointVelocities__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
scorbot_msgs__msg__JointVelocities__Sequence__init(scorbot_msgs__msg__JointVelocities__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scorbot_msgs__msg__JointVelocities * data = NULL;

  if (size) {
    data = (scorbot_msgs__msg__JointVelocities *)allocator.zero_allocate(size, sizeof(scorbot_msgs__msg__JointVelocities), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scorbot_msgs__msg__JointVelocities__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scorbot_msgs__msg__JointVelocities__fini(&data[i - 1]);
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
scorbot_msgs__msg__JointVelocities__Sequence__fini(scorbot_msgs__msg__JointVelocities__Sequence * array)
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
      scorbot_msgs__msg__JointVelocities__fini(&array->data[i]);
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

scorbot_msgs__msg__JointVelocities__Sequence *
scorbot_msgs__msg__JointVelocities__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scorbot_msgs__msg__JointVelocities__Sequence * array = (scorbot_msgs__msg__JointVelocities__Sequence *)allocator.allocate(sizeof(scorbot_msgs__msg__JointVelocities__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = scorbot_msgs__msg__JointVelocities__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
scorbot_msgs__msg__JointVelocities__Sequence__destroy(scorbot_msgs__msg__JointVelocities__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    scorbot_msgs__msg__JointVelocities__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
scorbot_msgs__msg__JointVelocities__Sequence__are_equal(const scorbot_msgs__msg__JointVelocities__Sequence * lhs, const scorbot_msgs__msg__JointVelocities__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scorbot_msgs__msg__JointVelocities__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scorbot_msgs__msg__JointVelocities__Sequence__copy(
  const scorbot_msgs__msg__JointVelocities__Sequence * input,
  scorbot_msgs__msg__JointVelocities__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scorbot_msgs__msg__JointVelocities);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    scorbot_msgs__msg__JointVelocities * data =
      (scorbot_msgs__msg__JointVelocities *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scorbot_msgs__msg__JointVelocities__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          scorbot_msgs__msg__JointVelocities__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!scorbot_msgs__msg__JointVelocities__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
