

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskExecutionCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskExecutionCommandStatusTypePlugin_698371253_h
#define TaskExecutionCommandStatusTypePlugin_698371253_h

#include "TaskExecutionCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace TaskExecutionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TaskExecutionCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TaskExecutionCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TaskExecutionCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TaskExecutionCommandStatusType.
            */
            typedef class TaskExecutionCommandStatusType TaskExecutionCommandStatusTypeKeyHolder;

            #define TaskExecutionCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskExecutionCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskExecutionCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TaskExecutionCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TaskExecutionCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TaskExecutionCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TaskExecutionCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TaskExecutionCommandStatusType*
            TaskExecutionCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TaskExecutionCommandStatusType*
            TaskExecutionCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskExecutionCommandStatusType*
            TaskExecutionCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionCommandStatusTypePluginSupport_copy_data(
                TaskExecutionCommandStatusType *out,
                const TaskExecutionCommandStatusType *in);

            NDDSUSERDllExport extern void 
            TaskExecutionCommandStatusTypePluginSupport_destroy_data_w_params(
                TaskExecutionCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TaskExecutionCommandStatusTypePluginSupport_destroy_data_ex(
                TaskExecutionCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskExecutionCommandStatusTypePluginSupport_destroy_data(
                TaskExecutionCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            TaskExecutionCommandStatusTypePluginSupport_print_data(
                const TaskExecutionCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TaskExecutionCommandStatusType*
            TaskExecutionCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskExecutionCommandStatusType*
            TaskExecutionCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TaskExecutionCommandStatusTypePluginSupport_destroy_key_ex(
                TaskExecutionCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskExecutionCommandStatusTypePluginSupport_destroy_key(
                TaskExecutionCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TaskExecutionCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TaskExecutionCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TaskExecutionCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TaskExecutionCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TaskExecutionCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionCommandStatusType *out,
                const TaskExecutionCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TaskExecutionCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TaskExecutionCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TaskExecutionCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                TaskExecutionCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TaskExecutionCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TaskExecutionCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TaskExecutionCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TaskExecutionCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionCommandStatusTypeKeyHolder *key, 
                const TaskExecutionCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TaskExecutionCommandStatusType *instance, 
                const TaskExecutionCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TaskExecutionCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TaskExecutionCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TaskExecutionCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TaskExecutionControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskExecutionCommandStatusTypePlugin_698371253_h */

