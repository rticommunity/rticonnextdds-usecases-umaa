

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionVariantTypePlugin_423825788_h
#define DirectionVariantTypePlugin_423825788_h

#include "DirectionVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/DirectionCurrentVariantTypePlugin.hpp"
#include "UMAA/Common/Orientation/DirectionMagneticNorthVariantTypePlugin.hpp"
#include "UMAA/Common/Orientation/DirectionTrueNorthVariantTypePlugin.hpp"
#include "UMAA/Common/Orientation/DirectionWindVariantTypePlugin.hpp"

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
            DirectionVariantTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DirectionVariantTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionVariantTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            DirectionVariantTypeEnumPluginSupport_print_data(
                const DirectionVariantTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define DirectionVariantTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DirectionVariantTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DirectionVariantTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DirectionVariantTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DirectionVariantTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DirectionVariantTypeUnion*
            DirectionVariantTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DirectionVariantTypeUnion*
            DirectionVariantTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DirectionVariantTypeUnion*
            DirectionVariantTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DirectionVariantTypeUnionPluginSupport_copy_data(
                DirectionVariantTypeUnion *out,
                const DirectionVariantTypeUnion *in);

            NDDSUSERDllExport extern void 
            DirectionVariantTypeUnionPluginSupport_destroy_data_w_params(
                DirectionVariantTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DirectionVariantTypeUnionPluginSupport_destroy_data_ex(
                DirectionVariantTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DirectionVariantTypeUnionPluginSupport_destroy_data(
                DirectionVariantTypeUnion *sample);

            NDDSUSERDllExport extern void 
            DirectionVariantTypeUnionPluginSupport_print_data(
                const DirectionVariantTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DirectionVariantTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionVariantTypeUnion *out,
                const DirectionVariantTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DirectionVariantTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionVariantTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DirectionVariantTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DirectionVariantTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DirectionVariantTypeUnionPlugin_deserialize_from_cdr_buffer(
                DirectionVariantTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DirectionVariantTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DirectionVariantTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DirectionVariantTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionVariantTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DirectionVariantTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionVariantTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define DirectionVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DirectionVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DirectionVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DirectionVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DirectionVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DirectionVariantType*
            DirectionVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DirectionVariantType*
            DirectionVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DirectionVariantType*
            DirectionVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DirectionVariantTypePluginSupport_copy_data(
                DirectionVariantType *out,
                const DirectionVariantType *in);

            NDDSUSERDllExport extern void 
            DirectionVariantTypePluginSupport_destroy_data_w_params(
                DirectionVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DirectionVariantTypePluginSupport_destroy_data_ex(
                DirectionVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DirectionVariantTypePluginSupport_destroy_data(
                DirectionVariantType *sample);

            NDDSUSERDllExport extern void 
            DirectionVariantTypePluginSupport_print_data(
                const DirectionVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DirectionVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionVariantType *out,
                const DirectionVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DirectionVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DirectionVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DirectionVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DirectionVariantTypePlugin_deserialize_from_cdr_buffer(
                DirectionVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DirectionVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DirectionVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DirectionVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DirectionVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionVariantType ** sample,
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

#endif /* DirectionVariantTypePlugin_423825788_h */

