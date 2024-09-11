

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedVariantTypePlugin_557285267_h
#define SpeedVariantTypePlugin_557285267_h

#include "SpeedVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Speed/AirSpeedVariantTypePlugin.hpp"
#include "UMAA/Common/Speed/EngineRPMSpeedVariantTypePlugin.hpp"
#include "UMAA/Common/Speed/GroundSpeedVariantTypePlugin.hpp"
#include "UMAA/Common/Speed/VehicleSpeedModeVariantTypePlugin.hpp"
#include "UMAA/Common/Speed/WaterSpeedVariantTypePlugin.hpp"

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
            SpeedVariantTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SpeedVariantTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedVariantTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            SpeedVariantTypeEnumPluginSupport_print_data(
                const SpeedVariantTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define SpeedVariantTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedVariantTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedVariantTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedVariantTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedVariantTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SpeedVariantTypeUnion*
            SpeedVariantTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SpeedVariantTypeUnion*
            SpeedVariantTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedVariantTypeUnion*
            SpeedVariantTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedVariantTypeUnionPluginSupport_copy_data(
                SpeedVariantTypeUnion *out,
                const SpeedVariantTypeUnion *in);

            NDDSUSERDllExport extern void 
            SpeedVariantTypeUnionPluginSupport_destroy_data_w_params(
                SpeedVariantTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedVariantTypeUnionPluginSupport_destroy_data_ex(
                SpeedVariantTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedVariantTypeUnionPluginSupport_destroy_data(
                SpeedVariantTypeUnion *sample);

            NDDSUSERDllExport extern void 
            SpeedVariantTypeUnionPluginSupport_print_data(
                const SpeedVariantTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SpeedVariantTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedVariantTypeUnion *out,
                const SpeedVariantTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SpeedVariantTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SpeedVariantTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SpeedVariantTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SpeedVariantTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SpeedVariantTypeUnionPlugin_deserialize_from_cdr_buffer(
                SpeedVariantTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SpeedVariantTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedVariantTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedVariantTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedVariantTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SpeedVariantTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SpeedVariantTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define SpeedVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SpeedVariantType*
            SpeedVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SpeedVariantType*
            SpeedVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedVariantType*
            SpeedVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedVariantTypePluginSupport_copy_data(
                SpeedVariantType *out,
                const SpeedVariantType *in);

            NDDSUSERDllExport extern void 
            SpeedVariantTypePluginSupport_destroy_data_w_params(
                SpeedVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedVariantTypePluginSupport_destroy_data_ex(
                SpeedVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedVariantTypePluginSupport_destroy_data(
                SpeedVariantType *sample);

            NDDSUSERDllExport extern void 
            SpeedVariantTypePluginSupport_print_data(
                const SpeedVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SpeedVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedVariantType *out,
                const SpeedVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SpeedVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SpeedVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SpeedVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SpeedVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SpeedVariantTypePlugin_deserialize_from_cdr_buffer(
                SpeedVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SpeedVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SpeedVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SpeedVariantType ** sample,
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

#endif /* SpeedVariantTypePlugin_557285267_h */

