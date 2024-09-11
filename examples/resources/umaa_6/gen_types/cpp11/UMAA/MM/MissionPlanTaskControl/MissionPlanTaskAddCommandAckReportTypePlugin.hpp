

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanTaskAddCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanTaskAddCommandAckReportTypePlugin_1063755675_h
#define MissionPlanTaskAddCommandAckReportTypePlugin_1063755675_h

#include "MissionPlanTaskAddCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/MissionPlanTaskControl/MissionPlanTaskAddCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace MissionPlanTaskControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionPlanTaskAddCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanTaskAddCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanTaskAddCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanTaskAddCommandAckReportType.
            */
            typedef class MissionPlanTaskAddCommandAckReportType MissionPlanTaskAddCommandAckReportTypeKeyHolder;

            #define MissionPlanTaskAddCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanTaskAddCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanTaskAddCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanTaskAddCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanTaskAddCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanTaskAddCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanTaskAddCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanTaskAddCommandAckReportType*
            MissionPlanTaskAddCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanTaskAddCommandAckReportType*
            MissionPlanTaskAddCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanTaskAddCommandAckReportType*
            MissionPlanTaskAddCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandAckReportTypePluginSupport_copy_data(
                MissionPlanTaskAddCommandAckReportType *out,
                const MissionPlanTaskAddCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandAckReportTypePluginSupport_destroy_data_w_params(
                MissionPlanTaskAddCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandAckReportTypePluginSupport_destroy_data_ex(
                MissionPlanTaskAddCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandAckReportTypePluginSupport_destroy_data(
                MissionPlanTaskAddCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandAckReportTypePluginSupport_print_data(
                const MissionPlanTaskAddCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanTaskAddCommandAckReportType*
            MissionPlanTaskAddCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanTaskAddCommandAckReportType*
            MissionPlanTaskAddCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandAckReportTypePluginSupport_destroy_key_ex(
                MissionPlanTaskAddCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandAckReportTypePluginSupport_destroy_key(
                MissionPlanTaskAddCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanTaskAddCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanTaskAddCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanTaskAddCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanTaskAddCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandAckReportType *out,
                const MissionPlanTaskAddCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanTaskAddCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanTaskAddCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanTaskAddCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanTaskAddCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTaskAddCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanTaskAddCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTaskAddCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTaskAddCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandAckReportTypeKeyHolder *key, 
                const MissionPlanTaskAddCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskAddCommandAckReportType *instance, 
                const MissionPlanTaskAddCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskAddCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanTaskAddCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanTaskAddCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanTaskControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanTaskAddCommandAckReportTypePlugin_1063755675_h */

