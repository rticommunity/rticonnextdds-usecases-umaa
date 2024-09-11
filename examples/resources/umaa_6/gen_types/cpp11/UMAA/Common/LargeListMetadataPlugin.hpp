

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LargeListMetadata.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LargeListMetadataPlugin_1240579003_h
#define LargeListMetadataPlugin_1240579003_h

#include "LargeListMetadata.hpp"

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
    namespace Common {

        #define LargeListMetadataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define LargeListMetadataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LargeListMetadataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LargeListMetadataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LargeListMetadataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LargeListMetadata*
        LargeListMetadataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LargeListMetadata*
        LargeListMetadataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LargeListMetadata*
        LargeListMetadataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LargeListMetadataPluginSupport_copy_data(
            LargeListMetadata *out,
            const LargeListMetadata *in);

        NDDSUSERDllExport extern void 
        LargeListMetadataPluginSupport_destroy_data_w_params(
            LargeListMetadata *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LargeListMetadataPluginSupport_destroy_data_ex(
            LargeListMetadata *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LargeListMetadataPluginSupport_destroy_data(
            LargeListMetadata *sample);

        NDDSUSERDllExport extern void 
        LargeListMetadataPluginSupport_print_data(
            const LargeListMetadata *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        LargeListMetadataPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        LargeListMetadataPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        LargeListMetadataPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        LargeListMetadataPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        LargeListMetadataPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            LargeListMetadata *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        LargeListMetadataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LargeListMetadata *out,
            const LargeListMetadata *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        LargeListMetadataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const LargeListMetadata *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        LargeListMetadataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            LargeListMetadata **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *cdrStream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        LargeListMetadataPlugin_deserialize_from_cdr_buffer(
            LargeListMetadata *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        LargeListMetadataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LargeListMetadataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LargeListMetadataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LargeListMetadataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        LargeListMetadataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            LargeListMetadata ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *cdrStream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        LargeListMetadataPlugin_new(void);

        NDDSUSERDllExport extern void
        LargeListMetadataPlugin_delete(struct PRESTypePlugin *);

    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LargeListMetadataPlugin_1240579003_h */

