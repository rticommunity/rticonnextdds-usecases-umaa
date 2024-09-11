

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BearingSectorVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BearingSectorVariantTypePlugin_1322384047_h
#define BearingSectorVariantTypePlugin_1322384047_h

#include "BearingSectorVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/BearingSectorGuideCourseVariantTypePlugin.hpp"
#include "UMAA/Common/Orientation/BearingSectorMagneticNorthVariantTypePlugin.hpp"
#include "UMAA/Common/Orientation/BearingSectorTrueNorthVariantTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BearingSectorVariantTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BearingSectorVariantTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BearingSectorVariantTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            BearingSectorVariantTypeEnumPluginSupport_print_data(
                const BearingSectorVariantTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define BearingSectorVariantTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BearingSectorVariantTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BearingSectorVariantTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BearingSectorVariantTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BearingSectorVariantTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BearingSectorVariantTypeUnion*
            BearingSectorVariantTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BearingSectorVariantTypeUnion*
            BearingSectorVariantTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BearingSectorVariantTypeUnion*
            BearingSectorVariantTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BearingSectorVariantTypeUnionPluginSupport_copy_data(
                BearingSectorVariantTypeUnion *out,
                const BearingSectorVariantTypeUnion *in);

            NDDSUSERDllExport extern void 
            BearingSectorVariantTypeUnionPluginSupport_destroy_data_w_params(
                BearingSectorVariantTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BearingSectorVariantTypeUnionPluginSupport_destroy_data_ex(
                BearingSectorVariantTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BearingSectorVariantTypeUnionPluginSupport_destroy_data(
                BearingSectorVariantTypeUnion *sample);

            NDDSUSERDllExport extern void 
            BearingSectorVariantTypeUnionPluginSupport_print_data(
                const BearingSectorVariantTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BearingSectorVariantTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorVariantTypeUnion *out,
                const BearingSectorVariantTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BearingSectorVariantTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BearingSectorVariantTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BearingSectorVariantTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorVariantTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BearingSectorVariantTypeUnionPlugin_deserialize_from_cdr_buffer(
                BearingSectorVariantTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BearingSectorVariantTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BearingSectorVariantTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BearingSectorVariantTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BearingSectorVariantTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BearingSectorVariantTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorVariantTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define BearingSectorVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BearingSectorVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BearingSectorVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BearingSectorVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BearingSectorVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BearingSectorVariantType*
            BearingSectorVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BearingSectorVariantType*
            BearingSectorVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BearingSectorVariantType*
            BearingSectorVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BearingSectorVariantTypePluginSupport_copy_data(
                BearingSectorVariantType *out,
                const BearingSectorVariantType *in);

            NDDSUSERDllExport extern void 
            BearingSectorVariantTypePluginSupport_destroy_data_w_params(
                BearingSectorVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BearingSectorVariantTypePluginSupport_destroy_data_ex(
                BearingSectorVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BearingSectorVariantTypePluginSupport_destroy_data(
                BearingSectorVariantType *sample);

            NDDSUSERDllExport extern void 
            BearingSectorVariantTypePluginSupport_print_data(
                const BearingSectorVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BearingSectorVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorVariantType *out,
                const BearingSectorVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BearingSectorVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BearingSectorVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BearingSectorVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BearingSectorVariantTypePlugin_deserialize_from_cdr_buffer(
                BearingSectorVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BearingSectorVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BearingSectorVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BearingSectorVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BearingSectorVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BearingSectorVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BearingSectorVariantType ** sample,
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

#endif /* BearingSectorVariantTypePlugin_1322384047_h */

