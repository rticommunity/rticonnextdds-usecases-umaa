

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RequiredSpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RequiredSpeedVariantTypePlugin_2124108709_h
#define RequiredSpeedVariantTypePlugin_2124108709_h

#include "RequiredSpeedVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Speed/SpeedRequirementVariantTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Speed {

            #define RequiredSpeedVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RequiredSpeedVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RequiredSpeedVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RequiredSpeedVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RequiredSpeedVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RequiredSpeedVariantType*
            RequiredSpeedVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RequiredSpeedVariantType*
            RequiredSpeedVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RequiredSpeedVariantType*
            RequiredSpeedVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RequiredSpeedVariantTypePluginSupport_copy_data(
                RequiredSpeedVariantType *out,
                const RequiredSpeedVariantType *in);

            NDDSUSERDllExport extern void 
            RequiredSpeedVariantTypePluginSupport_destroy_data_w_params(
                RequiredSpeedVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RequiredSpeedVariantTypePluginSupport_destroy_data_ex(
                RequiredSpeedVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RequiredSpeedVariantTypePluginSupport_destroy_data(
                RequiredSpeedVariantType *sample);

            NDDSUSERDllExport extern void 
            RequiredSpeedVariantTypePluginSupport_print_data(
                const RequiredSpeedVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RequiredSpeedVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RequiredSpeedVariantType *out,
                const RequiredSpeedVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RequiredSpeedVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RequiredSpeedVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RequiredSpeedVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RequiredSpeedVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RequiredSpeedVariantTypePlugin_deserialize_from_cdr_buffer(
                RequiredSpeedVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RequiredSpeedVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RequiredSpeedVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RequiredSpeedVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RequiredSpeedVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RequiredSpeedVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RequiredSpeedVariantType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Speed  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RequiredSpeedVariantTypePlugin_2124108709_h */

