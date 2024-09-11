

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterPresetCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmitterPresetCommandAckReportTypePlugin_478184147_h
#define EmitterPresetCommandAckReportTypePlugin_478184147_h

#include "EmitterPresetCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/EmitterPresetControl/EmitterPresetCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace EmitterPresetControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EmitterPresetCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmitterPresetCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmitterPresetCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmitterPresetCommandAckReportType.
            */
            typedef class EmitterPresetCommandAckReportType EmitterPresetCommandAckReportTypeKeyHolder;

            #define EmitterPresetCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmitterPresetCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmitterPresetCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmitterPresetCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmitterPresetCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmitterPresetCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmitterPresetCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmitterPresetCommandAckReportType*
            EmitterPresetCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmitterPresetCommandAckReportType*
            EmitterPresetCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetCommandAckReportType*
            EmitterPresetCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCommandAckReportTypePluginSupport_copy_data(
                EmitterPresetCommandAckReportType *out,
                const EmitterPresetCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            EmitterPresetCommandAckReportTypePluginSupport_destroy_data_w_params(
                EmitterPresetCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmitterPresetCommandAckReportTypePluginSupport_destroy_data_ex(
                EmitterPresetCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetCommandAckReportTypePluginSupport_destroy_data(
                EmitterPresetCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            EmitterPresetCommandAckReportTypePluginSupport_print_data(
                const EmitterPresetCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmitterPresetCommandAckReportType*
            EmitterPresetCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetCommandAckReportType*
            EmitterPresetCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmitterPresetCommandAckReportTypePluginSupport_destroy_key_ex(
                EmitterPresetCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetCommandAckReportTypePluginSupport_destroy_key(
                EmitterPresetCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmitterPresetCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmitterPresetCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmitterPresetCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmitterPresetCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmitterPresetCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCommandAckReportType *out,
                const EmitterPresetCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmitterPresetCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmitterPresetCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmitterPresetCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                EmitterPresetCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmitterPresetCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCommandAckReportTypeKeyHolder *key, 
                const EmitterPresetCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCommandAckReportType *instance, 
                const EmitterPresetCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmitterPresetCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmitterPresetCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EmitterPresetControl  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmitterPresetCommandAckReportTypePlugin_478184147_h */

