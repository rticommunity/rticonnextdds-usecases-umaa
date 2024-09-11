

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanExecutionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskPlanExecutionCommandAckReportTypePlugin_338062979_h
#define TaskPlanExecutionCommandAckReportTypePlugin_338062979_h

#include "TaskPlanExecutionCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/TaskPlanExecutionControl/TaskPlanExecutionCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace TaskPlanExecutionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TaskPlanExecutionCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TaskPlanExecutionCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TaskPlanExecutionCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TaskPlanExecutionCommandAckReportType.
            */
            typedef class TaskPlanExecutionCommandAckReportType TaskPlanExecutionCommandAckReportTypeKeyHolder;

            #define TaskPlanExecutionCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskPlanExecutionCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskPlanExecutionCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TaskPlanExecutionCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TaskPlanExecutionCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TaskPlanExecutionCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TaskPlanExecutionCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TaskPlanExecutionCommandAckReportType*
            TaskPlanExecutionCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TaskPlanExecutionCommandAckReportType*
            TaskPlanExecutionCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanExecutionCommandAckReportType*
            TaskPlanExecutionCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandAckReportTypePluginSupport_copy_data(
                TaskPlanExecutionCommandAckReportType *out,
                const TaskPlanExecutionCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandAckReportTypePluginSupport_destroy_data_w_params(
                TaskPlanExecutionCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandAckReportTypePluginSupport_destroy_data_ex(
                TaskPlanExecutionCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandAckReportTypePluginSupport_destroy_data(
                TaskPlanExecutionCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandAckReportTypePluginSupport_print_data(
                const TaskPlanExecutionCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TaskPlanExecutionCommandAckReportType*
            TaskPlanExecutionCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanExecutionCommandAckReportType*
            TaskPlanExecutionCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandAckReportTypePluginSupport_destroy_key_ex(
                TaskPlanExecutionCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandAckReportTypePluginSupport_destroy_key(
                TaskPlanExecutionCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TaskPlanExecutionCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TaskPlanExecutionCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TaskPlanExecutionCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandAckReportType *out,
                const TaskPlanExecutionCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TaskPlanExecutionCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TaskPlanExecutionCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TaskPlanExecutionCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                TaskPlanExecutionCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TaskPlanExecutionCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TaskPlanExecutionCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanExecutionCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanExecutionCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandAckReportTypeKeyHolder *key, 
                const TaskPlanExecutionCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandAckReportType *instance, 
                const TaskPlanExecutionCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TaskPlanExecutionCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TaskPlanExecutionCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TaskPlanExecutionControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskPlanExecutionCommandAckReportTypePlugin_338062979_h */

