

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformCapabilitiesTypePlugin_797577100_h
#define UVPlatformCapabilitiesTypePlugin_797577100_h

#include "UVPlatformCapabilitiesType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace UVPlatformSpecs {

            #define UVPlatformCapabilitiesTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define UVPlatformCapabilitiesTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define UVPlatformCapabilitiesTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define UVPlatformCapabilitiesTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define UVPlatformCapabilitiesTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern UVPlatformCapabilitiesType*
            UVPlatformCapabilitiesTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern UVPlatformCapabilitiesType*
            UVPlatformCapabilitiesTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern UVPlatformCapabilitiesType*
            UVPlatformCapabilitiesTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesTypePluginSupport_copy_data(
                UVPlatformCapabilitiesType *out,
                const UVPlatformCapabilitiesType *in);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesTypePluginSupport_destroy_data_w_params(
                UVPlatformCapabilitiesType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesTypePluginSupport_destroy_data_ex(
                UVPlatformCapabilitiesType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesTypePluginSupport_destroy_data(
                UVPlatformCapabilitiesType *sample);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesTypePluginSupport_print_data(
                const UVPlatformCapabilitiesType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            UVPlatformCapabilitiesTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            UVPlatformCapabilitiesTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            UVPlatformCapabilitiesTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            UVPlatformCapabilitiesTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesType *out,
                const UVPlatformCapabilitiesType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            UVPlatformCapabilitiesTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const UVPlatformCapabilitiesType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            UVPlatformCapabilitiesTypePlugin_deserialize_from_cdr_buffer(
                UVPlatformCapabilitiesType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            UVPlatformCapabilitiesTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            UVPlatformCapabilitiesTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            UVPlatformCapabilitiesTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            UVPlatformCapabilitiesTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            UVPlatformCapabilitiesTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                UVPlatformCapabilitiesType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            UVPlatformCapabilitiesTypePlugin_new(void);

            NDDSUSERDllExport extern void
            UVPlatformCapabilitiesTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace UVPlatformSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* UVPlatformCapabilitiesTypePlugin_797577100_h */

