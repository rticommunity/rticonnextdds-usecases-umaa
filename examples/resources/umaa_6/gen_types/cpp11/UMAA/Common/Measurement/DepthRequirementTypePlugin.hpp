

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DepthRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DepthRequirementTypePlugin_1867622754_h
#define DepthRequirementTypePlugin_1867622754_h

#include "DepthRequirementType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/DepthToleranceTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define DepthRequirementTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DepthRequirementTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DepthRequirementTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DepthRequirementTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DepthRequirementTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DepthRequirementType*
            DepthRequirementTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DepthRequirementType*
            DepthRequirementTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DepthRequirementType*
            DepthRequirementTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DepthRequirementTypePluginSupport_copy_data(
                DepthRequirementType *out,
                const DepthRequirementType *in);

            NDDSUSERDllExport extern void 
            DepthRequirementTypePluginSupport_destroy_data_w_params(
                DepthRequirementType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DepthRequirementTypePluginSupport_destroy_data_ex(
                DepthRequirementType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DepthRequirementTypePluginSupport_destroy_data(
                DepthRequirementType *sample);

            NDDSUSERDllExport extern void 
            DepthRequirementTypePluginSupport_print_data(
                const DepthRequirementType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DepthRequirementTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DepthRequirementType *out,
                const DepthRequirementType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DepthRequirementTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DepthRequirementType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DepthRequirementTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DepthRequirementType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DepthRequirementTypePlugin_deserialize_from_cdr_buffer(
                DepthRequirementType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DepthRequirementTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DepthRequirementTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DepthRequirementTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DepthRequirementTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DepthRequirementTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DepthRequirementType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DepthRequirementTypePlugin_1867622754_h */
