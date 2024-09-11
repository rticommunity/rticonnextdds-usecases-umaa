

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterPresetConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmitterPresetConfigReportTypePlugin_1242816494_h
#define EmitterPresetConfigReportTypePlugin_1242816494_h

#include "EmitterPresetConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

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
            * By default, this type is struct EmitterPresetConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmitterPresetConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmitterPresetConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmitterPresetConfigReportType.
            */
            typedef class EmitterPresetConfigReportType EmitterPresetConfigReportTypeKeyHolder;

            #define EmitterPresetConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmitterPresetConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmitterPresetConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmitterPresetConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmitterPresetConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmitterPresetConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmitterPresetConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmitterPresetConfigReportType*
            EmitterPresetConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmitterPresetConfigReportType*
            EmitterPresetConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetConfigReportType*
            EmitterPresetConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigReportTypePluginSupport_copy_data(
                EmitterPresetConfigReportType *out,
                const EmitterPresetConfigReportType *in);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigReportTypePluginSupport_destroy_data_w_params(
                EmitterPresetConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigReportTypePluginSupport_destroy_data_ex(
                EmitterPresetConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigReportTypePluginSupport_destroy_data(
                EmitterPresetConfigReportType *sample);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigReportTypePluginSupport_print_data(
                const EmitterPresetConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmitterPresetConfigReportType*
            EmitterPresetConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetConfigReportType*
            EmitterPresetConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigReportTypePluginSupport_destroy_key_ex(
                EmitterPresetConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigReportTypePluginSupport_destroy_key(
                EmitterPresetConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmitterPresetConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmitterPresetConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmitterPresetConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmitterPresetConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigReportType *out,
                const EmitterPresetConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmitterPresetConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmitterPresetConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmitterPresetConfigReportTypePlugin_deserialize_from_cdr_buffer(
                EmitterPresetConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmitterPresetConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigReportTypeKeyHolder *key, 
                const EmitterPresetConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetConfigReportType *instance, 
                const EmitterPresetConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmitterPresetConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmitterPresetConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EmitterPresetConfig  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmitterPresetConfigReportTypePlugin_1242816494_h */

