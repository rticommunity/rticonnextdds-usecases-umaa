

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpFlowRateTypePlugin_2133445084_h
#define BallastPumpFlowRateTypePlugin_2133445084_h

#include "BallastPumpFlowRateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/EO/BallastTank/MassBallastFlowRateTypePlugin.hpp"
#include "UMAA/EO/BallastTank/VolumeBallastFlowRateTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BallastTank {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            BallastPumpFlowRateTypeEnumPluginSupport_print_data(
                const BallastPumpFlowRateTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define BallastPumpFlowRateTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastPumpFlowRateTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastPumpFlowRateTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastPumpFlowRateTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastPumpFlowRateTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastPumpFlowRateTypeUnion*
            BallastPumpFlowRateTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastPumpFlowRateTypeUnion*
            BallastPumpFlowRateTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastPumpFlowRateTypeUnion*
            BallastPumpFlowRateTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypeUnionPluginSupport_copy_data(
                BallastPumpFlowRateTypeUnion *out,
                const BallastPumpFlowRateTypeUnion *in);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypeUnionPluginSupport_destroy_data_w_params(
                BallastPumpFlowRateTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypeUnionPluginSupport_destroy_data_ex(
                BallastPumpFlowRateTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypeUnionPluginSupport_destroy_data(
                BallastPumpFlowRateTypeUnion *sample);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypeUnionPluginSupport_print_data(
                const BallastPumpFlowRateTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateTypeUnion *out,
                const BallastPumpFlowRateTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastPumpFlowRateTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastPumpFlowRateTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastPumpFlowRateTypeUnionPlugin_deserialize_from_cdr_buffer(
                BallastPumpFlowRateTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastPumpFlowRateTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define BallastPumpFlowRateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastPumpFlowRateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastPumpFlowRateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastPumpFlowRateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastPumpFlowRateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastPumpFlowRateType*
            BallastPumpFlowRateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastPumpFlowRateType*
            BallastPumpFlowRateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastPumpFlowRateType*
            BallastPumpFlowRateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypePluginSupport_copy_data(
                BallastPumpFlowRateType *out,
                const BallastPumpFlowRateType *in);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePluginSupport_destroy_data_w_params(
                BallastPumpFlowRateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePluginSupport_destroy_data_ex(
                BallastPumpFlowRateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePluginSupport_destroy_data(
                BallastPumpFlowRateType *sample);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePluginSupport_print_data(
                const BallastPumpFlowRateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateType *out,
                const BallastPumpFlowRateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastPumpFlowRateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastPumpFlowRateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastPumpFlowRateTypePlugin_deserialize_from_cdr_buffer(
                BallastPumpFlowRateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastPumpFlowRateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BallastPumpFlowRateTypePlugin_2133445084_h */

