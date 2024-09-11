

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstrainedTypesPlugin_846152741_h
#define ConstrainedTypesPlugin_846152741_h

#include "ConstrainedTypes.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace PrimitiveConstrained {

            #define AccelerationLocalWaterMassPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AccelerationLocalWaterMassPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AccelerationLocalWaterMassPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AccelerationLocalWaterMassPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AccelerationLocalWaterMassPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AccelerationLocalWaterMass*
            AccelerationLocalWaterMassPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AccelerationLocalWaterMass*
            AccelerationLocalWaterMassPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AccelerationLocalWaterMass*
            AccelerationLocalWaterMassPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AccelerationLocalWaterMassPluginSupport_copy_data(
                AccelerationLocalWaterMass *out,
                const AccelerationLocalWaterMass *in);

            NDDSUSERDllExport extern void 
            AccelerationLocalWaterMassPluginSupport_destroy_data_w_params(
                AccelerationLocalWaterMass *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AccelerationLocalWaterMassPluginSupport_destroy_data_ex(
                AccelerationLocalWaterMass *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AccelerationLocalWaterMassPluginSupport_destroy_data(
                AccelerationLocalWaterMass *sample);

            NDDSUSERDllExport extern void 
            AccelerationLocalWaterMassPluginSupport_print_data(
                const AccelerationLocalWaterMass *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AccelerationLocalWaterMassPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AccelerationLocalWaterMass *out,
                const AccelerationLocalWaterMass *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AccelerationLocalWaterMassPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AccelerationLocalWaterMassPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AccelerationLocalWaterMassPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AccelerationLocalWaterMassPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define AirTemperaturePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AirTemperaturePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AirTemperaturePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AirTemperaturePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AirTemperaturePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AirTemperature*
            AirTemperaturePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AirTemperature*
            AirTemperaturePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AirTemperature*
            AirTemperaturePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AirTemperaturePluginSupport_copy_data(
                AirTemperature *out,
                const AirTemperature *in);

            NDDSUSERDllExport extern void 
            AirTemperaturePluginSupport_destroy_data_w_params(
                AirTemperature *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AirTemperaturePluginSupport_destroy_data_ex(
                AirTemperature *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AirTemperaturePluginSupport_destroy_data(
                AirTemperature *sample);

            NDDSUSERDllExport extern void 
            AirTemperaturePluginSupport_print_data(
                const AirTemperature *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AirTemperaturePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AirTemperature *out,
                const AirTemperature *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AirTemperaturePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AirTemperaturePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AirTemperaturePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AirTemperaturePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define AngleAccelerationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AngleAccelerationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AngleAccelerationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AngleAccelerationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AngleAccelerationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AngleAcceleration*
            AngleAccelerationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AngleAcceleration*
            AngleAccelerationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AngleAcceleration*
            AngleAccelerationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AngleAccelerationPluginSupport_copy_data(
                AngleAcceleration *out,
                const AngleAcceleration *in);

            NDDSUSERDllExport extern void 
            AngleAccelerationPluginSupport_destroy_data_w_params(
                AngleAcceleration *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AngleAccelerationPluginSupport_destroy_data_ex(
                AngleAcceleration *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AngleAccelerationPluginSupport_destroy_data(
                AngleAcceleration *sample);

            NDDSUSERDllExport extern void 
            AngleAccelerationPluginSupport_print_data(
                const AngleAcceleration *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AngleAccelerationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AngleAcceleration *out,
                const AngleAcceleration *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AngleAccelerationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AngleAccelerationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AngleAccelerationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AngleAccelerationPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define BearingAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BearingAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BearingAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BearingAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BearingAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BearingAngle*
            BearingAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BearingAngle*
            BearingAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BearingAngle*
            BearingAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BearingAnglePluginSupport_copy_data(
                BearingAngle *out,
                const BearingAngle *in);

            NDDSUSERDllExport extern void 
            BearingAnglePluginSupport_destroy_data_w_params(
                BearingAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BearingAnglePluginSupport_destroy_data_ex(
                BearingAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BearingAnglePluginSupport_destroy_data(
                BearingAngle *sample);

            NDDSUSERDllExport extern void 
            BearingAnglePluginSupport_print_data(
                const BearingAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BearingAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BearingAngle *out,
                const BearingAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BearingAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BearingAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BearingAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BearingAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

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

            #define ColorComponentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ColorComponentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ColorComponentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ColorComponentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ColorComponentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ColorComponent*
            ColorComponentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ColorComponent*
            ColorComponentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ColorComponent*
            ColorComponentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ColorComponentPluginSupport_copy_data(
                ColorComponent *out,
                const ColorComponent *in);

            NDDSUSERDllExport extern void 
            ColorComponentPluginSupport_destroy_data_w_params(
                ColorComponent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ColorComponentPluginSupport_destroy_data_ex(
                ColorComponent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ColorComponentPluginSupport_destroy_data(
                ColorComponent *sample);

            NDDSUSERDllExport extern void 
            ColorComponentPluginSupport_print_data(
                const ColorComponent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ColorComponentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ColorComponent *out,
                const ColorComponent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ColorComponentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ColorComponentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ColorComponentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ColorComponentPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ContactUncertaintyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactUncertaintyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactUncertaintyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactUncertaintyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactUncertaintyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactUncertainty*
            ContactUncertaintyPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactUncertainty*
            ContactUncertaintyPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactUncertainty*
            ContactUncertaintyPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactUncertaintyPluginSupport_copy_data(
                ContactUncertainty *out,
                const ContactUncertainty *in);

            NDDSUSERDllExport extern void 
            ContactUncertaintyPluginSupport_destroy_data_w_params(
                ContactUncertainty *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactUncertaintyPluginSupport_destroy_data_ex(
                ContactUncertainty *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactUncertaintyPluginSupport_destroy_data(
                ContactUncertainty *sample);

            NDDSUSERDllExport extern void 
            ContactUncertaintyPluginSupport_print_data(
                const ContactUncertainty *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ContactUncertaintyPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactUncertainty *out,
                const ContactUncertainty *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ContactUncertaintyPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactUncertaintyPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactUncertaintyPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactUncertaintyPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarAccelPlatformXYZPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarAccelPlatformXYZPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarAccelPlatformXYZPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarAccelPlatformXYZPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarAccelPlatformXYZPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarAccelPlatformXYZ*
            CovarAccelPlatformXYZPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarAccelPlatformXYZ*
            CovarAccelPlatformXYZPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarAccelPlatformXYZ*
            CovarAccelPlatformXYZPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarAccelPlatformXYZPluginSupport_copy_data(
                CovarAccelPlatformXYZ *out,
                const CovarAccelPlatformXYZ *in);

            NDDSUSERDllExport extern void 
            CovarAccelPlatformXYZPluginSupport_destroy_data_w_params(
                CovarAccelPlatformXYZ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarAccelPlatformXYZPluginSupport_destroy_data_ex(
                CovarAccelPlatformXYZ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarAccelPlatformXYZPluginSupport_destroy_data(
                CovarAccelPlatformXYZ *sample);

            NDDSUSERDllExport extern void 
            CovarAccelPlatformXYZPluginSupport_print_data(
                const CovarAccelPlatformXYZ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarAccelPlatformXYZPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarAccelPlatformXYZ *out,
                const CovarAccelPlatformXYZ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarAccelPlatformXYZPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarAccelPlatformXYZPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarAccelPlatformXYZPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarAccelPlatformXYZPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarOrientationAccelPlatformXYZPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarOrientationAccelPlatformXYZPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarOrientationAccelPlatformXYZPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarOrientationAccelPlatformXYZPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarOrientationAccelPlatformXYZPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarOrientationAccelPlatformXYZ*
            CovarOrientationAccelPlatformXYZPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarOrientationAccelPlatformXYZ*
            CovarOrientationAccelPlatformXYZPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarOrientationAccelPlatformXYZ*
            CovarOrientationAccelPlatformXYZPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarOrientationAccelPlatformXYZPluginSupport_copy_data(
                CovarOrientationAccelPlatformXYZ *out,
                const CovarOrientationAccelPlatformXYZ *in);

            NDDSUSERDllExport extern void 
            CovarOrientationAccelPlatformXYZPluginSupport_destroy_data_w_params(
                CovarOrientationAccelPlatformXYZ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarOrientationAccelPlatformXYZPluginSupport_destroy_data_ex(
                CovarOrientationAccelPlatformXYZ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarOrientationAccelPlatformXYZPluginSupport_destroy_data(
                CovarOrientationAccelPlatformXYZ *sample);

            NDDSUSERDllExport extern void 
            CovarOrientationAccelPlatformXYZPluginSupport_print_data(
                const CovarOrientationAccelPlatformXYZ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarOrientationAccelPlatformXYZPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarOrientationAccelPlatformXYZ *out,
                const CovarOrientationAccelPlatformXYZ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationAccelPlatformXYZPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarOrientationAccelPlatformXYZPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationAccelPlatformXYZPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationAccelPlatformXYZPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarOrientationNEDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarOrientationNEDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarOrientationNEDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarOrientationNEDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarOrientationNEDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarOrientationNED*
            CovarOrientationNEDPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarOrientationNED*
            CovarOrientationNEDPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarOrientationNED*
            CovarOrientationNEDPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarOrientationNEDPluginSupport_copy_data(
                CovarOrientationNED *out,
                const CovarOrientationNED *in);

            NDDSUSERDllExport extern void 
            CovarOrientationNEDPluginSupport_destroy_data_w_params(
                CovarOrientationNED *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarOrientationNEDPluginSupport_destroy_data_ex(
                CovarOrientationNED *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarOrientationNEDPluginSupport_destroy_data(
                CovarOrientationNED *sample);

            NDDSUSERDllExport extern void 
            CovarOrientationNEDPluginSupport_print_data(
                const CovarOrientationNED *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarOrientationNEDPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarOrientationNED *out,
                const CovarOrientationNED *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationNEDPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarOrientationNEDPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationNEDPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationNEDPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarOrientationVelNEDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarOrientationVelNEDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarOrientationVelNEDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarOrientationVelNEDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarOrientationVelNEDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarOrientationVelNED*
            CovarOrientationVelNEDPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarOrientationVelNED*
            CovarOrientationVelNEDPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarOrientationVelNED*
            CovarOrientationVelNEDPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarOrientationVelNEDPluginSupport_copy_data(
                CovarOrientationVelNED *out,
                const CovarOrientationVelNED *in);

            NDDSUSERDllExport extern void 
            CovarOrientationVelNEDPluginSupport_destroy_data_w_params(
                CovarOrientationVelNED *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarOrientationVelNEDPluginSupport_destroy_data_ex(
                CovarOrientationVelNED *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarOrientationVelNEDPluginSupport_destroy_data(
                CovarOrientationVelNED *sample);

            NDDSUSERDllExport extern void 
            CovarOrientationVelNEDPluginSupport_print_data(
                const CovarOrientationVelNED *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarOrientationVelNEDPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarOrientationVelNED *out,
                const CovarOrientationVelNED *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationVelNEDPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarOrientationVelNEDPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationVelNEDPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationVelNEDPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarPosECEFPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarPosECEFPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarPosECEFPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarPosECEFPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarPosECEFPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarPosECEF*
            CovarPosECEFPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarPosECEF*
            CovarPosECEFPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarPosECEF*
            CovarPosECEFPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarPosECEFPluginSupport_copy_data(
                CovarPosECEF *out,
                const CovarPosECEF *in);

            NDDSUSERDllExport extern void 
            CovarPosECEFPluginSupport_destroy_data_w_params(
                CovarPosECEF *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarPosECEFPluginSupport_destroy_data_ex(
                CovarPosECEF *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarPosECEFPluginSupport_destroy_data(
                CovarPosECEF *sample);

            NDDSUSERDllExport extern void 
            CovarPosECEFPluginSupport_print_data(
                const CovarPosECEF *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarPosECEFPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarPosECEF *out,
                const CovarPosECEF *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarPosECEFPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarPosECEFPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarPosECEFPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarPosECEFPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarPosNEDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarPosNEDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarPosNEDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarPosNEDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarPosNEDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarPosNED*
            CovarPosNEDPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarPosNED*
            CovarPosNEDPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarPosNED*
            CovarPosNEDPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarPosNEDPluginSupport_copy_data(
                CovarPosNED *out,
                const CovarPosNED *in);

            NDDSUSERDllExport extern void 
            CovarPosNEDPluginSupport_destroy_data_w_params(
                CovarPosNED *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarPosNEDPluginSupport_destroy_data_ex(
                CovarPosNED *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarPosNEDPluginSupport_destroy_data(
                CovarPosNED *sample);

            NDDSUSERDllExport extern void 
            CovarPosNEDPluginSupport_print_data(
                const CovarPosNED *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarPosNEDPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarPosNED *out,
                const CovarPosNED *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarPosNEDPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarPosNEDPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarPosNEDPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarPosNEDPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarPosVelNEDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarPosVelNEDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarPosVelNEDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarPosVelNEDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarPosVelNEDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarPosVelNED*
            CovarPosVelNEDPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarPosVelNED*
            CovarPosVelNEDPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarPosVelNED*
            CovarPosVelNEDPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarPosVelNEDPluginSupport_copy_data(
                CovarPosVelNED *out,
                const CovarPosVelNED *in);

            NDDSUSERDllExport extern void 
            CovarPosVelNEDPluginSupport_destroy_data_w_params(
                CovarPosVelNED *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarPosVelNEDPluginSupport_destroy_data_ex(
                CovarPosVelNED *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarPosVelNEDPluginSupport_destroy_data(
                CovarPosVelNED *sample);

            NDDSUSERDllExport extern void 
            CovarPosVelNEDPluginSupport_print_data(
                const CovarPosVelNED *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarPosVelNEDPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarPosVelNED *out,
                const CovarPosVelNED *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarPosVelNEDPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarPosVelNEDPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarPosVelNEDPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarPosVelNEDPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarVelNEDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarVelNEDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarVelNEDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarVelNEDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarVelNEDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarVelNED*
            CovarVelNEDPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarVelNED*
            CovarVelNEDPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarVelNED*
            CovarVelNEDPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarVelNEDPluginSupport_copy_data(
                CovarVelNED *out,
                const CovarVelNED *in);

            NDDSUSERDllExport extern void 
            CovarVelNEDPluginSupport_destroy_data_w_params(
                CovarVelNED *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarVelNEDPluginSupport_destroy_data_ex(
                CovarVelNED *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarVelNEDPluginSupport_destroy_data(
                CovarVelNED *sample);

            NDDSUSERDllExport extern void 
            CovarVelNEDPluginSupport_print_data(
                const CovarVelNED *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarVelNEDPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarVelNED *out,
                const CovarVelNED *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarVelNEDPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarVelNEDPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarVelNEDPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarVelNEDPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DewPointTemperaturePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DewPointTemperaturePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DewPointTemperaturePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DewPointTemperaturePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DewPointTemperaturePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DewPointTemperature*
            DewPointTemperaturePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DewPointTemperature*
            DewPointTemperaturePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DewPointTemperature*
            DewPointTemperaturePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DewPointTemperaturePluginSupport_copy_data(
                DewPointTemperature *out,
                const DewPointTemperature *in);

            NDDSUSERDllExport extern void 
            DewPointTemperaturePluginSupport_destroy_data_w_params(
                DewPointTemperature *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DewPointTemperaturePluginSupport_destroy_data_ex(
                DewPointTemperature *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DewPointTemperaturePluginSupport_destroy_data(
                DewPointTemperature *sample);

            NDDSUSERDllExport extern void 
            DewPointTemperaturePluginSupport_print_data(
                const DewPointTemperature *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DewPointTemperaturePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DewPointTemperature *out,
                const DewPointTemperature *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DewPointTemperaturePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DewPointTemperaturePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DewPointTemperaturePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DewPointTemperaturePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define GeodeticAltitudePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeodeticAltitudePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeodeticAltitudePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeodeticAltitudePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeodeticAltitudePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeodeticAltitude*
            GeodeticAltitudePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeodeticAltitude*
            GeodeticAltitudePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeodeticAltitude*
            GeodeticAltitudePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeodeticAltitudePluginSupport_copy_data(
                GeodeticAltitude *out,
                const GeodeticAltitude *in);

            NDDSUSERDllExport extern void 
            GeodeticAltitudePluginSupport_destroy_data_w_params(
                GeodeticAltitude *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeodeticAltitudePluginSupport_destroy_data_ex(
                GeodeticAltitude *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeodeticAltitudePluginSupport_destroy_data(
                GeodeticAltitude *sample);

            NDDSUSERDllExport extern void 
            GeodeticAltitudePluginSupport_print_data(
                const GeodeticAltitude *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GeodeticAltitudePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticAltitude *out,
                const GeodeticAltitude *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            GeodeticAltitudePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeodeticAltitudePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeodeticAltitudePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeodeticAltitudePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define IlluminatorBeamWidthPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define IlluminatorBeamWidthPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define IlluminatorBeamWidthPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define IlluminatorBeamWidthPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define IlluminatorBeamWidthPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern IlluminatorBeamWidth*
            IlluminatorBeamWidthPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern IlluminatorBeamWidth*
            IlluminatorBeamWidthPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorBeamWidth*
            IlluminatorBeamWidthPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorBeamWidthPluginSupport_copy_data(
                IlluminatorBeamWidth *out,
                const IlluminatorBeamWidth *in);

            NDDSUSERDllExport extern void 
            IlluminatorBeamWidthPluginSupport_destroy_data_w_params(
                IlluminatorBeamWidth *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            IlluminatorBeamWidthPluginSupport_destroy_data_ex(
                IlluminatorBeamWidth *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorBeamWidthPluginSupport_destroy_data(
                IlluminatorBeamWidth *sample);

            NDDSUSERDllExport extern void 
            IlluminatorBeamWidthPluginSupport_print_data(
                const IlluminatorBeamWidth *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            IlluminatorBeamWidthPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorBeamWidth *out,
                const IlluminatorBeamWidth *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            IlluminatorBeamWidthPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            IlluminatorBeamWidthPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorBeamWidthPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorBeamWidthPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define IlluminatorIntensityLevelPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define IlluminatorIntensityLevelPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define IlluminatorIntensityLevelPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define IlluminatorIntensityLevelPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define IlluminatorIntensityLevelPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern IlluminatorIntensityLevel*
            IlluminatorIntensityLevelPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern IlluminatorIntensityLevel*
            IlluminatorIntensityLevelPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorIntensityLevel*
            IlluminatorIntensityLevelPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorIntensityLevelPluginSupport_copy_data(
                IlluminatorIntensityLevel *out,
                const IlluminatorIntensityLevel *in);

            NDDSUSERDllExport extern void 
            IlluminatorIntensityLevelPluginSupport_destroy_data_w_params(
                IlluminatorIntensityLevel *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            IlluminatorIntensityLevelPluginSupport_destroy_data_ex(
                IlluminatorIntensityLevel *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorIntensityLevelPluginSupport_destroy_data(
                IlluminatorIntensityLevel *sample);

            NDDSUSERDllExport extern void 
            IlluminatorIntensityLevelPluginSupport_print_data(
                const IlluminatorIntensityLevel *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            IlluminatorIntensityLevelPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorIntensityLevel *out,
                const IlluminatorIntensityLevel *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            IlluminatorIntensityLevelPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            IlluminatorIntensityLevelPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorIntensityLevelPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorIntensityLevelPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define MaxEngineOilPressurePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MaxEngineOilPressurePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MaxEngineOilPressurePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MaxEngineOilPressurePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MaxEngineOilPressurePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MaxEngineOilPressure*
            MaxEngineOilPressurePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MaxEngineOilPressure*
            MaxEngineOilPressurePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MaxEngineOilPressure*
            MaxEngineOilPressurePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MaxEngineOilPressurePluginSupport_copy_data(
                MaxEngineOilPressure *out,
                const MaxEngineOilPressure *in);

            NDDSUSERDllExport extern void 
            MaxEngineOilPressurePluginSupport_destroy_data_w_params(
                MaxEngineOilPressure *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MaxEngineOilPressurePluginSupport_destroy_data_ex(
                MaxEngineOilPressure *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MaxEngineOilPressurePluginSupport_destroy_data(
                MaxEngineOilPressure *sample);

            NDDSUSERDllExport extern void 
            MaxEngineOilPressurePluginSupport_print_data(
                const MaxEngineOilPressure *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MaxEngineOilPressurePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MaxEngineOilPressure *out,
                const MaxEngineOilPressure *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MaxEngineOilPressurePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MaxEngineOilPressurePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MaxEngineOilPressurePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MaxEngineOilPressurePlugin_get_serialized_key_max_size_for_keyhash(
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

            #define NaturalNumberCountPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define NaturalNumberCountPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NaturalNumberCountPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define NaturalNumberCountPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NaturalNumberCountPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NaturalNumberCount*
            NaturalNumberCountPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NaturalNumberCount*
            NaturalNumberCountPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NaturalNumberCount*
            NaturalNumberCountPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NaturalNumberCountPluginSupport_copy_data(
                NaturalNumberCount *out,
                const NaturalNumberCount *in);

            NDDSUSERDllExport extern void 
            NaturalNumberCountPluginSupport_destroy_data_w_params(
                NaturalNumberCount *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NaturalNumberCountPluginSupport_destroy_data_ex(
                NaturalNumberCount *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NaturalNumberCountPluginSupport_destroy_data(
                NaturalNumberCount *sample);

            NDDSUSERDllExport extern void 
            NaturalNumberCountPluginSupport_print_data(
                const NaturalNumberCount *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NaturalNumberCountPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NaturalNumberCount *out,
                const NaturalNumberCount *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            NaturalNumberCountPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NaturalNumberCountPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NaturalNumberCountPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NaturalNumberCountPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PeakSoundPressureLevelPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PeakSoundPressureLevelPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PeakSoundPressureLevelPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PeakSoundPressureLevelPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PeakSoundPressureLevelPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PeakSoundPressureLevel*
            PeakSoundPressureLevelPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PeakSoundPressureLevel*
            PeakSoundPressureLevelPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PeakSoundPressureLevel*
            PeakSoundPressureLevelPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PeakSoundPressureLevelPluginSupport_copy_data(
                PeakSoundPressureLevel *out,
                const PeakSoundPressureLevel *in);

            NDDSUSERDllExport extern void 
            PeakSoundPressureLevelPluginSupport_destroy_data_w_params(
                PeakSoundPressureLevel *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PeakSoundPressureLevelPluginSupport_destroy_data_ex(
                PeakSoundPressureLevel *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PeakSoundPressureLevelPluginSupport_destroy_data(
                PeakSoundPressureLevel *sample);

            NDDSUSERDllExport extern void 
            PeakSoundPressureLevelPluginSupport_print_data(
                const PeakSoundPressureLevel *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PeakSoundPressureLevelPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PeakSoundPressureLevel *out,
                const PeakSoundPressureLevel *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PeakSoundPressureLevelPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PeakSoundPressureLevelPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PeakSoundPressureLevelPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PeakSoundPressureLevelPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define RatioPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RatioPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RatioPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RatioPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RatioPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Ratio*
            RatioPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Ratio*
            RatioPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Ratio*
            RatioPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RatioPluginSupport_copy_data(
                Ratio *out,
                const Ratio *in);

            NDDSUSERDllExport extern void 
            RatioPluginSupport_destroy_data_w_params(
                Ratio *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RatioPluginSupport_destroy_data_ex(
                Ratio *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RatioPluginSupport_destroy_data(
                Ratio *sample);

            NDDSUSERDllExport extern void 
            RatioPluginSupport_print_data(
                const Ratio *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RatioPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Ratio *out,
                const Ratio *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            RatioPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RatioPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RatioPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RatioPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SignalToNoiseRatioPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SignalToNoiseRatioPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SignalToNoiseRatioPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SignalToNoiseRatioPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SignalToNoiseRatioPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SignalToNoiseRatio*
            SignalToNoiseRatioPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SignalToNoiseRatio*
            SignalToNoiseRatioPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SignalToNoiseRatio*
            SignalToNoiseRatioPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SignalToNoiseRatioPluginSupport_copy_data(
                SignalToNoiseRatio *out,
                const SignalToNoiseRatio *in);

            NDDSUSERDllExport extern void 
            SignalToNoiseRatioPluginSupport_destroy_data_w_params(
                SignalToNoiseRatio *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SignalToNoiseRatioPluginSupport_destroy_data_ex(
                SignalToNoiseRatio *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SignalToNoiseRatioPluginSupport_destroy_data(
                SignalToNoiseRatio *sample);

            NDDSUSERDllExport extern void 
            SignalToNoiseRatioPluginSupport_print_data(
                const SignalToNoiseRatio *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SignalToNoiseRatioPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SignalToNoiseRatio *out,
                const SignalToNoiseRatio *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SignalToNoiseRatioPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SignalToNoiseRatioPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SignalToNoiseRatioPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SignalToNoiseRatioPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SpeedBSLAccelerationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedBSLAccelerationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedBSLAccelerationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedBSLAccelerationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedBSLAccelerationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SpeedBSLAcceleration*
            SpeedBSLAccelerationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SpeedBSLAcceleration*
            SpeedBSLAccelerationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedBSLAcceleration*
            SpeedBSLAccelerationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedBSLAccelerationPluginSupport_copy_data(
                SpeedBSLAcceleration *out,
                const SpeedBSLAcceleration *in);

            NDDSUSERDllExport extern void 
            SpeedBSLAccelerationPluginSupport_destroy_data_w_params(
                SpeedBSLAcceleration *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedBSLAccelerationPluginSupport_destroy_data_ex(
                SpeedBSLAcceleration *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedBSLAccelerationPluginSupport_destroy_data(
                SpeedBSLAcceleration *sample);

            NDDSUSERDllExport extern void 
            SpeedBSLAccelerationPluginSupport_print_data(
                const SpeedBSLAcceleration *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SpeedBSLAccelerationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedBSLAcceleration *out,
                const SpeedBSLAcceleration *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SpeedBSLAccelerationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedBSLAccelerationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedBSLAccelerationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedBSLAccelerationPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define StringNamePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StringNamePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StringNamePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StringNamePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StringNamePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StringName*
            StringNamePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StringName*
            StringNamePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StringName*
            StringNamePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StringNamePluginSupport_copy_data(
                StringName *out,
                const StringName *in);

            NDDSUSERDllExport extern void 
            StringNamePluginSupport_destroy_data_w_params(
                StringName *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StringNamePluginSupport_destroy_data_ex(
                StringName *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StringNamePluginSupport_destroy_data(
                StringName *sample);

            NDDSUSERDllExport extern void 
            StringNamePluginSupport_print_data(
                const StringName *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            StringNamePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StringName *out,
                const StringName *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            StringNamePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StringNamePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StringNamePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StringNamePlugin_get_serialized_key_max_size_for_keyhash(
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

            #define StringValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StringValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StringValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StringValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StringValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StringValue*
            StringValuePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StringValue*
            StringValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StringValue*
            StringValuePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StringValuePluginSupport_copy_data(
                StringValue *out,
                const StringValue *in);

            NDDSUSERDllExport extern void 
            StringValuePluginSupport_destroy_data_w_params(
                StringValue *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StringValuePluginSupport_destroy_data_ex(
                StringValue *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StringValuePluginSupport_destroy_data(
                StringValue *sample);

            NDDSUSERDllExport extern void 
            StringValuePluginSupport_print_data(
                const StringValue *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            StringValuePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StringValue *out,
                const StringValue *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            StringValuePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StringValuePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StringValuePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StringValuePlugin_get_serialized_key_max_size_for_keyhash(
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

            #define WaterTemperaturePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WaterTemperaturePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WaterTemperaturePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WaterTemperaturePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WaterTemperaturePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WaterTemperature*
            WaterTemperaturePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WaterTemperature*
            WaterTemperaturePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterTemperature*
            WaterTemperaturePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WaterTemperaturePluginSupport_copy_data(
                WaterTemperature *out,
                const WaterTemperature *in);

            NDDSUSERDllExport extern void 
            WaterTemperaturePluginSupport_destroy_data_w_params(
                WaterTemperature *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WaterTemperaturePluginSupport_destroy_data_ex(
                WaterTemperature *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterTemperaturePluginSupport_destroy_data(
                WaterTemperature *sample);

            NDDSUSERDllExport extern void 
            WaterTemperaturePluginSupport_print_data(
                const WaterTemperature *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            WaterTemperaturePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterTemperature *out,
                const WaterTemperature *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            WaterTemperaturePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WaterTemperaturePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WaterTemperaturePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WaterTemperaturePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define WeatherBarometricPressurePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WeatherBarometricPressurePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WeatherBarometricPressurePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WeatherBarometricPressurePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WeatherBarometricPressurePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WeatherBarometricPressure*
            WeatherBarometricPressurePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WeatherBarometricPressure*
            WeatherBarometricPressurePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WeatherBarometricPressure*
            WeatherBarometricPressurePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WeatherBarometricPressurePluginSupport_copy_data(
                WeatherBarometricPressure *out,
                const WeatherBarometricPressure *in);

            NDDSUSERDllExport extern void 
            WeatherBarometricPressurePluginSupport_destroy_data_w_params(
                WeatherBarometricPressure *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WeatherBarometricPressurePluginSupport_destroy_data_ex(
                WeatherBarometricPressure *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WeatherBarometricPressurePluginSupport_destroy_data(
                WeatherBarometricPressure *sample);

            NDDSUSERDllExport extern void 
            WeatherBarometricPressurePluginSupport_print_data(
                const WeatherBarometricPressure *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            WeatherBarometricPressurePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WeatherBarometricPressure *out,
                const WeatherBarometricPressure *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            WeatherBarometricPressurePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WeatherBarometricPressurePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WeatherBarometricPressurePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WeatherBarometricPressurePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define XPositionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define XPositionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define XPositionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define XPositionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define XPositionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern XPosition*
            XPositionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern XPosition*
            XPositionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern XPosition*
            XPositionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            XPositionPluginSupport_copy_data(
                XPosition *out,
                const XPosition *in);

            NDDSUSERDllExport extern void 
            XPositionPluginSupport_destroy_data_w_params(
                XPosition *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            XPositionPluginSupport_destroy_data_ex(
                XPosition *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            XPositionPluginSupport_destroy_data(
                XPosition *sample);

            NDDSUSERDllExport extern void 
            XPositionPluginSupport_print_data(
                const XPosition *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            XPositionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                XPosition *out,
                const XPosition *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            XPositionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            XPositionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            XPositionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            XPositionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define YPositionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define YPositionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define YPositionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define YPositionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define YPositionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern YPosition*
            YPositionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern YPosition*
            YPositionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern YPosition*
            YPositionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            YPositionPluginSupport_copy_data(
                YPosition *out,
                const YPosition *in);

            NDDSUSERDllExport extern void 
            YPositionPluginSupport_destroy_data_w_params(
                YPosition *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            YPositionPluginSupport_destroy_data_ex(
                YPosition *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            YPositionPluginSupport_destroy_data(
                YPosition *sample);

            NDDSUSERDllExport extern void 
            YPositionPluginSupport_print_data(
                const YPosition *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            YPositionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                YPosition *out,
                const YPosition *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            YPositionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            YPositionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            YPositionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            YPositionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ZPositionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ZPositionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ZPositionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ZPositionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ZPositionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ZPosition*
            ZPositionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ZPosition*
            ZPositionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ZPosition*
            ZPositionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ZPositionPluginSupport_copy_data(
                ZPosition *out,
                const ZPosition *in);

            NDDSUSERDllExport extern void 
            ZPositionPluginSupport_destroy_data_w_params(
                ZPosition *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ZPositionPluginSupport_destroy_data_ex(
                ZPosition *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ZPositionPluginSupport_destroy_data(
                ZPosition *sample);

            NDDSUSERDllExport extern void 
            ZPositionPluginSupport_print_data(
                const ZPosition *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ZPositionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ZPosition *out,
                const ZPosition *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ZPositionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ZPositionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ZPositionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ZPositionPlugin_get_serialized_key_max_size_for_keyhash(
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

#endif /* ConstrainedTypesPlugin_846152741_h */

