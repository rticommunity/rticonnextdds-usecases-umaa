

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthSummaryCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HealthSummaryCommandTypePlugin_710809017_h
#define HealthSummaryCommandTypePlugin_710809017_h

#include "HealthSummaryCommandType.hpp"

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
        namespace HealthSummaryControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct HealthSummaryCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HealthSummaryCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HealthSummaryCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HealthSummaryCommandType.
            */
            typedef  class HealthSummaryCommandType HealthSummaryCommandTypeKeyHolder;

            #define HealthSummaryCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HealthSummaryCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HealthSummaryCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HealthSummaryCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HealthSummaryCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HealthSummaryCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HealthSummaryCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HealthSummaryCommandType*
            HealthSummaryCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HealthSummaryCommandType*
            HealthSummaryCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthSummaryCommandType*
            HealthSummaryCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandTypePluginSupport_copy_data(
                HealthSummaryCommandType *out,
                const HealthSummaryCommandType *in);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandTypePluginSupport_destroy_data_w_params(
                HealthSummaryCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandTypePluginSupport_destroy_data_ex(
                HealthSummaryCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandTypePluginSupport_destroy_data(
                HealthSummaryCommandType *sample);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandTypePluginSupport_print_data(
                const HealthSummaryCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HealthSummaryCommandType*
            HealthSummaryCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HealthSummaryCommandType*
            HealthSummaryCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandTypePluginSupport_destroy_key_ex(
                HealthSummaryCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandTypePluginSupport_destroy_key(
                HealthSummaryCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HealthSummaryCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HealthSummaryCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HealthSummaryCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HealthSummaryCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandType *out,
                const HealthSummaryCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HealthSummaryCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HealthSummaryCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HealthSummaryCommandTypePlugin_deserialize_from_cdr_buffer(
                HealthSummaryCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HealthSummaryCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HealthSummaryCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HealthSummaryCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HealthSummaryCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandTypeKeyHolder *key, 
                const HealthSummaryCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HealthSummaryCommandType *instance, 
                const HealthSummaryCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HealthSummaryCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HealthSummaryCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HealthSummaryCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HealthSummaryControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HealthSummaryCommandTypePlugin_710809017_h */

