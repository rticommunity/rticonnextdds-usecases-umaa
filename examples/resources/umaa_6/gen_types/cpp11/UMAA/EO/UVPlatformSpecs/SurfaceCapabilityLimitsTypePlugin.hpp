

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SurfaceCapabilityLimitsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SurfaceCapabilityLimitsTypePlugin_786758062_h
#define SurfaceCapabilityLimitsTypePlugin_786758062_h

#include "SurfaceCapabilityLimitsType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace UVPlatformSpecs {

            #define SurfaceCapabilityLimitsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SurfaceCapabilityLimitsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SurfaceCapabilityLimitsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SurfaceCapabilityLimitsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SurfaceCapabilityLimitsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SurfaceCapabilityLimitsType*
            SurfaceCapabilityLimitsTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SurfaceCapabilityLimitsType*
            SurfaceCapabilityLimitsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SurfaceCapabilityLimitsType*
            SurfaceCapabilityLimitsTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SurfaceCapabilityLimitsTypePluginSupport_copy_data(
                SurfaceCapabilityLimitsType *out,
                const SurfaceCapabilityLimitsType *in);

            NDDSUSERDllExport extern void 
            SurfaceCapabilityLimitsTypePluginSupport_destroy_data_w_params(
                SurfaceCapabilityLimitsType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SurfaceCapabilityLimitsTypePluginSupport_destroy_data_ex(
                SurfaceCapabilityLimitsType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SurfaceCapabilityLimitsTypePluginSupport_destroy_data(
                SurfaceCapabilityLimitsType *sample);

            NDDSUSERDllExport extern void 
            SurfaceCapabilityLimitsTypePluginSupport_print_data(
                const SurfaceCapabilityLimitsType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SurfaceCapabilityLimitsTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SurfaceCapabilityLimitsType *out,
                const SurfaceCapabilityLimitsType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SurfaceCapabilityLimitsTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SurfaceCapabilityLimitsType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SurfaceCapabilityLimitsTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SurfaceCapabilityLimitsType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SurfaceCapabilityLimitsTypePlugin_deserialize_from_cdr_buffer(
                SurfaceCapabilityLimitsType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SurfaceCapabilityLimitsTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SurfaceCapabilityLimitsTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SurfaceCapabilityLimitsTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SurfaceCapabilityLimitsTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SurfaceCapabilityLimitsTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SurfaceCapabilityLimitsType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace UVPlatformSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SurfaceCapabilityLimitsTypePlugin_786758062_h */
