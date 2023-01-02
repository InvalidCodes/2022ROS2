// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice


#ifndef MORE_INTERFACES__MSG__ADDRESS_BOOK__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MORE_INTERFACES__MSG__ADDRESS_BOOK__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "more_interfaces/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "more_interfaces/msg/detail/address_book__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "more_interfaces/msg/dds_connext/AddressBook_Support.h"
#include "more_interfaces/msg/dds_connext/AddressBook_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace more_interfaces
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__AddressBook();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_more_interfaces
convert_ros_message_to_dds(
  const more_interfaces::msg::AddressBook & ros_message,
  more_interfaces::msg::dds_::AddressBook_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_more_interfaces
convert_dds_message_to_ros(
  const more_interfaces::msg::dds_::AddressBook_ & dds_message,
  more_interfaces::msg::AddressBook & ros_message);

bool
to_cdr_stream__AddressBook(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__AddressBook(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace more_interfaces


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_more_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  more_interfaces, msg,
  AddressBook)();

#ifdef __cplusplus
}
#endif


#endif  // MORE_INTERFACES__MSG__ADDRESS_BOOK__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
