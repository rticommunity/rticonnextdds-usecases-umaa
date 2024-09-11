

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsionTypePlugin_1416675483_h
#define PropulsionTypePlugin_1416675483_h

#include "PropulsionType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Propulsion/PropulsiveEffortTypePlugin.hpp"
#include "UMAA/Common/Propulsion/PropulsiveRPMTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Propulsion {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            PropulsionTypeEnumPluginSupport_print_data(
                const PropulsionTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define PropulsionTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsionTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsionTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsionTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsionTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsionTypeUnion*
            PropulsionTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsionTypeUnion*
            PropulsionTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsionTypeUnion*
            PropulsionTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypeUnionPluginSupport_copy_data(
                PropulsionTypeUnion *out,
                const PropulsionTypeUnion *in);

            NDDSUSERDllExport extern void 
            PropulsionTypeUnionPluginSupport_destroy_data_w_params(
                PropulsionTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsionTypeUnionPluginSupport_destroy_data_ex(
                PropulsionTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsionTypeUnionPluginSupport_destroy_data(
                PropulsionTypeUnion *sample);

            NDDSUSERDllExport extern void 
            PropulsionTypeUnionPluginSupport_print_data(
                const PropulsionTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionTypeUnion *out,
                const PropulsionTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsionTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsionTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsionTypeUnionPlugin_deserialize_from_cdr_buffer(
                PropulsionTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsionTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define PropulsionTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsionTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsionTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsionTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsionTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsionType*
            PropulsionTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsionType*
            PropulsionTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsionType*
            PropulsionTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypePluginSupport_copy_data(
                PropulsionType *out,
                const PropulsionType *in);

            NDDSUSERDllExport extern void 
            PropulsionTypePluginSupport_destroy_data_w_params(
                PropulsionType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsionTypePluginSupport_destroy_data_ex(
                PropulsionType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsionTypePluginSupport_destroy_data(
                PropulsionType *sample);

            NDDSUSERDllExport extern void 
            PropulsionTypePluginSupport_print_data(
                const PropulsionType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionType *out,
                const PropulsionType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsionTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsionType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsionTypePlugin_deserialize_from_cdr_buffer(
                PropulsionType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsionTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Propulsion  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsionTypePlugin_1416675483_h */

