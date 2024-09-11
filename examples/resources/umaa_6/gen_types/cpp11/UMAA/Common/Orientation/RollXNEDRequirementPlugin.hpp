

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RollXNEDRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RollXNEDRequirementPlugin_1181583661_h
#define RollXNEDRequirementPlugin_1181583661_h

#include "RollXNEDRequirement.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/RollXNEDTolerancePlugin.hpp"
#include "UMAA/Common/Orientation/RollXNEDTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define RollXNEDRequirementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RollXNEDRequirementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RollXNEDRequirementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RollXNEDRequirementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RollXNEDRequirementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RollXNEDRequirement*
            RollXNEDRequirementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RollXNEDRequirement*
            RollXNEDRequirementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RollXNEDRequirement*
            RollXNEDRequirementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RollXNEDRequirementPluginSupport_copy_data(
                RollXNEDRequirement *out,
                const RollXNEDRequirement *in);

            NDDSUSERDllExport extern void 
            RollXNEDRequirementPluginSupport_destroy_data_w_params(
                RollXNEDRequirement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RollXNEDRequirementPluginSupport_destroy_data_ex(
                RollXNEDRequirement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RollXNEDRequirementPluginSupport_destroy_data(
                RollXNEDRequirement *sample);

            NDDSUSERDllExport extern void 
            RollXNEDRequirementPluginSupport_print_data(
                const RollXNEDRequirement *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RollXNEDRequirementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RollXNEDRequirement *out,
                const RollXNEDRequirement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RollXNEDRequirementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RollXNEDRequirement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RollXNEDRequirementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RollXNEDRequirement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RollXNEDRequirementPlugin_deserialize_from_cdr_buffer(
                RollXNEDRequirement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RollXNEDRequirementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RollXNEDRequirementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RollXNEDRequirementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RollXNEDRequirementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RollXNEDRequirementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RollXNEDRequirement ** sample,
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

#endif /* RollXNEDRequirementPlugin_1181583661_h */

