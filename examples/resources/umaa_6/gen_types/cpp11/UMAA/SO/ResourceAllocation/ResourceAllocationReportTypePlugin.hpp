

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationReportTypePlugin_1351313008_h
#define ResourceAllocationReportTypePlugin_1351313008_h

#include "ResourceAllocationReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/ResourceAllocation/ResourceAllocationControlInfoPlugin.hpp"

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
            * By default, this type is struct ResourceAllocationReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ResourceAllocationReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ResourceAllocationReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ResourceAllocationReportType.
            */
            typedef class ResourceAllocationReportType ResourceAllocationReportTypeKeyHolder;

            #define ResourceAllocationReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ResourceAllocationReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ResourceAllocationReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationReportType*
            ResourceAllocationReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationReportType*
            ResourceAllocationReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationReportType*
            ResourceAllocationReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationReportTypePluginSupport_copy_data(
                ResourceAllocationReportType *out,
                const ResourceAllocationReportType *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationReportTypePluginSupport_destroy_data_w_params(
                ResourceAllocationReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationReportTypePluginSupport_destroy_data_ex(
                ResourceAllocationReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationReportTypePluginSupport_destroy_data(
                ResourceAllocationReportType *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationReportTypePluginSupport_print_data(
                const ResourceAllocationReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ResourceAllocationReportType*
            ResourceAllocationReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationReportType*
            ResourceAllocationReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ResourceAllocationReportTypePluginSupport_destroy_key_ex(
                ResourceAllocationReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationReportTypePluginSupport_destroy_key(
                ResourceAllocationReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ResourceAllocationReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ResourceAllocationReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ResourceAllocationReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ResourceAllocationReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ResourceAllocationReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationReportType *out,
                const ResourceAllocationReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationReportTypePlugin_deserialize_from_cdr_buffer(
                ResourceAllocationReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationReportTypeKeyHolder *key, 
                const ResourceAllocationReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationReportType *instance, 
                const ResourceAllocationReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ResourceAllocationReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ResourceAllocationReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ResourceAllocation  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ResourceAllocationReportTypePlugin_1351313008_h */

