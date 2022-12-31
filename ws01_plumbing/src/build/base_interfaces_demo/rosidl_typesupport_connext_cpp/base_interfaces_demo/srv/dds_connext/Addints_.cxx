

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Addints_.idl using "rtiddsgen".
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

#include "Addints_.h"

#include <new>

namespace base_interfaces_demo {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Addints_Request_TYPENAME = "base_interfaces_demo::srv::dds_::Addints_Request_";

            DDS_TypeCode* Addints_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Addints_Request__g_tc_members[2]=
                {

                    {
                        (char *)"num1_",/* Member name */
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
                        (char *)"num2_",/* Member name */
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
                    }
                };

                static DDS_TypeCode Addints_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"base_interfaces_demo::srv::dds_::Addints_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Addints_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Addints_Request_*/

                if (is_initialized) {
                    return &Addints_Request__g_tc;
                }

                Addints_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Addints_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &Addints_Request__g_tc;
            }

            RTIBool Addints_Request__initialize(
                Addints_Request_* sample) {
                return base_interfaces_demo::srv::dds_::Addints_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Addints_Request__initialize_ex(
                Addints_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return base_interfaces_demo::srv::dds_::Addints_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Addints_Request__initialize_w_params(
                Addints_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->num1_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->num2_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Addints_Request__finalize(
                Addints_Request_* sample)
            {

                base_interfaces_demo::srv::dds_::Addints_Request__finalize_ex(sample,RTI_TRUE);
            }

            void Addints_Request__finalize_ex(
                Addints_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                base_interfaces_demo::srv::dds_::Addints_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void Addints_Request__finalize_w_params(
                Addints_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void Addints_Request__finalize_optional_members(
                Addints_Request_* sample, RTIBool deletePointers)
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

            RTIBool Addints_Request__copy(
                Addints_Request_* dst,
                const Addints_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLong (
                        &dst->num1_, &src->num1_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->num2_, &src->num2_)) { 
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
            * Configure and implement 'Addints_Request_' sequence class.
            */
            #define T Addints_Request_
            #define TSeq Addints_Request_Seq

            #define T_initialize_w_params base_interfaces_demo::srv::dds_::Addints_Request__initialize_w_params

            #define T_finalize_w_params   base_interfaces_demo::srv::dds_::Addints_Request__finalize_w_params
            #define T_copy       base_interfaces_demo::srv::dds_::Addints_Request__copy

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
} /* namespace base_interfaces_demo  */
namespace base_interfaces_demo {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Addints_Response_TYPENAME = "base_interfaces_demo::srv::dds_::Addints_Response_";

            DDS_TypeCode* Addints_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Addints_Response__g_tc_members[1]=
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

                static DDS_TypeCode Addints_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"base_interfaces_demo::srv::dds_::Addints_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Addints_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Addints_Response_*/

                if (is_initialized) {
                    return &Addints_Response__g_tc;
                }

                Addints_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &Addints_Response__g_tc;
            }

            RTIBool Addints_Response__initialize(
                Addints_Response_* sample) {
                return base_interfaces_demo::srv::dds_::Addints_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Addints_Response__initialize_ex(
                Addints_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return base_interfaces_demo::srv::dds_::Addints_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Addints_Response__initialize_w_params(
                Addints_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->sum_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Addints_Response__finalize(
                Addints_Response_* sample)
            {

                base_interfaces_demo::srv::dds_::Addints_Response__finalize_ex(sample,RTI_TRUE);
            }

            void Addints_Response__finalize_ex(
                Addints_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                base_interfaces_demo::srv::dds_::Addints_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void Addints_Response__finalize_w_params(
                Addints_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void Addints_Response__finalize_optional_members(
                Addints_Response_* sample, RTIBool deletePointers)
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

            RTIBool Addints_Response__copy(
                Addints_Response_* dst,
                const Addints_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLong (
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
            * Configure and implement 'Addints_Response_' sequence class.
            */
            #define T Addints_Response_
            #define TSeq Addints_Response_Seq

            #define T_initialize_w_params base_interfaces_demo::srv::dds_::Addints_Response__initialize_w_params

            #define T_finalize_w_params   base_interfaces_demo::srv::dds_::Addints_Response__finalize_w_params
            #define T_copy       base_interfaces_demo::srv::dds_::Addints_Response__copy

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
} /* namespace base_interfaces_demo  */

