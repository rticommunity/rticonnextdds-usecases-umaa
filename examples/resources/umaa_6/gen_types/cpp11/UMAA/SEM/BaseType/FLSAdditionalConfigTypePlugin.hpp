

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSAdditionalConfigType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FLSAdditionalConfigTypePlugin_919847041_h
#define FLSAdditionalConfigTypePlugin_919847041_h

#include "FLSAdditionalConfigType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/SEM/BaseType/FLSConfigSearchBottomTypePlugin.hpp"
#include "UMAA/SEM/BaseType/FLSConfigSearchVolumeTypePlugin.hpp"
#include "UMAA/SEM/BaseType/FLSConfigTestTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace BaseType {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            FLSAdditionalConfigTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            FLSAdditionalConfigTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FLSAdditionalConfigTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            FLSAdditionalConfigTypeEnumPluginSupport_print_data(
                const FLSAdditionalConfigTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define FLSAdditionalConfigTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FLSAdditionalConfigTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FLSAdditionalConfigTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FLSAdditionalConfigTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FLSAdditionalConfigTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FLSAdditionalConfigTypeUnion*
            FLSAdditionalConfigTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FLSAdditionalConfigTypeUnion*
            FLSAdditionalConfigTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FLSAdditionalConfigTypeUnion*
            FLSAdditionalConfigTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FLSAdditionalConfigTypeUnionPluginSupport_copy_data(
                FLSAdditionalConfigTypeUnion *out,
                const FLSAdditionalConfigTypeUnion *in);

            NDDSUSERDllExport extern void 
            FLSAdditionalConfigTypeUnionPluginSupport_destroy_data_w_params(
                FLSAdditionalConfigTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FLSAdditionalConfigTypeUnionPluginSupport_destroy_data_ex(
                FLSAdditionalConfigTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FLSAdditionalConfigTypeUnionPluginSupport_destroy_data(
                FLSAdditionalConfigTypeUnion *sample);

            NDDSUSERDllExport extern void 
            FLSAdditionalConfigTypeUnionPluginSupport_print_data(
                const FLSAdditionalConfigTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FLSAdditionalConfigTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FLSAdditionalConfigTypeUnion *out,
                const FLSAdditionalConfigTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FLSAdditionalConfigTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FLSAdditionalConfigTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FLSAdditionalConfigTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FLSAdditionalConfigTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FLSAdditionalConfigTypeUnionPlugin_deserialize_from_cdr_buffer(
                FLSAdditionalConfigTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FLSAdditionalConfigTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FLSAdditionalConfigTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FLSAdditionalConfigTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FLSAdditionalConfigTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FLSAdditionalConfigTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FLSAdditionalConfigTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define FLSAdditionalConfigTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FLSAdditionalConfigTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FLSAdditionalConfigTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FLSAdditionalConfigTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FLSAdditionalConfigTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FLSAdditionalConfigType*
            FLSAdditionalConfigTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FLSAdditionalConfigType*
            FLSAdditionalConfigTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FLSAdditionalConfigType*
            FLSAdditionalConfigTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FLSAdditionalConfigTypePluginSupport_copy_data(
                FLSAdditionalConfigType *out,
                const FLSAdditionalConfigType *in);

            NDDSUSERDllExport extern void 
            FLSAdditionalConfigTypePluginSupport_destroy_data_w_params(
                FLSAdditionalConfigType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FLSAdditionalConfigTypePluginSupport_destroy_data_ex(
                FLSAdditionalConfigType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FLSAdditionalConfigTypePluginSupport_destroy_data(
                FLSAdditionalConfigType *sample);

            NDDSUSERDllExport extern void 
            FLSAdditionalConfigTypePluginSupport_print_data(
                const FLSAdditionalConfigType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FLSAdditionalConfigTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FLSAdditionalConfigType *out,
                const FLSAdditionalConfigType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FLSAdditionalConfigTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FLSAdditionalConfigType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FLSAdditionalConfigTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FLSAdditionalConfigType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FLSAdditionalConfigTypePlugin_deserialize_from_cdr_buffer(
                FLSAdditionalConfigType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FLSAdditionalConfigTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FLSAdditionalConfigTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FLSAdditionalConfigTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FLSAdditionalConfigTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FLSAdditionalConfigTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FLSAdditionalConfigType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace BaseType  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FLSAdditionalConfigTypePlugin_919847041_h */

