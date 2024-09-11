

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanTaskDeleteCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanTaskDeleteCommandAckReportTypePlugin_96404852_h
#define MissionPlanTaskDeleteCommandAckReportTypePlugin_96404852_h

#include "MissionPlanTaskDeleteCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/MissionPlanTaskControl/MissionPlanTaskDeleteCommandTypePlugin.hpp"

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
            * By default, this type is struct MissionPlanTaskDeleteCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionPlanTaskDeleteCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionPlanTaskDeleteCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionPlanTaskDeleteCommandAckReportType.
            */
            typedef class MissionPlanTaskDeleteCommandAckReportType MissionPlanTaskDeleteCommandAckReportTypeKeyHolder;

            #define MissionPlanTaskDeleteCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionPlanTaskDeleteCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionPlanTaskDeleteCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionPlanTaskDeleteCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionPlanTaskDeleteCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionPlanTaskDeleteCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionPlanTaskDeleteCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionPlanTaskDeleteCommandAckReportType*
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionPlanTaskDeleteCommandAckReportType*
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanTaskDeleteCommandAckReportType*
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_copy_data(
                MissionPlanTaskDeleteCommandAckReportType *out,
                const MissionPlanTaskDeleteCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_destroy_data_w_params(
                MissionPlanTaskDeleteCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_destroy_data_ex(
                MissionPlanTaskDeleteCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_destroy_data(
                MissionPlanTaskDeleteCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_print_data(
                const MissionPlanTaskDeleteCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionPlanTaskDeleteCommandAckReportType*
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionPlanTaskDeleteCommandAckReportType*
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_destroy_key_ex(
                MissionPlanTaskDeleteCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionPlanTaskDeleteCommandAckReportTypePluginSupport_destroy_key(
                MissionPlanTaskDeleteCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionPlanTaskDeleteCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskDeleteCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskDeleteCommandAckReportType *out,
                const MissionPlanTaskDeleteCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionPlanTaskDeleteCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionPlanTaskDeleteCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskDeleteCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionPlanTaskDeleteCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                MissionPlanTaskDeleteCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskDeleteCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskDeleteCommandAckReportTypeKeyHolder *key, 
                const MissionPlanTaskDeleteCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionPlanTaskDeleteCommandAckReportType *instance, 
                const MissionPlanTaskDeleteCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionPlanTaskDeleteCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionPlanTaskDeleteCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionPlanTaskDeleteCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionPlanTaskControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionPlanTaskDeleteCommandAckReportTypePlugin_96404852_h */

