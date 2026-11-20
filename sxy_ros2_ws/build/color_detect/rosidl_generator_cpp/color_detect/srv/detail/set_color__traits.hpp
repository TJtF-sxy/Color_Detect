// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from color_detect:srv/SetColor.idl
// generated code does not contain a copyright notice

#ifndef COLOR_DETECT__SRV__DETAIL__SET_COLOR__TRAITS_HPP_
#define COLOR_DETECT__SRV__DETAIL__SET_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "color_detect/srv/detail/set_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace color_detect
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetColor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace color_detect

namespace rosidl_generator_traits
{

[[deprecated("use color_detect::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const color_detect::srv::SetColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  color_detect::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use color_detect::srv::to_yaml() instead")]]
inline std::string to_yaml(const color_detect::srv::SetColor_Request & msg)
{
  return color_detect::srv::to_yaml(msg);
}

template<>
inline const char * data_type<color_detect::srv::SetColor_Request>()
{
  return "color_detect::srv::SetColor_Request";
}

template<>
inline const char * name<color_detect::srv::SetColor_Request>()
{
  return "color_detect/srv/SetColor_Request";
}

template<>
struct has_fixed_size<color_detect::srv::SetColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<color_detect::srv::SetColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<color_detect::srv::SetColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace color_detect
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetColor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace color_detect

namespace rosidl_generator_traits
{

[[deprecated("use color_detect::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const color_detect::srv::SetColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  color_detect::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use color_detect::srv::to_yaml() instead")]]
inline std::string to_yaml(const color_detect::srv::SetColor_Response & msg)
{
  return color_detect::srv::to_yaml(msg);
}

template<>
inline const char * data_type<color_detect::srv::SetColor_Response>()
{
  return "color_detect::srv::SetColor_Response";
}

template<>
inline const char * name<color_detect::srv::SetColor_Response>()
{
  return "color_detect/srv/SetColor_Response";
}

template<>
struct has_fixed_size<color_detect::srv::SetColor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<color_detect::srv::SetColor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<color_detect::srv::SetColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<color_detect::srv::SetColor>()
{
  return "color_detect::srv::SetColor";
}

template<>
inline const char * name<color_detect::srv::SetColor>()
{
  return "color_detect/srv/SetColor";
}

template<>
struct has_fixed_size<color_detect::srv::SetColor>
  : std::integral_constant<
    bool,
    has_fixed_size<color_detect::srv::SetColor_Request>::value &&
    has_fixed_size<color_detect::srv::SetColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<color_detect::srv::SetColor>
  : std::integral_constant<
    bool,
    has_bounded_size<color_detect::srv::SetColor_Request>::value &&
    has_bounded_size<color_detect::srv::SetColor_Response>::value
  >
{
};

template<>
struct is_service<color_detect::srv::SetColor>
  : std::true_type
{
};

template<>
struct is_service_request<color_detect::srv::SetColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<color_detect::srv::SetColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COLOR_DETECT__SRV__DETAIL__SET_COLOR__TRAITS_HPP_
