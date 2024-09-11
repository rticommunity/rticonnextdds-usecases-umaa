

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FrequencyRangeType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FrequencyRangeTypePlugin_1772365527_h
#define FrequencyRangeTypePlugin_1772365527_h

#include "FrequencyRangeType.hpp"

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
        namespace CommsChannelSpecs {

            #define FrequencyRangeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FrequencyRangeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FrequencyRangeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FrequencyRangeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FrequencyRangeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FrequencyRangeType*
            FrequencyRangeTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FrequencyRangeType*
            FrequencyRangeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FrequencyRangeType*
            FrequencyRangeTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FrequencyRangeTypePluginSupport_copy_data(
                FrequencyRangeType *out,
                const FrequencyRangeType *in);

            NDDSUSERDllExport extern void 
            FrequencyRangeTypePluginSupport_destroy_data_w_params(
                FrequencyRangeType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FrequencyRangeTypePluginSupport_destroy_data_ex(
                FrequencyRangeType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FrequencyRangeTypePluginSupport_destroy_data(
                FrequencyRangeType *sample);

            NDDSUSERDllExport extern void 
            FrequencyRangeTypePluginSupport_print_data(
                const FrequencyRangeType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FrequencyRangeTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FrequencyRangeType *out,
                const FrequencyRangeType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FrequencyRangeTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FrequencyRangeType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FrequencyRangeTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FrequencyRangeType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FrequencyRangeTypePlugin_deserialize_from_cdr_buffer(
                FrequencyRangeType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FrequencyRangeTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FrequencyRangeTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FrequencyRangeTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FrequencyRangeTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FrequencyRangeTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FrequencyRangeType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace CommsChannelSpecs  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FrequencyRangeTypePlugin_1772365527_h */

