// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from keyboard_msgs:msg/Key.idl
// generated code does not contain a copyright notice

#ifndef KEYBOARD_MSGS__MSG__DETAIL__KEY__FUNCTIONS_H_
#define KEYBOARD_MSGS__MSG__DETAIL__KEY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "keyboard_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "keyboard_msgs/msg/detail/key__struct.h"

/// Initialize msg/Key message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * keyboard_msgs__msg__Key
 * )) before or use
 * keyboard_msgs__msg__Key__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
bool
keyboard_msgs__msg__Key__init(keyboard_msgs__msg__Key * msg);

/// Finalize msg/Key message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
void
keyboard_msgs__msg__Key__fini(keyboard_msgs__msg__Key * msg);

/// Create msg/Key message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * keyboard_msgs__msg__Key__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
keyboard_msgs__msg__Key *
keyboard_msgs__msg__Key__create();

/// Destroy msg/Key message.
/**
 * It calls
 * keyboard_msgs__msg__Key__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
void
keyboard_msgs__msg__Key__destroy(keyboard_msgs__msg__Key * msg);

/// Check for msg/Key message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
bool
keyboard_msgs__msg__Key__are_equal(const keyboard_msgs__msg__Key * lhs, const keyboard_msgs__msg__Key * rhs);

/// Copy a msg/Key message.
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
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
bool
keyboard_msgs__msg__Key__copy(
  const keyboard_msgs__msg__Key * input,
  keyboard_msgs__msg__Key * output);

/// Initialize array of msg/Key messages.
/**
 * It allocates the memory for the number of elements and calls
 * keyboard_msgs__msg__Key__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
bool
keyboard_msgs__msg__Key__Sequence__init(keyboard_msgs__msg__Key__Sequence * array, size_t size);

/// Finalize array of msg/Key messages.
/**
 * It calls
 * keyboard_msgs__msg__Key__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
void
keyboard_msgs__msg__Key__Sequence__fini(keyboard_msgs__msg__Key__Sequence * array);

/// Create array of msg/Key messages.
/**
 * It allocates the memory for the array and calls
 * keyboard_msgs__msg__Key__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
keyboard_msgs__msg__Key__Sequence *
keyboard_msgs__msg__Key__Sequence__create(size_t size);

/// Destroy array of msg/Key messages.
/**
 * It calls
 * keyboard_msgs__msg__Key__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
void
keyboard_msgs__msg__Key__Sequence__destroy(keyboard_msgs__msg__Key__Sequence * array);

/// Check for msg/Key message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
bool
keyboard_msgs__msg__Key__Sequence__are_equal(const keyboard_msgs__msg__Key__Sequence * lhs, const keyboard_msgs__msg__Key__Sequence * rhs);

/// Copy an array of msg/Key messages.
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
ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
bool
keyboard_msgs__msg__Key__Sequence__copy(
  const keyboard_msgs__msg__Key__Sequence * input,
  keyboard_msgs__msg__Key__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KEYBOARD_MSGS__MSG__DETAIL__KEY__FUNCTIONS_H_
