

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPosition2DRequirement.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeoPosition2DRequirementPlugin_896948912_h
#define GeoPosition2DRequirementPlugin_896948912_h

#include "GeoPosition2DRequirement.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
#include "UMAA/Common/Position/GeoPosition2DTolerancePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Position {

            #define GeoPosition2DRequirementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeoPosition2DRequirementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeoPosition2DRequirementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeoPosition2DRequirementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeoPosition2DRequirementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeoPosition2DRequirement*
            GeoPosition2DRequirementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeoPosition2DRequirement*
            GeoPosition2DRequirementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeoPosition2DRequirement*
            GeoPosition2DRequirementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeoPosition2DRequirementPluginSupport_copy_data(
                GeoPosition2DRequirement *out,
                const GeoPosition2DRequirement *in);

            NDDSUSERDllExport extern void 
            GeoPosition2DRequirementPluginSupport_destroy_data_w_params(
                GeoPosition2DRequirement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeoPosition2DRequirementPluginSupport_destroy_data_ex(
                GeoPosition2DRequirement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeoPosition2DRequirementPluginSupport_destroy_data(
                GeoPosition2DRequirement *sample);

            NDDSUSERDllExport extern void 
            GeoPosition2DRequirementPluginSupport_print_data(
                const GeoPosition2DRequirement *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GeoPosition2DRequirementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeoPosition2DRequirement *out,
                const GeoPosition2DRequirement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GeoPosition2DRequirementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GeoPosition2DRequirement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GeoPosition2DRequirementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GeoPosition2DRequirement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeoPosition2DRequirementPlugin_deserialize_from_cdr_buffer(
                GeoPosition2DRequirement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GeoPosition2DRequirementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeoPosition2DRequirementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeoPosition2DRequirementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeoPosition2DRequirementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GeoPosition2DRequirementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GeoPosition2DRequirement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Position  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GeoPosition2DRequirementPlugin_896948912_h */

