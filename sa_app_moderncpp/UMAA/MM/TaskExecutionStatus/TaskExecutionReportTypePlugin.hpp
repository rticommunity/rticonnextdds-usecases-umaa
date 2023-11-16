

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskExecutionReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskExecutionReportTypePlugin_1774070958_h
#define TaskExecutionReportTypePlugin_1774070958_h

#include "TaskExecutionReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/TaskExecutionStatus/TaskStatusTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace TaskExecutionStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TaskExecutionReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TaskExecutionReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TaskExecutionReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TaskExecutionReportType.
            */
            typedef  class TaskExecutionReportType TaskExecutionReportTypeKeyHolder;

            #define TaskExecutionReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskExecutionReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskExecutionReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TaskExecutionReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TaskExecutionReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TaskExecutionReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TaskExecutionReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TaskExecutionReportType*
            TaskExecutionReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TaskExecutionReportType*
            TaskExecutionReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskExecutionReportType*
            TaskExecutionReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionReportTypePluginSupport_copy_data(
                TaskExecutionReportType *out,
                const TaskExecutionReportType *in);

            NDDSUSERDllExport extern void 
            TaskExecutionReportTypePluginSupport_destroy_data_w_params(
                TaskExecutionReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TaskExecutionReportTypePluginSupport_destroy_data_ex(
                TaskExecutionReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskExecutionReportTypePluginSupport_destroy_data(
                TaskExecutionReportType *sample);

            NDDSUSERDllExport extern void 
            TaskExecutionReportTypePluginSupport_print_data(
                const TaskExecutionReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TaskExecutionReportType*
            TaskExecutionReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskExecutionReportType*
            TaskExecutionReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TaskExecutionReportTypePluginSupport_destroy_key_ex(
                TaskExecutionReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskExecutionReportTypePluginSupport_destroy_key(
                TaskExecutionReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TaskExecutionReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TaskExecutionReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TaskExecutionReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TaskExecutionReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TaskExecutionReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionReportType *out,
                const TaskExecutionReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TaskExecutionReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TaskExecutionReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TaskExecutionReportTypePlugin_deserialize_from_cdr_buffer(
                TaskExecutionReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TaskExecutionReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TaskExecutionReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TaskExecutionReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TaskExecutionReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionReportTypeKeyHolder *key, 
                const TaskExecutionReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionReportType *instance, 
                const TaskExecutionReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TaskExecutionReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TaskExecutionReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TaskExecutionStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskExecutionReportTypePlugin_1774070958_h */

