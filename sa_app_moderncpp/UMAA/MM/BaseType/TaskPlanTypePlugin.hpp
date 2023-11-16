

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskPlanTypePlugin_1877394031_h
#define TaskPlanTypePlugin_1877394031_h

#include "TaskPlanType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/DateTime_TolerancePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/MM/BaseType/ObjectiveTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TaskPlanType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TaskPlanType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TaskPlanType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TaskPlanType.
            */
            typedef  class TaskPlanType TaskPlanTypeKeyHolder;

            #define TaskPlanTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskPlanTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskPlanTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TaskPlanTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TaskPlanTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TaskPlanTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TaskPlanTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TaskPlanType*
            TaskPlanTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TaskPlanType*
            TaskPlanTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanType*
            TaskPlanTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypePluginSupport_copy_data(
                TaskPlanType *out,
                const TaskPlanType *in);

            NDDSUSERDllExport extern void 
            TaskPlanTypePluginSupport_destroy_data_w_params(
                TaskPlanType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TaskPlanTypePluginSupport_destroy_data_ex(
                TaskPlanType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanTypePluginSupport_destroy_data(
                TaskPlanType *sample);

            NDDSUSERDllExport extern void 
            TaskPlanTypePluginSupport_print_data(
                const TaskPlanType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TaskPlanType*
            TaskPlanTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanType*
            TaskPlanTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TaskPlanTypePluginSupport_destroy_key_ex(
                TaskPlanTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanTypePluginSupport_destroy_key(
                TaskPlanTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TaskPlanTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TaskPlanTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TaskPlanTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TaskPlanTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TaskPlanTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanType *out,
                const TaskPlanType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TaskPlanTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TaskPlanType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TaskPlanTypePlugin_deserialize_from_cdr_buffer(
                TaskPlanType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TaskPlanTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TaskPlanTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanTypeKeyHolder *key, 
                const TaskPlanType *instance);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanType *instance, 
                const TaskPlanTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TaskPlanTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TaskPlanTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskPlanTypePlugin_1877394031_h */

