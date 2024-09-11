

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionTrueNorthRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionTrueNorthRequirementVariantTypePlugin_139667824_h
#define DirectionTrueNorthRequirementVariantTypePlugin_139667824_h

#include "DirectionTrueNorthRequirementVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/DirectionTrueNorthRequirementPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define DirectionTrueNorthRequirementVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DirectionTrueNorthRequirementVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DirectionTrueNorthRequirementVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DirectionTrueNorthRequirementVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DirectionTrueNorthRequirementVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DirectionTrueNorthRequirementVariantType*
            DirectionTrueNorthRequirementVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DirectionTrueNorthRequirementVariantType*
            DirectionTrueNorthRequirementVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DirectionTrueNorthRequirementVariantType*
            DirectionTrueNorthRequirementVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DirectionTrueNorthRequirementVariantTypePluginSupport_copy_data(
                DirectionTrueNorthRequirementVariantType *out,
                const DirectionTrueNorthRequirementVariantType *in);

            NDDSUSERDllExport extern void 
            DirectionTrueNorthRequirementVariantTypePluginSupport_destroy_data_w_params(
                DirectionTrueNorthRequirementVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DirectionTrueNorthRequirementVariantTypePluginSupport_destroy_data_ex(
                DirectionTrueNorthRequirementVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DirectionTrueNorthRequirementVariantTypePluginSupport_destroy_data(
                DirectionTrueNorthRequirementVariantType *sample);

            NDDSUSERDllExport extern void 
            DirectionTrueNorthRequirementVariantTypePluginSupport_print_data(
                const DirectionTrueNorthRequirementVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DirectionTrueNorthRequirementVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionTrueNorthRequirementVariantType *out,
                const DirectionTrueNorthRequirementVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DirectionTrueNorthRequirementVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionTrueNorthRequirementVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DirectionTrueNorthRequirementVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DirectionTrueNorthRequirementVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DirectionTrueNorthRequirementVariantTypePlugin_deserialize_from_cdr_buffer(
                DirectionTrueNorthRequirementVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DirectionTrueNorthRequirementVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DirectionTrueNorthRequirementVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DirectionTrueNorthRequirementVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionTrueNorthRequirementVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DirectionTrueNorthRequirementVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionTrueNorthRequirementVariantType ** sample,
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

#endif /* DirectionTrueNorthRequirementVariantTypePlugin_139667824_h */

