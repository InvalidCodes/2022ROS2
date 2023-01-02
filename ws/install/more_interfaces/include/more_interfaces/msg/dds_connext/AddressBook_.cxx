

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddressBook_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "AddressBook_.h"

#include <new>

namespace more_interfaces {
    namespace msg {
        namespace dds_ {
            namespace AddressBook_Constants {
            } /* namespace AddressBook_Constants  */

            /* ========================================================================= */
            const char *AddressBook_TYPENAME = "more_interfaces::msg::dds_::AddressBook_";

            DDS_TypeCode* AddressBook__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode AddressBook__g_tc_first_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode AddressBook__g_tc_last_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode AddressBook__g_tc_address__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member AddressBook__g_tc_members[5]=
                {

                    {
                        (char *)"first_name_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"last_name_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"gender_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"age_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"address_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode AddressBook__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"more_interfaces::msg::dds_::AddressBook_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        AddressBook__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for AddressBook_*/

                if (is_initialized) {
                    return &AddressBook__g_tc;
                }

                AddressBook__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&AddressBook__g_tc_first_name__string;

                AddressBook__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&AddressBook__g_tc_last_name__string;

                AddressBook__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                AddressBook__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                AddressBook__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&AddressBook__g_tc_address__string;

                is_initialized = RTI_TRUE;

                return &AddressBook__g_tc;
            }

            RTIBool AddressBook__initialize(
                AddressBook_* sample) {
                return more_interfaces::msg::dds_::AddressBook__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool AddressBook__initialize_ex(
                AddressBook_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return more_interfaces::msg::dds_::AddressBook__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool AddressBook__initialize_w_params(
                AddressBook_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->first_name_= DDS_String_alloc ((0));
                    if (sample->first_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->first_name_!= NULL) { 
                        sample->first_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->last_name_= DDS_String_alloc ((0));
                    if (sample->last_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->last_name_!= NULL) { 
                        sample->last_name_[0] = '\0';
                    }
                }

                if (!RTICdrType_initBoolean(&sample->gender_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->age_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->address_= DDS_String_alloc ((0));
                    if (sample->address_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->address_!= NULL) { 
                        sample->address_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void AddressBook__finalize(
                AddressBook_* sample)
            {

                more_interfaces::msg::dds_::AddressBook__finalize_ex(sample,RTI_TRUE);
            }

            void AddressBook__finalize_ex(
                AddressBook_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                more_interfaces::msg::dds_::AddressBook__finalize_w_params(
                    sample,&deallocParams);
            }

            void AddressBook__finalize_w_params(
                AddressBook_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->first_name_ != NULL) {
                    DDS_String_free(sample->first_name_);
                    sample->first_name_=NULL;

                }
                if (sample->last_name_ != NULL) {
                    DDS_String_free(sample->last_name_);
                    sample->last_name_=NULL;

                }

                if (sample->address_ != NULL) {
                    DDS_String_free(sample->address_);
                    sample->address_=NULL;

                }
            }

            void AddressBook__finalize_optional_members(
                AddressBook_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool AddressBook__copy(
                AddressBook_* dst,
                const AddressBook_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->first_name_, src->first_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->last_name_, src->last_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->gender_, &src->gender_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->age_, &src->age_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->address_, src->address_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'AddressBook_' sequence class.
            */
            #define T AddressBook_
            #define TSeq AddressBook_Seq

            #define T_initialize_w_params more_interfaces::msg::dds_::AddressBook__initialize_w_params

            #define T_finalize_w_params   more_interfaces::msg::dds_::AddressBook__finalize_w_params
            #define T_copy       more_interfaces::msg::dds_::AddressBook__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace more_interfaces  */

