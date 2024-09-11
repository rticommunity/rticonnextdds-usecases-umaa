

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterPresetConfigAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmitterPresetConfigAckReportTypePlugin_974251261_h
#define EmitterPresetConfigAckReportTypePlugin_974251261_h

#include "EmitterPresetConfigAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/EmitterPresetConfig/EmitterPresetConfigCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace EmitterPresetConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EmitterPresetConfigAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmitterPresetConfigAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmitterPresetConfigAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmitterPresetConfigAckReportType.
            */
            typedef class EmitterPresetConfigAckReportType EmitterPresetConfigAckReportTypeKeyHolder;

            #define EmitterPresetConfigAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmitterPresetConfigAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmitterPresetConfigAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmitterPresetConfigAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmitterPresetConfigAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmitterPresetConfigAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmitterPresetConfigAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmitterPresetConfigAckReportType*
            EmitterPresetConfigAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmitterPresetConfigAckReportType*
            EmitterPresetConfigAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetConfigAckReportType*
            EmitterPresetConfigAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigAckReportTypePluginSupport_copy_data(
                EmitterPresetConfigAckReportType *out,
                const EmitterPresetConfigAckReportType *in);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigAckReportTypePluginSupport_destroy_data_w_params(
                EmitterPresetConfigAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigAckReportTypePluginSupport_destroy_data_ex(
                EmitterPresetConfigAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigAckReportTypePluginSupport_destroy_data(
                EmitterPresetConfigAckReportType *sample);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigAckReportTypePluginSupport_print_data(
                const EmitterPresetConfigAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmitterPresetConfigAckReportType*
            EmitterPresetConfigAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetConfigAckReportType*
            EmitterPresetConfigAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigAckReportTypePluginSupport_destroy_key_ex(
                EmitterPresetConfigAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigAckReportTypePluginSupport_destroy_key(
                EmitterPresetConfigAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmitterPresetConfigAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmitterPresetConfigAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmitterPresetConfigAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigAckReportType *out,
                const EmitterPresetConfigAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmitterPresetConfigAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmitterPresetConfigAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmitterPresetConfigAckReportTypePlugin_deserialize_from_cdr_buffer(
                EmitterPresetConfigAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetConfigAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmitterPresetConfigAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetConfigAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetConfigAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigAckReportTypeKeyHolder *key, 
                const EmitterPresetConfigAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigAckReportType *instance, 
                const EmitterPresetConfigAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmitterPresetConfigAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmitterPresetConfigAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EmitterPresetConfig  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmitterPresetConfigAckReportTypePlugin_974251261_h */

