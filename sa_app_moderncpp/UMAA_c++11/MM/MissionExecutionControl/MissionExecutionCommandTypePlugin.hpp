

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionExecutionCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionExecutionCommandTypePlugin_339117329_h
#define MissionExecutionCommandTypePlugin_339117329_h

#include "MissionExecutionCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace MissionExecutionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionExecutionCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionExecutionCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionExecutionCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionExecutionCommandType.
            */
            typedef class MissionExecutionCommandType MissionExecutionCommandTypeKeyHolder;

            #define MissionExecutionCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionExecutionCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionExecutionCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionExecutionCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionExecutionCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionExecutionCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionExecutionCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionExecutionCommandType*
            MissionExecutionCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionExecutionCommandType*
            MissionExecutionCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionExecutionCommandType*
            MissionExecutionCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionCommandTypePluginSupport_copy_data(
                MissionExecutionCommandType *out,
                const MissionExecutionCommandType *in);

            NDDSUSERDllExport extern void 
            MissionExecutionCommandTypePluginSupport_destroy_data_w_params(
                MissionExecutionCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionExecutionCommandTypePluginSupport_destroy_data_ex(
                MissionExecutionCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionExecutionCommandTypePluginSupport_destroy_data(
                MissionExecutionCommandType *sample);

            NDDSUSERDllExport extern void 
            MissionExecutionCommandTypePluginSupport_print_data(
                const MissionExecutionCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionExecutionCommandType*
            MissionExecutionCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionExecutionCommandType*
            MissionExecutionCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionExecutionCommandTypePluginSupport_destroy_key_ex(
                MissionExecutionCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionExecutionCommandTypePluginSupport_destroy_key(
                MissionExecutionCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionExecutionCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionExecutionCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionExecutionCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionExecutionCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionExecutionCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionCommandType *out,
                const MissionExecutionCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionExecutionCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionExecutionCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionExecutionCommandTypePlugin_deserialize_from_cdr_buffer(
                MissionExecutionCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionExecutionCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionExecutionCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionExecutionCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionExecutionCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionCommandTypeKeyHolder *key, 
                const MissionExecutionCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionExecutionCommandType *instance, 
                const MissionExecutionCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionExecutionCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionExecutionCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionExecutionCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionExecutionControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionExecutionCommandTypePlugin_339117329_h */

