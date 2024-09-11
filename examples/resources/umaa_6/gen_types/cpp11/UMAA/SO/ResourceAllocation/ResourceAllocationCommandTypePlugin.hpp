

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationCommandTypePlugin_174024236_h
#define ResourceAllocationCommandTypePlugin_174024236_h

#include "ResourceAllocationCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

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
            * By default, this type is struct ResourceAllocationCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ResourceAllocationCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ResourceAllocationCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ResourceAllocationCommandType.
            */
            typedef class ResourceAllocationCommandType ResourceAllocationCommandTypeKeyHolder;

            #define ResourceAllocationCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ResourceAllocationCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ResourceAllocationCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationCommandType*
            ResourceAllocationCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationCommandType*
            ResourceAllocationCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationCommandType*
            ResourceAllocationCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandTypePluginSupport_copy_data(
                ResourceAllocationCommandType *out,
                const ResourceAllocationCommandType *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandTypePluginSupport_destroy_data_w_params(
                ResourceAllocationCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandTypePluginSupport_destroy_data_ex(
                ResourceAllocationCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandTypePluginSupport_destroy_data(
                ResourceAllocationCommandType *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandTypePluginSupport_print_data(
                const ResourceAllocationCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ResourceAllocationCommandType*
            ResourceAllocationCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationCommandType*
            ResourceAllocationCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandTypePluginSupport_destroy_key_ex(
                ResourceAllocationCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandTypePluginSupport_destroy_key(
                ResourceAllocationCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ResourceAllocationCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ResourceAllocationCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ResourceAllocationCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandType *out,
                const ResourceAllocationCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationCommandTypePlugin_deserialize_from_cdr_buffer(
                ResourceAllocationCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandTypeKeyHolder *key, 
                const ResourceAllocationCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandType *instance, 
                const ResourceAllocationCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ResourceAllocationCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ResourceAllocationCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ResourceAllocation  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ResourceAllocationCommandTypePlugin_174024236_h */

