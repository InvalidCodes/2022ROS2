// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from base_interfaces_demo:srv/Addints.idl
// generated code does not contain a copyright notice


#ifndef BASE_INTERFACES_DEMO__SRV__ADDINTS__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define BASE_INTERFACES_DEMO__SRV__ADDINTS__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "base_interfaces_demo/srv/detail/addints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "base_interfaces_demo/srv/dds_connext/Addints_Support.h"
#include "base_interfaces_demo/srv/dds_connext/Addints_Plugin.h"
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


namespace base_interfaces_demo
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Addints_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
convert_ros_message_to_dds(
  const base_interfaces_demo::srv::Addints_Request & ros_message,
  base_interfaces_demo::srv::dds_::Addints_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
convert_dds_message_to_ros(
  const base_interfaces_demo::srv::dds_::Addints_Request_ & dds_message,
  base_interfaces_demo::srv::Addints_Request & ros_message);

bool
to_cdr_stream__Addints_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Addints_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace base_interfaces_demo


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  base_interfaces_demo, srv,
  Addints_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "base_interfaces_demo/srv/detail/addints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "base_interfaces_demo/srv/dds_connext/Addints_Support.h"
// already included above
// #include "base_interfaces_demo/srv/dds_connext/Addints_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace base_interfaces_demo
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Addints_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
convert_ros_message_to_dds(
  const base_interfaces_demo::srv::Addints_Response & ros_message,
  base_interfaces_demo::srv::dds_::Addints_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
convert_dds_message_to_ros(
  const base_interfaces_demo::srv::dds_::Addints_Response_ & dds_message,
  base_interfaces_demo::srv::Addints_Response & ros_message);

bool
to_cdr_stream__Addints_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Addints_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace base_interfaces_demo


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  base_interfaces_demo, srv,
  Addints_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace base_interfaces_demo
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
void *
create_requester__Addints(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
const char *
destroy_requester__Addints(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
int64_t
send_request__Addints(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
void *
create_replier__Addints(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
const char *
destroy_replier__Addints(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
bool
take_request__Addints(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
bool
take_response__Addints(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
bool
send_response__Addints(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
void *
get_request_datawriter__Addints(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
void *
get_reply_datareader__Addints(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
void *
get_request_datareader__Addints(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
void *
get_reply_datawriter__Addints(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_base_interfaces_demo
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  base_interfaces_demo, srv,
  Addints)();

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__SRV__ADDINTS__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
