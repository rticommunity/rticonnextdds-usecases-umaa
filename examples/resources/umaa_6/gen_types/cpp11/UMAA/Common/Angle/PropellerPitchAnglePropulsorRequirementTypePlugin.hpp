

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropellerPitchAnglePropulsorRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropellerPitchAnglePropulsorRequirementTypePlugin_1047684150_h
#define PropellerPitchAnglePropulsorRequirementTypePlugin_1047684150_h

#include "PropellerPitchAnglePropulsorRequirementType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Angle/PropellerPitchAnglePropulsorToleranceTypePlugin.hpp"
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

            #define PropellerPitchAnglePropulsorRequirementTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropellerPitchAnglePropulsorRequirementTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropellerPitchAnglePropulsorRequirementTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropellerPitchAnglePropulsorRequirementTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropellerPitchAnglePropulsorRequirementTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropellerPitchAnglePropulsorRequirementType*
            PropellerPitchAnglePropulsorRequirementTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropellerPitchAnglePropulsorRequirementType*
            PropellerPitchAnglePropulsorRequirementTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropellerPitchAnglePropulsorRequirementType*
            PropellerPitchAnglePropulsorRequirementTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropellerPitchAnglePropulsorRequirementTypePluginSupport_copy_data(
                PropellerPitchAnglePropulsorRequirementType *out,
                const PropellerPitchAnglePropulsorRequirementType *in);

            NDDSUSERDllExport extern void 
            PropellerPitchAnglePropulsorRequirementTypePluginSupport_destroy_data_w_params(
                PropellerPitchAnglePropulsorRequirementType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropellerPitchAnglePropulsorRequirementTypePluginSupport_destroy_data_ex(
                PropellerPitchAnglePropulsorRequirementType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropellerPitchAnglePropulsorRequirementTypePluginSupport_destroy_data(
                PropellerPitchAnglePropulsorRequirementType *sample);

            NDDSUSERDllExport extern void 
            PropellerPitchAnglePropulsorRequirementTypePluginSupport_print_data(
                const PropellerPitchAnglePropulsorRequirementType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PropellerPitchAnglePropulsorRequirementTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropellerPitchAnglePropulsorRequirementType *out,
                const PropellerPitchAnglePropulsorRequirementType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropellerPitchAnglePropulsorRequirementTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropellerPitchAnglePropulsorRequirementType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropellerPitchAnglePropulsorRequirementTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropellerPitchAnglePropulsorRequirementType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropellerPitchAnglePropulsorRequirementTypePlugin_deserialize_from_cdr_buffer(
                PropellerPitchAnglePropulsorRequirementType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropellerPitchAnglePropulsorRequirementTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropellerPitchAnglePropulsorRequirementTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropellerPitchAnglePropulsorRequirementTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropellerPitchAnglePropulsorRequirementTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropellerPitchAnglePropulsorRequirementTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropellerPitchAnglePropulsorRequirementType ** sample,
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

#endif /* PropellerPitchAnglePropulsorRequirementTypePlugin_1047684150_h */

