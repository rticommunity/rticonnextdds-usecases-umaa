

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BearingSectorGuideCourseVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BearingSectorGuideCourseVariantTypePlugin_1003195619_h
#define BearingSectorGuideCourseVariantTypePlugin_1003195619_h

#include "BearingSectorGuideCourseVariantType.hpp"

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

            #define BearingSectorGuideCourseVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BearingSectorGuideCourseVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BearingSectorGuideCourseVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BearingSectorGuideCourseVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BearingSectorGuideCourseVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BearingSectorGuideCourseVariantType*
            BearingSectorGuideCourseVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BearingSectorGuideCourseVariantType*
            BearingSectorGuideCourseVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BearingSectorGuideCourseVariantType*
            BearingSectorGuideCourseVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BearingSectorGuideCourseVariantTypePluginSupport_copy_data(
                BearingSectorGuideCourseVariantType *out,
                const BearingSectorGuideCourseVariantType *in);

            NDDSUSERDllExport extern void 
            BearingSectorGuideCourseVariantTypePluginSupport_destroy_data_w_params(
                BearingSectorGuideCourseVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BearingSectorGuideCourseVariantTypePluginSupport_destroy_data_ex(
                BearingSectorGuideCourseVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BearingSectorGuideCourseVariantTypePluginSupport_destroy_data(
                BearingSectorGuideCourseVariantType *sample);

            NDDSUSERDllExport extern void 
            BearingSectorGuideCourseVariantTypePluginSupport_print_data(
                const BearingSectorGuideCourseVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BearingSectorGuideCourseVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorGuideCourseVariantType *out,
                const BearingSectorGuideCourseVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BearingSectorGuideCourseVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BearingSectorGuideCourseVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BearingSectorGuideCourseVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorGuideCourseVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BearingSectorGuideCourseVariantTypePlugin_deserialize_from_cdr_buffer(
                BearingSectorGuideCourseVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BearingSectorGuideCourseVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BearingSectorGuideCourseVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BearingSectorGuideCourseVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BearingSectorGuideCourseVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BearingSectorGuideCourseVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorGuideCourseVariantType ** sample,
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

#endif /* BearingSectorGuideCourseVariantTypePlugin_1003195619_h */

