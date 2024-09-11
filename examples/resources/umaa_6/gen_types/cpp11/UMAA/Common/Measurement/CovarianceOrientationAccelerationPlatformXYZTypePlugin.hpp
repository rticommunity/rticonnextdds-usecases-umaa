

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationAccelerationPlatformXYZType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceOrientationAccelerationPlatformXYZTypePlugin_1400927447_h
#define CovarianceOrientationAccelerationPlatformXYZTypePlugin_1400927447_h

#include "CovarianceOrientationAccelerationPlatformXYZType.hpp"

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
        namespace Measurement {

            #define CovarianceOrientationAccelerationPlatformXYZTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarianceOrientationAccelerationPlatformXYZTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarianceOrientationAccelerationPlatformXYZTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarianceOrientationAccelerationPlatformXYZTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarianceOrientationAccelerationPlatformXYZTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarianceOrientationAccelerationPlatformXYZType*
            CovarianceOrientationAccelerationPlatformXYZTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarianceOrientationAccelerationPlatformXYZType*
            CovarianceOrientationAccelerationPlatformXYZTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarianceOrientationAccelerationPlatformXYZType*
            CovarianceOrientationAccelerationPlatformXYZTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationAccelerationPlatformXYZTypePluginSupport_copy_data(
                CovarianceOrientationAccelerationPlatformXYZType *out,
                const CovarianceOrientationAccelerationPlatformXYZType *in);

            NDDSUSERDllExport extern void 
            CovarianceOrientationAccelerationPlatformXYZTypePluginSupport_destroy_data_w_params(
                CovarianceOrientationAccelerationPlatformXYZType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarianceOrientationAccelerationPlatformXYZTypePluginSupport_destroy_data_ex(
                CovarianceOrientationAccelerationPlatformXYZType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarianceOrientationAccelerationPlatformXYZTypePluginSupport_destroy_data(
                CovarianceOrientationAccelerationPlatformXYZType *sample);

            NDDSUSERDllExport extern void 
            CovarianceOrientationAccelerationPlatformXYZTypePluginSupport_print_data(
                const CovarianceOrientationAccelerationPlatformXYZType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationAccelerationPlatformXYZTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceOrientationAccelerationPlatformXYZType *out,
                const CovarianceOrientationAccelerationPlatformXYZType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CovarianceOrientationAccelerationPlatformXYZTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CovarianceOrientationAccelerationPlatformXYZType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationAccelerationPlatformXYZTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceOrientationAccelerationPlatformXYZType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CovarianceOrientationAccelerationPlatformXYZTypePlugin_deserialize_from_cdr_buffer(
                CovarianceOrientationAccelerationPlatformXYZType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CovarianceOrientationAccelerationPlatformXYZTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarianceOrientationAccelerationPlatformXYZTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarianceOrientationAccelerationPlatformXYZTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarianceOrientationAccelerationPlatformXYZTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationAccelerationPlatformXYZTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceOrientationAccelerationPlatformXYZType ** sample,
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

#endif /* CovarianceOrientationAccelerationPlatformXYZTypePlugin_1400927447_h */

