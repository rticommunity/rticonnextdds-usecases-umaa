

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CloudCoverType_All.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CloudCoverType_AllPlugin_1679533159_h
#define CloudCoverType_AllPlugin_1679533159_h

#include "CloudCoverType_All.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/OrderedEnumeration/OrderedEnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define CloudCoverType_AllPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CloudCoverType_AllPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CloudCoverType_AllPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CloudCoverType_AllPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CloudCoverType_AllPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CloudCoverType_All*
            CloudCoverType_AllPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CloudCoverType_All*
            CloudCoverType_AllPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CloudCoverType_All*
            CloudCoverType_AllPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CloudCoverType_AllPluginSupport_copy_data(
                CloudCoverType_All *out,
                const CloudCoverType_All *in);

            NDDSUSERDllExport extern void 
            CloudCoverType_AllPluginSupport_destroy_data_w_params(
                CloudCoverType_All *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CloudCoverType_AllPluginSupport_destroy_data_ex(
                CloudCoverType_All *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CloudCoverType_AllPluginSupport_destroy_data(
                CloudCoverType_All *sample);

            NDDSUSERDllExport extern void 
            CloudCoverType_AllPluginSupport_print_data(
                const CloudCoverType_All *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CloudCoverType_AllPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CloudCoverType_AllPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CloudCoverType_AllPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CloudCoverType_AllPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CloudCoverType_AllPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CloudCoverType_All *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CloudCoverType_AllPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CloudCoverType_All *out,
                const CloudCoverType_All *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CloudCoverType_AllPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CloudCoverType_All *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CloudCoverType_AllPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CloudCoverType_All **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CloudCoverType_AllPlugin_deserialize_from_cdr_buffer(
                CloudCoverType_All *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CloudCoverType_AllPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CloudCoverType_AllPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CloudCoverType_AllPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CloudCoverType_AllPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CloudCoverType_AllPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CloudCoverType_All ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CloudCoverType_AllPlugin_new(void);

            NDDSUSERDllExport extern void
            CloudCoverType_AllPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CloudCoverType_AllPlugin_1679533159_h */

