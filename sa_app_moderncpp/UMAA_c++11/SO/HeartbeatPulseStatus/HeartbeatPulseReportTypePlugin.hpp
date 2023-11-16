

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeartbeatPulseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeartbeatPulseReportTypePlugin_1826145922_h
#define HeartbeatPulseReportTypePlugin_1826145922_h

#include "HeartbeatPulseReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace HeartbeatPulseStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct HeartbeatPulseReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HeartbeatPulseReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HeartbeatPulseReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HeartbeatPulseReportType.
            */
            typedef class HeartbeatPulseReportType HeartbeatPulseReportTypeKeyHolder;

            #define HeartbeatPulseReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeartbeatPulseReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeartbeatPulseReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeartbeatPulseReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HeartbeatPulseReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HeartbeatPulseReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeartbeatPulseReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeartbeatPulseReportType*
            HeartbeatPulseReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeartbeatPulseReportType*
            HeartbeatPulseReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeartbeatPulseReportType*
            HeartbeatPulseReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeartbeatPulseReportTypePluginSupport_copy_data(
                HeartbeatPulseReportType *out,
                const HeartbeatPulseReportType *in);

            NDDSUSERDllExport extern void 
            HeartbeatPulseReportTypePluginSupport_destroy_data_w_params(
                HeartbeatPulseReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeartbeatPulseReportTypePluginSupport_destroy_data_ex(
                HeartbeatPulseReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeartbeatPulseReportTypePluginSupport_destroy_data(
                HeartbeatPulseReportType *sample);

            NDDSUSERDllExport extern void 
            HeartbeatPulseReportTypePluginSupport_print_data(
                const HeartbeatPulseReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HeartbeatPulseReportType*
            HeartbeatPulseReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeartbeatPulseReportType*
            HeartbeatPulseReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HeartbeatPulseReportTypePluginSupport_destroy_key_ex(
                HeartbeatPulseReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeartbeatPulseReportTypePluginSupport_destroy_key(
                HeartbeatPulseReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HeartbeatPulseReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HeartbeatPulseReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HeartbeatPulseReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HeartbeatPulseReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HeartbeatPulseReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeartbeatPulseReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HeartbeatPulseReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeartbeatPulseReportType *out,
                const HeartbeatPulseReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HeartbeatPulseReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HeartbeatPulseReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HeartbeatPulseReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HeartbeatPulseReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HeartbeatPulseReportTypePlugin_deserialize_from_cdr_buffer(
                HeartbeatPulseReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HeartbeatPulseReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeartbeatPulseReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeartbeatPulseReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeartbeatPulseReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HeartbeatPulseReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HeartbeatPulseReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HeartbeatPulseReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HeartbeatPulseReportTypeKeyHolder *key, 
                const HeartbeatPulseReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            HeartbeatPulseReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HeartbeatPulseReportType *instance, 
                const HeartbeatPulseReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HeartbeatPulseReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HeartbeatPulseReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HeartbeatPulseReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HeartbeatPulseStatus  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HeartbeatPulseReportTypePlugin_1826145922_h */

