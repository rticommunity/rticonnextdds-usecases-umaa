

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterPresetCancelConfigCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmitterPresetCancelConfigCommandStatusTypePlugin_1327259323_h
#define EmitterPresetCancelConfigCommandStatusTypePlugin_1327259323_h

#include "EmitterPresetCancelConfigCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

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
            * By default, this type is struct EmitterPresetCancelConfigCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmitterPresetCancelConfigCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmitterPresetCancelConfigCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmitterPresetCancelConfigCommandStatusType.
            */
            typedef class EmitterPresetCancelConfigCommandStatusType EmitterPresetCancelConfigCommandStatusTypeKeyHolder;

            #define EmitterPresetCancelConfigCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmitterPresetCancelConfigCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmitterPresetCancelConfigCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmitterPresetCancelConfigCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmitterPresetCancelConfigCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmitterPresetCancelConfigCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmitterPresetCancelConfigCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmitterPresetCancelConfigCommandStatusType*
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmitterPresetCancelConfigCommandStatusType*
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetCancelConfigCommandStatusType*
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_copy_data(
                EmitterPresetCancelConfigCommandStatusType *out,
                const EmitterPresetCancelConfigCommandStatusType *in);

            NDDSUSERDllExport extern void 
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_destroy_data_w_params(
                EmitterPresetCancelConfigCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_destroy_data_ex(
                EmitterPresetCancelConfigCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_destroy_data(
                EmitterPresetCancelConfigCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_print_data(
                const EmitterPresetCancelConfigCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmitterPresetCancelConfigCommandStatusType*
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterPresetCancelConfigCommandStatusType*
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_destroy_key_ex(
                EmitterPresetCancelConfigCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterPresetCancelConfigCommandStatusTypePluginSupport_destroy_key(
                EmitterPresetCancelConfigCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmitterPresetCancelConfigCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmitterPresetCancelConfigCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmitterPresetCancelConfigCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmitterPresetCancelConfigCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmitterPresetCancelConfigCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCancelConfigCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCancelConfigCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCancelConfigCommandStatusType *out,
                const EmitterPresetCancelConfigCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmitterPresetCancelConfigCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmitterPresetCancelConfigCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCancelConfigCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCancelConfigCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmitterPresetCancelConfigCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                EmitterPresetCancelConfigCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetCancelConfigCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmitterPresetCancelConfigCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetCancelConfigCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmitterPresetCancelConfigCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCancelConfigCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCancelConfigCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCancelConfigCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCancelConfigCommandStatusTypeKeyHolder *key, 
                const EmitterPresetCancelConfigCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCancelConfigCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmitterPresetCancelConfigCommandStatusType *instance, 
                const EmitterPresetCancelConfigCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmitterPresetCancelConfigCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmitterPresetCancelConfigCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmitterPresetCancelConfigCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EmitterPresetConfig  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmitterPresetCancelConfigCommandStatusTypePlugin_1327259323_h */

