

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationPriorityReportTypePlugin_1546273215_h
#define ResourceAllocationPriorityReportTypePlugin_1546273215_h

#include "ResourceAllocationPriorityReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/ResourceAllocation/ResourceAllocationPriorityInfoPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace ResourceAllocation {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ResourceAllocationPriorityReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ResourceAllocationPriorityReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ResourceAllocationPriorityReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ResourceAllocationPriorityReportType.
            */
            typedef class ResourceAllocationPriorityReportType ResourceAllocationPriorityReportTypeKeyHolder;

            #define ResourceAllocationPriorityReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationPriorityReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationPriorityReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationPriorityReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ResourceAllocationPriorityReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ResourceAllocationPriorityReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationPriorityReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType*
            ResourceAllocationPriorityReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType*
            ResourceAllocationPriorityReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType*
            ResourceAllocationPriorityReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportTypePluginSupport_copy_data(
                ResourceAllocationPriorityReportType *out,
                const ResourceAllocationPriorityReportType *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportTypePluginSupport_destroy_data_w_params(
                ResourceAllocationPriorityReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportTypePluginSupport_destroy_data_ex(
                ResourceAllocationPriorityReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportTypePluginSupport_destroy_data(
                ResourceAllocationPriorityReportType *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportTypePluginSupport_print_data(
                const ResourceAllocationPriorityReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType*
            ResourceAllocationPriorityReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType*
            ResourceAllocationPriorityReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportTypePluginSupport_destroy_key_ex(
                ResourceAllocationPriorityReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportTypePluginSupport_destroy_key(
                ResourceAllocationPriorityReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ResourceAllocationPriorityReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ResourceAllocationPriorityReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ResourceAllocationPriorityReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType *out,
                const ResourceAllocationPriorityReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationPriorityReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationPriorityReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationPriorityReportTypePlugin_deserialize_from_cdr_buffer(
                ResourceAllocationPriorityReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationPriorityReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationPriorityReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationPriorityReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationPriorityReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportTypeKeyHolder *key, 
                const ResourceAllocationPriorityReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType *instance, 
                const ResourceAllocationPriorityReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ResourceAllocationPriorityReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ResourceAllocationPriorityReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ResourceAllocationPriorityReportType_PrioritiesSet
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ResourceAllocationPriorityReportType_PrioritiesSet)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ResourceAllocationPriorityReportType_PrioritiesSet must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ResourceAllocationPriorityReportType_PrioritiesSet.
            */
            typedef class ResourceAllocationPriorityReportType_PrioritiesSet ResourceAllocationPriorityReportType_PrioritiesSetKeyHolder;

            #define ResourceAllocationPriorityReportType_PrioritiesSetPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationPriorityReportType_PrioritiesSetPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationPriorityReportType_PrioritiesSetPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationPriorityReportType_PrioritiesSetPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ResourceAllocationPriorityReportType_PrioritiesSetPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ResourceAllocationPriorityReportType_PrioritiesSetPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationPriorityReportType_PrioritiesSetPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType_PrioritiesSet*
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType_PrioritiesSet*
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType_PrioritiesSet*
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_copy_data(
                ResourceAllocationPriorityReportType_PrioritiesSet *out,
                const ResourceAllocationPriorityReportType_PrioritiesSet *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_destroy_data_w_params(
                ResourceAllocationPriorityReportType_PrioritiesSet *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_destroy_data_ex(
                ResourceAllocationPriorityReportType_PrioritiesSet *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_destroy_data(
                ResourceAllocationPriorityReportType_PrioritiesSet *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_print_data(
                const ResourceAllocationPriorityReportType_PrioritiesSet *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType_PrioritiesSet*
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationPriorityReportType_PrioritiesSet*
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_destroy_key_ex(
                ResourceAllocationPriorityReportType_PrioritiesSetKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportType_PrioritiesSetPluginSupport_destroy_key(
                ResourceAllocationPriorityReportType_PrioritiesSetKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType_PrioritiesSet *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType_PrioritiesSet *out,
                const ResourceAllocationPriorityReportType_PrioritiesSet *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationPriorityReportType_PrioritiesSet *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType_PrioritiesSet **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_deserialize_from_cdr_buffer(
                ResourceAllocationPriorityReportType_PrioritiesSet *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType_PrioritiesSet ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType_PrioritiesSetKeyHolder *key, 
                const ResourceAllocationPriorityReportType_PrioritiesSet *instance);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityReportType_PrioritiesSet *instance, 
                const ResourceAllocationPriorityReportType_PrioritiesSetKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_new(void);

            NDDSUSERDllExport extern void
            ResourceAllocationPriorityReportType_PrioritiesSetPlugin_delete(struct PRESTypePlugin *);

        } /* namespace ResourceAllocation  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ResourceAllocationPriorityReportTypePlugin_1546273215_h */

