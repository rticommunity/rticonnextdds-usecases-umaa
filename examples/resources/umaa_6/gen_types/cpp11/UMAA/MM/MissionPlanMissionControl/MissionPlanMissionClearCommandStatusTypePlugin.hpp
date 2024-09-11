

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanMissionClearCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanMissionClearCommandStatusTypePlugin_1101795112_h
#define MissionPlanMissionClearCommandStatusTypePlugin_1101795112_h

#include "MissionPlanMissionClearCommandStatusType.hpp"

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
    namespace MM {
        namespace MissionPlanMissionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanMissionClearCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanMissionClearCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanMissionClearCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanMissionClearCommandStatusType.
            */
            typedef class MissionPlanMissionClearCommandStatusType MissionPlanMissionClearCommandStatusTypeKeyHolder;

            #define MissionPlanMissionClearCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanMissionClearCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanMissionClearCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanMissionClearCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanMissionClearCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanMissionClearCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanMissionClearCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanMissionClearCommandStatusType*
            MissionPlanMissionClearCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanMissionClearCommandStatusType*
            MissionPlanMissionClearCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanMissionClearCommandStatusType*
            MissionPlanMissionClearCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionClearCommandStatusTypePluginSupport_copy_data(
                MissionPlanMissionClearCommandStatusType *out,
                const MissionPlanMissionClearCommandStatusType *in);

            NDDSUSERDllExport extern void 
            MissionPlanMissionClearCommandStatusTypePluginSupport_destroy_data_w_params(
                MissionPlanMissionClearCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanMissionClearCommandStatusTypePluginSupport_destroy_data_ex(
                MissionPlanMissionClearCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanMissionClearCommandStatusTypePluginSupport_destroy_data(
                MissionPlanMissionClearCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanMissionClearCommandStatusTypePluginSupport_print_data(
                const MissionPlanMissionClearCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanMissionClearCommandStatusType*
            MissionPlanMissionClearCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanMissionClearCommandStatusType*
            MissionPlanMissionClearCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanMissionClearCommandStatusTypePluginSupport_destroy_key_ex(
                MissionPlanMissionClearCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanMissionClearCommandStatusTypePluginSupport_destroy_key(
                MissionPlanMissionClearCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanMissionClearCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanMissionClearCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanMissionClearCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanMissionClearCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanMissionClearCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionClearCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionClearCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionClearCommandStatusType *out,
                const MissionPlanMissionClearCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanMissionClearCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanMissionClearCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionClearCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionClearCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanMissionClearCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanMissionClearCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanMissionClearCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanMissionClearCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanMissionClearCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanMissionClearCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionClearCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionClearCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionClearCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionClearCommandStatusTypeKeyHolder *key, 
                const MissionPlanMissionClearCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionClearCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionClearCommandStatusType *instance, 
                const MissionPlanMissionClearCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionClearCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanMissionClearCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanMissionClearCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanMissionControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanMissionClearCommandStatusTypePlugin_1101795112_h */

