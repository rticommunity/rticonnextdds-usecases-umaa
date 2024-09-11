

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanExecutionCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskPlanExecutionCommandTypePlugin_940096767_h
#define TaskPlanExecutionCommandTypePlugin_940096767_h

#include "TaskPlanExecutionCommandType.hpp"

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
        namespace TaskPlanExecutionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TaskPlanExecutionCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TaskPlanExecutionCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TaskPlanExecutionCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TaskPlanExecutionCommandType.
            */
            typedef class TaskPlanExecutionCommandType TaskPlanExecutionCommandTypeKeyHolder;

            #define TaskPlanExecutionCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskPlanExecutionCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskPlanExecutionCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TaskPlanExecutionCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TaskPlanExecutionCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TaskPlanExecutionCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TaskPlanExecutionCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TaskPlanExecutionCommandType*
            TaskPlanExecutionCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TaskPlanExecutionCommandType*
            TaskPlanExecutionCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanExecutionCommandType*
            TaskPlanExecutionCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandTypePluginSupport_copy_data(
                TaskPlanExecutionCommandType *out,
                const TaskPlanExecutionCommandType *in);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandTypePluginSupport_destroy_data_w_params(
                TaskPlanExecutionCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandTypePluginSupport_destroy_data_ex(
                TaskPlanExecutionCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandTypePluginSupport_destroy_data(
                TaskPlanExecutionCommandType *sample);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandTypePluginSupport_print_data(
                const TaskPlanExecutionCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TaskPlanExecutionCommandType*
            TaskPlanExecutionCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanExecutionCommandType*
            TaskPlanExecutionCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandTypePluginSupport_destroy_key_ex(
                TaskPlanExecutionCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandTypePluginSupport_destroy_key(
                TaskPlanExecutionCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TaskPlanExecutionCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TaskPlanExecutionCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TaskPlanExecutionCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TaskPlanExecutionCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandType *out,
                const TaskPlanExecutionCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TaskPlanExecutionCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TaskPlanExecutionCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TaskPlanExecutionCommandTypePlugin_deserialize_from_cdr_buffer(
                TaskPlanExecutionCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TaskPlanExecutionCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TaskPlanExecutionCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanExecutionCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanExecutionCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandTypeKeyHolder *key, 
                const TaskPlanExecutionCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanExecutionCommandType *instance, 
                const TaskPlanExecutionCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanExecutionCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TaskPlanExecutionCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TaskPlanExecutionCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TaskPlanExecutionControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskPlanExecutionCommandTypePlugin_940096767_h */

