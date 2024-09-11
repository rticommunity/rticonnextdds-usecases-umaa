

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineRPMSpeedRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineRPMSpeedRequirementPlugin_1225966072_h
#define EngineRPMSpeedRequirementPlugin_1225966072_h

#include "EngineRPMSpeedRequirement.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Speed/EngineRPMSpeedTolerancePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Speed {

            #define EngineRPMSpeedRequirementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EngineRPMSpeedRequirementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EngineRPMSpeedRequirementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EngineRPMSpeedRequirementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EngineRPMSpeedRequirementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EngineRPMSpeedRequirement*
            EngineRPMSpeedRequirementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EngineRPMSpeedRequirement*
            EngineRPMSpeedRequirementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineRPMSpeedRequirement*
            EngineRPMSpeedRequirementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EngineRPMSpeedRequirementPluginSupport_copy_data(
                EngineRPMSpeedRequirement *out,
                const EngineRPMSpeedRequirement *in);

            NDDSUSERDllExport extern void 
            EngineRPMSpeedRequirementPluginSupport_destroy_data_w_params(
                EngineRPMSpeedRequirement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EngineRPMSpeedRequirementPluginSupport_destroy_data_ex(
                EngineRPMSpeedRequirement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineRPMSpeedRequirementPluginSupport_destroy_data(
                EngineRPMSpeedRequirement *sample);

            NDDSUSERDllExport extern void 
            EngineRPMSpeedRequirementPluginSupport_print_data(
                const EngineRPMSpeedRequirement *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            EngineRPMSpeedRequirementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPMSpeedRequirement *out,
                const EngineRPMSpeedRequirement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EngineRPMSpeedRequirementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EngineRPMSpeedRequirement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EngineRPMSpeedRequirementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPMSpeedRequirement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EngineRPMSpeedRequirementPlugin_deserialize_from_cdr_buffer(
                EngineRPMSpeedRequirement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EngineRPMSpeedRequirementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EngineRPMSpeedRequirementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EngineRPMSpeedRequirementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EngineRPMSpeedRequirementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EngineRPMSpeedRequirementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPMSpeedRequirement ** sample,
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

#endif /* EngineRPMSpeedRequirementPlugin_1225966072_h */

