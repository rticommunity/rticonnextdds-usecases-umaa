

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RhoAnglePropulsorRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RhoAnglePropulsorRequirementTypePlugin_1683919157_h
#define RhoAnglePropulsorRequirementTypePlugin_1683919157_h

#include "RhoAnglePropulsorRequirementType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Angle/RhoAnglePropulsorToleranceTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Angle {

            #define RhoAnglePropulsorRequirementTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RhoAnglePropulsorRequirementTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RhoAnglePropulsorRequirementTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RhoAnglePropulsorRequirementTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RhoAnglePropulsorRequirementTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RhoAnglePropulsorRequirementType*
            RhoAnglePropulsorRequirementTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RhoAnglePropulsorRequirementType*
            RhoAnglePropulsorRequirementTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RhoAnglePropulsorRequirementType*
            RhoAnglePropulsorRequirementTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RhoAnglePropulsorRequirementTypePluginSupport_copy_data(
                RhoAnglePropulsorRequirementType *out,
                const RhoAnglePropulsorRequirementType *in);

            NDDSUSERDllExport extern void 
            RhoAnglePropulsorRequirementTypePluginSupport_destroy_data_w_params(
                RhoAnglePropulsorRequirementType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RhoAnglePropulsorRequirementTypePluginSupport_destroy_data_ex(
                RhoAnglePropulsorRequirementType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RhoAnglePropulsorRequirementTypePluginSupport_destroy_data(
                RhoAnglePropulsorRequirementType *sample);

            NDDSUSERDllExport extern void 
            RhoAnglePropulsorRequirementTypePluginSupport_print_data(
                const RhoAnglePropulsorRequirementType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RhoAnglePropulsorRequirementTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RhoAnglePropulsorRequirementType *out,
                const RhoAnglePropulsorRequirementType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RhoAnglePropulsorRequirementTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RhoAnglePropulsorRequirementType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RhoAnglePropulsorRequirementTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RhoAnglePropulsorRequirementType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RhoAnglePropulsorRequirementTypePlugin_deserialize_from_cdr_buffer(
                RhoAnglePropulsorRequirementType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RhoAnglePropulsorRequirementTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RhoAnglePropulsorRequirementTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RhoAnglePropulsorRequirementTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RhoAnglePropulsorRequirementTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RhoAnglePropulsorRequirementTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RhoAnglePropulsorRequirementType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Angle  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RhoAnglePropulsorRequirementTypePlugin_1683919157_h */

