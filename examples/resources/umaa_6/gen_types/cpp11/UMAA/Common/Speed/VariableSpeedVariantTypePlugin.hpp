

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VariableSpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VariableSpeedVariantTypePlugin_1712672613_h
#define VariableSpeedVariantTypePlugin_1712672613_h

#include "VariableSpeedVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Speed/RecommendedSpeedVariantTypePlugin.hpp"
#include "UMAA/Common/Speed/RequiredSpeedVariantTypePlugin.hpp"
#include "UMAA/Common/Speed/TimeWithSpeedVariantTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Speed {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedVariantTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedVariantTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedVariantTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            VariableSpeedVariantTypeEnumPluginSupport_print_data(
                const VariableSpeedVariantTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define VariableSpeedVariantTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VariableSpeedVariantTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VariableSpeedVariantTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VariableSpeedVariantTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VariableSpeedVariantTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VariableSpeedVariantTypeUnion*
            VariableSpeedVariantTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VariableSpeedVariantTypeUnion*
            VariableSpeedVariantTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VariableSpeedVariantTypeUnion*
            VariableSpeedVariantTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedVariantTypeUnionPluginSupport_copy_data(
                VariableSpeedVariantTypeUnion *out,
                const VariableSpeedVariantTypeUnion *in);

            NDDSUSERDllExport extern void 
            VariableSpeedVariantTypeUnionPluginSupport_destroy_data_w_params(
                VariableSpeedVariantTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VariableSpeedVariantTypeUnionPluginSupport_destroy_data_ex(
                VariableSpeedVariantTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VariableSpeedVariantTypeUnionPluginSupport_destroy_data(
                VariableSpeedVariantTypeUnion *sample);

            NDDSUSERDllExport extern void 
            VariableSpeedVariantTypeUnionPluginSupport_print_data(
                const VariableSpeedVariantTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedVariantTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedVariantTypeUnion *out,
                const VariableSpeedVariantTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VariableSpeedVariantTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VariableSpeedVariantTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedVariantTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedVariantTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VariableSpeedVariantTypeUnionPlugin_deserialize_from_cdr_buffer(
                VariableSpeedVariantTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedVariantTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VariableSpeedVariantTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedVariantTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedVariantTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedVariantTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedVariantTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define VariableSpeedVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VariableSpeedVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VariableSpeedVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VariableSpeedVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VariableSpeedVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VariableSpeedVariantType*
            VariableSpeedVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VariableSpeedVariantType*
            VariableSpeedVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VariableSpeedVariantType*
            VariableSpeedVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedVariantTypePluginSupport_copy_data(
                VariableSpeedVariantType *out,
                const VariableSpeedVariantType *in);

            NDDSUSERDllExport extern void 
            VariableSpeedVariantTypePluginSupport_destroy_data_w_params(
                VariableSpeedVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VariableSpeedVariantTypePluginSupport_destroy_data_ex(
                VariableSpeedVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VariableSpeedVariantTypePluginSupport_destroy_data(
                VariableSpeedVariantType *sample);

            NDDSUSERDllExport extern void 
            VariableSpeedVariantTypePluginSupport_print_data(
                const VariableSpeedVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedVariantType *out,
                const VariableSpeedVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VariableSpeedVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VariableSpeedVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VariableSpeedVariantTypePlugin_deserialize_from_cdr_buffer(
                VariableSpeedVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VariableSpeedVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedVariantType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Speed  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VariableSpeedVariantTypePlugin_1712672613_h */

