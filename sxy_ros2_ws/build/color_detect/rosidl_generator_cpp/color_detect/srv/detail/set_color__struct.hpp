// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from color_detect:srv/SetColor.idl
// generated code does not contain a copyright notice

#ifndef COLOR_DETECT__SRV__DETAIL__SET_COLOR__STRUCT_HPP_
#define COLOR_DETECT__SRV__DETAIL__SET_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__color_detect__srv__SetColor_Request __attribute__((deprecated))
#else
# define DEPRECATED__color_detect__srv__SetColor_Request __declspec(deprecated)
#endif

namespace color_detect
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetColor_Request_
{
  using Type = SetColor_Request_<ContainerAllocator>;

  explicit SetColor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
    }
  }

  explicit SetColor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
    }
  }

  // field types and members
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    color_detect::srv::SetColor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const color_detect::srv::SetColor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<color_detect::srv::SetColor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<color_detect::srv::SetColor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      color_detect::srv::SetColor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<color_detect::srv::SetColor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      color_detect::srv::SetColor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<color_detect::srv::SetColor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<color_detect::srv::SetColor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<color_detect::srv::SetColor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__color_detect__srv__SetColor_Request
    std::shared_ptr<color_detect::srv::SetColor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__color_detect__srv__SetColor_Request
    std::shared_ptr<color_detect::srv::SetColor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetColor_Request_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetColor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetColor_Request_

// alias to use template instance with default allocator
using SetColor_Request =
  color_detect::srv::SetColor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace color_detect


#ifndef _WIN32
# define DEPRECATED__color_detect__srv__SetColor_Response __attribute__((deprecated))
#else
# define DEPRECATED__color_detect__srv__SetColor_Response __declspec(deprecated)
#endif

namespace color_detect
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetColor_Response_
{
  using Type = SetColor_Response_<ContainerAllocator>;

  explicit SetColor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetColor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    color_detect::srv::SetColor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const color_detect::srv::SetColor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<color_detect::srv::SetColor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<color_detect::srv::SetColor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      color_detect::srv::SetColor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<color_detect::srv::SetColor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      color_detect::srv::SetColor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<color_detect::srv::SetColor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<color_detect::srv::SetColor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<color_detect::srv::SetColor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__color_detect__srv__SetColor_Response
    std::shared_ptr<color_detect::srv::SetColor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__color_detect__srv__SetColor_Response
    std::shared_ptr<color_detect::srv::SetColor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetColor_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetColor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetColor_Response_

// alias to use template instance with default allocator
using SetColor_Response =
  color_detect::srv::SetColor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace color_detect

namespace color_detect
{

namespace srv
{

struct SetColor
{
  using Request = color_detect::srv::SetColor_Request;
  using Response = color_detect::srv::SetColor_Response;
};

}  // namespace srv

}  // namespace color_detect

#endif  // COLOR_DETECT__SRV__DETAIL__SET_COLOR__STRUCT_HPP_
