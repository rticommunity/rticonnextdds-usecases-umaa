

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Measurements.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MeasurementsPlugin_576970989_h
#define MeasurementsPlugin_576970989_h

#include "Measurements.hpp"

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
        namespace Measurement {

            #define AmpHoursPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AmpHoursPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AmpHoursPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AmpHoursPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AmpHoursPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AmpHours*
            AmpHoursPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AmpHours*
            AmpHoursPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AmpHours*
            AmpHoursPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AmpHoursPluginSupport_copy_data(
                AmpHours *out,
                const AmpHours *in);

            NDDSUSERDllExport extern void 
            AmpHoursPluginSupport_destroy_data_w_params(
                AmpHours *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AmpHoursPluginSupport_destroy_data_ex(
                AmpHours *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AmpHoursPluginSupport_destroy_data(
                AmpHours *sample);

            NDDSUSERDllExport extern void 
            AmpHoursPluginSupport_print_data(
                const AmpHours *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AmpHoursPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AmpHours *out,
                const AmpHours *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AmpHoursPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AmpHoursPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AmpHoursPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AmpHoursPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define AzimuthTrueNorthAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AzimuthTrueNorthAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AzimuthTrueNorthAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AzimuthTrueNorthAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AzimuthTrueNorthAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AzimuthTrueNorthAngle*
            AzimuthTrueNorthAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AzimuthTrueNorthAngle*
            AzimuthTrueNorthAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AzimuthTrueNorthAngle*
            AzimuthTrueNorthAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AzimuthTrueNorthAnglePluginSupport_copy_data(
                AzimuthTrueNorthAngle *out,
                const AzimuthTrueNorthAngle *in);

            NDDSUSERDllExport extern void 
            AzimuthTrueNorthAnglePluginSupport_destroy_data_w_params(
                AzimuthTrueNorthAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AzimuthTrueNorthAnglePluginSupport_destroy_data_ex(
                AzimuthTrueNorthAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AzimuthTrueNorthAnglePluginSupport_destroy_data(
                AzimuthTrueNorthAngle *sample);

            NDDSUSERDllExport extern void 
            AzimuthTrueNorthAnglePluginSupport_print_data(
                const AzimuthTrueNorthAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AzimuthTrueNorthAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AzimuthTrueNorthAngle *out,
                const AzimuthTrueNorthAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AzimuthTrueNorthAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AzimuthTrueNorthAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AzimuthTrueNorthAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AzimuthTrueNorthAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define BatteryCurrentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BatteryCurrentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BatteryCurrentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BatteryCurrentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BatteryCurrentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BatteryCurrent*
            BatteryCurrentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BatteryCurrent*
            BatteryCurrentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BatteryCurrent*
            BatteryCurrentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BatteryCurrentPluginSupport_copy_data(
                BatteryCurrent *out,
                const BatteryCurrent *in);

            NDDSUSERDllExport extern void 
            BatteryCurrentPluginSupport_destroy_data_w_params(
                BatteryCurrent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BatteryCurrentPluginSupport_destroy_data_ex(
                BatteryCurrent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BatteryCurrentPluginSupport_destroy_data(
                BatteryCurrent *sample);

            NDDSUSERDllExport extern void 
            BatteryCurrentPluginSupport_print_data(
                const BatteryCurrent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BatteryCurrentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BatteryCurrent *out,
                const BatteryCurrent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BatteryCurrentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BatteryCurrentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BatteryCurrentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BatteryCurrentPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define BatteryCurrentDurationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BatteryCurrentDurationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BatteryCurrentDurationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BatteryCurrentDurationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BatteryCurrentDurationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BatteryCurrentDuration*
            BatteryCurrentDurationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BatteryCurrentDuration*
            BatteryCurrentDurationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BatteryCurrentDuration*
            BatteryCurrentDurationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BatteryCurrentDurationPluginSupport_copy_data(
                BatteryCurrentDuration *out,
                const BatteryCurrentDuration *in);

            NDDSUSERDllExport extern void 
            BatteryCurrentDurationPluginSupport_destroy_data_w_params(
                BatteryCurrentDuration *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BatteryCurrentDurationPluginSupport_destroy_data_ex(
                BatteryCurrentDuration *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BatteryCurrentDurationPluginSupport_destroy_data(
                BatteryCurrentDuration *sample);

            NDDSUSERDllExport extern void 
            BatteryCurrentDurationPluginSupport_print_data(
                const BatteryCurrentDuration *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BatteryCurrentDurationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BatteryCurrentDuration *out,
                const BatteryCurrentDuration *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BatteryCurrentDurationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BatteryCurrentDurationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BatteryCurrentDurationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BatteryCurrentDurationPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define BatteryCyclesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BatteryCyclesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BatteryCyclesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BatteryCyclesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BatteryCyclesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BatteryCycles*
            BatteryCyclesPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BatteryCycles*
            BatteryCyclesPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BatteryCycles*
            BatteryCyclesPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BatteryCyclesPluginSupport_copy_data(
                BatteryCycles *out,
                const BatteryCycles *in);

            NDDSUSERDllExport extern void 
            BatteryCyclesPluginSupport_destroy_data_w_params(
                BatteryCycles *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BatteryCyclesPluginSupport_destroy_data_ex(
                BatteryCycles *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BatteryCyclesPluginSupport_destroy_data(
                BatteryCycles *sample);

            NDDSUSERDllExport extern void 
            BatteryCyclesPluginSupport_print_data(
                const BatteryCycles *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BatteryCyclesPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BatteryCycles *out,
                const BatteryCycles *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BatteryCyclesPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BatteryCyclesPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BatteryCyclesPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BatteryCyclesPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define BinaryValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BinaryValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BinaryValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BinaryValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BinaryValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BinaryValue*
            BinaryValuePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BinaryValue*
            BinaryValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BinaryValue*
            BinaryValuePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BinaryValuePluginSupport_copy_data(
                BinaryValue *out,
                const BinaryValue *in);

            NDDSUSERDllExport extern void 
            BinaryValuePluginSupport_destroy_data_w_params(
                BinaryValue *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BinaryValuePluginSupport_destroy_data_ex(
                BinaryValue *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BinaryValuePluginSupport_destroy_data(
                BinaryValue *sample);

            NDDSUSERDllExport extern void 
            BinaryValuePluginSupport_print_data(
                const BinaryValue *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BinaryValuePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BinaryValue *out,
                const BinaryValue *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BinaryValuePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BinaryValuePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BinaryValuePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BinaryValuePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ByteValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ByteValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ByteValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ByteValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ByteValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ByteValue*
            ByteValuePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ByteValue*
            ByteValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ByteValue*
            ByteValuePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ByteValuePluginSupport_copy_data(
                ByteValue *out,
                const ByteValue *in);

            NDDSUSERDllExport extern void 
            ByteValuePluginSupport_destroy_data_w_params(
                ByteValue *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ByteValuePluginSupport_destroy_data_ex(
                ByteValue *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ByteValuePluginSupport_destroy_data(
                ByteValue *sample);

            NDDSUSERDllExport extern void 
            ByteValuePluginSupport_print_data(
                const ByteValue *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ByteValuePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ByteValue *out,
                const ByteValue *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ByteValuePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ByteValuePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ByteValuePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ByteValuePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ChargePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ChargePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ChargePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ChargePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ChargePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Charge*
            ChargePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Charge*
            ChargePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Charge*
            ChargePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ChargePluginSupport_copy_data(
                Charge *out,
                const Charge *in);

            NDDSUSERDllExport extern void 
            ChargePluginSupport_destroy_data_w_params(
                Charge *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ChargePluginSupport_destroy_data_ex(
                Charge *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ChargePluginSupport_destroy_data(
                Charge *sample);

            NDDSUSERDllExport extern void 
            ChargePluginSupport_print_data(
                const Charge *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ChargePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Charge *out,
                const Charge *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ChargePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ChargePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ChargePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ChargePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CharValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CharValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CharValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CharValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CharValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CharValue*
            CharValuePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CharValue*
            CharValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CharValue*
            CharValuePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CharValuePluginSupport_copy_data(
                CharValue *out,
                const CharValue *in);

            NDDSUSERDllExport extern void 
            CharValuePluginSupport_destroy_data_w_params(
                CharValue *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CharValuePluginSupport_destroy_data_ex(
                CharValue *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CharValuePluginSupport_destroy_data(
                CharValue *sample);

            NDDSUSERDllExport extern void 
            CharValuePluginSupport_print_data(
                const CharValue *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CharValuePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CharValue *out,
                const CharValue *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CharValuePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CharValuePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CharValuePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CharValuePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ConductivityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ConductivityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ConductivityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ConductivityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ConductivityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Conductivity*
            ConductivityPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Conductivity*
            ConductivityPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Conductivity*
            ConductivityPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ConductivityPluginSupport_copy_data(
                Conductivity *out,
                const Conductivity *in);

            NDDSUSERDllExport extern void 
            ConductivityPluginSupport_destroy_data_w_params(
                Conductivity *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ConductivityPluginSupport_destroy_data_ex(
                Conductivity *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConductivityPluginSupport_destroy_data(
                Conductivity *sample);

            NDDSUSERDllExport extern void 
            ConductivityPluginSupport_print_data(
                const Conductivity *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ConductivityPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Conductivity *out,
                const Conductivity *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ConductivityPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ConductivityPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ConductivityPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ConductivityPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DataTransferRatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DataTransferRatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DataTransferRatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DataTransferRatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DataTransferRatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DataTransferRate*
            DataTransferRatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DataTransferRate*
            DataTransferRatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DataTransferRate*
            DataTransferRatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DataTransferRatePluginSupport_copy_data(
                DataTransferRate *out,
                const DataTransferRate *in);

            NDDSUSERDllExport extern void 
            DataTransferRatePluginSupport_destroy_data_w_params(
                DataTransferRate *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DataTransferRatePluginSupport_destroy_data_ex(
                DataTransferRate *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DataTransferRatePluginSupport_destroy_data(
                DataTransferRate *sample);

            NDDSUSERDllExport extern void 
            DataTransferRatePluginSupport_print_data(
                const DataTransferRate *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DataTransferRatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DataTransferRate *out,
                const DataTransferRate *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DataTransferRatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DataTransferRatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DataTransferRatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DataTransferRatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DistanceASFPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DistanceASFPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DistanceASFPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DistanceASFPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DistanceASFPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DistanceASF*
            DistanceASFPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DistanceASF*
            DistanceASFPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DistanceASF*
            DistanceASFPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DistanceASFPluginSupport_copy_data(
                DistanceASF *out,
                const DistanceASF *in);

            NDDSUSERDllExport extern void 
            DistanceASFPluginSupport_destroy_data_w_params(
                DistanceASF *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DistanceASFPluginSupport_destroy_data_ex(
                DistanceASF *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DistanceASFPluginSupport_destroy_data(
                DistanceASF *sample);

            NDDSUSERDllExport extern void 
            DistanceASFPluginSupport_print_data(
                const DistanceASF *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DistanceASFPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DistanceASF *out,
                const DistanceASF *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DistanceASFPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DistanceASFPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DistanceASFPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DistanceASFPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DistanceBSLPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DistanceBSLPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DistanceBSLPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DistanceBSLPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DistanceBSLPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DistanceBSL*
            DistanceBSLPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DistanceBSL*
            DistanceBSLPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DistanceBSL*
            DistanceBSLPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DistanceBSLPluginSupport_copy_data(
                DistanceBSL *out,
                const DistanceBSL *in);

            NDDSUSERDllExport extern void 
            DistanceBSLPluginSupport_destroy_data_w_params(
                DistanceBSL *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DistanceBSLPluginSupport_destroy_data_ex(
                DistanceBSL *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DistanceBSLPluginSupport_destroy_data(
                DistanceBSL *sample);

            NDDSUSERDllExport extern void 
            DistanceBSLPluginSupport_print_data(
                const DistanceBSL *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DistanceBSLPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DistanceBSL *out,
                const DistanceBSL *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DistanceBSLPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DistanceBSLPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DistanceBSLPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DistanceBSLPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DistanceAGLPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DistanceAGLPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DistanceAGLPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DistanceAGLPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DistanceAGLPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DistanceAGL*
            DistanceAGLPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DistanceAGL*
            DistanceAGLPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DistanceAGL*
            DistanceAGLPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DistanceAGLPluginSupport_copy_data(
                DistanceAGL *out,
                const DistanceAGL *in);

            NDDSUSERDllExport extern void 
            DistanceAGLPluginSupport_destroy_data_w_params(
                DistanceAGL *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DistanceAGLPluginSupport_destroy_data_ex(
                DistanceAGL *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DistanceAGLPluginSupport_destroy_data(
                DistanceAGL *sample);

            NDDSUSERDllExport extern void 
            DistanceAGLPluginSupport_print_data(
                const DistanceAGL *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DistanceAGLPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DistanceAGL *out,
                const DistanceAGL *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DistanceAGLPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DistanceAGLPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DistanceAGLPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DistanceAGLPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DoubleValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DoubleValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DoubleValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DoubleValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DoubleValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DoubleValue*
            DoubleValuePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DoubleValue*
            DoubleValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DoubleValue*
            DoubleValuePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DoubleValuePluginSupport_copy_data(
                DoubleValue *out,
                const DoubleValue *in);

            NDDSUSERDllExport extern void 
            DoubleValuePluginSupport_destroy_data_w_params(
                DoubleValue *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DoubleValuePluginSupport_destroy_data_ex(
                DoubleValue *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DoubleValuePluginSupport_destroy_data(
                DoubleValue *sample);

            NDDSUSERDllExport extern void 
            DoubleValuePluginSupport_print_data(
                const DoubleValue *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DoubleValuePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DoubleValue *out,
                const DoubleValue *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DoubleValuePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DoubleValuePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DoubleValuePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DoubleValuePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DurationMillisecondsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DurationMillisecondsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DurationMillisecondsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DurationMillisecondsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DurationMillisecondsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DurationMilliseconds*
            DurationMillisecondsPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DurationMilliseconds*
            DurationMillisecondsPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DurationMilliseconds*
            DurationMillisecondsPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DurationMillisecondsPluginSupport_copy_data(
                DurationMilliseconds *out,
                const DurationMilliseconds *in);

            NDDSUSERDllExport extern void 
            DurationMillisecondsPluginSupport_destroy_data_w_params(
                DurationMilliseconds *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DurationMillisecondsPluginSupport_destroy_data_ex(
                DurationMilliseconds *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DurationMillisecondsPluginSupport_destroy_data(
                DurationMilliseconds *sample);

            NDDSUSERDllExport extern void 
            DurationMillisecondsPluginSupport_print_data(
                const DurationMilliseconds *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DurationMillisecondsPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DurationMilliseconds *out,
                const DurationMilliseconds *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DurationMillisecondsPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DurationMillisecondsPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DurationMillisecondsPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DurationMillisecondsPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define EffortPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EffortPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EffortPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EffortPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EffortPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Effort*
            EffortPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Effort*
            EffortPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Effort*
            EffortPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EffortPluginSupport_copy_data(
                Effort *out,
                const Effort *in);

            NDDSUSERDllExport extern void 
            EffortPluginSupport_destroy_data_w_params(
                Effort *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EffortPluginSupport_destroy_data_ex(
                Effort *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EffortPluginSupport_destroy_data(
                Effort *sample);

            NDDSUSERDllExport extern void 
            EffortPluginSupport_print_data(
                const Effort *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            EffortPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Effort *out,
                const Effort *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            EffortPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EffortPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EffortPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EffortPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ElectroMagneticFrequencyHertzPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ElectroMagneticFrequencyHertzPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ElectroMagneticFrequencyHertzPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ElectroMagneticFrequencyHertzPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ElectroMagneticFrequencyHertzPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ElectroMagneticFrequencyHertz*
            ElectroMagneticFrequencyHertzPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ElectroMagneticFrequencyHertz*
            ElectroMagneticFrequencyHertzPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ElectroMagneticFrequencyHertz*
            ElectroMagneticFrequencyHertzPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ElectroMagneticFrequencyHertzPluginSupport_copy_data(
                ElectroMagneticFrequencyHertz *out,
                const ElectroMagneticFrequencyHertz *in);

            NDDSUSERDllExport extern void 
            ElectroMagneticFrequencyHertzPluginSupport_destroy_data_w_params(
                ElectroMagneticFrequencyHertz *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ElectroMagneticFrequencyHertzPluginSupport_destroy_data_ex(
                ElectroMagneticFrequencyHertz *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ElectroMagneticFrequencyHertzPluginSupport_destroy_data(
                ElectroMagneticFrequencyHertz *sample);

            NDDSUSERDllExport extern void 
            ElectroMagneticFrequencyHertzPluginSupport_print_data(
                const ElectroMagneticFrequencyHertz *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ElectroMagneticFrequencyHertzPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ElectroMagneticFrequencyHertz *out,
                const ElectroMagneticFrequencyHertz *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ElectroMagneticFrequencyHertzPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ElectroMagneticFrequencyHertzPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ElectroMagneticFrequencyHertzPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ElectroMagneticFrequencyHertzPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define EnergyPercentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EnergyPercentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EnergyPercentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EnergyPercentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EnergyPercentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EnergyPercent*
            EnergyPercentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EnergyPercent*
            EnergyPercentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EnergyPercent*
            EnergyPercentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EnergyPercentPluginSupport_copy_data(
                EnergyPercent *out,
                const EnergyPercent *in);

            NDDSUSERDllExport extern void 
            EnergyPercentPluginSupport_destroy_data_w_params(
                EnergyPercent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EnergyPercentPluginSupport_destroy_data_ex(
                EnergyPercent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EnergyPercentPluginSupport_destroy_data(
                EnergyPercent *sample);

            NDDSUSERDllExport extern void 
            EnergyPercentPluginSupport_print_data(
                const EnergyPercent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            EnergyPercentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EnergyPercent *out,
                const EnergyPercent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            EnergyPercentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EnergyPercentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EnergyPercentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EnergyPercentPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define FrequencyRPMPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FrequencyRPMPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FrequencyRPMPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FrequencyRPMPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FrequencyRPMPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FrequencyRPM*
            FrequencyRPMPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FrequencyRPM*
            FrequencyRPMPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FrequencyRPM*
            FrequencyRPMPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FrequencyRPMPluginSupport_copy_data(
                FrequencyRPM *out,
                const FrequencyRPM *in);

            NDDSUSERDllExport extern void 
            FrequencyRPMPluginSupport_destroy_data_w_params(
                FrequencyRPM *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FrequencyRPMPluginSupport_destroy_data_ex(
                FrequencyRPM *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FrequencyRPMPluginSupport_destroy_data(
                FrequencyRPM *sample);

            NDDSUSERDllExport extern void 
            FrequencyRPMPluginSupport_print_data(
                const FrequencyRPM *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FrequencyRPMPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FrequencyRPM *out,
                const FrequencyRPM *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            FrequencyRPMPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FrequencyRPMPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FrequencyRPMPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FrequencyRPMPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define GammaAnglePropulsorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GammaAnglePropulsorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GammaAnglePropulsorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GammaAnglePropulsorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GammaAnglePropulsorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GammaAnglePropulsor*
            GammaAnglePropulsorPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GammaAnglePropulsor*
            GammaAnglePropulsorPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GammaAnglePropulsor*
            GammaAnglePropulsorPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GammaAnglePropulsorPluginSupport_copy_data(
                GammaAnglePropulsor *out,
                const GammaAnglePropulsor *in);

            NDDSUSERDllExport extern void 
            GammaAnglePropulsorPluginSupport_destroy_data_w_params(
                GammaAnglePropulsor *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GammaAnglePropulsorPluginSupport_destroy_data_ex(
                GammaAnglePropulsor *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GammaAnglePropulsorPluginSupport_destroy_data(
                GammaAnglePropulsor *sample);

            NDDSUSERDllExport extern void 
            GammaAnglePropulsorPluginSupport_print_data(
                const GammaAnglePropulsor *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GammaAnglePropulsorPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GammaAnglePropulsor *out,
                const GammaAnglePropulsor *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            GammaAnglePropulsorPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GammaAnglePropulsorPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GammaAnglePropulsorPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GammaAnglePropulsorPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define HeadingCurrentDirectionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingCurrentDirectionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingCurrentDirectionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingCurrentDirectionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingCurrentDirectionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingCurrentDirection*
            HeadingCurrentDirectionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingCurrentDirection*
            HeadingCurrentDirectionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingCurrentDirection*
            HeadingCurrentDirectionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingCurrentDirectionPluginSupport_copy_data(
                HeadingCurrentDirection *out,
                const HeadingCurrentDirection *in);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionPluginSupport_destroy_data_w_params(
                HeadingCurrentDirection *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionPluginSupport_destroy_data_ex(
                HeadingCurrentDirection *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionPluginSupport_destroy_data(
                HeadingCurrentDirection *sample);

            NDDSUSERDllExport extern void 
            HeadingCurrentDirectionPluginSupport_print_data(
                const HeadingCurrentDirection *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            HeadingCurrentDirectionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingCurrentDirection *out,
                const HeadingCurrentDirection *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            HeadingCurrentDirectionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingCurrentDirectionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingCurrentDirectionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingCurrentDirectionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define HeadingMagneticNorthPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingMagneticNorthPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingMagneticNorthPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingMagneticNorthPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingMagneticNorthPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingMagneticNorth*
            HeadingMagneticNorthPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingMagneticNorth*
            HeadingMagneticNorthPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingMagneticNorth*
            HeadingMagneticNorthPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingMagneticNorthPluginSupport_copy_data(
                HeadingMagneticNorth *out,
                const HeadingMagneticNorth *in);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthPluginSupport_destroy_data_w_params(
                HeadingMagneticNorth *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthPluginSupport_destroy_data_ex(
                HeadingMagneticNorth *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthPluginSupport_destroy_data(
                HeadingMagneticNorth *sample);

            NDDSUSERDllExport extern void 
            HeadingMagneticNorthPluginSupport_print_data(
                const HeadingMagneticNorth *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            HeadingMagneticNorthPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingMagneticNorth *out,
                const HeadingMagneticNorth *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            HeadingMagneticNorthPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingMagneticNorthPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingMagneticNorthPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingMagneticNorthPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define HeadingTargetPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingTargetPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingTargetPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingTargetPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingTargetPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingTarget*
            HeadingTargetPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingTarget*
            HeadingTargetPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingTarget*
            HeadingTargetPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingTargetPluginSupport_copy_data(
                HeadingTarget *out,
                const HeadingTarget *in);

            NDDSUSERDllExport extern void 
            HeadingTargetPluginSupport_destroy_data_w_params(
                HeadingTarget *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingTargetPluginSupport_destroy_data_ex(
                HeadingTarget *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingTargetPluginSupport_destroy_data(
                HeadingTarget *sample);

            NDDSUSERDllExport extern void 
            HeadingTargetPluginSupport_print_data(
                const HeadingTarget *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            HeadingTargetPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingTarget *out,
                const HeadingTarget *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            HeadingTargetPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingTargetPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingTargetPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingTargetPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define HeadingWindDirectionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingWindDirectionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingWindDirectionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingWindDirectionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingWindDirectionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingWindDirection*
            HeadingWindDirectionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingWindDirection*
            HeadingWindDirectionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingWindDirection*
            HeadingWindDirectionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingWindDirectionPluginSupport_copy_data(
                HeadingWindDirection *out,
                const HeadingWindDirection *in);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionPluginSupport_destroy_data_w_params(
                HeadingWindDirection *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionPluginSupport_destroy_data_ex(
                HeadingWindDirection *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionPluginSupport_destroy_data(
                HeadingWindDirection *sample);

            NDDSUSERDllExport extern void 
            HeadingWindDirectionPluginSupport_print_data(
                const HeadingWindDirection *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            HeadingWindDirectionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingWindDirection *out,
                const HeadingWindDirection *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            HeadingWindDirectionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingWindDirectionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingWindDirectionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingWindDirectionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define IntegerValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define IntegerValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define IntegerValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define IntegerValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define IntegerValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern IntegerValue*
            IntegerValuePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern IntegerValue*
            IntegerValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IntegerValue*
            IntegerValuePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            IntegerValuePluginSupport_copy_data(
                IntegerValue *out,
                const IntegerValue *in);

            NDDSUSERDllExport extern void 
            IntegerValuePluginSupport_destroy_data_w_params(
                IntegerValue *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            IntegerValuePluginSupport_destroy_data_ex(
                IntegerValue *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IntegerValuePluginSupport_destroy_data(
                IntegerValue *sample);

            NDDSUSERDllExport extern void 
            IntegerValuePluginSupport_print_data(
                const IntegerValue *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            IntegerValuePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                IntegerValue *out,
                const IntegerValue *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            IntegerValuePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            IntegerValuePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            IntegerValuePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            IntegerValuePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define LargeCountPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LargeCountPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LargeCountPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LargeCountPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LargeCountPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LargeCount*
            LargeCountPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LargeCount*
            LargeCountPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LargeCount*
            LargeCountPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LargeCountPluginSupport_copy_data(
                LargeCount *out,
                const LargeCount *in);

            NDDSUSERDllExport extern void 
            LargeCountPluginSupport_destroy_data_w_params(
                LargeCount *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LargeCountPluginSupport_destroy_data_ex(
                LargeCount *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LargeCountPluginSupport_destroy_data(
                LargeCount *sample);

            NDDSUSERDllExport extern void 
            LargeCountPluginSupport_print_data(
                const LargeCount *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LargeCountPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LargeCount *out,
                const LargeCount *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            LargeCountPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LargeCountPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LargeCountPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LargeCountPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define MassMetricTonPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MassMetricTonPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MassMetricTonPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MassMetricTonPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MassMetricTonPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MassMetricTon*
            MassMetricTonPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MassMetricTon*
            MassMetricTonPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MassMetricTon*
            MassMetricTonPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MassMetricTonPluginSupport_copy_data(
                MassMetricTon *out,
                const MassMetricTon *in);

            NDDSUSERDllExport extern void 
            MassMetricTonPluginSupport_destroy_data_w_params(
                MassMetricTon *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MassMetricTonPluginSupport_destroy_data_ex(
                MassMetricTon *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MassMetricTonPluginSupport_destroy_data(
                MassMetricTon *sample);

            NDDSUSERDllExport extern void 
            MassMetricTonPluginSupport_print_data(
                const MassMetricTon *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MassMetricTonPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MassMetricTon *out,
                const MassMetricTon *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MassMetricTonPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MassMetricTonPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MassMetricTonPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MassMetricTonPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define MassFlowRatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MassFlowRatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MassFlowRatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MassFlowRatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MassFlowRatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MassFlowRate*
            MassFlowRatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MassFlowRate*
            MassFlowRatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MassFlowRate*
            MassFlowRatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MassFlowRatePluginSupport_copy_data(
                MassFlowRate *out,
                const MassFlowRate *in);

            NDDSUSERDllExport extern void 
            MassFlowRatePluginSupport_destroy_data_w_params(
                MassFlowRate *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MassFlowRatePluginSupport_destroy_data_ex(
                MassFlowRate *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MassFlowRatePluginSupport_destroy_data(
                MassFlowRate *sample);

            NDDSUSERDllExport extern void 
            MassFlowRatePluginSupport_print_data(
                const MassFlowRate *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MassFlowRatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MassFlowRate *out,
                const MassFlowRate *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MassFlowRatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MassFlowRatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MassFlowRatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MassFlowRatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define MSLAltitudePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MSLAltitudePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MSLAltitudePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MSLAltitudePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MSLAltitudePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MSLAltitude*
            MSLAltitudePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MSLAltitude*
            MSLAltitudePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MSLAltitude*
            MSLAltitudePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MSLAltitudePluginSupport_copy_data(
                MSLAltitude *out,
                const MSLAltitude *in);

            NDDSUSERDllExport extern void 
            MSLAltitudePluginSupport_destroy_data_w_params(
                MSLAltitude *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MSLAltitudePluginSupport_destroy_data_ex(
                MSLAltitude *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MSLAltitudePluginSupport_destroy_data(
                MSLAltitude *sample);

            NDDSUSERDllExport extern void 
            MSLAltitudePluginSupport_print_data(
                const MSLAltitude *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MSLAltitudePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MSLAltitude *out,
                const MSLAltitude *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MSLAltitudePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MSLAltitudePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MSLAltitudePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MSLAltitudePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PressurePercentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PressurePercentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PressurePercentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PressurePercentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PressurePercentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PressurePercent*
            PressurePercentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PressurePercent*
            PressurePercentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PressurePercent*
            PressurePercentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PressurePercentPluginSupport_copy_data(
                PressurePercent *out,
                const PressurePercent *in);

            NDDSUSERDllExport extern void 
            PressurePercentPluginSupport_destroy_data_w_params(
                PressurePercent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PressurePercentPluginSupport_destroy_data_ex(
                PressurePercent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PressurePercentPluginSupport_destroy_data(
                PressurePercent *sample);

            NDDSUSERDllExport extern void 
            PressurePercentPluginSupport_print_data(
                const PressurePercent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PressurePercentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PressurePercent *out,
                const PressurePercent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PressurePercentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PressurePercentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PressurePercentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PressurePercentPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PriorityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PriorityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PriorityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PriorityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PriorityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Priority*
            PriorityPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Priority*
            PriorityPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Priority*
            PriorityPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PriorityPluginSupport_copy_data(
                Priority *out,
                const Priority *in);

            NDDSUSERDllExport extern void 
            PriorityPluginSupport_destroy_data_w_params(
                Priority *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PriorityPluginSupport_destroy_data_ex(
                Priority *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PriorityPluginSupport_destroy_data(
                Priority *sample);

            NDDSUSERDllExport extern void 
            PriorityPluginSupport_print_data(
                const Priority *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PriorityPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Priority *out,
                const Priority *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PriorityPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PriorityPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PriorityPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PriorityPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PropellerPitchAnglePropulsorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropellerPitchAnglePropulsorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropellerPitchAnglePropulsorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropellerPitchAnglePropulsorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropellerPitchAnglePropulsorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropellerPitchAnglePropulsor*
            PropellerPitchAnglePropulsorPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropellerPitchAnglePropulsor*
            PropellerPitchAnglePropulsorPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropellerPitchAnglePropulsor*
            PropellerPitchAnglePropulsorPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropellerPitchAnglePropulsorPluginSupport_copy_data(
                PropellerPitchAnglePropulsor *out,
                const PropellerPitchAnglePropulsor *in);

            NDDSUSERDllExport extern void 
            PropellerPitchAnglePropulsorPluginSupport_destroy_data_w_params(
                PropellerPitchAnglePropulsor *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropellerPitchAnglePropulsorPluginSupport_destroy_data_ex(
                PropellerPitchAnglePropulsor *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropellerPitchAnglePropulsorPluginSupport_destroy_data(
                PropellerPitchAnglePropulsor *sample);

            NDDSUSERDllExport extern void 
            PropellerPitchAnglePropulsorPluginSupport_print_data(
                const PropellerPitchAnglePropulsor *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PropellerPitchAnglePropulsorPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropellerPitchAnglePropulsor *out,
                const PropellerPitchAnglePropulsor *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PropellerPitchAnglePropulsorPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropellerPitchAnglePropulsorPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropellerPitchAnglePropulsorPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropellerPitchAnglePropulsorPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define RhoAnglePropulsorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RhoAnglePropulsorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RhoAnglePropulsorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RhoAnglePropulsorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RhoAnglePropulsorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RhoAnglePropulsor*
            RhoAnglePropulsorPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RhoAnglePropulsor*
            RhoAnglePropulsorPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RhoAnglePropulsor*
            RhoAnglePropulsorPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RhoAnglePropulsorPluginSupport_copy_data(
                RhoAnglePropulsor *out,
                const RhoAnglePropulsor *in);

            NDDSUSERDllExport extern void 
            RhoAnglePropulsorPluginSupport_destroy_data_w_params(
                RhoAnglePropulsor *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RhoAnglePropulsorPluginSupport_destroy_data_ex(
                RhoAnglePropulsor *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RhoAnglePropulsorPluginSupport_destroy_data(
                RhoAnglePropulsor *sample);

            NDDSUSERDllExport extern void 
            RhoAnglePropulsorPluginSupport_print_data(
                const RhoAnglePropulsor *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RhoAnglePropulsorPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RhoAnglePropulsor *out,
                const RhoAnglePropulsor *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            RhoAnglePropulsorPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RhoAnglePropulsorPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RhoAnglePropulsorPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RhoAnglePropulsorPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SalinityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SalinityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SalinityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SalinityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SalinityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Salinity*
            SalinityPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Salinity*
            SalinityPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Salinity*
            SalinityPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SalinityPluginSupport_copy_data(
                Salinity *out,
                const Salinity *in);

            NDDSUSERDllExport extern void 
            SalinityPluginSupport_destroy_data_w_params(
                Salinity *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SalinityPluginSupport_destroy_data_ex(
                Salinity *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SalinityPluginSupport_destroy_data(
                Salinity *sample);

            NDDSUSERDllExport extern void 
            SalinityPluginSupport_print_data(
                const Salinity *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SalinityPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Salinity *out,
                const Salinity *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SalinityPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SalinityPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SalinityPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SalinityPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SegmentIDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SegmentIDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SegmentIDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SegmentIDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SegmentIDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SegmentID*
            SegmentIDPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SegmentID*
            SegmentIDPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SegmentID*
            SegmentIDPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SegmentIDPluginSupport_copy_data(
                SegmentID *out,
                const SegmentID *in);

            NDDSUSERDllExport extern void 
            SegmentIDPluginSupport_destroy_data_w_params(
                SegmentID *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SegmentIDPluginSupport_destroy_data_ex(
                SegmentID *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SegmentIDPluginSupport_destroy_data(
                SegmentID *sample);

            NDDSUSERDllExport extern void 
            SegmentIDPluginSupport_print_data(
                const SegmentID *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SegmentIDPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SegmentID *out,
                const SegmentID *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SegmentIDPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SegmentIDPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SegmentIDPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SegmentIDPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SidesCountPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SidesCountPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SidesCountPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SidesCountPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SidesCountPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SidesCount*
            SidesCountPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SidesCount*
            SidesCountPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SidesCount*
            SidesCountPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SidesCountPluginSupport_copy_data(
                SidesCount *out,
                const SidesCount *in);

            NDDSUSERDllExport extern void 
            SidesCountPluginSupport_destroy_data_w_params(
                SidesCount *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SidesCountPluginSupport_destroy_data_ex(
                SidesCount *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SidesCountPluginSupport_destroy_data(
                SidesCount *sample);

            NDDSUSERDllExport extern void 
            SidesCountPluginSupport_print_data(
                const SidesCount *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SidesCountPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SidesCount *out,
                const SidesCount *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SidesCountPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SidesCountPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SidesCountPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SidesCountPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SizeLargeBytesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SizeLargeBytesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SizeLargeBytesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SizeLargeBytesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SizeLargeBytesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SizeLargeBytes*
            SizeLargeBytesPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SizeLargeBytes*
            SizeLargeBytesPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SizeLargeBytes*
            SizeLargeBytesPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SizeLargeBytesPluginSupport_copy_data(
                SizeLargeBytes *out,
                const SizeLargeBytes *in);

            NDDSUSERDllExport extern void 
            SizeLargeBytesPluginSupport_destroy_data_w_params(
                SizeLargeBytes *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SizeLargeBytesPluginSupport_destroy_data_ex(
                SizeLargeBytes *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SizeLargeBytesPluginSupport_destroy_data(
                SizeLargeBytes *sample);

            NDDSUSERDllExport extern void 
            SizeLargeBytesPluginSupport_print_data(
                const SizeLargeBytes *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SizeLargeBytesPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SizeLargeBytes *out,
                const SizeLargeBytes *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SizeLargeBytesPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SizeLargeBytesPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SizeLargeBytesPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SizeLargeBytesPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SpeedASFPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedASFPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedASFPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedASFPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedASFPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SpeedASF*
            SpeedASFPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SpeedASF*
            SpeedASFPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedASF*
            SpeedASFPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedASFPluginSupport_copy_data(
                SpeedASF *out,
                const SpeedASF *in);

            NDDSUSERDllExport extern void 
            SpeedASFPluginSupport_destroy_data_w_params(
                SpeedASF *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedASFPluginSupport_destroy_data_ex(
                SpeedASF *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedASFPluginSupport_destroy_data(
                SpeedASF *sample);

            NDDSUSERDllExport extern void 
            SpeedASFPluginSupport_print_data(
                const SpeedASF *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SpeedASFPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedASF *out,
                const SpeedASF *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SpeedASFPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedASFPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedASFPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedASFPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SpeedBSLPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedBSLPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedBSLPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedBSLPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedBSLPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SpeedBSL*
            SpeedBSLPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SpeedBSL*
            SpeedBSLPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedBSL*
            SpeedBSLPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedBSLPluginSupport_copy_data(
                SpeedBSL *out,
                const SpeedBSL *in);

            NDDSUSERDllExport extern void 
            SpeedBSLPluginSupport_destroy_data_w_params(
                SpeedBSL *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedBSLPluginSupport_destroy_data_ex(
                SpeedBSL *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedBSLPluginSupport_destroy_data(
                SpeedBSL *sample);

            NDDSUSERDllExport extern void 
            SpeedBSLPluginSupport_print_data(
                const SpeedBSL *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SpeedBSLPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedBSL *out,
                const SpeedBSL *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SpeedBSLPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedBSLPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedBSLPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedBSLPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SpeedLocalWaterMassPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedLocalWaterMassPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedLocalWaterMassPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedLocalWaterMassPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedLocalWaterMassPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SpeedLocalWaterMass*
            SpeedLocalWaterMassPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SpeedLocalWaterMass*
            SpeedLocalWaterMassPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedLocalWaterMass*
            SpeedLocalWaterMassPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedLocalWaterMassPluginSupport_copy_data(
                SpeedLocalWaterMass *out,
                const SpeedLocalWaterMass *in);

            NDDSUSERDllExport extern void 
            SpeedLocalWaterMassPluginSupport_destroy_data_w_params(
                SpeedLocalWaterMass *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedLocalWaterMassPluginSupport_destroy_data_ex(
                SpeedLocalWaterMass *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedLocalWaterMassPluginSupport_destroy_data(
                SpeedLocalWaterMass *sample);

            NDDSUSERDllExport extern void 
            SpeedLocalWaterMassPluginSupport_print_data(
                const SpeedLocalWaterMass *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SpeedLocalWaterMassPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedLocalWaterMass *out,
                const SpeedLocalWaterMass *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SpeedLocalWaterMassPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedLocalWaterMassPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedLocalWaterMassPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedLocalWaterMassPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define TransmitAttenuationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TransmitAttenuationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TransmitAttenuationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TransmitAttenuationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TransmitAttenuationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TransmitAttenuation*
            TransmitAttenuationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TransmitAttenuation*
            TransmitAttenuationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TransmitAttenuation*
            TransmitAttenuationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TransmitAttenuationPluginSupport_copy_data(
                TransmitAttenuation *out,
                const TransmitAttenuation *in);

            NDDSUSERDllExport extern void 
            TransmitAttenuationPluginSupport_destroy_data_w_params(
                TransmitAttenuation *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TransmitAttenuationPluginSupport_destroy_data_ex(
                TransmitAttenuation *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TransmitAttenuationPluginSupport_destroy_data(
                TransmitAttenuation *sample);

            NDDSUSERDllExport extern void 
            TransmitAttenuationPluginSupport_print_data(
                const TransmitAttenuation *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            TransmitAttenuationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TransmitAttenuation *out,
                const TransmitAttenuation *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            TransmitAttenuationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TransmitAttenuationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TransmitAttenuationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TransmitAttenuationPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define TurbidityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TurbidityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TurbidityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TurbidityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TurbidityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Turbidity*
            TurbidityPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Turbidity*
            TurbidityPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Turbidity*
            TurbidityPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TurbidityPluginSupport_copy_data(
                Turbidity *out,
                const Turbidity *in);

            NDDSUSERDllExport extern void 
            TurbidityPluginSupport_destroy_data_w_params(
                Turbidity *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TurbidityPluginSupport_destroy_data_ex(
                Turbidity *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TurbidityPluginSupport_destroy_data(
                Turbidity *sample);

            NDDSUSERDllExport extern void 
            TurbidityPluginSupport_print_data(
                const Turbidity *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            TurbidityPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Turbidity *out,
                const Turbidity *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            TurbidityPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TurbidityPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TurbidityPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TurbidityPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define VolumeCubicMeterPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VolumeCubicMeterPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VolumeCubicMeterPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VolumeCubicMeterPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VolumeCubicMeterPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VolumeCubicMeter*
            VolumeCubicMeterPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VolumeCubicMeter*
            VolumeCubicMeterPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VolumeCubicMeter*
            VolumeCubicMeterPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VolumeCubicMeterPluginSupport_copy_data(
                VolumeCubicMeter *out,
                const VolumeCubicMeter *in);

            NDDSUSERDllExport extern void 
            VolumeCubicMeterPluginSupport_destroy_data_w_params(
                VolumeCubicMeter *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VolumeCubicMeterPluginSupport_destroy_data_ex(
                VolumeCubicMeter *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VolumeCubicMeterPluginSupport_destroy_data(
                VolumeCubicMeter *sample);

            NDDSUSERDllExport extern void 
            VolumeCubicMeterPluginSupport_print_data(
                const VolumeCubicMeter *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            VolumeCubicMeterPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VolumeCubicMeter *out,
                const VolumeCubicMeter *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            VolumeCubicMeterPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VolumeCubicMeterPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VolumeCubicMeterPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VolumeCubicMeterPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define VolumePercentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VolumePercentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VolumePercentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VolumePercentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VolumePercentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VolumePercent*
            VolumePercentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VolumePercent*
            VolumePercentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VolumePercent*
            VolumePercentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VolumePercentPluginSupport_copy_data(
                VolumePercent *out,
                const VolumePercent *in);

            NDDSUSERDllExport extern void 
            VolumePercentPluginSupport_destroy_data_w_params(
                VolumePercent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VolumePercentPluginSupport_destroy_data_ex(
                VolumePercent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VolumePercentPluginSupport_destroy_data(
                VolumePercent *sample);

            NDDSUSERDllExport extern void 
            VolumePercentPluginSupport_print_data(
                const VolumePercent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            VolumePercentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VolumePercent *out,
                const VolumePercent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            VolumePercentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VolumePercentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VolumePercentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VolumePercentPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define VolumetricFlowRatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VolumetricFlowRatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VolumetricFlowRatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VolumetricFlowRatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VolumetricFlowRatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VolumetricFlowRate*
            VolumetricFlowRatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VolumetricFlowRate*
            VolumetricFlowRatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VolumetricFlowRate*
            VolumetricFlowRatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VolumetricFlowRatePluginSupport_copy_data(
                VolumetricFlowRate *out,
                const VolumetricFlowRate *in);

            NDDSUSERDllExport extern void 
            VolumetricFlowRatePluginSupport_destroy_data_w_params(
                VolumetricFlowRate *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VolumetricFlowRatePluginSupport_destroy_data_ex(
                VolumetricFlowRate *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VolumetricFlowRatePluginSupport_destroy_data(
                VolumetricFlowRate *sample);

            NDDSUSERDllExport extern void 
            VolumetricFlowRatePluginSupport_print_data(
                const VolumetricFlowRate *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            VolumetricFlowRatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VolumetricFlowRate *out,
                const VolumetricFlowRate *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            VolumetricFlowRatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VolumetricFlowRatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VolumetricFlowRatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VolumetricFlowRatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define WattHoursPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WattHoursPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WattHoursPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WattHoursPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WattHoursPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WattHours*
            WattHoursPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WattHours*
            WattHoursPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WattHours*
            WattHoursPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WattHoursPluginSupport_copy_data(
                WattHours *out,
                const WattHours *in);

            NDDSUSERDllExport extern void 
            WattHoursPluginSupport_destroy_data_w_params(
                WattHours *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WattHoursPluginSupport_destroy_data_ex(
                WattHours *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WattHoursPluginSupport_destroy_data(
                WattHours *sample);

            NDDSUSERDllExport extern void 
            WattHoursPluginSupport_print_data(
                const WattHours *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            WattHoursPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WattHours *out,
                const WattHours *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            WattHoursPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WattHoursPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WattHoursPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WattHoursPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define YawAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define YawAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define YawAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define YawAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define YawAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern YawAngle*
            YawAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern YawAngle*
            YawAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern YawAngle*
            YawAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            YawAnglePluginSupport_copy_data(
                YawAngle *out,
                const YawAngle *in);

            NDDSUSERDllExport extern void 
            YawAnglePluginSupport_destroy_data_w_params(
                YawAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            YawAnglePluginSupport_destroy_data_ex(
                YawAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            YawAnglePluginSupport_destroy_data(
                YawAngle *sample);

            NDDSUSERDllExport extern void 
            YawAnglePluginSupport_print_data(
                const YawAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            YawAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                YawAngle *out,
                const YawAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            YawAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            YawAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            YawAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            YawAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */
namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define AccelerationScalarPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AccelerationScalarPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AccelerationScalarPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AccelerationScalarPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AccelerationScalarPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AccelerationScalar*
            AccelerationScalarPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AccelerationScalar*
            AccelerationScalarPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AccelerationScalar*
            AccelerationScalarPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AccelerationScalarPluginSupport_copy_data(
                AccelerationScalar *out,
                const AccelerationScalar *in);

            NDDSUSERDllExport extern void 
            AccelerationScalarPluginSupport_destroy_data_w_params(
                AccelerationScalar *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AccelerationScalarPluginSupport_destroy_data_ex(
                AccelerationScalar *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AccelerationScalarPluginSupport_destroy_data(
                AccelerationScalar *sample);

            NDDSUSERDllExport extern void 
            AccelerationScalarPluginSupport_print_data(
                const AccelerationScalar *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AccelerationScalarPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AccelerationScalar *out,
                const AccelerationScalar *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AccelerationScalarPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AccelerationScalarPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AccelerationScalarPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AccelerationScalarPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define AnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Angle*
            AnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Angle*
            AnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Angle*
            AnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnglePluginSupport_copy_data(
                Angle *out,
                const Angle *in);

            NDDSUSERDllExport extern void 
            AnglePluginSupport_destroy_data_w_params(
                Angle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnglePluginSupport_destroy_data_ex(
                Angle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnglePluginSupport_destroy_data(
                Angle *sample);

            NDDSUSERDllExport extern void 
            AnglePluginSupport_print_data(
                const Angle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Angle *out,
                const Angle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define AngleRatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AngleRatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AngleRatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AngleRatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AngleRatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AngleRate*
            AngleRatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AngleRate*
            AngleRatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AngleRate*
            AngleRatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AngleRatePluginSupport_copy_data(
                AngleRate *out,
                const AngleRate *in);

            NDDSUSERDllExport extern void 
            AngleRatePluginSupport_destroy_data_w_params(
                AngleRate *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AngleRatePluginSupport_destroy_data_ex(
                AngleRate *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AngleRatePluginSupport_destroy_data(
                AngleRate *sample);

            NDDSUSERDllExport extern void 
            AngleRatePluginSupport_print_data(
                const AngleRate *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AngleRatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AngleRate *out,
                const AngleRate *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AngleRatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AngleRatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AngleRatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AngleRatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CountPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CountPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CountPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CountPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CountPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Count*
            CountPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Count*
            CountPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Count*
            CountPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CountPluginSupport_copy_data(
                Count *out,
                const Count *in);

            NDDSUSERDllExport extern void 
            CountPluginSupport_destroy_data_w_params(
                Count *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CountPluginSupport_destroy_data_ex(
                Count *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CountPluginSupport_destroy_data(
                Count *sample);

            NDDSUSERDllExport extern void 
            CountPluginSupport_print_data(
                const Count *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CountPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Count *out,
                const Count *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CountPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CountPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CountPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CountPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CourseTrueNorthPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CourseTrueNorthPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CourseTrueNorthPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CourseTrueNorthPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CourseTrueNorthPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CourseTrueNorth*
            CourseTrueNorthPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CourseTrueNorth*
            CourseTrueNorthPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CourseTrueNorth*
            CourseTrueNorthPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CourseTrueNorthPluginSupport_copy_data(
                CourseTrueNorth *out,
                const CourseTrueNorth *in);

            NDDSUSERDllExport extern void 
            CourseTrueNorthPluginSupport_destroy_data_w_params(
                CourseTrueNorth *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CourseTrueNorthPluginSupport_destroy_data_ex(
                CourseTrueNorth *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CourseTrueNorthPluginSupport_destroy_data(
                CourseTrueNorth *sample);

            NDDSUSERDllExport extern void 
            CourseTrueNorthPluginSupport_print_data(
                const CourseTrueNorth *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CourseTrueNorthPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CourseTrueNorth *out,
                const CourseTrueNorth *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CourseTrueNorthPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CourseTrueNorthPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CourseTrueNorthPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CourseTrueNorthPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DateTimeSecondsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DateTimeSecondsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DateTimeSecondsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DateTimeSecondsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DateTimeSecondsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DateTimeSeconds*
            DateTimeSecondsPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DateTimeSeconds*
            DateTimeSecondsPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DateTimeSeconds*
            DateTimeSecondsPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DateTimeSecondsPluginSupport_copy_data(
                DateTimeSeconds *out,
                const DateTimeSeconds *in);

            NDDSUSERDllExport extern void 
            DateTimeSecondsPluginSupport_destroy_data_w_params(
                DateTimeSeconds *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DateTimeSecondsPluginSupport_destroy_data_ex(
                DateTimeSeconds *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DateTimeSecondsPluginSupport_destroy_data(
                DateTimeSeconds *sample);

            NDDSUSERDllExport extern void 
            DateTimeSecondsPluginSupport_print_data(
                const DateTimeSeconds *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DateTimeSecondsPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeSeconds *out,
                const DateTimeSeconds *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DateTimeSecondsPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DateTimeSecondsPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DateTimeSecondsPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DateTimeSecondsPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DateTimeNanosecondsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DateTimeNanosecondsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DateTimeNanosecondsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DateTimeNanosecondsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DateTimeNanosecondsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DateTimeNanoseconds*
            DateTimeNanosecondsPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DateTimeNanoseconds*
            DateTimeNanosecondsPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DateTimeNanoseconds*
            DateTimeNanosecondsPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DateTimeNanosecondsPluginSupport_copy_data(
                DateTimeNanoseconds *out,
                const DateTimeNanoseconds *in);

            NDDSUSERDllExport extern void 
            DateTimeNanosecondsPluginSupport_destroy_data_w_params(
                DateTimeNanoseconds *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DateTimeNanosecondsPluginSupport_destroy_data_ex(
                DateTimeNanoseconds *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DateTimeNanosecondsPluginSupport_destroy_data(
                DateTimeNanoseconds *sample);

            NDDSUSERDllExport extern void 
            DateTimeNanosecondsPluginSupport_print_data(
                const DateTimeNanoseconds *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DateTimeNanosecondsPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeNanoseconds *out,
                const DateTimeNanoseconds *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DateTimeNanosecondsPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DateTimeNanosecondsPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DateTimeNanosecondsPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DateTimeNanosecondsPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DateTimePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DateTimePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DateTimePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DateTimePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DateTimePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DateTime*
            DateTimePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DateTime*
            DateTimePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DateTime*
            DateTimePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DateTimePluginSupport_copy_data(
                DateTime *out,
                const DateTime *in);

            NDDSUSERDllExport extern void 
            DateTimePluginSupport_destroy_data_w_params(
                DateTime *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DateTimePluginSupport_destroy_data_ex(
                DateTime *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DateTimePluginSupport_destroy_data(
                DateTime *sample);

            NDDSUSERDllExport extern void 
            DateTimePluginSupport_print_data(
                const DateTime *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DateTimePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DateTimePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DateTimePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DateTimePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DateTimePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DateTime *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DateTimePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DateTime *out,
                const DateTime *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DateTimePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DateTime *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DateTimePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DateTime **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DateTimePlugin_deserialize_from_cdr_buffer(
                DateTime *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DateTimePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DateTimePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DateTimePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DateTimePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DateTimePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DateTime ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DateTimePlugin_new(void);

            NDDSUSERDllExport extern void
            DateTimePlugin_delete(struct PRESTypePlugin *);

            #define DensityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DensityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DensityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DensityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DensityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Density*
            DensityPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Density*
            DensityPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Density*
            DensityPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DensityPluginSupport_copy_data(
                Density *out,
                const Density *in);

            NDDSUSERDllExport extern void 
            DensityPluginSupport_destroy_data_w_params(
                Density *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DensityPluginSupport_destroy_data_ex(
                Density *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DensityPluginSupport_destroy_data(
                Density *sample);

            NDDSUSERDllExport extern void 
            DensityPluginSupport_print_data(
                const Density *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DensityPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Density *out,
                const Density *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DensityPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DensityPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DensityPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DensityPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DistancePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DistancePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DistancePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DistancePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DistancePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Distance*
            DistancePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Distance*
            DistancePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Distance*
            DistancePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DistancePluginSupport_copy_data(
                Distance *out,
                const Distance *in);

            NDDSUSERDllExport extern void 
            DistancePluginSupport_destroy_data_w_params(
                Distance *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DistancePluginSupport_destroy_data_ex(
                Distance *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DistancePluginSupport_destroy_data(
                Distance *sample);

            NDDSUSERDllExport extern void 
            DistancePluginSupport_print_data(
                const Distance *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DistancePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Distance *out,
                const Distance *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DistancePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DistancePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DistancePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DistancePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DurationHoursPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DurationHoursPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DurationHoursPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DurationHoursPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DurationHoursPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DurationHours*
            DurationHoursPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DurationHours*
            DurationHoursPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DurationHours*
            DurationHoursPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DurationHoursPluginSupport_copy_data(
                DurationHours *out,
                const DurationHours *in);

            NDDSUSERDllExport extern void 
            DurationHoursPluginSupport_destroy_data_w_params(
                DurationHours *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DurationHoursPluginSupport_destroy_data_ex(
                DurationHours *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DurationHoursPluginSupport_destroy_data(
                DurationHours *sample);

            NDDSUSERDllExport extern void 
            DurationHoursPluginSupport_print_data(
                const DurationHours *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DurationHoursPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DurationHours *out,
                const DurationHours *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DurationHoursPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DurationHoursPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DurationHoursPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DurationHoursPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DurationSecondsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DurationSecondsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DurationSecondsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DurationSecondsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DurationSecondsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DurationSeconds*
            DurationSecondsPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DurationSeconds*
            DurationSecondsPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DurationSeconds*
            DurationSecondsPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DurationSecondsPluginSupport_copy_data(
                DurationSeconds *out,
                const DurationSeconds *in);

            NDDSUSERDllExport extern void 
            DurationSecondsPluginSupport_destroy_data_w_params(
                DurationSeconds *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DurationSecondsPluginSupport_destroy_data_ex(
                DurationSeconds *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DurationSecondsPluginSupport_destroy_data(
                DurationSeconds *sample);

            NDDSUSERDllExport extern void 
            DurationSecondsPluginSupport_print_data(
                const DurationSeconds *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DurationSecondsPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DurationSeconds *out,
                const DurationSeconds *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DurationSecondsPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DurationSecondsPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DurationSecondsPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DurationSecondsPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ElectricalPowerPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ElectricalPowerPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ElectricalPowerPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ElectricalPowerPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ElectricalPowerPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ElectricalPower*
            ElectricalPowerPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ElectricalPower*
            ElectricalPowerPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ElectricalPower*
            ElectricalPowerPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ElectricalPowerPluginSupport_copy_data(
                ElectricalPower *out,
                const ElectricalPower *in);

            NDDSUSERDllExport extern void 
            ElectricalPowerPluginSupport_destroy_data_w_params(
                ElectricalPower *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ElectricalPowerPluginSupport_destroy_data_ex(
                ElectricalPower *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ElectricalPowerPluginSupport_destroy_data(
                ElectricalPower *sample);

            NDDSUSERDllExport extern void 
            ElectricalPowerPluginSupport_print_data(
                const ElectricalPower *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ElectricalPowerPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ElectricalPower *out,
                const ElectricalPower *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ElectricalPowerPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ElectricalPowerPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ElectricalPowerPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ElectricalPowerPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define EngineSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EngineSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EngineSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EngineSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EngineSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EngineSpeed*
            EngineSpeedPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EngineSpeed*
            EngineSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineSpeed*
            EngineSpeedPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EngineSpeedPluginSupport_copy_data(
                EngineSpeed *out,
                const EngineSpeed *in);

            NDDSUSERDllExport extern void 
            EngineSpeedPluginSupport_destroy_data_w_params(
                EngineSpeed *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EngineSpeedPluginSupport_destroy_data_ex(
                EngineSpeed *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineSpeedPluginSupport_destroy_data(
                EngineSpeed *sample);

            NDDSUSERDllExport extern void 
            EngineSpeedPluginSupport_print_data(
                const EngineSpeed *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            EngineSpeedPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineSpeed *out,
                const EngineSpeed *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            EngineSpeedPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EngineSpeedPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EngineSpeedPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EngineSpeedPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ForcePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ForcePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ForcePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ForcePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ForcePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Force*
            ForcePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Force*
            ForcePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Force*
            ForcePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ForcePluginSupport_copy_data(
                Force *out,
                const Force *in);

            NDDSUSERDllExport extern void 
            ForcePluginSupport_destroy_data_w_params(
                Force *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ForcePluginSupport_destroy_data_ex(
                Force *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ForcePluginSupport_destroy_data(
                Force *sample);

            NDDSUSERDllExport extern void 
            ForcePluginSupport_print_data(
                const Force *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ForcePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Force *out,
                const Force *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ForcePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ForcePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ForcePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ForcePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define FrequencyHertzPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FrequencyHertzPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FrequencyHertzPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FrequencyHertzPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FrequencyHertzPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FrequencyHertz*
            FrequencyHertzPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FrequencyHertz*
            FrequencyHertzPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FrequencyHertz*
            FrequencyHertzPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FrequencyHertzPluginSupport_copy_data(
                FrequencyHertz *out,
                const FrequencyHertz *in);

            NDDSUSERDllExport extern void 
            FrequencyHertzPluginSupport_destroy_data_w_params(
                FrequencyHertz *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FrequencyHertzPluginSupport_destroy_data_ex(
                FrequencyHertz *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FrequencyHertzPluginSupport_destroy_data(
                FrequencyHertz *sample);

            NDDSUSERDllExport extern void 
            FrequencyHertzPluginSupport_print_data(
                const FrequencyHertz *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FrequencyHertzPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FrequencyHertz *out,
                const FrequencyHertz *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            FrequencyHertzPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FrequencyHertzPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FrequencyHertzPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FrequencyHertzPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define GroundSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GroundSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GroundSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GroundSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GroundSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GroundSpeed*
            GroundSpeedPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GroundSpeed*
            GroundSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GroundSpeed*
            GroundSpeedPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GroundSpeedPluginSupport_copy_data(
                GroundSpeed *out,
                const GroundSpeed *in);

            NDDSUSERDllExport extern void 
            GroundSpeedPluginSupport_destroy_data_w_params(
                GroundSpeed *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GroundSpeedPluginSupport_destroy_data_ex(
                GroundSpeed *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GroundSpeedPluginSupport_destroy_data(
                GroundSpeed *sample);

            NDDSUSERDllExport extern void 
            GroundSpeedPluginSupport_print_data(
                const GroundSpeed *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GroundSpeedPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GroundSpeed *out,
                const GroundSpeed *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            GroundSpeedPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GroundSpeedPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GroundSpeedPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GroundSpeedPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define HeadingTrueNorthAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingTrueNorthAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingTrueNorthAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingTrueNorthAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingTrueNorthAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingTrueNorthAngle*
            HeadingTrueNorthAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingTrueNorthAngle*
            HeadingTrueNorthAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingTrueNorthAngle*
            HeadingTrueNorthAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingTrueNorthAnglePluginSupport_copy_data(
                HeadingTrueNorthAngle *out,
                const HeadingTrueNorthAngle *in);

            NDDSUSERDllExport extern void 
            HeadingTrueNorthAnglePluginSupport_destroy_data_w_params(
                HeadingTrueNorthAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingTrueNorthAnglePluginSupport_destroy_data_ex(
                HeadingTrueNorthAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingTrueNorthAnglePluginSupport_destroy_data(
                HeadingTrueNorthAngle *sample);

            NDDSUSERDllExport extern void 
            HeadingTrueNorthAnglePluginSupport_print_data(
                const HeadingTrueNorthAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            HeadingTrueNorthAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingTrueNorthAngle *out,
                const HeadingTrueNorthAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            HeadingTrueNorthAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingTrueNorthAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingTrueNorthAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingTrueNorthAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define IndicatedAirspeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define IndicatedAirspeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define IndicatedAirspeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define IndicatedAirspeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define IndicatedAirspeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern IndicatedAirspeed*
            IndicatedAirspeedPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern IndicatedAirspeed*
            IndicatedAirspeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IndicatedAirspeed*
            IndicatedAirspeedPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            IndicatedAirspeedPluginSupport_copy_data(
                IndicatedAirspeed *out,
                const IndicatedAirspeed *in);

            NDDSUSERDllExport extern void 
            IndicatedAirspeedPluginSupport_destroy_data_w_params(
                IndicatedAirspeed *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            IndicatedAirspeedPluginSupport_destroy_data_ex(
                IndicatedAirspeed *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IndicatedAirspeedPluginSupport_destroy_data(
                IndicatedAirspeed *sample);

            NDDSUSERDllExport extern void 
            IndicatedAirspeedPluginSupport_print_data(
                const IndicatedAirspeed *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            IndicatedAirspeedPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                IndicatedAirspeed *out,
                const IndicatedAirspeed *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            IndicatedAirspeedPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            IndicatedAirspeedPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            IndicatedAirspeedPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            IndicatedAirspeedPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define MagneticVariationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MagneticVariationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MagneticVariationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MagneticVariationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MagneticVariationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MagneticVariation*
            MagneticVariationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MagneticVariation*
            MagneticVariationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MagneticVariation*
            MagneticVariationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MagneticVariationPluginSupport_copy_data(
                MagneticVariation *out,
                const MagneticVariation *in);

            NDDSUSERDllExport extern void 
            MagneticVariationPluginSupport_destroy_data_w_params(
                MagneticVariation *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MagneticVariationPluginSupport_destroy_data_ex(
                MagneticVariation *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MagneticVariationPluginSupport_destroy_data(
                MagneticVariation *sample);

            NDDSUSERDllExport extern void 
            MagneticVariationPluginSupport_print_data(
                const MagneticVariation *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MagneticVariationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MagneticVariation *out,
                const MagneticVariation *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MagneticVariationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MagneticVariationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MagneticVariationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MagneticVariationPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define MassPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MassPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MassPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MassPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MassPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Mass*
            MassPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Mass*
            MassPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Mass*
            MassPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MassPluginSupport_copy_data(
                Mass *out,
                const Mass *in);

            NDDSUSERDllExport extern void 
            MassPluginSupport_destroy_data_w_params(
                Mass *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MassPluginSupport_destroy_data_ex(
                Mass *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MassPluginSupport_destroy_data(
                Mass *sample);

            NDDSUSERDllExport extern void 
            MassPluginSupport_print_data(
                const Mass *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MassPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Mass *out,
                const Mass *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MassPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MassPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MassPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MassPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define NumericGUIDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define NumericGUIDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NumericGUIDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define NumericGUIDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NumericGUIDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NumericGUID*
            NumericGUIDPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NumericGUID*
            NumericGUIDPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NumericGUID*
            NumericGUIDPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NumericGUIDPluginSupport_copy_data(
                NumericGUID *out,
                const NumericGUID *in);

            NDDSUSERDllExport extern void 
            NumericGUIDPluginSupport_destroy_data_w_params(
                NumericGUID *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NumericGUIDPluginSupport_destroy_data_ex(
                NumericGUID *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NumericGUIDPluginSupport_destroy_data(
                NumericGUID *sample);

            NDDSUSERDllExport extern void 
            NumericGUIDPluginSupport_print_data(
                const NumericGUID *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NumericGUIDPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NumericGUID *out,
                const NumericGUID *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            NumericGUIDPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NumericGUIDPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NumericGUIDPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NumericGUIDPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PercentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PercentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PercentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PercentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PercentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Percent*
            PercentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Percent*
            PercentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Percent*
            PercentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PercentPluginSupport_copy_data(
                Percent *out,
                const Percent *in);

            NDDSUSERDllExport extern void 
            PercentPluginSupport_destroy_data_w_params(
                Percent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PercentPluginSupport_destroy_data_ex(
                Percent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PercentPluginSupport_destroy_data(
                Percent *sample);

            NDDSUSERDllExport extern void 
            PercentPluginSupport_print_data(
                const Percent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PercentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Percent *out,
                const Percent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PercentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PercentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PercentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PercentPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PitchHalfAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PitchHalfAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PitchHalfAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PitchHalfAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PitchHalfAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PitchHalfAngle*
            PitchHalfAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PitchHalfAngle*
            PitchHalfAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PitchHalfAngle*
            PitchHalfAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PitchHalfAnglePluginSupport_copy_data(
                PitchHalfAngle *out,
                const PitchHalfAngle *in);

            NDDSUSERDllExport extern void 
            PitchHalfAnglePluginSupport_destroy_data_w_params(
                PitchHalfAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PitchHalfAnglePluginSupport_destroy_data_ex(
                PitchHalfAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PitchHalfAnglePluginSupport_destroy_data(
                PitchHalfAngle *sample);

            NDDSUSERDllExport extern void 
            PitchHalfAnglePluginSupport_print_data(
                const PitchHalfAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PitchHalfAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PitchHalfAngle *out,
                const PitchHalfAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PitchHalfAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PitchHalfAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PitchHalfAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PitchHalfAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PitchAccelerationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PitchAccelerationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PitchAccelerationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PitchAccelerationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PitchAccelerationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PitchAcceleration*
            PitchAccelerationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PitchAcceleration*
            PitchAccelerationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PitchAcceleration*
            PitchAccelerationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PitchAccelerationPluginSupport_copy_data(
                PitchAcceleration *out,
                const PitchAcceleration *in);

            NDDSUSERDllExport extern void 
            PitchAccelerationPluginSupport_destroy_data_w_params(
                PitchAcceleration *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PitchAccelerationPluginSupport_destroy_data_ex(
                PitchAcceleration *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PitchAccelerationPluginSupport_destroy_data(
                PitchAcceleration *sample);

            NDDSUSERDllExport extern void 
            PitchAccelerationPluginSupport_print_data(
                const PitchAcceleration *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PitchAccelerationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PitchAcceleration *out,
                const PitchAcceleration *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PitchAccelerationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PitchAccelerationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PitchAccelerationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PitchAccelerationPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PitchRatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PitchRatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PitchRatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PitchRatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PitchRatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PitchRate*
            PitchRatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PitchRate*
            PitchRatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PitchRate*
            PitchRatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PitchRatePluginSupport_copy_data(
                PitchRate *out,
                const PitchRate *in);

            NDDSUSERDllExport extern void 
            PitchRatePluginSupport_destroy_data_w_params(
                PitchRate *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PitchRatePluginSupport_destroy_data_ex(
                PitchRate *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PitchRatePluginSupport_destroy_data(
                PitchRate *sample);

            NDDSUSERDllExport extern void 
            PitchRatePluginSupport_print_data(
                const PitchRate *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PitchRatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PitchRate *out,
                const PitchRate *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PitchRatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PitchRatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PitchRatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PitchRatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PowerBusCurrentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PowerBusCurrentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PowerBusCurrentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PowerBusCurrentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PowerBusCurrentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PowerBusCurrent*
            PowerBusCurrentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PowerBusCurrent*
            PowerBusCurrentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PowerBusCurrent*
            PowerBusCurrentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PowerBusCurrentPluginSupport_copy_data(
                PowerBusCurrent *out,
                const PowerBusCurrent *in);

            NDDSUSERDllExport extern void 
            PowerBusCurrentPluginSupport_destroy_data_w_params(
                PowerBusCurrent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PowerBusCurrentPluginSupport_destroy_data_ex(
                PowerBusCurrent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PowerBusCurrentPluginSupport_destroy_data(
                PowerBusCurrent *sample);

            NDDSUSERDllExport extern void 
            PowerBusCurrentPluginSupport_print_data(
                const PowerBusCurrent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PowerBusCurrentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PowerBusCurrent *out,
                const PowerBusCurrent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PowerBusCurrentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PowerBusCurrentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PowerBusCurrentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PowerBusCurrentPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PowerBusVoltagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PowerBusVoltagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PowerBusVoltagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PowerBusVoltagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PowerBusVoltagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PowerBusVoltage*
            PowerBusVoltagePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PowerBusVoltage*
            PowerBusVoltagePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PowerBusVoltage*
            PowerBusVoltagePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PowerBusVoltagePluginSupport_copy_data(
                PowerBusVoltage *out,
                const PowerBusVoltage *in);

            NDDSUSERDllExport extern void 
            PowerBusVoltagePluginSupport_destroy_data_w_params(
                PowerBusVoltage *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PowerBusVoltagePluginSupport_destroy_data_ex(
                PowerBusVoltage *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PowerBusVoltagePluginSupport_destroy_data(
                PowerBusVoltage *sample);

            NDDSUSERDllExport extern void 
            PowerBusVoltagePluginSupport_print_data(
                const PowerBusVoltage *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PowerBusVoltagePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PowerBusVoltage *out,
                const PowerBusVoltage *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PowerBusVoltagePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PowerBusVoltagePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PowerBusVoltagePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PowerBusVoltagePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PressureKiloPascalsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PressureKiloPascalsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PressureKiloPascalsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PressureKiloPascalsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PressureKiloPascalsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PressureKiloPascals*
            PressureKiloPascalsPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PressureKiloPascals*
            PressureKiloPascalsPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PressureKiloPascals*
            PressureKiloPascalsPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PressureKiloPascalsPluginSupport_copy_data(
                PressureKiloPascals *out,
                const PressureKiloPascals *in);

            NDDSUSERDllExport extern void 
            PressureKiloPascalsPluginSupport_destroy_data_w_params(
                PressureKiloPascals *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PressureKiloPascalsPluginSupport_destroy_data_ex(
                PressureKiloPascals *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PressureKiloPascalsPluginSupport_destroy_data(
                PressureKiloPascals *sample);

            NDDSUSERDllExport extern void 
            PressureKiloPascalsPluginSupport_print_data(
                const PressureKiloPascals *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PressureKiloPascalsPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PressureKiloPascals *out,
                const PressureKiloPascals *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PressureKiloPascalsPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PressureKiloPascalsPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PressureKiloPascalsPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PressureKiloPascalsPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PressurePascalsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PressurePascalsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PressurePascalsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PressurePascalsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PressurePascalsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PressurePascals*
            PressurePascalsPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PressurePascals*
            PressurePascalsPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PressurePascals*
            PressurePascalsPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PressurePascalsPluginSupport_copy_data(
                PressurePascals *out,
                const PressurePascals *in);

            NDDSUSERDllExport extern void 
            PressurePascalsPluginSupport_destroy_data_w_params(
                PressurePascals *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PressurePascalsPluginSupport_destroy_data_ex(
                PressurePascals *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PressurePascalsPluginSupport_destroy_data(
                PressurePascals *sample);

            NDDSUSERDllExport extern void 
            PressurePascalsPluginSupport_print_data(
                const PressurePascals *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PressurePascalsPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PressurePascals *out,
                const PressurePascals *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PressurePascalsPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PressurePascalsPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PressurePascalsPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PressurePascalsPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define RadioFrequencyHertzPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RadioFrequencyHertzPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RadioFrequencyHertzPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RadioFrequencyHertzPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RadioFrequencyHertzPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RadioFrequencyHertz*
            RadioFrequencyHertzPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RadioFrequencyHertz*
            RadioFrequencyHertzPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RadioFrequencyHertz*
            RadioFrequencyHertzPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RadioFrequencyHertzPluginSupport_copy_data(
                RadioFrequencyHertz *out,
                const RadioFrequencyHertz *in);

            NDDSUSERDllExport extern void 
            RadioFrequencyHertzPluginSupport_destroy_data_w_params(
                RadioFrequencyHertz *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RadioFrequencyHertzPluginSupport_destroy_data_ex(
                RadioFrequencyHertz *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RadioFrequencyHertzPluginSupport_destroy_data(
                RadioFrequencyHertz *sample);

            NDDSUSERDllExport extern void 
            RadioFrequencyHertzPluginSupport_print_data(
                const RadioFrequencyHertz *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RadioFrequencyHertzPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RadioFrequencyHertz *out,
                const RadioFrequencyHertz *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            RadioFrequencyHertzPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RadioFrequencyHertzPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RadioFrequencyHertzPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RadioFrequencyHertzPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define RelativeAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RelativeAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RelativeAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RelativeAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RelativeAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RelativeAngle*
            RelativeAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RelativeAngle*
            RelativeAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RelativeAngle*
            RelativeAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RelativeAnglePluginSupport_copy_data(
                RelativeAngle *out,
                const RelativeAngle *in);

            NDDSUSERDllExport extern void 
            RelativeAnglePluginSupport_destroy_data_w_params(
                RelativeAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RelativeAnglePluginSupport_destroy_data_ex(
                RelativeAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RelativeAnglePluginSupport_destroy_data(
                RelativeAngle *sample);

            NDDSUSERDllExport extern void 
            RelativeAnglePluginSupport_print_data(
                const RelativeAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RelativeAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RelativeAngle *out,
                const RelativeAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            RelativeAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RelativeAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RelativeAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RelativeAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define RelativeHumidityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RelativeHumidityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RelativeHumidityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RelativeHumidityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RelativeHumidityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RelativeHumidity*
            RelativeHumidityPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RelativeHumidity*
            RelativeHumidityPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RelativeHumidity*
            RelativeHumidityPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RelativeHumidityPluginSupport_copy_data(
                RelativeHumidity *out,
                const RelativeHumidity *in);

            NDDSUSERDllExport extern void 
            RelativeHumidityPluginSupport_destroy_data_w_params(
                RelativeHumidity *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RelativeHumidityPluginSupport_destroy_data_ex(
                RelativeHumidity *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RelativeHumidityPluginSupport_destroy_data(
                RelativeHumidity *sample);

            NDDSUSERDllExport extern void 
            RelativeHumidityPluginSupport_print_data(
                const RelativeHumidity *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RelativeHumidityPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RelativeHumidity *out,
                const RelativeHumidity *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            RelativeHumidityPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RelativeHumidityPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RelativeHumidityPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RelativeHumidityPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define RollAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RollAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RollAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RollAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RollAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RollAngle*
            RollAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RollAngle*
            RollAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RollAngle*
            RollAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RollAnglePluginSupport_copy_data(
                RollAngle *out,
                const RollAngle *in);

            NDDSUSERDllExport extern void 
            RollAnglePluginSupport_destroy_data_w_params(
                RollAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RollAnglePluginSupport_destroy_data_ex(
                RollAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RollAnglePluginSupport_destroy_data(
                RollAngle *sample);

            NDDSUSERDllExport extern void 
            RollAnglePluginSupport_print_data(
                const RollAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RollAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RollAngle *out,
                const RollAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            RollAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RollAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RollAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RollAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define RollAccelerationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RollAccelerationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RollAccelerationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RollAccelerationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RollAccelerationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RollAcceleration*
            RollAccelerationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RollAcceleration*
            RollAccelerationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RollAcceleration*
            RollAccelerationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RollAccelerationPluginSupport_copy_data(
                RollAcceleration *out,
                const RollAcceleration *in);

            NDDSUSERDllExport extern void 
            RollAccelerationPluginSupport_destroy_data_w_params(
                RollAcceleration *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RollAccelerationPluginSupport_destroy_data_ex(
                RollAcceleration *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RollAccelerationPluginSupport_destroy_data(
                RollAcceleration *sample);

            NDDSUSERDllExport extern void 
            RollAccelerationPluginSupport_print_data(
                const RollAcceleration *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RollAccelerationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RollAcceleration *out,
                const RollAcceleration *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            RollAccelerationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RollAccelerationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RollAccelerationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RollAccelerationPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define RollRatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RollRatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RollRatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RollRatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RollRatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RollRate*
            RollRatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RollRate*
            RollRatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RollRate*
            RollRatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RollRatePluginSupport_copy_data(
                RollRate *out,
                const RollRate *in);

            NDDSUSERDllExport extern void 
            RollRatePluginSupport_destroy_data_w_params(
                RollRate *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RollRatePluginSupport_destroy_data_ex(
                RollRate *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RollRatePluginSupport_destroy_data(
                RollRate *sample);

            NDDSUSERDllExport extern void 
            RollRatePluginSupport_print_data(
                const RollRate *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RollRatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RollRate *out,
                const RollRate *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            RollRatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RollRatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RollRatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RollRatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SizeBytesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SizeBytesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SizeBytesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SizeBytesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SizeBytesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SizeBytes*
            SizeBytesPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SizeBytes*
            SizeBytesPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SizeBytes*
            SizeBytesPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SizeBytesPluginSupport_copy_data(
                SizeBytes *out,
                const SizeBytes *in);

            NDDSUSERDllExport extern void 
            SizeBytesPluginSupport_destroy_data_w_params(
                SizeBytes *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SizeBytesPluginSupport_destroy_data_ex(
                SizeBytes *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SizeBytesPluginSupport_destroy_data(
                SizeBytes *sample);

            NDDSUSERDllExport extern void 
            SizeBytesPluginSupport_print_data(
                const SizeBytes *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SizeBytesPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SizeBytes *out,
                const SizeBytes *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SizeBytesPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SizeBytesPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SizeBytesPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SizeBytesPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SizeRealPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SizeRealPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SizeRealPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SizeRealPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SizeRealPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SizeReal*
            SizeRealPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SizeReal*
            SizeRealPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SizeReal*
            SizeRealPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SizeRealPluginSupport_copy_data(
                SizeReal *out,
                const SizeReal *in);

            NDDSUSERDllExport extern void 
            SizeRealPluginSupport_destroy_data_w_params(
                SizeReal *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SizeRealPluginSupport_destroy_data_ex(
                SizeReal *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SizeRealPluginSupport_destroy_data(
                SizeReal *sample);

            NDDSUSERDllExport extern void 
            SizeRealPluginSupport_print_data(
                const SizeReal *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SizeRealPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SizeReal *out,
                const SizeReal *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SizeRealPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SizeRealPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SizeRealPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SizeRealPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define SpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Speed*
            SpeedPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Speed*
            SpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Speed*
            SpeedPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedPluginSupport_copy_data(
                Speed *out,
                const Speed *in);

            NDDSUSERDllExport extern void 
            SpeedPluginSupport_destroy_data_w_params(
                Speed *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedPluginSupport_destroy_data_ex(
                Speed *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedPluginSupport_destroy_data(
                Speed *sample);

            NDDSUSERDllExport extern void 
            SpeedPluginSupport_print_data(
                const Speed *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SpeedPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Speed *out,
                const Speed *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            SpeedPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define TemperaturePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TemperaturePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TemperaturePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TemperaturePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TemperaturePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Temperature*
            TemperaturePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Temperature*
            TemperaturePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Temperature*
            TemperaturePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TemperaturePluginSupport_copy_data(
                Temperature *out,
                const Temperature *in);

            NDDSUSERDllExport extern void 
            TemperaturePluginSupport_destroy_data_w_params(
                Temperature *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TemperaturePluginSupport_destroy_data_ex(
                Temperature *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TemperaturePluginSupport_destroy_data(
                Temperature *sample);

            NDDSUSERDllExport extern void 
            TemperaturePluginSupport_print_data(
                const Temperature *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            TemperaturePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Temperature *out,
                const Temperature *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            TemperaturePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TemperaturePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TemperaturePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TemperaturePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define TurnRatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TurnRatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TurnRatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TurnRatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TurnRatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TurnRate*
            TurnRatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TurnRate*
            TurnRatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TurnRate*
            TurnRatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TurnRatePluginSupport_copy_data(
                TurnRate *out,
                const TurnRate *in);

            NDDSUSERDllExport extern void 
            TurnRatePluginSupport_destroy_data_w_params(
                TurnRate *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TurnRatePluginSupport_destroy_data_ex(
                TurnRate *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TurnRatePluginSupport_destroy_data(
                TurnRate *sample);

            NDDSUSERDllExport extern void 
            TurnRatePluginSupport_print_data(
                const TurnRate *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            TurnRatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TurnRate *out,
                const TurnRate *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            TurnRatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TurnRatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TurnRatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TurnRatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define YawAccelerationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define YawAccelerationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define YawAccelerationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define YawAccelerationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define YawAccelerationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern YawAcceleration*
            YawAccelerationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern YawAcceleration*
            YawAccelerationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern YawAcceleration*
            YawAccelerationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            YawAccelerationPluginSupport_copy_data(
                YawAcceleration *out,
                const YawAcceleration *in);

            NDDSUSERDllExport extern void 
            YawAccelerationPluginSupport_destroy_data_w_params(
                YawAcceleration *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            YawAccelerationPluginSupport_destroy_data_ex(
                YawAcceleration *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            YawAccelerationPluginSupport_destroy_data(
                YawAcceleration *sample);

            NDDSUSERDllExport extern void 
            YawAccelerationPluginSupport_print_data(
                const YawAcceleration *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            YawAccelerationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                YawAcceleration *out,
                const YawAcceleration *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            YawAccelerationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            YawAccelerationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            YawAccelerationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            YawAccelerationPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define YawRatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define YawRatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define YawRatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define YawRatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define YawRatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern YawRate*
            YawRatePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern YawRate*
            YawRatePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern YawRate*
            YawRatePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            YawRatePluginSupport_copy_data(
                YawRate *out,
                const YawRate *in);

            NDDSUSERDllExport extern void 
            YawRatePluginSupport_destroy_data_w_params(
                YawRate *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            YawRatePluginSupport_destroy_data_ex(
                YawRate *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            YawRatePluginSupport_destroy_data(
                YawRate *sample);

            NDDSUSERDllExport extern void 
            YawRatePluginSupport_print_data(
                const YawRate *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            YawRatePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                YawRate *out,
                const YawRate *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            YawRatePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            YawRatePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            YawRatePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            YawRatePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MeasurementsPlugin_576970989_h */

