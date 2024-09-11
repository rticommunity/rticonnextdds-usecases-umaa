

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanExecutionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanExecutionCommandAckReportTypePlugin_807923944_h
#define MissionPlanExecutionCommandAckReportTypePlugin_807923944_h

#include "MissionPlanExecutionCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/MissionPlanExecutionControl/MissionPlanExecutionCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace MissionPlanExecutionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanExecutionCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanExecutionCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanExecutionCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanExecutionCommandAckReportType.
            */
            typedef class MissionPlanExecutionCommandAckReportType MissionPlanExecutionCommandAckReportTypeKeyHolder;

            #define MissionPlanExecutionCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanExecutionCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanExecutionCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanExecutionCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanExecutionCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanExecutionCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanExecutionCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanExecutionCommandAckReportType*
            MissionPlanExecutionCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanExecutionCommandAckReportType*
            MissionPlanExecutionCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanExecutionCommandAckReportType*
            MissionPlanExecutionCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanExecutionCommandAckReportTypePluginSupport_copy_data(
                MissionPlanExecutionCommandAckReportType *out,
                const MissionPlanExecutionCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            MissionPlanExecutionCommandAckReportTypePluginSupport_destroy_data_w_params(
                MissionPlanExecutionCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanExecutionCommandAckReportTypePluginSupport_destroy_data_ex(
                MissionPlanExecutionCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanExecutionCommandAckReportTypePluginSupport_destroy_data(
                MissionPlanExecutionCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanExecutionCommandAckReportTypePluginSupport_print_data(
                const MissionPlanExecutionCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanExecutionCommandAckReportType*
            MissionPlanExecutionCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanExecutionCommandAckReportType*
            MissionPlanExecutionCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanExecutionCommandAckReportTypePluginSupport_destroy_key_ex(
                MissionPlanExecutionCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanExecutionCommandAckReportTypePluginSupport_destroy_key(
                MissionPlanExecutionCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanExecutionCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanExecutionCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanExecutionCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanExecutionCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanExecutionCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanExecutionCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanExecutionCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanExecutionCommandAckReportType *out,
                const MissionPlanExecutionCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanExecutionCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanExecutionCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanExecutionCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanExecutionCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanExecutionCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanExecutionCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanExecutionCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanExecutionCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanExecutionCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanExecutionCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanExecutionCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanExecutionCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanExecutionCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanExecutionCommandAckReportTypeKeyHolder *key, 
                const MissionPlanExecutionCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanExecutionCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanExecutionCommandAckReportType *instance, 
                const MissionPlanExecutionCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanExecutionCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanExecutionCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanExecutionCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanExecutionControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanExecutionCommandAckReportTypePlugin_807923944_h */

