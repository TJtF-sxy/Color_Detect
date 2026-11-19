// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from color_detect:srv/SetColor.idl
// generated code does not contain a copyright notice

#ifndef COLOR_DETECT__SRV__DETAIL__SET_COLOR__STRUCT_H_
#define COLOR_DETECT__SRV__DETAIL__SET_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetColor in the package color_detect.
typedef struct color_detect__srv__SetColor_Request
{
  rosidl_runtime_c__String color;
} color_detect__srv__SetColor_Request;

// Struct for a sequence of color_detect__srv__SetColor_Request.
typedef struct color_detect__srv__SetColor_Request__Sequence
{
  color_detect__srv__SetColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} color_detect__srv__SetColor_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetColor in the package color_detect.
typedef struct color_detect__srv__SetColor_Response
{
  bool success;
  rosidl_runtime_c__String message;
} color_detect__srv__SetColor_Response;

// Struct for a sequence of color_detect__srv__SetColor_Response.
typedef struct color_detect__srv__SetColor_Response__Sequence
{
  color_detect__srv__SetColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} color_detect__srv__SetColor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COLOR_DETECT__SRV__DETAIL__SET_COLOR__STRUCT_H_
