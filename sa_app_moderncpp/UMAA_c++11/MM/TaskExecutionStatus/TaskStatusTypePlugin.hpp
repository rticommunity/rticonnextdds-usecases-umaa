

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskStatusTypePlugin_1082708537_h
#define TaskStatusTypePlugin_1082708537_h

#include "TaskStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

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
            * By default, this type is struct TaskStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TaskStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TaskStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TaskStatusType.
            */
            typedef class TaskStatusType TaskStatusTypeKeyHolder;

            #define TaskStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TaskStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TaskStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TaskStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TaskStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TaskStatusType*
            TaskStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TaskStatusType*
            TaskStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskStatusType*
            TaskStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TaskStatusTypePluginSupport_copy_data(
                TaskStatusType *out,
                const TaskStatusType *in);

            NDDSUSERDllExport extern void 
            TaskStatusTypePluginSupport_destroy_data_w_params(
                TaskStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TaskStatusTypePluginSupport_destroy_data_ex(
                TaskStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskStatusTypePluginSupport_destroy_data(
                TaskStatusType *sample);

            NDDSUSERDllExport extern void 
            TaskStatusTypePluginSupport_print_data(
                const TaskStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TaskStatusType*
            TaskStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskStatusType*
            TaskStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TaskStatusTypePluginSupport_destroy_key_ex(
                TaskStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskStatusTypePluginSupport_destroy_key(
                TaskStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TaskStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TaskStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TaskStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TaskStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TaskStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TaskStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskStatusType *out,
                const TaskStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TaskStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TaskStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TaskStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TaskStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TaskStatusTypePlugin_deserialize_from_cdr_buffer(
                TaskStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TaskStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TaskStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TaskStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TaskStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TaskStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TaskStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskStatusTypeKeyHolder *key, 
                const TaskStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            TaskStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TaskStatusType *instance, 
                const TaskStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TaskStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TaskStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TaskStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TaskExecutionStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskStatusTypePlugin_1082708537_h */

