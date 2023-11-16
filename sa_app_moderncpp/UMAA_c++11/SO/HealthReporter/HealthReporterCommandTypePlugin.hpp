

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthReporterCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthReporterCommandTypePlugin_1912908258_h
#define HealthReporterCommandTypePlugin_1912908258_h

#include "HealthReporterCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/BuiltInTestStatusType_AllPlugin.hpp"
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
            * By default, this type is struct HealthReporterCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HealthReporterCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HealthReporterCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HealthReporterCommandType.
            */
            typedef class HealthReporterCommandType HealthReporterCommandTypeKeyHolder;

            #define HealthReporterCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HealthReporterCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HealthReporterCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HealthReporterCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HealthReporterCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HealthReporterCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HealthReporterCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HealthReporterCommandType*
            HealthReporterCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HealthReporterCommandType*
            HealthReporterCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthReporterCommandType*
            HealthReporterCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandTypePluginSupport_copy_data(
                HealthReporterCommandType *out,
                const HealthReporterCommandType *in);

            NDDSUSERDllExport extern void 
            HealthReporterCommandTypePluginSupport_destroy_data_w_params(
                HealthReporterCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HealthReporterCommandTypePluginSupport_destroy_data_ex(
                HealthReporterCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthReporterCommandTypePluginSupport_destroy_data(
                HealthReporterCommandType *sample);

            NDDSUSERDllExport extern void 
            HealthReporterCommandTypePluginSupport_print_data(
                const HealthReporterCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HealthReporterCommandType*
            HealthReporterCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthReporterCommandType*
            HealthReporterCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HealthReporterCommandTypePluginSupport_destroy_key_ex(
                HealthReporterCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthReporterCommandTypePluginSupport_destroy_key(
                HealthReporterCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HealthReporterCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HealthReporterCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HealthReporterCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HealthReporterCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HealthReporterCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandType *out,
                const HealthReporterCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HealthReporterCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HealthReporterCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HealthReporterCommandTypePlugin_deserialize_from_cdr_buffer(
                HealthReporterCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HealthReporterCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HealthReporterCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HealthReporterCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HealthReporterCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandTypeKeyHolder *key, 
                const HealthReporterCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HealthReporterCommandType *instance, 
                const HealthReporterCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HealthReporterCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HealthReporterCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HealthReporterCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HealthReporter  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HealthReporterCommandTypePlugin_1912908258_h */

