// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from color_detect:srv/SetColor.idl
// generated code does not contain a copyright notice

#ifndef COLOR_DETECT__SRV__DETAIL__SET_COLOR__FUNCTIONS_H_
#define COLOR_DETECT__SRV__DETAIL__SET_COLOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "color_detect/msg/rosidl_generator_c__visibility_control.h"

#include "color_detect/srv/detail/set_color__struct.h"

/// Initialize srv/SetColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * color_detect__srv__SetColor_Request
 * )) before or use
 * color_detect__srv__SetColor_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Request__init(color_detect__srv__SetColor_Request * msg);

/// Finalize srv/SetColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
void
color_detect__srv__SetColor_Request__fini(color_detect__srv__SetColor_Request * msg);

/// Create srv/SetColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * color_detect__srv__SetColor_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
color_detect__srv__SetColor_Request *
color_detect__srv__SetColor_Request__create();

/// Destroy srv/SetColor message.
/**
 * It calls
 * color_detect__srv__SetColor_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
void
color_detect__srv__SetColor_Request__destroy(color_detect__srv__SetColor_Request * msg);

/// Check for srv/SetColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Request__are_equal(const color_detect__srv__SetColor_Request * lhs, const color_detect__srv__SetColor_Request * rhs);

/// Copy a srv/SetColor message.
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
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Request__copy(
  const color_detect__srv__SetColor_Request * input,
  color_detect__srv__SetColor_Request * output);

/// Initialize array of srv/SetColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * color_detect__srv__SetColor_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Request__Sequence__init(color_detect__srv__SetColor_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetColor messages.
/**
 * It calls
 * color_detect__srv__SetColor_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
void
color_detect__srv__SetColor_Request__Sequence__fini(color_detect__srv__SetColor_Request__Sequence * array);

/// Create array of srv/SetColor messages.
/**
 * It allocates the memory for the array and calls
 * color_detect__srv__SetColor_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
color_detect__srv__SetColor_Request__Sequence *
color_detect__srv__SetColor_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetColor messages.
/**
 * It calls
 * color_detect__srv__SetColor_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
void
color_detect__srv__SetColor_Request__Sequence__destroy(color_detect__srv__SetColor_Request__Sequence * array);

/// Check for srv/SetColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Request__Sequence__are_equal(const color_detect__srv__SetColor_Request__Sequence * lhs, const color_detect__srv__SetColor_Request__Sequence * rhs);

/// Copy an array of srv/SetColor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Request__Sequence__copy(
  const color_detect__srv__SetColor_Request__Sequence * input,
  color_detect__srv__SetColor_Request__Sequence * output);

/// Initialize srv/SetColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * color_detect__srv__SetColor_Response
 * )) before or use
 * color_detect__srv__SetColor_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Response__init(color_detect__srv__SetColor_Response * msg);

/// Finalize srv/SetColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
void
color_detect__srv__SetColor_Response__fini(color_detect__srv__SetColor_Response * msg);

/// Create srv/SetColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * color_detect__srv__SetColor_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
color_detect__srv__SetColor_Response *
color_detect__srv__SetColor_Response__create();

/// Destroy srv/SetColor message.
/**
 * It calls
 * color_detect__srv__SetColor_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
void
color_detect__srv__SetColor_Response__destroy(color_detect__srv__SetColor_Response * msg);

/// Check for srv/SetColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Response__are_equal(const color_detect__srv__SetColor_Response * lhs, const color_detect__srv__SetColor_Response * rhs);

/// Copy a srv/SetColor message.
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
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Response__copy(
  const color_detect__srv__SetColor_Response * input,
  color_detect__srv__SetColor_Response * output);

/// Initialize array of srv/SetColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * color_detect__srv__SetColor_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Response__Sequence__init(color_detect__srv__SetColor_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetColor messages.
/**
 * It calls
 * color_detect__srv__SetColor_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
void
color_detect__srv__SetColor_Response__Sequence__fini(color_detect__srv__SetColor_Response__Sequence * array);

/// Create array of srv/SetColor messages.
/**
 * It allocates the memory for the array and calls
 * color_detect__srv__SetColor_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
color_detect__srv__SetColor_Response__Sequence *
color_detect__srv__SetColor_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetColor messages.
/**
 * It calls
 * color_detect__srv__SetColor_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
void
color_detect__srv__SetColor_Response__Sequence__destroy(color_detect__srv__SetColor_Response__Sequence * array);

/// Check for srv/SetColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Response__Sequence__are_equal(const color_detect__srv__SetColor_Response__Sequence * lhs, const color_detect__srv__SetColor_Response__Sequence * rhs);

/// Copy an array of srv/SetColor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_color_detect
bool
color_detect__srv__SetColor_Response__Sequence__copy(
  const color_detect__srv__SetColor_Response__Sequence * input,
  color_detect__srv__SetColor_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COLOR_DETECT__SRV__DETAIL__SET_COLOR__FUNCTIONS_H_
