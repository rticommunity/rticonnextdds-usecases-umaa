

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanObjectiveDeleteCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanObjectiveDeleteCommandTypePlugin_471294835_h
#define MissionPlanObjectiveDeleteCommandTypePlugin_471294835_h

#include "MissionPlanObjectiveDeleteCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

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
            * By default, this type is struct MissionPlanObjectiveDeleteCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanObjectiveDeleteCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanObjectiveDeleteCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanObjectiveDeleteCommandType.
            */
            typedef class MissionPlanObjectiveDeleteCommandType MissionPlanObjectiveDeleteCommandTypeKeyHolder;

            #define MissionPlanObjectiveDeleteCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanObjectiveDeleteCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanObjectiveDeleteCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanObjectiveDeleteCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanObjectiveDeleteCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanObjectiveDeleteCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanObjectiveDeleteCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandType*
            MissionPlanObjectiveDeleteCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandType*
            MissionPlanObjectiveDeleteCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandType*
            MissionPlanObjectiveDeleteCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandTypePluginSupport_copy_data(
                MissionPlanObjectiveDeleteCommandType *out,
                const MissionPlanObjectiveDeleteCommandType *in);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandTypePluginSupport_destroy_data_w_params(
                MissionPlanObjectiveDeleteCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandTypePluginSupport_destroy_data_ex(
                MissionPlanObjectiveDeleteCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandTypePluginSupport_destroy_data(
                MissionPlanObjectiveDeleteCommandType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandTypePluginSupport_print_data(
                const MissionPlanObjectiveDeleteCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandType*
            MissionPlanObjectiveDeleteCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandType*
            MissionPlanObjectiveDeleteCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandTypePluginSupport_destroy_key_ex(
                MissionPlanObjectiveDeleteCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandTypePluginSupport_destroy_key(
                MissionPlanObjectiveDeleteCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanObjectiveDeleteCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanObjectiveDeleteCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanObjectiveDeleteCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandType *out,
                const MissionPlanObjectiveDeleteCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanObjectiveDeleteCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanObjectiveDeleteCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanObjectiveDeleteCommandTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanObjectiveDeleteCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanObjectiveDeleteCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanObjectiveDeleteCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanObjectiveDeleteCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanObjectiveDeleteCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandTypeKeyHolder *key, 
                const MissionPlanObjectiveDeleteCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandType *instance, 
                const MissionPlanObjectiveDeleteCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanObjectiveDeleteCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanObjectiveDeleteCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanObjectiveControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanObjectiveDeleteCommandTypePlugin_471294835_h */

