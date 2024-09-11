

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceOrientationVelocityNEDType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceOrientationVelocityNEDTypePlugin_1490178988_h
#define CovarianceOrientationVelocityNEDTypePlugin_1490178988_h

#include "CovarianceOrientationVelocityNEDType.hpp"

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

            #define CovarianceOrientationVelocityNEDTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarianceOrientationVelocityNEDTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarianceOrientationVelocityNEDTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarianceOrientationVelocityNEDTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarianceOrientationVelocityNEDTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarianceOrientationVelocityNEDType*
            CovarianceOrientationVelocityNEDTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarianceOrientationVelocityNEDType*
            CovarianceOrientationVelocityNEDTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarianceOrientationVelocityNEDType*
            CovarianceOrientationVelocityNEDTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationVelocityNEDTypePluginSupport_copy_data(
                CovarianceOrientationVelocityNEDType *out,
                const CovarianceOrientationVelocityNEDType *in);

            NDDSUSERDllExport extern void 
            CovarianceOrientationVelocityNEDTypePluginSupport_destroy_data_w_params(
                CovarianceOrientationVelocityNEDType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarianceOrientationVelocityNEDTypePluginSupport_destroy_data_ex(
                CovarianceOrientationVelocityNEDType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarianceOrientationVelocityNEDTypePluginSupport_destroy_data(
                CovarianceOrientationVelocityNEDType *sample);

            NDDSUSERDllExport extern void 
            CovarianceOrientationVelocityNEDTypePluginSupport_print_data(
                const CovarianceOrientationVelocityNEDType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationVelocityNEDTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceOrientationVelocityNEDType *out,
                const CovarianceOrientationVelocityNEDType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CovarianceOrientationVelocityNEDTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CovarianceOrientationVelocityNEDType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationVelocityNEDTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceOrientationVelocityNEDType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CovarianceOrientationVelocityNEDTypePlugin_deserialize_from_cdr_buffer(
                CovarianceOrientationVelocityNEDType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CovarianceOrientationVelocityNEDTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarianceOrientationVelocityNEDTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarianceOrientationVelocityNEDTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarianceOrientationVelocityNEDTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CovarianceOrientationVelocityNEDTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CovarianceOrientationVelocityNEDType ** sample,
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

#endif /* CovarianceOrientationVelocityNEDTypePlugin_1490178988_h */

