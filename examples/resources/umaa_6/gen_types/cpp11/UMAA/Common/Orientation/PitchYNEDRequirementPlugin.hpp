

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PitchYNEDRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PitchYNEDRequirementPlugin_264109976_h
#define PitchYNEDRequirementPlugin_264109976_h

#include "PitchYNEDRequirement.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/PitchYNEDTolerancePlugin.hpp"
#include "UMAA/Common/Orientation/PitchYNEDTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define PitchYNEDRequirementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PitchYNEDRequirementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PitchYNEDRequirementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PitchYNEDRequirementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PitchYNEDRequirementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PitchYNEDRequirement*
            PitchYNEDRequirementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PitchYNEDRequirement*
            PitchYNEDRequirementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PitchYNEDRequirement*
            PitchYNEDRequirementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PitchYNEDRequirementPluginSupport_copy_data(
                PitchYNEDRequirement *out,
                const PitchYNEDRequirement *in);

            NDDSUSERDllExport extern void 
            PitchYNEDRequirementPluginSupport_destroy_data_w_params(
                PitchYNEDRequirement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PitchYNEDRequirementPluginSupport_destroy_data_ex(
                PitchYNEDRequirement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PitchYNEDRequirementPluginSupport_destroy_data(
                PitchYNEDRequirement *sample);

            NDDSUSERDllExport extern void 
            PitchYNEDRequirementPluginSupport_print_data(
                const PitchYNEDRequirement *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PitchYNEDRequirementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PitchYNEDRequirement *out,
                const PitchYNEDRequirement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PitchYNEDRequirementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PitchYNEDRequirement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PitchYNEDRequirementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PitchYNEDRequirement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PitchYNEDRequirementPlugin_deserialize_from_cdr_buffer(
                PitchYNEDRequirement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PitchYNEDRequirementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PitchYNEDRequirementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PitchYNEDRequirementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PitchYNEDRequirementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PitchYNEDRequirementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PitchYNEDRequirement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PitchYNEDRequirementPlugin_264109976_h */

