

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstrainedTypesPlugin_846145968_h
#define ConstrainedTypesPlugin_846145968_h

#include "ConstrainedTypes.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "BasicTypes/QuaternionPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace PrimitiveConstrained {

            #define CarrierToNoiseDensityRatioPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CarrierToNoiseDensityRatioPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CarrierToNoiseDensityRatioPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CarrierToNoiseDensityRatioPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CarrierToNoiseDensityRatioPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CarrierToNoiseDensityRatio*
            CarrierToNoiseDensityRatioPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CarrierToNoiseDensityRatio*
            CarrierToNoiseDensityRatioPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CarrierToNoiseDensityRatio*
            CarrierToNoiseDensityRatioPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CarrierToNoiseDensityRatioPluginSupport_copy_data(
                CarrierToNoiseDensityRatio *out,
                const CarrierToNoiseDensityRatio *in);

            NDDSUSERDllExport extern void 
            CarrierToNoiseDensityRatioPluginSupport_destroy_data_w_params(
                CarrierToNoiseDensityRatio *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CarrierToNoiseDensityRatioPluginSupport_destroy_data_ex(
                CarrierToNoiseDensityRatio *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CarrierToNoiseDensityRatioPluginSupport_destroy_data(
                CarrierToNoiseDensityRatio *sample);

            NDDSUSERDllExport extern void 
            CarrierToNoiseDensityRatioPluginSupport_print_data(
                const CarrierToNoiseDensityRatio *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CarrierToNoiseDensityRatioPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CarrierToNoiseDensityRatio *out,
                const CarrierToNoiseDensityRatio *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CarrierToNoiseDensityRatioPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CarrierToNoiseDensityRatioPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CarrierToNoiseDensityRatioPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CarrierToNoiseDensityRatioPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarAngleAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarAngleAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarAngleAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarAngleAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarAngleAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarAngleAngle*
            CovarAngleAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarAngleAngle*
            CovarAngleAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarAngleAngle*
            CovarAngleAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarAngleAnglePluginSupport_copy_data(
                CovarAngleAngle *out,
                const CovarAngleAngle *in);

            NDDSUSERDllExport extern void 
            CovarAngleAnglePluginSupport_destroy_data_w_params(
                CovarAngleAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarAngleAnglePluginSupport_destroy_data_ex(
                CovarAngleAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarAngleAnglePluginSupport_destroy_data(
                CovarAngleAngle *sample);

            NDDSUSERDllExport extern void 
            CovarAngleAnglePluginSupport_print_data(
                const CovarAngleAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarAngleAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarAngleAngle *out,
                const CovarAngleAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarAngleAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarAngleAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarAngleAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarAngleAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarDisAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarDisAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarDisAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarDisAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarDisAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarDisAngle*
            CovarDisAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarDisAngle*
            CovarDisAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarDisAngle*
            CovarDisAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarDisAnglePluginSupport_copy_data(
                CovarDisAngle *out,
                const CovarDisAngle *in);

            NDDSUSERDllExport extern void 
            CovarDisAnglePluginSupport_destroy_data_w_params(
                CovarDisAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarDisAnglePluginSupport_destroy_data_ex(
                CovarDisAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarDisAnglePluginSupport_destroy_data(
                CovarDisAngle *sample);

            NDDSUSERDllExport extern void 
            CovarDisAnglePluginSupport_print_data(
                const CovarDisAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarDisAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarDisAngle *out,
                const CovarDisAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarDisAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarDisAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarDisAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarDisAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarDisDisPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarDisDisPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarDisDisPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarDisDisPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarDisDisPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarDisDis*
            CovarDisDisPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarDisDis*
            CovarDisDisPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarDisDis*
            CovarDisDisPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarDisDisPluginSupport_copy_data(
                CovarDisDis *out,
                const CovarDisDis *in);

            NDDSUSERDllExport extern void 
            CovarDisDisPluginSupport_destroy_data_w_params(
                CovarDisDis *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarDisDisPluginSupport_destroy_data_ex(
                CovarDisDis *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarDisDisPluginSupport_destroy_data(
                CovarDisDis *sample);

            NDDSUSERDllExport extern void 
            CovarDisDisPluginSupport_print_data(
                const CovarDisDis *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarDisDisPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarDisDis *out,
                const CovarDisDis *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarDisDisPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarDisDisPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarDisDisPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarDisDisPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define LeftPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LeftPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LeftPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LeftPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LeftPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Left*
            LeftPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Left*
            LeftPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Left*
            LeftPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LeftPluginSupport_copy_data(
                Left *out,
                const Left *in);

            NDDSUSERDllExport extern void 
            LeftPluginSupport_destroy_data_w_params(
                Left *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LeftPluginSupport_destroy_data_ex(
                Left *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LeftPluginSupport_destroy_data(
                Left *sample);

            NDDSUSERDllExport extern void 
            LeftPluginSupport_print_data(
                const Left *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LeftPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Left *out,
                const Left *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            LeftPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LeftPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LeftPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LeftPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define MMSIPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MMSIPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MMSIPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MMSIPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MMSIPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MMSI*
            MMSIPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MMSI*
            MMSIPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MMSI*
            MMSIPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MMSIPluginSupport_copy_data(
                MMSI *out,
                const MMSI *in);

            NDDSUSERDllExport extern void 
            MMSIPluginSupport_destroy_data_w_params(
                MMSI *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MMSIPluginSupport_destroy_data_ex(
                MMSI *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MMSIPluginSupport_destroy_data(
                MMSI *sample);

            NDDSUSERDllExport extern void 
            MMSIPluginSupport_print_data(
                const MMSI *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MMSIPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MMSI *out,
                const MMSI *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MMSIPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MMSIPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MMSIPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MMSIPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define NanosecondsCountPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define NanosecondsCountPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NanosecondsCountPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define NanosecondsCountPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NanosecondsCountPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NanosecondsCount*
            NanosecondsCountPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NanosecondsCount*
            NanosecondsCountPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NanosecondsCount*
            NanosecondsCountPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NanosecondsCountPluginSupport_copy_data(
                NanosecondsCount *out,
                const NanosecondsCount *in);

            NDDSUSERDllExport extern void 
            NanosecondsCountPluginSupport_destroy_data_w_params(
                NanosecondsCount *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NanosecondsCountPluginSupport_destroy_data_ex(
                NanosecondsCount *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NanosecondsCountPluginSupport_destroy_data(
                NanosecondsCount *sample);

            NDDSUSERDllExport extern void 
            NanosecondsCountPluginSupport_print_data(
                const NanosecondsCount *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NanosecondsCountPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NanosecondsCount *out,
                const NanosecondsCount *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            NanosecondsCountPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NanosecondsCountPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NanosecondsCountPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NanosecondsCountPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define NanosecondsDriftPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define NanosecondsDriftPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NanosecondsDriftPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define NanosecondsDriftPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NanosecondsDriftPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NanosecondsDrift*
            NanosecondsDriftPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NanosecondsDrift*
            NanosecondsDriftPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NanosecondsDrift*
            NanosecondsDriftPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NanosecondsDriftPluginSupport_copy_data(
                NanosecondsDrift *out,
                const NanosecondsDrift *in);

            NDDSUSERDllExport extern void 
            NanosecondsDriftPluginSupport_destroy_data_w_params(
                NanosecondsDrift *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NanosecondsDriftPluginSupport_destroy_data_ex(
                NanosecondsDrift *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NanosecondsDriftPluginSupport_destroy_data(
                NanosecondsDrift *sample);

            NDDSUSERDllExport extern void 
            NanosecondsDriftPluginSupport_print_data(
                const NanosecondsDrift *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NanosecondsDriftPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NanosecondsDrift *out,
                const NanosecondsDrift *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            NanosecondsDriftPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NanosecondsDriftPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NanosecondsDriftPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NanosecondsDriftPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define StringLongDescriptionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StringLongDescriptionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StringLongDescriptionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StringLongDescriptionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StringLongDescriptionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StringLongDescription*
            StringLongDescriptionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StringLongDescription*
            StringLongDescriptionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StringLongDescription*
            StringLongDescriptionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StringLongDescriptionPluginSupport_copy_data(
                StringLongDescription *out,
                const StringLongDescription *in);

            NDDSUSERDllExport extern void 
            StringLongDescriptionPluginSupport_destroy_data_w_params(
                StringLongDescription *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StringLongDescriptionPluginSupport_destroy_data_ex(
                StringLongDescription *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StringLongDescriptionPluginSupport_destroy_data(
                StringLongDescription *sample);

            NDDSUSERDllExport extern void 
            StringLongDescriptionPluginSupport_print_data(
                const StringLongDescription *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            StringLongDescriptionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StringLongDescription *out,
                const StringLongDescription *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            StringLongDescriptionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StringLongDescriptionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StringLongDescriptionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StringLongDescriptionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define StringShortDescriptionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StringShortDescriptionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StringShortDescriptionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StringShortDescriptionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StringShortDescriptionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StringShortDescription*
            StringShortDescriptionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StringShortDescription*
            StringShortDescriptionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StringShortDescription*
            StringShortDescriptionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StringShortDescriptionPluginSupport_copy_data(
                StringShortDescription *out,
                const StringShortDescription *in);

            NDDSUSERDllExport extern void 
            StringShortDescriptionPluginSupport_destroy_data_w_params(
                StringShortDescription *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StringShortDescriptionPluginSupport_destroy_data_ex(
                StringShortDescription *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StringShortDescriptionPluginSupport_destroy_data(
                StringShortDescription *sample);

            NDDSUSERDllExport extern void 
            StringShortDescriptionPluginSupport_print_data(
                const StringShortDescription *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            StringShortDescriptionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StringShortDescription *out,
                const StringShortDescription *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            StringShortDescriptionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StringShortDescriptionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StringShortDescriptionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StringShortDescriptionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define UniformResourceIdentifierPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define UniformResourceIdentifierPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define UniformResourceIdentifierPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define UniformResourceIdentifierPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define UniformResourceIdentifierPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern UniformResourceIdentifier*
            UniformResourceIdentifierPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern UniformResourceIdentifier*
            UniformResourceIdentifierPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern UniformResourceIdentifier*
            UniformResourceIdentifierPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            UniformResourceIdentifierPluginSupport_copy_data(
                UniformResourceIdentifier *out,
                const UniformResourceIdentifier *in);

            NDDSUSERDllExport extern void 
            UniformResourceIdentifierPluginSupport_destroy_data_w_params(
                UniformResourceIdentifier *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            UniformResourceIdentifierPluginSupport_destroy_data_ex(
                UniformResourceIdentifier *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            UniformResourceIdentifierPluginSupport_destroy_data(
                UniformResourceIdentifier *sample);

            NDDSUSERDllExport extern void 
            UniformResourceIdentifierPluginSupport_print_data(
                const UniformResourceIdentifier *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            UniformResourceIdentifierPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                UniformResourceIdentifier *out,
                const UniformResourceIdentifier *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            UniformResourceIdentifierPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            UniformResourceIdentifierPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            UniformResourceIdentifierPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            UniformResourceIdentifierPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

        } /* namespace PrimitiveConstrained  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConstrainedTypesPlugin_846145968_h */

