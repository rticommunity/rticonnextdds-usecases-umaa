

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationConfigReportTypePlugin_497199367_h
#define ResourceAllocationConfigReportTypePlugin_497199367_h

#include "ResourceAllocationConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/ResourceAllocation/ResourceAllocationDefinitionTypePlugin.hpp"

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
            * By default, this type is struct ResourceAllocationConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ResourceAllocationConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ResourceAllocationConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ResourceAllocationConfigReportType.
            */
            typedef class ResourceAllocationConfigReportType ResourceAllocationConfigReportTypeKeyHolder;

            #define ResourceAllocationConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ResourceAllocationConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ResourceAllocationConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationConfigReportType*
            ResourceAllocationConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationConfigReportType*
            ResourceAllocationConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationConfigReportType*
            ResourceAllocationConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportTypePluginSupport_copy_data(
                ResourceAllocationConfigReportType *out,
                const ResourceAllocationConfigReportType *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportTypePluginSupport_destroy_data_w_params(
                ResourceAllocationConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportTypePluginSupport_destroy_data_ex(
                ResourceAllocationConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportTypePluginSupport_destroy_data(
                ResourceAllocationConfigReportType *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportTypePluginSupport_print_data(
                const ResourceAllocationConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ResourceAllocationConfigReportType*
            ResourceAllocationConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationConfigReportType*
            ResourceAllocationConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportTypePluginSupport_destroy_key_ex(
                ResourceAllocationConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportTypePluginSupport_destroy_key(
                ResourceAllocationConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ResourceAllocationConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ResourceAllocationConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ResourceAllocationConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType *out,
                const ResourceAllocationConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationConfigReportTypePlugin_deserialize_from_cdr_buffer(
                ResourceAllocationConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportTypeKeyHolder *key, 
                const ResourceAllocationConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType *instance, 
                const ResourceAllocationConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ResourceAllocationConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ResourceAllocationConfigReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ResourceAllocationConfigReportType_ResourcesSet
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ResourceAllocationConfigReportType_ResourcesSet)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ResourceAllocationConfigReportType_ResourcesSet must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ResourceAllocationConfigReportType_ResourcesSet.
            */
            typedef class ResourceAllocationConfigReportType_ResourcesSet ResourceAllocationConfigReportType_ResourcesSetKeyHolder;

            #define ResourceAllocationConfigReportType_ResourcesSetPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationConfigReportType_ResourcesSetPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationConfigReportType_ResourcesSetPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationConfigReportType_ResourcesSetPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ResourceAllocationConfigReportType_ResourcesSetPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ResourceAllocationConfigReportType_ResourcesSetPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationConfigReportType_ResourcesSetPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationConfigReportType_ResourcesSet*
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationConfigReportType_ResourcesSet*
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationConfigReportType_ResourcesSet*
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_copy_data(
                ResourceAllocationConfigReportType_ResourcesSet *out,
                const ResourceAllocationConfigReportType_ResourcesSet *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_data_w_params(
                ResourceAllocationConfigReportType_ResourcesSet *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_data_ex(
                ResourceAllocationConfigReportType_ResourcesSet *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_data(
                ResourceAllocationConfigReportType_ResourcesSet *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_print_data(
                const ResourceAllocationConfigReportType_ResourcesSet *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ResourceAllocationConfigReportType_ResourcesSet*
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationConfigReportType_ResourcesSet*
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_key_ex(
                ResourceAllocationConfigReportType_ResourcesSetKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_key(
                ResourceAllocationConfigReportType_ResourcesSetKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ResourceAllocationConfigReportType_ResourcesSetPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSet *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSet *out,
                const ResourceAllocationConfigReportType_ResourcesSet *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationConfigReportType_ResourcesSetPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationConfigReportType_ResourcesSet *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSet **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationConfigReportType_ResourcesSetPlugin_deserialize_from_cdr_buffer(
                ResourceAllocationConfigReportType_ResourcesSet *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSet ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSetKeyHolder *key, 
                const ResourceAllocationConfigReportType_ResourcesSet *instance);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSet *instance, 
                const ResourceAllocationConfigReportType_ResourcesSetKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ResourceAllocationConfigReportType_ResourcesSetPlugin_new(void);

            NDDSUSERDllExport extern void
            ResourceAllocationConfigReportType_ResourcesSetPlugin_delete(struct PRESTypePlugin *);

        } /* namespace ResourceAllocation  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ResourceAllocationConfigReportTypePlugin_497199367_h */

