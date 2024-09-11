

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BearingSectorMagneticNorthVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BearingSectorMagneticNorthVariantTypePlugin_1570881047_h
#define BearingSectorMagneticNorthVariantTypePlugin_1570881047_h

#include "BearingSectorMagneticNorthVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define BearingSectorMagneticNorthVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BearingSectorMagneticNorthVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BearingSectorMagneticNorthVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BearingSectorMagneticNorthVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BearingSectorMagneticNorthVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BearingSectorMagneticNorthVariantType*
            BearingSectorMagneticNorthVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BearingSectorMagneticNorthVariantType*
            BearingSectorMagneticNorthVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BearingSectorMagneticNorthVariantType*
            BearingSectorMagneticNorthVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BearingSectorMagneticNorthVariantTypePluginSupport_copy_data(
                BearingSectorMagneticNorthVariantType *out,
                const BearingSectorMagneticNorthVariantType *in);

            NDDSUSERDllExport extern void 
            BearingSectorMagneticNorthVariantTypePluginSupport_destroy_data_w_params(
                BearingSectorMagneticNorthVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BearingSectorMagneticNorthVariantTypePluginSupport_destroy_data_ex(
                BearingSectorMagneticNorthVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BearingSectorMagneticNorthVariantTypePluginSupport_destroy_data(
                BearingSectorMagneticNorthVariantType *sample);

            NDDSUSERDllExport extern void 
            BearingSectorMagneticNorthVariantTypePluginSupport_print_data(
                const BearingSectorMagneticNorthVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BearingSectorMagneticNorthVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorMagneticNorthVariantType *out,
                const BearingSectorMagneticNorthVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BearingSectorMagneticNorthVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BearingSectorMagneticNorthVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BearingSectorMagneticNorthVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorMagneticNorthVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BearingSectorMagneticNorthVariantTypePlugin_deserialize_from_cdr_buffer(
                BearingSectorMagneticNorthVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BearingSectorMagneticNorthVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BearingSectorMagneticNorthVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BearingSectorMagneticNorthVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BearingSectorMagneticNorthVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BearingSectorMagneticNorthVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorMagneticNorthVariantType ** sample,
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

#endif /* BearingSectorMagneticNorthVariantTypePlugin_1570881047_h */

