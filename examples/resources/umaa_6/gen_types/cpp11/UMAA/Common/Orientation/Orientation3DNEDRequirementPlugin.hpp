

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3DNEDRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Orientation3DNEDRequirementPlugin_654085907_h
#define Orientation3DNEDRequirementPlugin_654085907_h

#include "Orientation3DNEDRequirement.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/PitchYNEDRequirementPlugin.hpp"
#include "UMAA/Common/Orientation/RollXNEDRequirementPlugin.hpp"
#include "UMAA/Common/Orientation/YawZNEDRequirementPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define Orientation3DNEDRequirementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Orientation3DNEDRequirementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Orientation3DNEDRequirementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Orientation3DNEDRequirementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Orientation3DNEDRequirementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Orientation3DNEDRequirement*
            Orientation3DNEDRequirementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Orientation3DNEDRequirement*
            Orientation3DNEDRequirementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Orientation3DNEDRequirement*
            Orientation3DNEDRequirementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Orientation3DNEDRequirementPluginSupport_copy_data(
                Orientation3DNEDRequirement *out,
                const Orientation3DNEDRequirement *in);

            NDDSUSERDllExport extern void 
            Orientation3DNEDRequirementPluginSupport_destroy_data_w_params(
                Orientation3DNEDRequirement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Orientation3DNEDRequirementPluginSupport_destroy_data_ex(
                Orientation3DNEDRequirement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Orientation3DNEDRequirementPluginSupport_destroy_data(
                Orientation3DNEDRequirement *sample);

            NDDSUSERDllExport extern void 
            Orientation3DNEDRequirementPluginSupport_print_data(
                const Orientation3DNEDRequirement *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Orientation3DNEDRequirementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3DNEDRequirement *out,
                const Orientation3DNEDRequirement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Orientation3DNEDRequirementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Orientation3DNEDRequirement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Orientation3DNEDRequirementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3DNEDRequirement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Orientation3DNEDRequirementPlugin_deserialize_from_cdr_buffer(
                Orientation3DNEDRequirement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Orientation3DNEDRequirementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Orientation3DNEDRequirementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Orientation3DNEDRequirementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Orientation3DNEDRequirementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Orientation3DNEDRequirementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Orientation3DNEDRequirement ** sample,
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

#endif /* Orientation3DNEDRequirementPlugin_654085907_h */

