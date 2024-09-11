

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanMissionAddCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanMissionAddCommandTypePlugin_834064751_h
#define MissionPlanMissionAddCommandTypePlugin_834064751_h

#include "MissionPlanMissionAddCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/BaseType/MissionPlanTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace MissionPlanMissionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanMissionAddCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanMissionAddCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanMissionAddCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanMissionAddCommandType.
            */
            typedef class MissionPlanMissionAddCommandType MissionPlanMissionAddCommandTypeKeyHolder;

            #define MissionPlanMissionAddCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanMissionAddCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanMissionAddCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanMissionAddCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanMissionAddCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanMissionAddCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanMissionAddCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanMissionAddCommandType*
            MissionPlanMissionAddCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanMissionAddCommandType*
            MissionPlanMissionAddCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanMissionAddCommandType*
            MissionPlanMissionAddCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandTypePluginSupport_copy_data(
                MissionPlanMissionAddCommandType *out,
                const MissionPlanMissionAddCommandType *in);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandTypePluginSupport_destroy_data_w_params(
                MissionPlanMissionAddCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandTypePluginSupport_destroy_data_ex(
                MissionPlanMissionAddCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandTypePluginSupport_destroy_data(
                MissionPlanMissionAddCommandType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandTypePluginSupport_print_data(
                const MissionPlanMissionAddCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanMissionAddCommandType*
            MissionPlanMissionAddCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanMissionAddCommandType*
            MissionPlanMissionAddCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandTypePluginSupport_destroy_key_ex(
                MissionPlanMissionAddCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandTypePluginSupport_destroy_key(
                MissionPlanMissionAddCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanMissionAddCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanMissionAddCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanMissionAddCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandType *out,
                const MissionPlanMissionAddCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanMissionAddCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanMissionAddCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanMissionAddCommandTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanMissionAddCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanMissionAddCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanMissionAddCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanMissionAddCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanMissionAddCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandTypeKeyHolder *key, 
                const MissionPlanMissionAddCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandType *instance, 
                const MissionPlanMissionAddCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanMissionAddCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanMissionAddCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanMissionControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanMissionAddCommandTypePlugin_834064751_h */

