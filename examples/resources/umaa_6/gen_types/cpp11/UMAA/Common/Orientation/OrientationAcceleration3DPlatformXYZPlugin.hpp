

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationAcceleration3DPlatformXYZ.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationAcceleration3DPlatformXYZPlugin_1739835589_h
#define OrientationAcceleration3DPlatformXYZPlugin_1739835589_h

#include "OrientationAcceleration3DPlatformXYZ.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define OrientationAcceleration3DPlatformXYZPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OrientationAcceleration3DPlatformXYZPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OrientationAcceleration3DPlatformXYZPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OrientationAcceleration3DPlatformXYZPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OrientationAcceleration3DPlatformXYZPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern OrientationAcceleration3DPlatformXYZ*
            OrientationAcceleration3DPlatformXYZPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern OrientationAcceleration3DPlatformXYZ*
            OrientationAcceleration3DPlatformXYZPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OrientationAcceleration3DPlatformXYZ*
            OrientationAcceleration3DPlatformXYZPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OrientationAcceleration3DPlatformXYZPluginSupport_copy_data(
                OrientationAcceleration3DPlatformXYZ *out,
                const OrientationAcceleration3DPlatformXYZ *in);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPlatformXYZPluginSupport_destroy_data_w_params(
                OrientationAcceleration3DPlatformXYZ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPlatformXYZPluginSupport_destroy_data_ex(
                OrientationAcceleration3DPlatformXYZ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPlatformXYZPluginSupport_destroy_data(
                OrientationAcceleration3DPlatformXYZ *sample);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPlatformXYZPluginSupport_print_data(
                const OrientationAcceleration3DPlatformXYZ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            OrientationAcceleration3DPlatformXYZPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationAcceleration3DPlatformXYZ *out,
                const OrientationAcceleration3DPlatformXYZ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            OrientationAcceleration3DPlatformXYZPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const OrientationAcceleration3DPlatformXYZ *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            OrientationAcceleration3DPlatformXYZPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                OrientationAcceleration3DPlatformXYZ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            OrientationAcceleration3DPlatformXYZPlugin_deserialize_from_cdr_buffer(
                OrientationAcceleration3DPlatformXYZ *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            OrientationAcceleration3DPlatformXYZPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OrientationAcceleration3DPlatformXYZPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OrientationAcceleration3DPlatformXYZPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OrientationAcceleration3DPlatformXYZPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            OrientationAcceleration3DPlatformXYZPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                OrientationAcceleration3DPlatformXYZ ** sample,
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

#endif /* OrientationAcceleration3DPlatformXYZPlugin_1739835589_h */

