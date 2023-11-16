

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResetReminderCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResetReminderCommandReportTypePlugin_1868022407_h
#define ResetReminderCommandReportTypePlugin_1868022407_h

#include "ResetReminderCommandReportType.hpp"

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
        namespace HealthReporter {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ResetReminderCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ResetReminderCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ResetReminderCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ResetReminderCommandReportType.
            */
            typedef class ResetReminderCommandReportType ResetReminderCommandReportTypeKeyHolder;

            #define ResetReminderCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResetReminderCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResetReminderCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResetReminderCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ResetReminderCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ResetReminderCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResetReminderCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResetReminderCommandReportType*
            ResetReminderCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResetReminderCommandReportType*
            ResetReminderCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResetReminderCommandReportType*
            ResetReminderCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResetReminderCommandReportTypePluginSupport_copy_data(
                ResetReminderCommandReportType *out,
                const ResetReminderCommandReportType *in);

            NDDSUSERDllExport extern void 
            ResetReminderCommandReportTypePluginSupport_destroy_data_w_params(
                ResetReminderCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResetReminderCommandReportTypePluginSupport_destroy_data_ex(
                ResetReminderCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResetReminderCommandReportTypePluginSupport_destroy_data(
                ResetReminderCommandReportType *sample);

            NDDSUSERDllExport extern void 
            ResetReminderCommandReportTypePluginSupport_print_data(
                const ResetReminderCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ResetReminderCommandReportType*
            ResetReminderCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResetReminderCommandReportType*
            ResetReminderCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ResetReminderCommandReportTypePluginSupport_destroy_key_ex(
                ResetReminderCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResetReminderCommandReportTypePluginSupport_destroy_key(
                ResetReminderCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ResetReminderCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ResetReminderCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ResetReminderCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ResetReminderCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ResetReminderCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResetReminderCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ResetReminderCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResetReminderCommandReportType *out,
                const ResetReminderCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResetReminderCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResetReminderCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResetReminderCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResetReminderCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResetReminderCommandReportTypePlugin_deserialize_from_cdr_buffer(
                ResetReminderCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResetReminderCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResetReminderCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResetReminderCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResetReminderCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResetReminderCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResetReminderCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ResetReminderCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResetReminderCommandReportTypeKeyHolder *key, 
                const ResetReminderCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ResetReminderCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResetReminderCommandReportType *instance, 
                const ResetReminderCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ResetReminderCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ResetReminderCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ResetReminderCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HealthReporter  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ResetReminderCommandReportTypePlugin_1868022407_h */

