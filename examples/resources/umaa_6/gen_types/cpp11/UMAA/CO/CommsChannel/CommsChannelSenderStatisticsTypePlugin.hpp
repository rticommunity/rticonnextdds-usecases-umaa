

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelSenderStatisticsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelSenderStatisticsTypePlugin_929522045_h
#define CommsChannelSenderStatisticsTypePlugin_929522045_h

#include "CommsChannelSenderStatisticsType.hpp"

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
    namespace CO {
        namespace CommsChannel {

            #define CommsChannelSenderStatisticsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelSenderStatisticsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelSenderStatisticsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelSenderStatisticsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelSenderStatisticsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelSenderStatisticsType*
            CommsChannelSenderStatisticsTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelSenderStatisticsType*
            CommsChannelSenderStatisticsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelSenderStatisticsType*
            CommsChannelSenderStatisticsTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderStatisticsTypePluginSupport_copy_data(
                CommsChannelSenderStatisticsType *out,
                const CommsChannelSenderStatisticsType *in);

            NDDSUSERDllExport extern void 
            CommsChannelSenderStatisticsTypePluginSupport_destroy_data_w_params(
                CommsChannelSenderStatisticsType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelSenderStatisticsTypePluginSupport_destroy_data_ex(
                CommsChannelSenderStatisticsType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelSenderStatisticsTypePluginSupport_destroy_data(
                CommsChannelSenderStatisticsType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelSenderStatisticsTypePluginSupport_print_data(
                const CommsChannelSenderStatisticsType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderStatisticsTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderStatisticsType *out,
                const CommsChannelSenderStatisticsType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelSenderStatisticsTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelSenderStatisticsType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderStatisticsTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderStatisticsType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelSenderStatisticsTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelSenderStatisticsType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSenderStatisticsTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelSenderStatisticsTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSenderStatisticsTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSenderStatisticsTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSenderStatisticsTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSenderStatisticsType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace CommsChannel  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelSenderStatisticsTypePlugin_929522045_h */
