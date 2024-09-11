

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanObjectiveDeleteCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanObjectiveDeleteCommandAckReportTypePlugin_802711602_h
#define MissionPlanObjectiveDeleteCommandAckReportTypePlugin_802711602_h

#include "MissionPlanObjectiveDeleteCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/MissionPlanObjectiveControl/MissionPlanObjectiveDeleteCommandTypePlugin.hpp"

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
            * By default, this type is struct MissionPlanObjectiveDeleteCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanObjectiveDeleteCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanObjectiveDeleteCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanObjectiveDeleteCommandAckReportType.
            */
            typedef class MissionPlanObjectiveDeleteCommandAckReportType MissionPlanObjectiveDeleteCommandAckReportTypeKeyHolder;

            #define MissionPlanObjectiveDeleteCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanObjectiveDeleteCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanObjectiveDeleteCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanObjectiveDeleteCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanObjectiveDeleteCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanObjectiveDeleteCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanObjectiveDeleteCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandAckReportType*
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandAckReportType*
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandAckReportType*
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_copy_data(
                MissionPlanObjectiveDeleteCommandAckReportType *out,
                const MissionPlanObjectiveDeleteCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_destroy_data_w_params(
                MissionPlanObjectiveDeleteCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_destroy_data_ex(
                MissionPlanObjectiveDeleteCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_destroy_data(
                MissionPlanObjectiveDeleteCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_print_data(
                const MissionPlanObjectiveDeleteCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandAckReportType*
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanObjectiveDeleteCommandAckReportType*
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_destroy_key_ex(
                MissionPlanObjectiveDeleteCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandAckReportTypePluginSupport_destroy_key(
                MissionPlanObjectiveDeleteCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandAckReportType *out,
                const MissionPlanObjectiveDeleteCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanObjectiveDeleteCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanObjectiveDeleteCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandAckReportTypeKeyHolder *key, 
                const MissionPlanObjectiveDeleteCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanObjectiveDeleteCommandAckReportType *instance, 
                const MissionPlanObjectiveDeleteCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanObjectiveDeleteCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanObjectiveControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanObjectiveDeleteCommandAckReportTypePlugin_802711602_h */

