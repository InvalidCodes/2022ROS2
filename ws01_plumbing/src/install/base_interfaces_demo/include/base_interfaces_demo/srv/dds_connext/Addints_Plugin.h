

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Addints_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Addints_Plugin_1093325160_h
#define Addints_Plugin_1093325160_h

#include "Addints_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace base_interfaces_demo {
    namespace srv {
        namespace dds_ {

            #define Addints_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define Addints_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Addints_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define Addints_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Addints_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Addints_Request_*
            Addints_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Addints_Request_*
            Addints_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Addints_Request_*
            Addints_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Addints_Request_PluginSupport_copy_data(
                Addints_Request_ *out,
                const Addints_Request_ *in);

            NDDSUSERDllExport extern void 
            Addints_Request_PluginSupport_destroy_data_w_params(
                Addints_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Addints_Request_PluginSupport_destroy_data_ex(
                Addints_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Addints_Request_PluginSupport_destroy_data(
                Addints_Request_ *sample);

            NDDSUSERDllExport extern void 
            Addints_Request_PluginSupport_print_data(
                const Addints_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Addints_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Addints_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Addints_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Addints_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Addints_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Addints_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Request_ *out,
                const Addints_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Addints_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Addints_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Addints_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Addints_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Addints_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            Addints_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Addints_Request_Plugin_deserialize_from_cdr_buffer(
                Addints_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            Addints_Request_Plugin_data_to_string(
                const Addints_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            Addints_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            Addints_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            Addints_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Addints_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            Addints_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Addints_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Addints_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Addints_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Addints_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Addints_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Addints_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Addints_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Addints_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Addints_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Addints_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            Addints_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace base_interfaces_demo  */
namespace base_interfaces_demo {
    namespace srv {
        namespace dds_ {

            #define Addints_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define Addints_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Addints_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define Addints_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Addints_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Addints_Response_*
            Addints_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Addints_Response_*
            Addints_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Addints_Response_*
            Addints_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Addints_Response_PluginSupport_copy_data(
                Addints_Response_ *out,
                const Addints_Response_ *in);

            NDDSUSERDllExport extern void 
            Addints_Response_PluginSupport_destroy_data_w_params(
                Addints_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Addints_Response_PluginSupport_destroy_data_ex(
                Addints_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Addints_Response_PluginSupport_destroy_data(
                Addints_Response_ *sample);

            NDDSUSERDllExport extern void 
            Addints_Response_PluginSupport_print_data(
                const Addints_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Addints_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Addints_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Addints_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Addints_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Addints_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Addints_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Response_ *out,
                const Addints_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Addints_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Addints_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Addints_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Addints_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Addints_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            Addints_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Addints_Response_Plugin_deserialize_from_cdr_buffer(
                Addints_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            Addints_Response_Plugin_data_to_string(
                const Addints_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            Addints_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            Addints_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            Addints_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Addints_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            Addints_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Addints_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Addints_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Addints_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Addints_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Addints_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Addints_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Addints_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Addints_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Addints_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Addints_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Addints_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            Addints_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace base_interfaces_demo  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Addints_Plugin_1093325160_h */

