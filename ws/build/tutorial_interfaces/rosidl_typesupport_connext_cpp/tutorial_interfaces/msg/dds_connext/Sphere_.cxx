

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sphere_.idl using "rtiddsgen".
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

#include "Sphere_.h"

#include <new>

namespace tutorial_interfaces {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Sphere_TYPENAME = "tutorial_interfaces::msg::dds_::Sphere_";

            DDS_TypeCode* Sphere__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Sphere__g_tc_members[2]=
                {

                    {
                        (char *)"center_",/* Member name */
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
                        (char *)"radius_",/* Member name */
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

                static DDS_TypeCode Sphere__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tutorial_interfaces::msg::dds_::Sphere_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Sphere__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Sphere_*/

                if (is_initialized) {
                    return &Sphere__g_tc;
                }

                Sphere__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point__get_typecode();

                Sphere__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &Sphere__g_tc;
            }

            RTIBool Sphere__initialize(
                Sphere_* sample) {
                return tutorial_interfaces::msg::dds_::Sphere__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Sphere__initialize_ex(
                Sphere_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tutorial_interfaces::msg::dds_::Sphere__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Sphere__initialize_w_params(
                Sphere_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Point__initialize_w_params(&sample->center_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->radius_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Sphere__finalize(
                Sphere_* sample)
            {

                tutorial_interfaces::msg::dds_::Sphere__finalize_ex(sample,RTI_TRUE);
            }

            void Sphere__finalize_ex(
                Sphere_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tutorial_interfaces::msg::dds_::Sphere__finalize_w_params(
                    sample,&deallocParams);
            }

            void Sphere__finalize_w_params(
                Sphere_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::Point__finalize_w_params(&sample->center_,deallocParams);

            }

            void Sphere__finalize_optional_members(
                Sphere_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Point__finalize_optional_members(&sample->center_, deallocParams->delete_pointers);
            }

            RTIBool Sphere__copy(
                Sphere_* dst,
                const Sphere_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::Point__copy(
                        &dst->center_,(const geometry_msgs::msg::dds_::Point_*)&src->center_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyDouble (
                        &dst->radius_, &src->radius_)) { 
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
            * Configure and implement 'Sphere_' sequence class.
            */
            #define T Sphere_
            #define TSeq Sphere_Seq

            #define T_initialize_w_params tutorial_interfaces::msg::dds_::Sphere__initialize_w_params

            #define T_finalize_w_params   tutorial_interfaces::msg::dds_::Sphere__finalize_w_params
            #define T_copy       tutorial_interfaces::msg::dds_::Sphere__copy

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
} /* namespace tutorial_interfaces  */

