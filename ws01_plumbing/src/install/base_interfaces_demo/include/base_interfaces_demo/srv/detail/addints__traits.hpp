// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:srv/Addints.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__ADDINTS__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__ADDINTS__TRAITS_HPP_

#include "base_interfaces_demo/srv/detail/addints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::Addints_Request>()
{
  return "base_interfaces_demo::srv::Addints_Request";
}

template<>
inline const char * name<base_interfaces_demo::srv::Addints_Request>()
{
  return "base_interfaces_demo/srv/Addints_Request";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::Addints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::srv::Addints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::srv::Addints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::Addints_Response>()
{
  return "base_interfaces_demo::srv::Addints_Response";
}

template<>
inline const char * name<base_interfaces_demo::srv::Addints_Response>()
{
  return "base_interfaces_demo/srv/Addints_Response";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::Addints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::srv::Addints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::srv::Addints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::Addints>()
{
  return "base_interfaces_demo::srv::Addints";
}

template<>
inline const char * name<base_interfaces_demo::srv::Addints>()
{
  return "base_interfaces_demo/srv/Addints";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::Addints>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces_demo::srv::Addints_Request>::value &&
    has_fixed_size<base_interfaces_demo::srv::Addints_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces_demo::srv::Addints>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces_demo::srv::Addints_Request>::value &&
    has_bounded_size<base_interfaces_demo::srv::Addints_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces_demo::srv::Addints>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces_demo::srv::Addints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces_demo::srv::Addints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__ADDINTS__TRAITS_HPP_
