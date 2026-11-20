// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from color_detect:srv/SetColor.idl
// generated code does not contain a copyright notice

#ifndef COLOR_DETECT__SRV__DETAIL__SET_COLOR__BUILDER_HPP_
#define COLOR_DETECT__SRV__DETAIL__SET_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "color_detect/srv/detail/set_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace color_detect
{

namespace srv
{

namespace builder
{

class Init_SetColor_Request_color
{
public:
  Init_SetColor_Request_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::color_detect::srv::SetColor_Request color(::color_detect::srv::SetColor_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::color_detect::srv::SetColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::color_detect::srv::SetColor_Request>()
{
  return color_detect::srv::builder::Init_SetColor_Request_color();
}

}  // namespace color_detect


namespace color_detect
{

namespace srv
{

namespace builder
{

class Init_SetColor_Response_message
{
public:
  explicit Init_SetColor_Response_message(::color_detect::srv::SetColor_Response & msg)
  : msg_(msg)
  {}
  ::color_detect::srv::SetColor_Response message(::color_detect::srv::SetColor_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::color_detect::srv::SetColor_Response msg_;
};

class Init_SetColor_Response_success
{
public:
  Init_SetColor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetColor_Response_message success(::color_detect::srv::SetColor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetColor_Response_message(msg_);
  }

private:
  ::color_detect::srv::SetColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::color_detect::srv::SetColor_Response>()
{
  return color_detect::srv::builder::Init_SetColor_Response_success();
}

}  // namespace color_detect

#endif  // COLOR_DETECT__SRV__DETAIL__SET_COLOR__BUILDER_HPP_
