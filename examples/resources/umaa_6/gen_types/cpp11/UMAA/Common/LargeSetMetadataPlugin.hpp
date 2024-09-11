

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LargeSetMetadata.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LargeSetMetadataPlugin_1474908993_h
#define LargeSetMetadataPlugin_1474908993_h

#include "LargeSetMetadata.hpp"

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

        #define LargeSetMetadataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define LargeSetMetadataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LargeSetMetadataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LargeSetMetadataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LargeSetMetadataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LargeSetMetadata*
        LargeSetMetadataPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LargeSetMetadata*
        LargeSetMetadataPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LargeSetMetadata*
        LargeSetMetadataPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LargeSetMetadataPluginSupport_copy_data(
            LargeSetMetadata *out,
            const LargeSetMetadata *in);

        NDDSUSERDllExport extern void 
        LargeSetMetadataPluginSupport_destroy_data_w_params(
            LargeSetMetadata *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LargeSetMetadataPluginSupport_destroy_data_ex(
            LargeSetMetadata *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LargeSetMetadataPluginSupport_destroy_data(
            LargeSetMetadata *sample);

        NDDSUSERDllExport extern void 
        LargeSetMetadataPluginSupport_print_data(
            const LargeSetMetadata *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        LargeSetMetadataPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        LargeSetMetadataPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        LargeSetMetadataPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        LargeSetMetadataPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        LargeSetMetadataPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            LargeSetMetadata *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        LargeSetMetadataPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LargeSetMetadata *out,
            const LargeSetMetadata *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        LargeSetMetadataPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const LargeSetMetadata *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        LargeSetMetadataPlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            LargeSetMetadata **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *cdrStream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        LargeSetMetadataPlugin_deserialize_from_cdr_buffer(
            LargeSetMetadata *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        LargeSetMetadataPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LargeSetMetadataPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LargeSetMetadataPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LargeSetMetadataPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        LargeSetMetadataPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            LargeSetMetadata ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *cdrStream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        LargeSetMetadataPlugin_new(void);

        NDDSUSERDllExport extern void
        LargeSetMetadataPlugin_delete(struct PRESTypePlugin *);

    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LargeSetMetadataPlugin_1474908993_h */

