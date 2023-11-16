

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegionDriftType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegionDriftTypePlugin_605906240_h
#define LocalRegionDriftTypePlugin_605906240_h

#include "LocalRegionDriftType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalDriftState {

            #define LocalRegionDriftTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalRegionDriftTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalRegionDriftTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalRegionDriftTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalRegionDriftTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalRegionDriftType*
            LocalRegionDriftTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalRegionDriftType*
            LocalRegionDriftTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalRegionDriftType*
            LocalRegionDriftTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalRegionDriftTypePluginSupport_copy_data(
                LocalRegionDriftType *out,
                const LocalRegionDriftType *in);

            NDDSUSERDllExport extern void 
            LocalRegionDriftTypePluginSupport_destroy_data_w_params(
                LocalRegionDriftType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalRegionDriftTypePluginSupport_destroy_data_ex(
                LocalRegionDriftType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalRegionDriftTypePluginSupport_destroy_data(
                LocalRegionDriftType *sample);

            NDDSUSERDllExport extern void 
            LocalRegionDriftTypePluginSupport_print_data(
                const LocalRegionDriftType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalRegionDriftTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalRegionDriftTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalRegionDriftTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalRegionDriftTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalRegionDriftTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegionDriftType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalRegionDriftTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegionDriftType *out,
                const LocalRegionDriftType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalRegionDriftTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalRegionDriftType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalRegionDriftTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegionDriftType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalRegionDriftTypePlugin_deserialize_from_cdr_buffer(
                LocalRegionDriftType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalRegionDriftTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalRegionDriftTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalRegionDriftTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalRegionDriftTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalRegionDriftTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegionDriftType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalRegionDriftTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalRegionDriftTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalDriftState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalRegionDriftTypePlugin_605906240_h */

