

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceAccelerationPlatformXYZType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceAccelerationPlatformXYZTypePlugin_260521671_h
#define CovarianceAccelerationPlatformXYZTypePlugin_260521671_h

#include "CovarianceAccelerationPlatformXYZType.hpp"

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

            #define CovarianceAccelerationPlatformXYZTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarianceAccelerationPlatformXYZTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarianceAccelerationPlatformXYZTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarianceAccelerationPlatformXYZTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarianceAccelerationPlatformXYZTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarianceAccelerationPlatformXYZType*
            CovarianceAccelerationPlatformXYZTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarianceAccelerationPlatformXYZType*
            CovarianceAccelerationPlatformXYZTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarianceAccelerationPlatformXYZType*
            CovarianceAccelerationPlatformXYZTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarianceAccelerationPlatformXYZTypePluginSupport_copy_data(
                CovarianceAccelerationPlatformXYZType *out,
                const CovarianceAccelerationPlatformXYZType *in);

            NDDSUSERDllExport extern void 
            CovarianceAccelerationPlatformXYZTypePluginSupport_destroy_data_w_params(
                CovarianceAccelerationPlatformXYZType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarianceAccelerationPlatformXYZTypePluginSupport_destroy_data_ex(
                CovarianceAccelerationPlatformXYZType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarianceAccelerationPlatformXYZTypePluginSupport_destroy_data(
                CovarianceAccelerationPlatformXYZType *sample);

            NDDSUSERDllExport extern void 
            CovarianceAccelerationPlatformXYZTypePluginSupport_print_data(
                const CovarianceAccelerationPlatformXYZType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarianceAccelerationPlatformXYZTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceAccelerationPlatformXYZType *out,
                const CovarianceAccelerationPlatformXYZType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CovarianceAccelerationPlatformXYZTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CovarianceAccelerationPlatformXYZType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CovarianceAccelerationPlatformXYZTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceAccelerationPlatformXYZType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CovarianceAccelerationPlatformXYZTypePlugin_deserialize_from_cdr_buffer(
                CovarianceAccelerationPlatformXYZType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CovarianceAccelerationPlatformXYZTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarianceAccelerationPlatformXYZTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarianceAccelerationPlatformXYZTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarianceAccelerationPlatformXYZTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CovarianceAccelerationPlatformXYZTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceAccelerationPlatformXYZType ** sample,
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

#endif /* CovarianceAccelerationPlatformXYZTypePlugin_260521671_h */

