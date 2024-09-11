

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskPlanTypePlugin_1877395682_h
#define TaskPlanTypePlugin_1877395682_h

#include "TaskPlanType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeSetMetadataPlugin.hpp"
#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Time/DateTimeRequirementTypePlugin.hpp"
#include "UMAA/MM/BaseType/ObjectiveTypePlugin.hpp"
#include "UMAA/MM/BaseType/StateTriggerTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            #define TaskPlanTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskPlanTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskPlanTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

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

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

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
                struct RTICdrStream *cdrStream,
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
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TaskPlanTypeObjectivesSetElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TaskPlanTypeObjectivesSetElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TaskPlanTypeObjectivesSetElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TaskPlanTypeObjectivesSetElement.
            */
            typedef class TaskPlanTypeObjectivesSetElement TaskPlanTypeObjectivesSetElementKeyHolder;

            #define TaskPlanTypeObjectivesSetElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TaskPlanTypeObjectivesSetElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TaskPlanTypeObjectivesSetElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TaskPlanTypeObjectivesSetElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TaskPlanTypeObjectivesSetElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TaskPlanTypeObjectivesSetElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TaskPlanTypeObjectivesSetElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TaskPlanTypeObjectivesSetElement*
            TaskPlanTypeObjectivesSetElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TaskPlanTypeObjectivesSetElement*
            TaskPlanTypeObjectivesSetElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanTypeObjectivesSetElement*
            TaskPlanTypeObjectivesSetElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypeObjectivesSetElementPluginSupport_copy_data(
                TaskPlanTypeObjectivesSetElement *out,
                const TaskPlanTypeObjectivesSetElement *in);

            NDDSUSERDllExport extern void 
            TaskPlanTypeObjectivesSetElementPluginSupport_destroy_data_w_params(
                TaskPlanTypeObjectivesSetElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TaskPlanTypeObjectivesSetElementPluginSupport_destroy_data_ex(
                TaskPlanTypeObjectivesSetElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanTypeObjectivesSetElementPluginSupport_destroy_data(
                TaskPlanTypeObjectivesSetElement *sample);

            NDDSUSERDllExport extern void 
            TaskPlanTypeObjectivesSetElementPluginSupport_print_data(
                const TaskPlanTypeObjectivesSetElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TaskPlanTypeObjectivesSetElement*
            TaskPlanTypeObjectivesSetElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TaskPlanTypeObjectivesSetElement*
            TaskPlanTypeObjectivesSetElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TaskPlanTypeObjectivesSetElementPluginSupport_destroy_key_ex(
                TaskPlanTypeObjectivesSetElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TaskPlanTypeObjectivesSetElementPluginSupport_destroy_key(
                TaskPlanTypeObjectivesSetElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TaskPlanTypeObjectivesSetElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TaskPlanTypeObjectivesSetElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TaskPlanTypeObjectivesSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TaskPlanTypeObjectivesSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TaskPlanTypeObjectivesSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanTypeObjectivesSetElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypeObjectivesSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanTypeObjectivesSetElement *out,
                const TaskPlanTypeObjectivesSetElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TaskPlanTypeObjectivesSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TaskPlanTypeObjectivesSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypeObjectivesSetElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanTypeObjectivesSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TaskPlanTypeObjectivesSetElementPlugin_deserialize_from_cdr_buffer(
                TaskPlanTypeObjectivesSetElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TaskPlanTypeObjectivesSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TaskPlanTypeObjectivesSetElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanTypeObjectivesSetElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TaskPlanTypeObjectivesSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypeObjectivesSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanTypeObjectivesSetElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypeObjectivesSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanTypeObjectivesSetElementKeyHolder *key, 
                const TaskPlanTypeObjectivesSetElement *instance);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypeObjectivesSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TaskPlanTypeObjectivesSetElement *instance, 
                const TaskPlanTypeObjectivesSetElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TaskPlanTypeObjectivesSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TaskPlanTypeObjectivesSetElementPlugin_new(void);

            NDDSUSERDllExport extern void
            TaskPlanTypeObjectivesSetElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TaskPlanTypePlugin_1877395682_h */

