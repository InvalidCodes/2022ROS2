// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "more_interfaces/msg/address_book__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace more_interfaces
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__AddressBook()
{
  return more_interfaces::msg::dds_::AddressBook_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const more_interfaces::msg::AddressBook & ros_message,
  more_interfaces::msg::dds_::AddressBook_ & dds_message)
{
  // member.name first_name
  DDS_String_free(dds_message.first_name_);
  dds_message.first_name_ =
    DDS_String_dup(ros_message.first_name.c_str());

  // member.name last_name
  DDS_String_free(dds_message.last_name_);
  dds_message.last_name_ =
    DDS_String_dup(ros_message.last_name.c_str());

  // member.name gender
  dds_message.gender_ =
    ros_message.gender;

  // member.name age
  dds_message.age_ =
    ros_message.age;

  // member.name address
  DDS_String_free(dds_message.address_);
  dds_message.address_ =
    DDS_String_dup(ros_message.address.c_str());

  return true;
}

bool
convert_dds_message_to_ros(
  const more_interfaces::msg::dds_::AddressBook_ & dds_message,
  more_interfaces::msg::AddressBook & ros_message)
{
  // member.name first_name
  ros_message.first_name = dds_message.first_name_;

  // member.name last_name
  ros_message.last_name = dds_message.last_name_;

  // member.name gender
  ros_message.gender =
    dds_message.gender_ == DDS_BOOLEAN_TRUE;

  // member.name age
  ros_message.age =
    dds_message.age_;

  // member.name address
  ros_message.address = dds_message.address_;

  return true;
}

bool
to_cdr_stream__AddressBook(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const more_interfaces::msg::AddressBook & ros_message =
    *(const more_interfaces::msg::AddressBook *)untyped_ros_message;

  // create a respective connext dds type
  more_interfaces::msg::dds_::AddressBook_ * dds_message = more_interfaces::msg::dds_::AddressBook_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (more_interfaces::msg::dds_::AddressBook_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call more_interfaces::msg::dds_::AddressBook_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (more_interfaces::msg::dds_::AddressBook_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (more_interfaces::msg::dds_::AddressBook_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__AddressBook(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  more_interfaces::msg::dds_::AddressBook_ * dds_message =
    more_interfaces::msg::dds_::AddressBook_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (more_interfaces::msg::dds_::AddressBook_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  more_interfaces::msg::AddressBook & ros_message =
    *(more_interfaces::msg::AddressBook *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (more_interfaces::msg::dds_::AddressBook_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _AddressBook__callbacks = {
  "more_interfaces::msg",
  "AddressBook",
  &get_type_code__AddressBook,
  nullptr,
  nullptr,
  &to_cdr_stream__AddressBook,
  &to_message__AddressBook
};

static rosidl_message_type_support_t _AddressBook__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_AddressBook__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace more_interfaces


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_more_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<more_interfaces::msg::AddressBook>()
{
  return &more_interfaces::msg::typesupport_connext_cpp::_AddressBook__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  more_interfaces, msg,
  AddressBook)()
{
  return &more_interfaces::msg::typesupport_connext_cpp::_AddressBook__handle;
}

#ifdef __cplusplus
}
#endif
