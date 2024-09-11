

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterPresetReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmitterPresetReportTypePlugin_1655328857_h
#define EmitterPresetReportTypePlugin_1655328857_h

#include "EmitterPresetReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace EmitterPresetReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EmitterPresetReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmitterPresetReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmitterPresetReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmitterPresetReportType.
            */
            typedef class EmitterPresetReportType EmitterPresetReportTypeKeyHolder;

            #define EmitterPresetReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmitterPresetReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmitterPresetReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmitterPresetReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmitterPresetReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmitterPresetReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmitterPresetReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmitterPresetReportType*
            EmitterPresetReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmitterPresetReportType*
            EmitterPresetReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetReportType*
            EmitterPresetReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetReportTypePluginSupport_copy_data(
                EmitterPresetReportType *out,
                const EmitterPresetReportType *in);

            NDDSUSERDllExport extern void 
            EmitterPresetReportTypePluginSupport_destroy_data_w_params(
                EmitterPresetReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmitterPresetReportTypePluginSupport_destroy_data_ex(
                EmitterPresetReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetReportTypePluginSupport_destroy_data(
                EmitterPresetReportType *sample);

            NDDSUSERDllExport extern void 
            EmitterPresetReportTypePluginSupport_print_data(
                const EmitterPresetReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmitterPresetReportType*
            EmitterPresetReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetReportType*
            EmitterPresetReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmitterPresetReportTypePluginSupport_destroy_key_ex(
                EmitterPresetReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetReportTypePluginSupport_destroy_key(
                EmitterPresetReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmitterPresetReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmitterPresetReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmitterPresetReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmitterPresetReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmitterPresetReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetReportType *out,
                const EmitterPresetReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmitterPresetReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmitterPresetReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmitterPresetReportTypePlugin_deserialize_from_cdr_buffer(
                EmitterPresetReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmitterPresetReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetReportTypeKeyHolder *key, 
                const EmitterPresetReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetReportType *instance, 
                const EmitterPresetReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmitterPresetReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmitterPresetReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EmitterPresetReport  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmitterPresetReportTypePlugin_1655328857_h */

