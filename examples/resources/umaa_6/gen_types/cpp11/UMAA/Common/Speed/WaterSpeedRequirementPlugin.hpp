

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterSpeedRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterSpeedRequirementPlugin_773828569_h
#define WaterSpeedRequirementPlugin_773828569_h

#include "WaterSpeedRequirement.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Speed/WaterSpeedTolerancePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Speed {

            #define WaterSpeedRequirementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WaterSpeedRequirementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WaterSpeedRequirementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WaterSpeedRequirementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WaterSpeedRequirementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WaterSpeedRequirement*
            WaterSpeedRequirementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WaterSpeedRequirement*
            WaterSpeedRequirementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterSpeedRequirement*
            WaterSpeedRequirementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WaterSpeedRequirementPluginSupport_copy_data(
                WaterSpeedRequirement *out,
                const WaterSpeedRequirement *in);

            NDDSUSERDllExport extern void 
            WaterSpeedRequirementPluginSupport_destroy_data_w_params(
                WaterSpeedRequirement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WaterSpeedRequirementPluginSupport_destroy_data_ex(
                WaterSpeedRequirement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterSpeedRequirementPluginSupport_destroy_data(
                WaterSpeedRequirement *sample);

            NDDSUSERDllExport extern void 
            WaterSpeedRequirementPluginSupport_print_data(
                const WaterSpeedRequirement *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            WaterSpeedRequirementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterSpeedRequirement *out,
                const WaterSpeedRequirement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WaterSpeedRequirementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WaterSpeedRequirement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WaterSpeedRequirementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WaterSpeedRequirement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WaterSpeedRequirementPlugin_deserialize_from_cdr_buffer(
                WaterSpeedRequirement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WaterSpeedRequirementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WaterSpeedRequirementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WaterSpeedRequirementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WaterSpeedRequirementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WaterSpeedRequirementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterSpeedRequirement ** sample,
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

#endif /* WaterSpeedRequirementPlugin_773828569_h */

