

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanMissionAddCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanMissionAddCommandAckReportTypePlugin_697390524_h
#define MissionPlanMissionAddCommandAckReportTypePlugin_697390524_h

#include "MissionPlanMissionAddCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/MissionPlanMissionControl/MissionPlanMissionAddCommandTypePlugin.hpp"

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
            * By default, this type is struct MissionPlanMissionAddCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanMissionAddCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanMissionAddCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanMissionAddCommandAckReportType.
            */
            typedef class MissionPlanMissionAddCommandAckReportType MissionPlanMissionAddCommandAckReportTypeKeyHolder;

            #define MissionPlanMissionAddCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanMissionAddCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanMissionAddCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanMissionAddCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanMissionAddCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanMissionAddCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanMissionAddCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanMissionAddCommandAckReportType*
            MissionPlanMissionAddCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanMissionAddCommandAckReportType*
            MissionPlanMissionAddCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanMissionAddCommandAckReportType*
            MissionPlanMissionAddCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandAckReportTypePluginSupport_copy_data(
                MissionPlanMissionAddCommandAckReportType *out,
                const MissionPlanMissionAddCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandAckReportTypePluginSupport_destroy_data_w_params(
                MissionPlanMissionAddCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandAckReportTypePluginSupport_destroy_data_ex(
                MissionPlanMissionAddCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandAckReportTypePluginSupport_destroy_data(
                MissionPlanMissionAddCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandAckReportTypePluginSupport_print_data(
                const MissionPlanMissionAddCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanMissionAddCommandAckReportType*
            MissionPlanMissionAddCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanMissionAddCommandAckReportType*
            MissionPlanMissionAddCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandAckReportTypePluginSupport_destroy_key_ex(
                MissionPlanMissionAddCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandAckReportTypePluginSupport_destroy_key(
                MissionPlanMissionAddCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanMissionAddCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanMissionAddCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanMissionAddCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanMissionAddCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandAckReportType *out,
                const MissionPlanMissionAddCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanMissionAddCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanMissionAddCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanMissionAddCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanMissionAddCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanMissionAddCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanMissionAddCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanMissionAddCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanMissionAddCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandAckReportTypeKeyHolder *key, 
                const MissionPlanMissionAddCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanMissionAddCommandAckReportType *instance, 
                const MissionPlanMissionAddCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanMissionAddCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanMissionAddCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanMissionAddCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanMissionControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanMissionAddCommandAckReportTypePlugin_697390524_h */

