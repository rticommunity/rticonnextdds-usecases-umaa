

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskPlanAssignmentReportTypePlugin_193556010_h
#define TaskPlanAssignmentReportTypePlugin_193556010_h

#include "TaskPlanAssignmentReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace TaskPlanAssignmentStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TaskPlanAssignmentReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TaskPlanAssignmentReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TaskPlanAssignmentReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TaskPlanAssignmentReportType.
            */
            typedef  class TaskPlanAssignmentReportType TaskPlanAssignmentReportTypeKeyHolder;

            #define TaskPlanAssignmentReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskPlanAssignmentReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskPlanAssignmentReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TaskPlanAssignmentReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TaskPlanAssignmentReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TaskPlanAssignmentReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TaskPlanAssignmentReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TaskPlanAssignmentReportType*
            TaskPlanAssignmentReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TaskPlanAssignmentReportType*
            TaskPlanAssignmentReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanAssignmentReportType*
            TaskPlanAssignmentReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanAssignmentReportTypePluginSupport_copy_data(
                TaskPlanAssignmentReportType *out,
                const TaskPlanAssignmentReportType *in);

            NDDSUSERDllExport extern void 
            TaskPlanAssignmentReportTypePluginSupport_destroy_data_w_params(
                TaskPlanAssignmentReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TaskPlanAssignmentReportTypePluginSupport_destroy_data_ex(
                TaskPlanAssignmentReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanAssignmentReportTypePluginSupport_destroy_data(
                TaskPlanAssignmentReportType *sample);

            NDDSUSERDllExport extern void 
            TaskPlanAssignmentReportTypePluginSupport_print_data(
                const TaskPlanAssignmentReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TaskPlanAssignmentReportType*
            TaskPlanAssignmentReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanAssignmentReportType*
            TaskPlanAssignmentReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TaskPlanAssignmentReportTypePluginSupport_destroy_key_ex(
                TaskPlanAssignmentReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanAssignmentReportTypePluginSupport_destroy_key(
                TaskPlanAssignmentReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TaskPlanAssignmentReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TaskPlanAssignmentReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TaskPlanAssignmentReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TaskPlanAssignmentReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TaskPlanAssignmentReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanAssignmentReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TaskPlanAssignmentReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanAssignmentReportType *out,
                const TaskPlanAssignmentReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TaskPlanAssignmentReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TaskPlanAssignmentReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TaskPlanAssignmentReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanAssignmentReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TaskPlanAssignmentReportTypePlugin_deserialize_from_cdr_buffer(
                TaskPlanAssignmentReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TaskPlanAssignmentReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TaskPlanAssignmentReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanAssignmentReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanAssignmentReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanAssignmentReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanAssignmentReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanAssignmentReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanAssignmentReportTypeKeyHolder *key, 
                const TaskPlanAssignmentReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanAssignmentReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanAssignmentReportType *instance, 
                const TaskPlanAssignmentReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanAssignmentReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TaskPlanAssignmentReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TaskPlanAssignmentReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TaskPlanAssignmentStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskPlanAssignmentReportTypePlugin_193556010_h */

