

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShapeVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ShapeVariantTypePlugin_92585635_h
#define ShapeVariantTypePlugin_92585635_h

#include "ShapeVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MM/BaseType/EllipseVariantTypePlugin.hpp"
#include "UMAA/MM/BaseType/PolygonVariantTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ShapeVariantTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ShapeVariantTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ShapeVariantTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            ShapeVariantTypeEnumPluginSupport_print_data(
                const ShapeVariantTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define ShapeVariantTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ShapeVariantTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ShapeVariantTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ShapeVariantTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ShapeVariantTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ShapeVariantTypeUnion*
            ShapeVariantTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ShapeVariantTypeUnion*
            ShapeVariantTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ShapeVariantTypeUnion*
            ShapeVariantTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ShapeVariantTypeUnionPluginSupport_copy_data(
                ShapeVariantTypeUnion *out,
                const ShapeVariantTypeUnion *in);

            NDDSUSERDllExport extern void 
            ShapeVariantTypeUnionPluginSupport_destroy_data_w_params(
                ShapeVariantTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ShapeVariantTypeUnionPluginSupport_destroy_data_ex(
                ShapeVariantTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ShapeVariantTypeUnionPluginSupport_destroy_data(
                ShapeVariantTypeUnion *sample);

            NDDSUSERDllExport extern void 
            ShapeVariantTypeUnionPluginSupport_print_data(
                const ShapeVariantTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ShapeVariantTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ShapeVariantTypeUnion *out,
                const ShapeVariantTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ShapeVariantTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ShapeVariantTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ShapeVariantTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ShapeVariantTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ShapeVariantTypeUnionPlugin_deserialize_from_cdr_buffer(
                ShapeVariantTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ShapeVariantTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ShapeVariantTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ShapeVariantTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ShapeVariantTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ShapeVariantTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ShapeVariantTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define ShapeVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ShapeVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ShapeVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ShapeVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ShapeVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ShapeVariantType*
            ShapeVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ShapeVariantType*
            ShapeVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ShapeVariantType*
            ShapeVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ShapeVariantTypePluginSupport_copy_data(
                ShapeVariantType *out,
                const ShapeVariantType *in);

            NDDSUSERDllExport extern void 
            ShapeVariantTypePluginSupport_destroy_data_w_params(
                ShapeVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ShapeVariantTypePluginSupport_destroy_data_ex(
                ShapeVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ShapeVariantTypePluginSupport_destroy_data(
                ShapeVariantType *sample);

            NDDSUSERDllExport extern void 
            ShapeVariantTypePluginSupport_print_data(
                const ShapeVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ShapeVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ShapeVariantType *out,
                const ShapeVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ShapeVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ShapeVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ShapeVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ShapeVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ShapeVariantTypePlugin_deserialize_from_cdr_buffer(
                ShapeVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ShapeVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ShapeVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ShapeVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ShapeVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ShapeVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ShapeVariantType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ShapeVariantTypePlugin_92585635_h */

