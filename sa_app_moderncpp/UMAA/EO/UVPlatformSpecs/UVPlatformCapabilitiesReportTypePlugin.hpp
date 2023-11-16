

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformCapabilitiesReportTypePlugin_1594135249_h
#define UVPlatformCapabilitiesReportTypePlugin_1594135249_h

#include "UVPlatformCapabilitiesReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/UVPlatformSpecs/UVPlatformCapabilitiesTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace UVPlatformSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct UVPlatformCapabilitiesReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct UVPlatformCapabilitiesReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * UVPlatformCapabilitiesReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct UVPlatformCapabilitiesReportType.
            */
            typedef  class UVPlatformCapabilitiesReportType UVPlatformCapabilitiesReportTypeKeyHolder;

            #define UVPlatformCapabilitiesReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define UVPlatformCapabilitiesReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define UVPlatformCapabilitiesReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define UVPlatformCapabilitiesReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define UVPlatformCapabilitiesReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define UVPlatformCapabilitiesReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define UVPlatformCapabilitiesReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern UVPlatformCapabilitiesReportType*
            UVPlatformCapabilitiesReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern UVPlatformCapabilitiesReportType*
            UVPlatformCapabilitiesReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern UVPlatformCapabilitiesReportType*
            UVPlatformCapabilitiesReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesReportTypePluginSupport_copy_data(
                UVPlatformCapabilitiesReportType *out,
                const UVPlatformCapabilitiesReportType *in);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesReportTypePluginSupport_destroy_data_w_params(
                UVPlatformCapabilitiesReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesReportTypePluginSupport_destroy_data_ex(
                UVPlatformCapabilitiesReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesReportTypePluginSupport_destroy_data(
                UVPlatformCapabilitiesReportType *sample);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesReportTypePluginSupport_print_data(
                const UVPlatformCapabilitiesReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern UVPlatformCapabilitiesReportType*
            UVPlatformCapabilitiesReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern UVPlatformCapabilitiesReportType*
            UVPlatformCapabilitiesReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesReportTypePluginSupport_destroy_key_ex(
                UVPlatformCapabilitiesReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesReportTypePluginSupport_destroy_key(
                UVPlatformCapabilitiesReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            UVPlatformCapabilitiesReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            UVPlatformCapabilitiesReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            UVPlatformCapabilitiesReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesReportType *out,
                const UVPlatformCapabilitiesReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            UVPlatformCapabilitiesReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const UVPlatformCapabilitiesReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            UVPlatformCapabilitiesReportTypePlugin_deserialize_from_cdr_buffer(
                UVPlatformCapabilitiesReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            UVPlatformCapabilitiesReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            UVPlatformCapabilitiesReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            UVPlatformCapabilitiesReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            UVPlatformCapabilitiesReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesReportTypeKeyHolder *key, 
                const UVPlatformCapabilitiesReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesReportType *instance, 
                const UVPlatformCapabilitiesReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            UVPlatformCapabilitiesReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            UVPlatformCapabilitiesReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace UVPlatformSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* UVPlatformCapabilitiesReportTypePlugin_1594135249_h */

