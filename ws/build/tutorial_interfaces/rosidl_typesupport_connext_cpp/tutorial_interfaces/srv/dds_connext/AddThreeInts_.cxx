

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddThreeInts_.idl using "rtiddsgen".
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

#include "AddThreeInts_.h"

#include <new>

namespace tutorial_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *AddThreeInts_Request_TYPENAME = "tutorial_interfaces::srv::dds_::AddThreeInts_Request_";

            DDS_TypeCode* AddThreeInts_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AddThreeInts_Request__g_tc_members[3]=
                {

                    {
                        (char *)"a_",/* Member name */
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
                        (char *)"b_",/* Member name */
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
                        (char *)"c_",/* Member name */
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
                    }
                };

                static DDS_TypeCode AddThreeInts_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tutorial_interfaces::srv::dds_::AddThreeInts_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        AddThreeInts_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for AddThreeInts_Request_*/

                if (is_initialized) {
                    return &AddThreeInts_Request__g_tc;
                }

                AddThreeInts_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                AddThreeInts_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                AddThreeInts_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                is_initialized = RTI_TRUE;

                return &AddThreeInts_Request__g_tc;
            }

            RTIBool AddThreeInts_Request__initialize(
                AddThreeInts_Request_* sample) {
                return tutorial_interfaces::srv::dds_::AddThreeInts_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool AddThreeInts_Request__initialize_ex(
                AddThreeInts_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tutorial_interfaces::srv::dds_::AddThreeInts_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool AddThreeInts_Request__initialize_w_params(
                AddThreeInts_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->a_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->b_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->c_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void AddThreeInts_Request__finalize(
                AddThreeInts_Request_* sample)
            {

                tutorial_interfaces::srv::dds_::AddThreeInts_Request__finalize_ex(sample,RTI_TRUE);
            }

            void AddThreeInts_Request__finalize_ex(
                AddThreeInts_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tutorial_interfaces::srv::dds_::AddThreeInts_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void AddThreeInts_Request__finalize_w_params(
                AddThreeInts_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void AddThreeInts_Request__finalize_optional_members(
                AddThreeInts_Request_* sample, RTIBool deletePointers)
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

            RTIBool AddThreeInts_Request__copy(
                AddThreeInts_Request_* dst,
                const AddThreeInts_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLongLong (
                        &dst->a_, &src->a_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLongLong (
                        &dst->b_, &src->b_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLongLong (
                        &dst->c_, &src->c_)) { 
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
            * Configure and implement 'AddThreeInts_Request_' sequence class.
            */
            #define T AddThreeInts_Request_
            #define TSeq AddThreeInts_Request_Seq

            #define T_initialize_w_params tutorial_interfaces::srv::dds_::AddThreeInts_Request__initialize_w_params

            #define T_finalize_w_params   tutorial_interfaces::srv::dds_::AddThreeInts_Request__finalize_w_params
            #define T_copy       tutorial_interfaces::srv::dds_::AddThreeInts_Request__copy

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
    } /* namespace srv  */
} /* namespace tutorial_interfaces  */
namespace tutorial_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *AddThreeInts_Response_TYPENAME = "tutorial_interfaces::srv::dds_::AddThreeInts_Response_";

            DDS_TypeCode* AddThreeInts_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AddThreeInts_Response__g_tc_members[1]=
                {

                    {
                        (char *)"sum_",/* Member name */
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
                    }
                };

                static DDS_TypeCode AddThreeInts_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tutorial_interfaces::srv::dds_::AddThreeInts_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        AddThreeInts_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for AddThreeInts_Response_*/

                if (is_initialized) {
                    return &AddThreeInts_Response__g_tc;
                }

                AddThreeInts_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                is_initialized = RTI_TRUE;

                return &AddThreeInts_Response__g_tc;
            }

            RTIBool AddThreeInts_Response__initialize(
                AddThreeInts_Response_* sample) {
                return tutorial_interfaces::srv::dds_::AddThreeInts_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool AddThreeInts_Response__initialize_ex(
                AddThreeInts_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tutorial_interfaces::srv::dds_::AddThreeInts_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool AddThreeInts_Response__initialize_w_params(
                AddThreeInts_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->sum_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void AddThreeInts_Response__finalize(
                AddThreeInts_Response_* sample)
            {

                tutorial_interfaces::srv::dds_::AddThreeInts_Response__finalize_ex(sample,RTI_TRUE);
            }

            void AddThreeInts_Response__finalize_ex(
                AddThreeInts_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tutorial_interfaces::srv::dds_::AddThreeInts_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void AddThreeInts_Response__finalize_w_params(
                AddThreeInts_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void AddThreeInts_Response__finalize_optional_members(
                AddThreeInts_Response_* sample, RTIBool deletePointers)
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

            RTIBool AddThreeInts_Response__copy(
                AddThreeInts_Response_* dst,
                const AddThreeInts_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLongLong (
                        &dst->sum_, &src->sum_)) { 
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
            * Configure and implement 'AddThreeInts_Response_' sequence class.
            */
            #define T AddThreeInts_Response_
            #define TSeq AddThreeInts_Response_Seq

            #define T_initialize_w_params tutorial_interfaces::srv::dds_::AddThreeInts_Response__initialize_w_params

            #define T_finalize_w_params   tutorial_interfaces::srv::dds_::AddThreeInts_Response__finalize_w_params
            #define T_copy       tutorial_interfaces::srv::dds_::AddThreeInts_Response__copy

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
    } /* namespace srv  */
} /* namespace tutorial_interfaces  */

