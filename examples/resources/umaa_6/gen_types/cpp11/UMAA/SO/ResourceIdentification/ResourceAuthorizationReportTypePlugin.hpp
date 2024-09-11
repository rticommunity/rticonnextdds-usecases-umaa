

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAuthorizationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAuthorizationReportTypePlugin_2071144061_h
#define ResourceAuthorizationReportTypePlugin_2071144061_h

#include "ResourceAuthorizationReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
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
        namespace ResourceIdentification {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ResourceAuthorizationReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ResourceAuthorizationReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ResourceAuthorizationReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ResourceAuthorizationReportType.
            */
            typedef class ResourceAuthorizationReportType ResourceAuthorizationReportTypeKeyHolder;

            #define ResourceAuthorizationReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAuthorizationReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAuthorizationReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAuthorizationReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ResourceAuthorizationReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ResourceAuthorizationReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAuthorizationReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAuthorizationReportType*
            ResourceAuthorizationReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAuthorizationReportType*
            ResourceAuthorizationReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAuthorizationReportType*
            ResourceAuthorizationReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAuthorizationReportTypePluginSupport_copy_data(
                ResourceAuthorizationReportType *out,
                const ResourceAuthorizationReportType *in);

            NDDSUSERDllExport extern void 
            ResourceAuthorizationReportTypePluginSupport_destroy_data_w_params(
                ResourceAuthorizationReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAuthorizationReportTypePluginSupport_destroy_data_ex(
                ResourceAuthorizationReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAuthorizationReportTypePluginSupport_destroy_data(
                ResourceAuthorizationReportType *sample);

            NDDSUSERDllExport extern void 
            ResourceAuthorizationReportTypePluginSupport_print_data(
                const ResourceAuthorizationReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ResourceAuthorizationReportType*
            ResourceAuthorizationReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAuthorizationReportType*
            ResourceAuthorizationReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ResourceAuthorizationReportTypePluginSupport_destroy_key_ex(
                ResourceAuthorizationReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAuthorizationReportTypePluginSupport_destroy_key(
                ResourceAuthorizationReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ResourceAuthorizationReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ResourceAuthorizationReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ResourceAuthorizationReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ResourceAuthorizationReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ResourceAuthorizationReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAuthorizationReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ResourceAuthorizationReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAuthorizationReportType *out,
                const ResourceAuthorizationReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAuthorizationReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAuthorizationReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAuthorizationReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAuthorizationReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAuthorizationReportTypePlugin_deserialize_from_cdr_buffer(
                ResourceAuthorizationReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAuthorizationReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAuthorizationReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAuthorizationReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAuthorizationReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAuthorizationReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAuthorizationReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ResourceAuthorizationReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAuthorizationReportTypeKeyHolder *key, 
                const ResourceAuthorizationReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ResourceAuthorizationReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAuthorizationReportType *instance, 
                const ResourceAuthorizationReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ResourceAuthorizationReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ResourceAuthorizationReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ResourceAuthorizationReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ResourceIdentification  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ResourceAuthorizationReportTypePlugin_2071144061_h */

