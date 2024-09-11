

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskStateConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskStateConditionalTypePlugin_1500604044_h
#define TaskStateConditionalTypePlugin_1500604044_h

#include "TaskStateConditionalType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace Conditional {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TaskStateConditionalType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TaskStateConditionalType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TaskStateConditionalType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TaskStateConditionalType.
            */
            typedef class TaskStateConditionalType TaskStateConditionalTypeKeyHolder;

            #define TaskStateConditionalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskStateConditionalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskStateConditionalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TaskStateConditionalTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TaskStateConditionalTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TaskStateConditionalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TaskStateConditionalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TaskStateConditionalType*
            TaskStateConditionalTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TaskStateConditionalType*
            TaskStateConditionalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskStateConditionalType*
            TaskStateConditionalTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TaskStateConditionalTypePluginSupport_copy_data(
                TaskStateConditionalType *out,
                const TaskStateConditionalType *in);

            NDDSUSERDllExport extern void 
            TaskStateConditionalTypePluginSupport_destroy_data_w_params(
                TaskStateConditionalType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TaskStateConditionalTypePluginSupport_destroy_data_ex(
                TaskStateConditionalType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskStateConditionalTypePluginSupport_destroy_data(
                TaskStateConditionalType *sample);

            NDDSUSERDllExport extern void 
            TaskStateConditionalTypePluginSupport_print_data(
                const TaskStateConditionalType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TaskStateConditionalType*
            TaskStateConditionalTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskStateConditionalType*
            TaskStateConditionalTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TaskStateConditionalTypePluginSupport_destroy_key_ex(
                TaskStateConditionalTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskStateConditionalTypePluginSupport_destroy_key(
                TaskStateConditionalTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TaskStateConditionalTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TaskStateConditionalTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TaskStateConditionalTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TaskStateConditionalTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TaskStateConditionalTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskStateConditionalType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TaskStateConditionalTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskStateConditionalType *out,
                const TaskStateConditionalType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TaskStateConditionalTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TaskStateConditionalType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TaskStateConditionalTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TaskStateConditionalType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TaskStateConditionalTypePlugin_deserialize_from_cdr_buffer(
                TaskStateConditionalType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TaskStateConditionalTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TaskStateConditionalTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TaskStateConditionalTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TaskStateConditionalTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TaskStateConditionalTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskStateConditionalType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TaskStateConditionalTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskStateConditionalTypeKeyHolder *key, 
                const TaskStateConditionalType *instance);

            NDDSUSERDllExport extern RTIBool 
            TaskStateConditionalTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TaskStateConditionalType *instance, 
                const TaskStateConditionalTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TaskStateConditionalTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TaskStateConditionalTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TaskStateConditionalTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskStateConditionalTypePlugin_1500604044_h */

