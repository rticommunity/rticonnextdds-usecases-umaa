

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationNEDType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceOrientationNEDTypePlugin_292007914_h
#define CovarianceOrientationNEDTypePlugin_292007914_h

#include "CovarianceOrientationNEDType.hpp"

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

            #define CovarianceOrientationNEDTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarianceOrientationNEDTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarianceOrientationNEDTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarianceOrientationNEDTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarianceOrientationNEDTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarianceOrientationNEDType*
            CovarianceOrientationNEDTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarianceOrientationNEDType*
            CovarianceOrientationNEDTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarianceOrientationNEDType*
            CovarianceOrientationNEDTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationNEDTypePluginSupport_copy_data(
                CovarianceOrientationNEDType *out,
                const CovarianceOrientationNEDType *in);

            NDDSUSERDllExport extern void 
            CovarianceOrientationNEDTypePluginSupport_destroy_data_w_params(
                CovarianceOrientationNEDType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarianceOrientationNEDTypePluginSupport_destroy_data_ex(
                CovarianceOrientationNEDType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarianceOrientationNEDTypePluginSupport_destroy_data(
                CovarianceOrientationNEDType *sample);

            NDDSUSERDllExport extern void 
            CovarianceOrientationNEDTypePluginSupport_print_data(
                const CovarianceOrientationNEDType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationNEDTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceOrientationNEDType *out,
                const CovarianceOrientationNEDType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CovarianceOrientationNEDTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CovarianceOrientationNEDType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationNEDTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceOrientationNEDType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CovarianceOrientationNEDTypePlugin_deserialize_from_cdr_buffer(
                CovarianceOrientationNEDType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CovarianceOrientationNEDTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarianceOrientationNEDTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarianceOrientationNEDTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarianceOrientationNEDTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationNEDTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceOrientationNEDType ** sample,
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

#endif /* CovarianceOrientationNEDTypePlugin_292007914_h */

