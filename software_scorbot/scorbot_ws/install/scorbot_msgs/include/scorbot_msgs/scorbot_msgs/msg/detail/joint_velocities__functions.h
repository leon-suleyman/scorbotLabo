// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from scorbot_msgs:msg/JointVelocities.idl
// generated code does not contain a copyright notice

#ifndef SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__FUNCTIONS_H_
#define SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "scorbot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "scorbot_msgs/msg/detail/joint_velocities__struct.h"

/// Initialize msg/JointVelocities message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scorbot_msgs__msg__JointVelocities
 * )) before or use
 * scorbot_msgs__msg__JointVelocities__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
bool
scorbot_msgs__msg__JointVelocities__init(scorbot_msgs__msg__JointVelocities * msg);

/// Finalize msg/JointVelocities message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
void
scorbot_msgs__msg__JointVelocities__fini(scorbot_msgs__msg__JointVelocities * msg);

/// Create msg/JointVelocities message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scorbot_msgs__msg__JointVelocities__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
scorbot_msgs__msg__JointVelocities *
scorbot_msgs__msg__JointVelocities__create();

/// Destroy msg/JointVelocities message.
/**
 * It calls
 * scorbot_msgs__msg__JointVelocities__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
void
scorbot_msgs__msg__JointVelocities__destroy(scorbot_msgs__msg__JointVelocities * msg);

/// Check for msg/JointVelocities message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
bool
scorbot_msgs__msg__JointVelocities__are_equal(const scorbot_msgs__msg__JointVelocities * lhs, const scorbot_msgs__msg__JointVelocities * rhs);

/// Copy a msg/JointVelocities message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
bool
scorbot_msgs__msg__JointVelocities__copy(
  const scorbot_msgs__msg__JointVelocities * input,
  scorbot_msgs__msg__JointVelocities * output);

/// Initialize array of msg/JointVelocities messages.
/**
 * It allocates the memory for the number of elements and calls
 * scorbot_msgs__msg__JointVelocities__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
bool
scorbot_msgs__msg__JointVelocities__Sequence__init(scorbot_msgs__msg__JointVelocities__Sequence * array, size_t size);

/// Finalize array of msg/JointVelocities messages.
/**
 * It calls
 * scorbot_msgs__msg__JointVelocities__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
void
scorbot_msgs__msg__JointVelocities__Sequence__fini(scorbot_msgs__msg__JointVelocities__Sequence * array);

/// Create array of msg/JointVelocities messages.
/**
 * It allocates the memory for the array and calls
 * scorbot_msgs__msg__JointVelocities__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
scorbot_msgs__msg__JointVelocities__Sequence *
scorbot_msgs__msg__JointVelocities__Sequence__create(size_t size);

/// Destroy array of msg/JointVelocities messages.
/**
 * It calls
 * scorbot_msgs__msg__JointVelocities__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
void
scorbot_msgs__msg__JointVelocities__Sequence__destroy(scorbot_msgs__msg__JointVelocities__Sequence * array);

/// Check for msg/JointVelocities message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
bool
scorbot_msgs__msg__JointVelocities__Sequence__are_equal(const scorbot_msgs__msg__JointVelocities__Sequence * lhs, const scorbot_msgs__msg__JointVelocities__Sequence * rhs);

/// Copy an array of msg/JointVelocities messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scorbot_msgs
bool
scorbot_msgs__msg__JointVelocities__Sequence__copy(
  const scorbot_msgs__msg__JointVelocities__Sequence * input,
  scorbot_msgs__msg__JointVelocities__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SCORBOT_MSGS__MSG__DETAIL__JOINT_VELOCITIES__FUNCTIONS_H_
