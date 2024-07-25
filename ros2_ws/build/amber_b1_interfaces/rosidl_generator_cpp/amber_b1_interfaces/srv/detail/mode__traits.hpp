// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amber_b1_interfaces:srv/Mode.idl
// generated code does not contain a copyright notice

#ifndef AMBER_B1_INTERFACES__SRV__DETAIL__MODE__TRAITS_HPP_
#define AMBER_B1_INTERFACES__SRV__DETAIL__MODE__TRAITS_HPP_

#include "amber_b1_interfaces/srv/detail/mode__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<amber_b1_interfaces::srv::Mode_Request>()
{
  return "amber_b1_interfaces::srv::Mode_Request";
}

template<>
inline const char * name<amber_b1_interfaces::srv::Mode_Request>()
{
  return "amber_b1_interfaces/srv/Mode_Request";
}

template<>
struct has_fixed_size<amber_b1_interfaces::srv::Mode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<amber_b1_interfaces::srv::Mode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<amber_b1_interfaces::srv::Mode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<amber_b1_interfaces::srv::Mode_Response>()
{
  return "amber_b1_interfaces::srv::Mode_Response";
}

template<>
inline const char * name<amber_b1_interfaces::srv::Mode_Response>()
{
  return "amber_b1_interfaces/srv/Mode_Response";
}

template<>
struct has_fixed_size<amber_b1_interfaces::srv::Mode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amber_b1_interfaces::srv::Mode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amber_b1_interfaces::srv::Mode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<amber_b1_interfaces::srv::Mode>()
{
  return "amber_b1_interfaces::srv::Mode";
}

template<>
inline const char * name<amber_b1_interfaces::srv::Mode>()
{
  return "amber_b1_interfaces/srv/Mode";
}

template<>
struct has_fixed_size<amber_b1_interfaces::srv::Mode>
  : std::integral_constant<
    bool,
    has_fixed_size<amber_b1_interfaces::srv::Mode_Request>::value &&
    has_fixed_size<amber_b1_interfaces::srv::Mode_Response>::value
  >
{
};

template<>
struct has_bounded_size<amber_b1_interfaces::srv::Mode>
  : std::integral_constant<
    bool,
    has_bounded_size<amber_b1_interfaces::srv::Mode_Request>::value &&
    has_bounded_size<amber_b1_interfaces::srv::Mode_Response>::value
  >
{
};

template<>
struct is_service<amber_b1_interfaces::srv::Mode>
  : std::true_type
{
};

template<>
struct is_service_request<amber_b1_interfaces::srv::Mode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<amber_b1_interfaces::srv::Mode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AMBER_B1_INTERFACES__SRV__DETAIL__MODE__TRAITS_HPP_
