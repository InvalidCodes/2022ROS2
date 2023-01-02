
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddressBook_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "AddressBook_Support.h"
#include "AddressBook_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace more_interfaces {
    namespace msg {
        namespace dds_ {
            namespace AddressBook_Constants {
            } /* namespace AddressBook_Constants  */

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'AddressBook_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   AddressBook_TYPENAME

            /* Defines */
            #define TDataWriter AddressBook_DataWriter
            #define TData       more_interfaces::msg::dds_::AddressBook_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   AddressBook_TYPENAME

            /* Defines */
            #define TDataReader AddressBook_DataReader
            #define TDataSeq    AddressBook_Seq
            #define TData       more_interfaces::msg::dds_::AddressBook_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    AddressBook_TYPENAME
            #define TPlugin_new  more_interfaces::msg::dds_::AddressBook_Plugin_new
            #define TPlugin_delete  more_interfaces::msg::dds_::AddressBook_Plugin_delete

            /* Defines */
            #define TTypeSupport AddressBook_TypeSupport
            #define TData        more_interfaces::msg::dds_::AddressBook_
            #define TDataReader  AddressBook_DataReader
            #define TDataWriter  AddressBook_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace more_interfaces  */

