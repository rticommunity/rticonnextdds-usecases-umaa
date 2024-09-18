

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationCommandAckReportTypePlugin_1440267787_h
#define ResourceAllocationCommandAckReportTypePlugin_1440267787_h

#include "ResourceAllocationCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/ResourceAllocation/ResourceAllocationCommandTypePlugin.hpp"

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
            * By default, this type is struct ResourceAllocationCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ResourceAllocationCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ResourceAllocationCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ResourceAllocationCommandAckReportType.
            */
            typedef class ResourceAllocationCommandAckReportType ResourceAllocationCommandAckReportTypeKeyHolder;

            #define ResourceAllocationCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ResourceAllocationCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ResourceAllocationCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationCommandAckReportType*
            ResourceAllocationCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationCommandAckReportType*
            ResourceAllocationCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationCommandAckReportType*
            ResourceAllocationCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandAckReportTypePluginSupport_copy_data(
                ResourceAllocationCommandAckReportType *out,
                const ResourceAllocationCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandAckReportTypePluginSupport_destroy_data_w_params(
                ResourceAllocationCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandAckReportTypePluginSupport_destroy_data_ex(
                ResourceAllocationCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandAckReportTypePluginSupport_destroy_data(
                ResourceAllocationCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandAckReportTypePluginSupport_print_data(
                const ResourceAllocationCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ResourceAllocationCommandAckReportType*
            ResourceAllocationCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationCommandAckReportType*
            ResourceAllocationCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandAckReportTypePluginSupport_destroy_key_ex(
                ResourceAllocationCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandAckReportTypePluginSupport_destroy_key(
                ResourceAllocationCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ResourceAllocationCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ResourceAllocationCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ResourceAllocationCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ResourceAllocationCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandAckReportType *out,
                const ResourceAllocationCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                ResourceAllocationCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandAckReportTypeKeyHolder *key, 
                const ResourceAllocationCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationCommandAckReportType *instance, 
                const ResourceAllocationCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ResourceAllocationCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ResourceAllocationCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ResourceAllocation  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ResourceAllocationCommandAckReportTypePlugin_1440267787_h */
