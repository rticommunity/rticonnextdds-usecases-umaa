

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionWindRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionWindRequirementPlugin_498187984_h
#define DirectionWindRequirementPlugin_498187984_h

#include "DirectionWindRequirement.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/DirectionToleranceTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define DirectionWindRequirementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DirectionWindRequirementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DirectionWindRequirementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DirectionWindRequirementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DirectionWindRequirementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DirectionWindRequirement*
            DirectionWindRequirementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DirectionWindRequirement*
            DirectionWindRequirementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DirectionWindRequirement*
            DirectionWindRequirementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DirectionWindRequirementPluginSupport_copy_data(
                DirectionWindRequirement *out,
                const DirectionWindRequirement *in);

            NDDSUSERDllExport extern void 
            DirectionWindRequirementPluginSupport_destroy_data_w_params(
                DirectionWindRequirement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DirectionWindRequirementPluginSupport_destroy_data_ex(
                DirectionWindRequirement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DirectionWindRequirementPluginSupport_destroy_data(
                DirectionWindRequirement *sample);

            NDDSUSERDllExport extern void 
            DirectionWindRequirementPluginSupport_print_data(
                const DirectionWindRequirement *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DirectionWindRequirementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionWindRequirement *out,
                const DirectionWindRequirement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DirectionWindRequirementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionWindRequirement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DirectionWindRequirementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DirectionWindRequirement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DirectionWindRequirementPlugin_deserialize_from_cdr_buffer(
                DirectionWindRequirement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DirectionWindRequirementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DirectionWindRequirementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DirectionWindRequirementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionWindRequirementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DirectionWindRequirementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionWindRequirement ** sample,
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

#endif /* DirectionWindRequirementPlugin_498187984_h */

