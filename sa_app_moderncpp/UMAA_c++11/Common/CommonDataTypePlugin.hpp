

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommonDataType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommonDataTypePlugin_1432003034_h
#define CommonDataTypePlugin_1432003034_h

#include "CommonDataType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {

        #define CommonDataTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

        #define CommonDataTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define CommonDataTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define CommonDataTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define CommonDataTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern CommonDataType*
        CommonDataTypePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern CommonDataType*
        CommonDataTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern CommonDataType*
        CommonDataTypePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        CommonDataTypePluginSupport_copy_data(
            CommonDataType *out,
            const CommonDataType *in);

        NDDSUSERDllExport extern void 
        CommonDataTypePluginSupport_destroy_data_w_params(
            CommonDataType *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        CommonDataTypePluginSupport_destroy_data_ex(
            CommonDataType *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        CommonDataTypePluginSupport_destroy_data(
            CommonDataType *sample);

        NDDSUSERDllExport extern void 
        CommonDataTypePluginSupport_print_data(
            const CommonDataType *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        CommonDataTypePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        CommonDataTypePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        CommonDataTypePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        CommonDataTypePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        CommonDataTypePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            CommonDataType *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        CommonDataTypePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CommonDataType *out,
            const CommonDataType *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        CommonDataTypePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const CommonDataType *sample,
            ::dds::core::policy::DataRepresentationId representation
            = ::dds::core::policy::DataRepresentation::xcdr()); 

        NDDSUSERDllExport extern RTIBool 
        CommonDataTypePlugin_deserialize(
            PRESTypePluginEndpointData endpoint_data,
            CommonDataType **sample, 
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool
        CommonDataTypePlugin_deserialize_from_cdr_buffer(
            CommonDataType *sample,
            const char * buffer,
            unsigned int length);    

        NDDSUSERDllExport extern unsigned int 
        CommonDataTypePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        CommonDataTypePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        CommonDataTypePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        CommonDataTypePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        CommonDataTypePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            CommonDataType ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        CommonDataTypePlugin_new(void);

        NDDSUSERDllExport extern void
        CommonDataTypePlugin_delete(struct PRESTypePlugin *);

    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommonDataTypePlugin_1432003034_h */

