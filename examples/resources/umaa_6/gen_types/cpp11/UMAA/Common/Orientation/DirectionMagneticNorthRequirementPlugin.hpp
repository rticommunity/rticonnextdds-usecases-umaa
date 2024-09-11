

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionMagneticNorthRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionMagneticNorthRequirementPlugin_134468584_h
#define DirectionMagneticNorthRequirementPlugin_134468584_h

#include "DirectionMagneticNorthRequirement.hpp"

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

            #define DirectionMagneticNorthRequirementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DirectionMagneticNorthRequirementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DirectionMagneticNorthRequirementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DirectionMagneticNorthRequirementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DirectionMagneticNorthRequirementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DirectionMagneticNorthRequirement*
            DirectionMagneticNorthRequirementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DirectionMagneticNorthRequirement*
            DirectionMagneticNorthRequirementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DirectionMagneticNorthRequirement*
            DirectionMagneticNorthRequirementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DirectionMagneticNorthRequirementPluginSupport_copy_data(
                DirectionMagneticNorthRequirement *out,
                const DirectionMagneticNorthRequirement *in);

            NDDSUSERDllExport extern void 
            DirectionMagneticNorthRequirementPluginSupport_destroy_data_w_params(
                DirectionMagneticNorthRequirement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DirectionMagneticNorthRequirementPluginSupport_destroy_data_ex(
                DirectionMagneticNorthRequirement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DirectionMagneticNorthRequirementPluginSupport_destroy_data(
                DirectionMagneticNorthRequirement *sample);

            NDDSUSERDllExport extern void 
            DirectionMagneticNorthRequirementPluginSupport_print_data(
                const DirectionMagneticNorthRequirement *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DirectionMagneticNorthRequirementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionMagneticNorthRequirement *out,
                const DirectionMagneticNorthRequirement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DirectionMagneticNorthRequirementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionMagneticNorthRequirement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DirectionMagneticNorthRequirementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DirectionMagneticNorthRequirement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DirectionMagneticNorthRequirementPlugin_deserialize_from_cdr_buffer(
                DirectionMagneticNorthRequirement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DirectionMagneticNorthRequirementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DirectionMagneticNorthRequirementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DirectionMagneticNorthRequirementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionMagneticNorthRequirementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DirectionMagneticNorthRequirementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionMagneticNorthRequirement ** sample,
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

#endif /* DirectionMagneticNorthRequirementPlugin_134468584_h */

