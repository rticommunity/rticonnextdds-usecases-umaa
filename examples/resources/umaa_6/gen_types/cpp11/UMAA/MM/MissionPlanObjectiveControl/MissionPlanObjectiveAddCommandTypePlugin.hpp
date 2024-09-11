

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanObjectiveAddCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanObjectiveAddCommandTypePlugin_459657723_h
#define MissionPlanObjectiveAddCommandTypePlugin_459657723_h

#include "MissionPlanObjectiveAddCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/BaseType/ObjectiveTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace MissionPlanObjectiveControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanObjectiveAddCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanObjectiveAddCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanObjectiveAddCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanObjectiveAddCommandType.
            */
            typedef class MissionPlanObjectiveAddCommandType MissionPlanObjectiveAddCommandTypeKeyHolder;

            #define MissionPlanObjectiveAddCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanObjectiveAddCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanObjectiveAddCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanObjectiveAddCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanObjectiveAddCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanObjectiveAddCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanObjectiveAddCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanObjectiveAddCommandType*
            MissionPlanObjectiveAddCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanObjectiveAddCommandType*
            MissionPlanObjectiveAddCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanObjectiveAddCommandType*
            MissionPlanObjectiveAddCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveAddCommandTypePluginSupport_copy_data(
                MissionPlanObjectiveAddCommandType *out,
                const MissionPlanObjectiveAddCommandType *in);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveAddCommandTypePluginSupport_destroy_data_w_params(
                MissionPlanObjectiveAddCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveAddCommandTypePluginSupport_destroy_data_ex(
                MissionPlanObjectiveAddCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveAddCommandTypePluginSupport_destroy_data(
                MissionPlanObjectiveAddCommandType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveAddCommandTypePluginSupport_print_data(
                const MissionPlanObjectiveAddCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanObjectiveAddCommandType*
            MissionPlanObjectiveAddCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanObjectiveAddCommandType*
            MissionPlanObjectiveAddCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveAddCommandTypePluginSupport_destroy_key_ex(
                MissionPlanObjectiveAddCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveAddCommandTypePluginSupport_destroy_key(
                MissionPlanObjectiveAddCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanObjectiveAddCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveAddCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanObjectiveAddCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveAddCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanObjectiveAddCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveAddCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveAddCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveAddCommandType *out,
                const MissionPlanObjectiveAddCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanObjectiveAddCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanObjectiveAddCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveAddCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveAddCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanObjectiveAddCommandTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanObjectiveAddCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanObjectiveAddCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanObjectiveAddCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanObjectiveAddCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanObjectiveAddCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveAddCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveAddCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveAddCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveAddCommandTypeKeyHolder *key, 
                const MissionPlanObjectiveAddCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveAddCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveAddCommandType *instance, 
                const MissionPlanObjectiveAddCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveAddCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanObjectiveAddCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanObjectiveAddCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanObjectiveControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanObjectiveAddCommandTypePlugin_459657723_h */

