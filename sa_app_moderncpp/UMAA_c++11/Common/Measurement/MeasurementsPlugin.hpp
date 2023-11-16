

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Measurements.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MeasurementsPlugin_576961936_h
#define MeasurementsPlugin_576961936_h

#include "Measurements.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "BasicTypes/QuaternionPlugin.hpp"
#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_AxesPlugin.hpp"
#include "UMAA/Common/MeasurementCoordinate/Geographic_Coordinate_AxesPlugin.hpp"
#include "BasicTypes/QuaternionPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

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

            #define AnglePositionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnglePositionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnglePositionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnglePositionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnglePositionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AnglePosition*
            AnglePositionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AnglePosition*
            AnglePositionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnglePosition*
            AnglePositionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnglePositionPluginSupport_copy_data(
                AnglePosition *out,
                const AnglePosition *in);

            NDDSUSERDllExport extern void 
            AnglePositionPluginSupport_destroy_data_w_params(
                AnglePosition *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnglePositionPluginSupport_destroy_data_ex(
                AnglePosition *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnglePositionPluginSupport_destroy_data(
                AnglePosition *sample);

            NDDSUSERDllExport extern void 
            AnglePositionPluginSupport_print_data(
                const AnglePosition *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AnglePositionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnglePosition *out,
                const AnglePosition *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AnglePositionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnglePositionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnglePositionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnglePositionPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Distance_ASFPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Distance_ASFPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Distance_ASFPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Distance_ASFPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Distance_ASFPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Distance_ASF*
            Distance_ASFPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Distance_ASF*
            Distance_ASFPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Distance_ASF*
            Distance_ASFPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Distance_ASFPluginSupport_copy_data(
                Distance_ASF *out,
                const Distance_ASF *in);

            NDDSUSERDllExport extern void 
            Distance_ASFPluginSupport_destroy_data_w_params(
                Distance_ASF *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Distance_ASFPluginSupport_destroy_data_ex(
                Distance_ASF *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Distance_ASFPluginSupport_destroy_data(
                Distance_ASF *sample);

            NDDSUSERDllExport extern void 
            Distance_ASFPluginSupport_print_data(
                const Distance_ASF *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Distance_ASFPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Distance_ASF *out,
                const Distance_ASF *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Distance_ASFPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Distance_ASFPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Distance_ASFPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Distance_ASFPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Distance_BSLPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Distance_BSLPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Distance_BSLPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Distance_BSLPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Distance_BSLPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Distance_BSL*
            Distance_BSLPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Distance_BSL*
            Distance_BSLPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Distance_BSL*
            Distance_BSLPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Distance_BSLPluginSupport_copy_data(
                Distance_BSL *out,
                const Distance_BSL *in);

            NDDSUSERDllExport extern void 
            Distance_BSLPluginSupport_destroy_data_w_params(
                Distance_BSL *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Distance_BSLPluginSupport_destroy_data_ex(
                Distance_BSL *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Distance_BSLPluginSupport_destroy_data(
                Distance_BSL *sample);

            NDDSUSERDllExport extern void 
            Distance_BSLPluginSupport_print_data(
                const Distance_BSL *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Distance_BSLPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Distance_BSL *out,
                const Distance_BSL *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Distance_BSLPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Distance_BSLPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Distance_BSLPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Distance_BSLPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Energy_PercentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Energy_PercentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Energy_PercentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Energy_PercentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Energy_PercentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Energy_Percent*
            Energy_PercentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Energy_Percent*
            Energy_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Energy_Percent*
            Energy_PercentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Energy_PercentPluginSupport_copy_data(
                Energy_Percent *out,
                const Energy_Percent *in);

            NDDSUSERDllExport extern void 
            Energy_PercentPluginSupport_destroy_data_w_params(
                Energy_Percent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Energy_PercentPluginSupport_destroy_data_ex(
                Energy_Percent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Energy_PercentPluginSupport_destroy_data(
                Energy_Percent *sample);

            NDDSUSERDllExport extern void 
            Energy_PercentPluginSupport_print_data(
                const Energy_Percent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Energy_PercentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Energy_Percent *out,
                const Energy_Percent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Energy_PercentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Energy_PercentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Energy_PercentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Energy_PercentPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define FrameRateFPSPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FrameRateFPSPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FrameRateFPSPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FrameRateFPSPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FrameRateFPSPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FrameRateFPS*
            FrameRateFPSPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FrameRateFPS*
            FrameRateFPSPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FrameRateFPS*
            FrameRateFPSPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FrameRateFPSPluginSupport_copy_data(
                FrameRateFPS *out,
                const FrameRateFPS *in);

            NDDSUSERDllExport extern void 
            FrameRateFPSPluginSupport_destroy_data_w_params(
                FrameRateFPS *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FrameRateFPSPluginSupport_destroy_data_ex(
                FrameRateFPS *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FrameRateFPSPluginSupport_destroy_data(
                FrameRateFPS *sample);

            NDDSUSERDllExport extern void 
            FrameRateFPSPluginSupport_print_data(
                const FrameRateFPS *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FrameRateFPSPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FrameRateFPS *out,
                const FrameRateFPS *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            FrameRateFPSPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FrameRateFPSPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FrameRateFPSPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FrameRateFPSPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Heading_CurrentDirectionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Heading_CurrentDirectionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Heading_CurrentDirectionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Heading_CurrentDirectionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Heading_CurrentDirectionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Heading_CurrentDirection*
            Heading_CurrentDirectionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Heading_CurrentDirection*
            Heading_CurrentDirectionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Heading_CurrentDirection*
            Heading_CurrentDirectionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Heading_CurrentDirectionPluginSupport_copy_data(
                Heading_CurrentDirection *out,
                const Heading_CurrentDirection *in);

            NDDSUSERDllExport extern void 
            Heading_CurrentDirectionPluginSupport_destroy_data_w_params(
                Heading_CurrentDirection *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Heading_CurrentDirectionPluginSupport_destroy_data_ex(
                Heading_CurrentDirection *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Heading_CurrentDirectionPluginSupport_destroy_data(
                Heading_CurrentDirection *sample);

            NDDSUSERDllExport extern void 
            Heading_CurrentDirectionPluginSupport_print_data(
                const Heading_CurrentDirection *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Heading_CurrentDirectionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Heading_CurrentDirection *out,
                const Heading_CurrentDirection *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Heading_CurrentDirectionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Heading_CurrentDirectionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Heading_CurrentDirectionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Heading_CurrentDirectionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Heading_MagneticNorthPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Heading_MagneticNorthPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Heading_MagneticNorthPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Heading_MagneticNorthPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Heading_MagneticNorthPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Heading_MagneticNorth*
            Heading_MagneticNorthPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Heading_MagneticNorth*
            Heading_MagneticNorthPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Heading_MagneticNorth*
            Heading_MagneticNorthPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Heading_MagneticNorthPluginSupport_copy_data(
                Heading_MagneticNorth *out,
                const Heading_MagneticNorth *in);

            NDDSUSERDllExport extern void 
            Heading_MagneticNorthPluginSupport_destroy_data_w_params(
                Heading_MagneticNorth *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Heading_MagneticNorthPluginSupport_destroy_data_ex(
                Heading_MagneticNorth *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Heading_MagneticNorthPluginSupport_destroy_data(
                Heading_MagneticNorth *sample);

            NDDSUSERDllExport extern void 
            Heading_MagneticNorthPluginSupport_print_data(
                const Heading_MagneticNorth *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Heading_MagneticNorthPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Heading_MagneticNorth *out,
                const Heading_MagneticNorth *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Heading_MagneticNorthPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Heading_MagneticNorthPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Heading_MagneticNorthPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Heading_MagneticNorthPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Heading_WindDirectionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Heading_WindDirectionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Heading_WindDirectionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Heading_WindDirectionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Heading_WindDirectionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Heading_WindDirection*
            Heading_WindDirectionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Heading_WindDirection*
            Heading_WindDirectionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Heading_WindDirection*
            Heading_WindDirectionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Heading_WindDirectionPluginSupport_copy_data(
                Heading_WindDirection *out,
                const Heading_WindDirection *in);

            NDDSUSERDllExport extern void 
            Heading_WindDirectionPluginSupport_destroy_data_w_params(
                Heading_WindDirection *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Heading_WindDirectionPluginSupport_destroy_data_ex(
                Heading_WindDirection *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Heading_WindDirectionPluginSupport_destroy_data(
                Heading_WindDirection *sample);

            NDDSUSERDllExport extern void 
            Heading_WindDirectionPluginSupport_print_data(
                const Heading_WindDirection *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Heading_WindDirectionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Heading_WindDirection *out,
                const Heading_WindDirection *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Heading_WindDirectionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Heading_WindDirectionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Heading_WindDirectionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Heading_WindDirectionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Mass_MetricTonPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Mass_MetricTonPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Mass_MetricTonPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Mass_MetricTonPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Mass_MetricTonPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Mass_MetricTon*
            Mass_MetricTonPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Mass_MetricTon*
            Mass_MetricTonPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Mass_MetricTon*
            Mass_MetricTonPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Mass_MetricTonPluginSupport_copy_data(
                Mass_MetricTon *out,
                const Mass_MetricTon *in);

            NDDSUSERDllExport extern void 
            Mass_MetricTonPluginSupport_destroy_data_w_params(
                Mass_MetricTon *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Mass_MetricTonPluginSupport_destroy_data_ex(
                Mass_MetricTon *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Mass_MetricTonPluginSupport_destroy_data(
                Mass_MetricTon *sample);

            NDDSUSERDllExport extern void 
            Mass_MetricTonPluginSupport_print_data(
                const Mass_MetricTon *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Mass_MetricTonPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Mass_MetricTon *out,
                const Mass_MetricTon *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Mass_MetricTonPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Mass_MetricTonPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Mass_MetricTonPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Mass_MetricTonPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define OrientationQuaternionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OrientationQuaternionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OrientationQuaternionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OrientationQuaternionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OrientationQuaternionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern OrientationQuaternion*
            OrientationQuaternionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern OrientationQuaternion*
            OrientationQuaternionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OrientationQuaternion*
            OrientationQuaternionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OrientationQuaternionPluginSupport_copy_data(
                OrientationQuaternion *out,
                const OrientationQuaternion *in);

            NDDSUSERDllExport extern void 
            OrientationQuaternionPluginSupport_destroy_data_w_params(
                OrientationQuaternion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OrientationQuaternionPluginSupport_destroy_data_ex(
                OrientationQuaternion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OrientationQuaternionPluginSupport_destroy_data(
                OrientationQuaternion *sample);

            NDDSUSERDllExport extern void 
            OrientationQuaternionPluginSupport_print_data(
                const OrientationQuaternion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            OrientationQuaternionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationQuaternion *out,
                const OrientationQuaternion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            OrientationQuaternionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OrientationQuaternionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OrientationQuaternionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OrientationQuaternionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define PositiveCountPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PositiveCountPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PositiveCountPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PositiveCountPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PositiveCountPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PositiveCount*
            PositiveCountPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PositiveCount*
            PositiveCountPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PositiveCount*
            PositiveCountPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PositiveCountPluginSupport_copy_data(
                PositiveCount *out,
                const PositiveCount *in);

            NDDSUSERDllExport extern void 
            PositiveCountPluginSupport_destroy_data_w_params(
                PositiveCount *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PositiveCountPluginSupport_destroy_data_ex(
                PositiveCount *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PositiveCountPluginSupport_destroy_data(
                PositiveCount *sample);

            NDDSUSERDllExport extern void 
            PositiveCountPluginSupport_print_data(
                const PositiveCount *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PositiveCountPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PositiveCount *out,
                const PositiveCount *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            PositiveCountPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PositiveCountPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PositiveCountPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PositiveCountPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Power_PercentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Power_PercentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Power_PercentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Power_PercentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Power_PercentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Power_Percent*
            Power_PercentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Power_Percent*
            Power_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Power_Percent*
            Power_PercentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Power_PercentPluginSupport_copy_data(
                Power_Percent *out,
                const Power_Percent *in);

            NDDSUSERDllExport extern void 
            Power_PercentPluginSupport_destroy_data_w_params(
                Power_Percent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Power_PercentPluginSupport_destroy_data_ex(
                Power_Percent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Power_PercentPluginSupport_destroy_data(
                Power_Percent *sample);

            NDDSUSERDllExport extern void 
            Power_PercentPluginSupport_print_data(
                const Power_Percent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Power_PercentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Power_Percent *out,
                const Power_Percent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Power_PercentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Power_PercentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Power_PercentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Power_PercentPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Pressure_PercentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Pressure_PercentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Pressure_PercentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Pressure_PercentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Pressure_PercentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Pressure_Percent*
            Pressure_PercentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Pressure_Percent*
            Pressure_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Pressure_Percent*
            Pressure_PercentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Pressure_PercentPluginSupport_copy_data(
                Pressure_Percent *out,
                const Pressure_Percent *in);

            NDDSUSERDllExport extern void 
            Pressure_PercentPluginSupport_destroy_data_w_params(
                Pressure_Percent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Pressure_PercentPluginSupport_destroy_data_ex(
                Pressure_Percent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Pressure_PercentPluginSupport_destroy_data(
                Pressure_Percent *sample);

            NDDSUSERDllExport extern void 
            Pressure_PercentPluginSupport_print_data(
                const Pressure_Percent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Pressure_PercentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Pressure_Percent *out,
                const Pressure_Percent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Pressure_PercentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Pressure_PercentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Pressure_PercentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Pressure_PercentPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Speed_BSLPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Speed_BSLPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Speed_BSLPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Speed_BSLPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Speed_BSLPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Speed_BSL*
            Speed_BSLPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Speed_BSL*
            Speed_BSLPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Speed_BSL*
            Speed_BSLPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Speed_BSLPluginSupport_copy_data(
                Speed_BSL *out,
                const Speed_BSL *in);

            NDDSUSERDllExport extern void 
            Speed_BSLPluginSupport_destroy_data_w_params(
                Speed_BSL *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Speed_BSLPluginSupport_destroy_data_ex(
                Speed_BSL *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Speed_BSLPluginSupport_destroy_data(
                Speed_BSL *sample);

            NDDSUSERDllExport extern void 
            Speed_BSLPluginSupport_print_data(
                const Speed_BSL *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Speed_BSLPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Speed_BSL *out,
                const Speed_BSL *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Speed_BSLPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Speed_BSLPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Speed_BSLPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Speed_BSLPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Speed_LocalWaterMassPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Speed_LocalWaterMassPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Speed_LocalWaterMassPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Speed_LocalWaterMassPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Speed_LocalWaterMassPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Speed_LocalWaterMass*
            Speed_LocalWaterMassPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Speed_LocalWaterMass*
            Speed_LocalWaterMassPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Speed_LocalWaterMass*
            Speed_LocalWaterMassPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Speed_LocalWaterMassPluginSupport_copy_data(
                Speed_LocalWaterMass *out,
                const Speed_LocalWaterMass *in);

            NDDSUSERDllExport extern void 
            Speed_LocalWaterMassPluginSupport_destroy_data_w_params(
                Speed_LocalWaterMass *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Speed_LocalWaterMassPluginSupport_destroy_data_ex(
                Speed_LocalWaterMass *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Speed_LocalWaterMassPluginSupport_destroy_data(
                Speed_LocalWaterMass *sample);

            NDDSUSERDllExport extern void 
            Speed_LocalWaterMassPluginSupport_print_data(
                const Speed_LocalWaterMass *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Speed_LocalWaterMassPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Speed_LocalWaterMass *out,
                const Speed_LocalWaterMass *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Speed_LocalWaterMassPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Speed_LocalWaterMassPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Speed_LocalWaterMassPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Speed_LocalWaterMassPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Volume_CubicMeterPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Volume_CubicMeterPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Volume_CubicMeterPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Volume_CubicMeterPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Volume_CubicMeterPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Volume_CubicMeter*
            Volume_CubicMeterPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Volume_CubicMeter*
            Volume_CubicMeterPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Volume_CubicMeter*
            Volume_CubicMeterPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Volume_CubicMeterPluginSupport_copy_data(
                Volume_CubicMeter *out,
                const Volume_CubicMeter *in);

            NDDSUSERDllExport extern void 
            Volume_CubicMeterPluginSupport_destroy_data_w_params(
                Volume_CubicMeter *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Volume_CubicMeterPluginSupport_destroy_data_ex(
                Volume_CubicMeter *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Volume_CubicMeterPluginSupport_destroy_data(
                Volume_CubicMeter *sample);

            NDDSUSERDllExport extern void 
            Volume_CubicMeterPluginSupport_print_data(
                const Volume_CubicMeter *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Volume_CubicMeterPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Volume_CubicMeter *out,
                const Volume_CubicMeter *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Volume_CubicMeterPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Volume_CubicMeterPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Volume_CubicMeterPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Volume_CubicMeterPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Volume_PercentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Volume_PercentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Volume_PercentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Volume_PercentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Volume_PercentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Volume_Percent*
            Volume_PercentPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Volume_Percent*
            Volume_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Volume_Percent*
            Volume_PercentPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Volume_PercentPluginSupport_copy_data(
                Volume_Percent *out,
                const Volume_Percent *in);

            NDDSUSERDllExport extern void 
            Volume_PercentPluginSupport_destroy_data_w_params(
                Volume_Percent *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Volume_PercentPluginSupport_destroy_data_ex(
                Volume_Percent *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Volume_PercentPluginSupport_destroy_data(
                Volume_Percent *sample);

            NDDSUSERDllExport extern void 
            Volume_PercentPluginSupport_print_data(
                const Volume_Percent *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Volume_PercentPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Volume_Percent *out,
                const Volume_Percent *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Volume_PercentPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Volume_PercentPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Volume_PercentPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Volume_PercentPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Azimuth_TrueNorth_PosAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Azimuth_TrueNorth_PosAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Azimuth_TrueNorth_PosAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Azimuth_TrueNorth_PosAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Azimuth_TrueNorth_PosAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Azimuth_TrueNorth_PosAngle*
            Azimuth_TrueNorth_PosAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Azimuth_TrueNorth_PosAngle*
            Azimuth_TrueNorth_PosAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Azimuth_TrueNorth_PosAngle*
            Azimuth_TrueNorth_PosAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Azimuth_TrueNorth_PosAnglePluginSupport_copy_data(
                Azimuth_TrueNorth_PosAngle *out,
                const Azimuth_TrueNorth_PosAngle *in);

            NDDSUSERDllExport extern void 
            Azimuth_TrueNorth_PosAnglePluginSupport_destroy_data_w_params(
                Azimuth_TrueNorth_PosAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Azimuth_TrueNorth_PosAnglePluginSupport_destroy_data_ex(
                Azimuth_TrueNorth_PosAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Azimuth_TrueNorth_PosAnglePluginSupport_destroy_data(
                Azimuth_TrueNorth_PosAngle *sample);

            NDDSUSERDllExport extern void 
            Azimuth_TrueNorth_PosAnglePluginSupport_print_data(
                const Azimuth_TrueNorth_PosAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Azimuth_TrueNorth_PosAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Azimuth_TrueNorth_PosAngle *out,
                const Azimuth_TrueNorth_PosAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Azimuth_TrueNorth_PosAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Azimuth_TrueNorth_PosAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Azimuth_TrueNorth_PosAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Azimuth_TrueNorth_PosAnglePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define BarometricPressurePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BarometricPressurePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BarometricPressurePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BarometricPressurePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BarometricPressurePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BarometricPressure*
            BarometricPressurePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BarometricPressure*
            BarometricPressurePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BarometricPressure*
            BarometricPressurePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BarometricPressurePluginSupport_copy_data(
                BarometricPressure *out,
                const BarometricPressure *in);

            NDDSUSERDllExport extern void 
            BarometricPressurePluginSupport_destroy_data_w_params(
                BarometricPressure *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BarometricPressurePluginSupport_destroy_data_ex(
                BarometricPressure *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BarometricPressurePluginSupport_destroy_data(
                BarometricPressure *sample);

            NDDSUSERDllExport extern void 
            BarometricPressurePluginSupport_print_data(
                const BarometricPressure *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BarometricPressurePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BarometricPressure *out,
                const BarometricPressure *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BarometricPressurePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BarometricPressurePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BarometricPressurePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BarometricPressurePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CommsRate_BitsPerSecondPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsRate_BitsPerSecondPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsRate_BitsPerSecondPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsRate_BitsPerSecondPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsRate_BitsPerSecondPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsRate_BitsPerSecond*
            CommsRate_BitsPerSecondPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsRate_BitsPerSecond*
            CommsRate_BitsPerSecondPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsRate_BitsPerSecond*
            CommsRate_BitsPerSecondPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsRate_BitsPerSecondPluginSupport_copy_data(
                CommsRate_BitsPerSecond *out,
                const CommsRate_BitsPerSecond *in);

            NDDSUSERDllExport extern void 
            CommsRate_BitsPerSecondPluginSupport_destroy_data_w_params(
                CommsRate_BitsPerSecond *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsRate_BitsPerSecondPluginSupport_destroy_data_ex(
                CommsRate_BitsPerSecond *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsRate_BitsPerSecondPluginSupport_destroy_data(
                CommsRate_BitsPerSecond *sample);

            NDDSUSERDllExport extern void 
            CommsRate_BitsPerSecondPluginSupport_print_data(
                const CommsRate_BitsPerSecond *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CommsRate_BitsPerSecondPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsRate_BitsPerSecond *out,
                const CommsRate_BitsPerSecond *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CommsRate_BitsPerSecondPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsRate_BitsPerSecondPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsRate_BitsPerSecondPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsRate_BitsPerSecondPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CommsRate_MegabitsPerSecondPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsRate_MegabitsPerSecondPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsRate_MegabitsPerSecondPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsRate_MegabitsPerSecondPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsRate_MegabitsPerSecondPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsRate_MegabitsPerSecond*
            CommsRate_MegabitsPerSecondPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsRate_MegabitsPerSecond*
            CommsRate_MegabitsPerSecondPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsRate_MegabitsPerSecond*
            CommsRate_MegabitsPerSecondPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsRate_MegabitsPerSecondPluginSupport_copy_data(
                CommsRate_MegabitsPerSecond *out,
                const CommsRate_MegabitsPerSecond *in);

            NDDSUSERDllExport extern void 
            CommsRate_MegabitsPerSecondPluginSupport_destroy_data_w_params(
                CommsRate_MegabitsPerSecond *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsRate_MegabitsPerSecondPluginSupport_destroy_data_ex(
                CommsRate_MegabitsPerSecond *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsRate_MegabitsPerSecondPluginSupport_destroy_data(
                CommsRate_MegabitsPerSecond *sample);

            NDDSUSERDllExport extern void 
            CommsRate_MegabitsPerSecondPluginSupport_print_data(
                const CommsRate_MegabitsPerSecond *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CommsRate_MegabitsPerSecondPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsRate_MegabitsPerSecond *out,
                const CommsRate_MegabitsPerSecond *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CommsRate_MegabitsPerSecondPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsRate_MegabitsPerSecondPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsRate_MegabitsPerSecondPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsRate_MegabitsPerSecondPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ContinuousSizePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContinuousSizePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContinuousSizePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContinuousSizePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContinuousSizePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContinuousSize*
            ContinuousSizePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContinuousSize*
            ContinuousSizePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContinuousSize*
            ContinuousSizePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContinuousSizePluginSupport_copy_data(
                ContinuousSize *out,
                const ContinuousSize *in);

            NDDSUSERDllExport extern void 
            ContinuousSizePluginSupport_destroy_data_w_params(
                ContinuousSize *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContinuousSizePluginSupport_destroy_data_ex(
                ContinuousSize *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContinuousSizePluginSupport_destroy_data(
                ContinuousSize *sample);

            NDDSUSERDllExport extern void 
            ContinuousSizePluginSupport_print_data(
                const ContinuousSize *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ContinuousSizePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContinuousSize *out,
                const ContinuousSize *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ContinuousSizePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContinuousSizePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContinuousSizePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContinuousSizePlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Course_TrueNorthPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Course_TrueNorthPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Course_TrueNorthPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Course_TrueNorthPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Course_TrueNorthPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Course_TrueNorth*
            Course_TrueNorthPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Course_TrueNorth*
            Course_TrueNorthPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Course_TrueNorth*
            Course_TrueNorthPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Course_TrueNorthPluginSupport_copy_data(
                Course_TrueNorth *out,
                const Course_TrueNorth *in);

            NDDSUSERDllExport extern void 
            Course_TrueNorthPluginSupport_destroy_data_w_params(
                Course_TrueNorth *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Course_TrueNorthPluginSupport_destroy_data_ex(
                Course_TrueNorth *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Course_TrueNorthPluginSupport_destroy_data(
                Course_TrueNorth *sample);

            NDDSUSERDllExport extern void 
            Course_TrueNorthPluginSupport_print_data(
                const Course_TrueNorth *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Course_TrueNorthPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Course_TrueNorth *out,
                const Course_TrueNorth *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Course_TrueNorthPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Course_TrueNorthPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Course_TrueNorthPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Course_TrueNorthPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarOrientationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarOrientationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarOrientationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarOrientationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarOrientationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarOrientation*
            CovarOrientationPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarOrientation*
            CovarOrientationPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarOrientation*
            CovarOrientationPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarOrientationPluginSupport_copy_data(
                CovarOrientation *out,
                const CovarOrientation *in);

            NDDSUSERDllExport extern void 
            CovarOrientationPluginSupport_destroy_data_w_params(
                CovarOrientation *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarOrientationPluginSupport_destroy_data_ex(
                CovarOrientation *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarOrientationPluginSupport_destroy_data(
                CovarOrientation *sample);

            NDDSUSERDllExport extern void 
            CovarOrientationPluginSupport_print_data(
                const CovarOrientation *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarOrientationPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarOrientation *out,
                const CovarOrientation *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarOrientationPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarOrientationPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarPosPosPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarPosPosPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarPosPosPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarPosPosPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarPosPosPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarPosPos*
            CovarPosPosPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarPosPos*
            CovarPosPosPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarPosPos*
            CovarPosPosPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarPosPosPluginSupport_copy_data(
                CovarPosPos *out,
                const CovarPosPos *in);

            NDDSUSERDllExport extern void 
            CovarPosPosPluginSupport_destroy_data_w_params(
                CovarPosPos *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarPosPosPluginSupport_destroy_data_ex(
                CovarPosPos *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarPosPosPluginSupport_destroy_data(
                CovarPosPos *sample);

            NDDSUSERDllExport extern void 
            CovarPosPosPluginSupport_print_data(
                const CovarPosPos *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarPosPosPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarPosPos *out,
                const CovarPosPos *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarPosPosPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarPosPosPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarPosPosPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarPosPosPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarPosVelPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarPosVelPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarPosVelPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarPosVelPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarPosVelPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarPosVel*
            CovarPosVelPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarPosVel*
            CovarPosVelPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarPosVel*
            CovarPosVelPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarPosVelPluginSupport_copy_data(
                CovarPosVel *out,
                const CovarPosVel *in);

            NDDSUSERDllExport extern void 
            CovarPosVelPluginSupport_destroy_data_w_params(
                CovarPosVel *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarPosVelPluginSupport_destroy_data_ex(
                CovarPosVel *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarPosVelPluginSupport_destroy_data(
                CovarPosVel *sample);

            NDDSUSERDllExport extern void 
            CovarPosVelPluginSupport_print_data(
                const CovarPosVel *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarPosVelPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarPosVel *out,
                const CovarPosVel *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarPosVelPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarPosVelPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarPosVelPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarPosVelPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define CovarVelVelPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CovarVelVelPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CovarVelVelPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CovarVelVelPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CovarVelVelPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CovarVelVel*
            CovarVelVelPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CovarVelVel*
            CovarVelVelPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CovarVelVel*
            CovarVelVelPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CovarVelVelPluginSupport_copy_data(
                CovarVelVel *out,
                const CovarVelVel *in);

            NDDSUSERDllExport extern void 
            CovarVelVelPluginSupport_destroy_data_w_params(
                CovarVelVel *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CovarVelVelPluginSupport_destroy_data_ex(
                CovarVelVel *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CovarVelVelPluginSupport_destroy_data(
                CovarVelVel *sample);

            NDDSUSERDllExport extern void 
            CovarVelVelPluginSupport_print_data(
                const CovarVelVel *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            CovarVelVelPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CovarVelVel *out,
                const CovarVelVel *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            CovarVelVelPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CovarVelVelPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CovarVelVelPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CovarVelVelPlugin_get_serialized_key_max_size_for_keyhash(
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
                struct RTICdrStream *stream,
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
                struct RTICdrStream *stream,
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

            #define Distance_PrecisePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Distance_PrecisePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Distance_PrecisePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Distance_PrecisePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Distance_PrecisePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Distance_Precise*
            Distance_PrecisePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Distance_Precise*
            Distance_PrecisePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Distance_Precise*
            Distance_PrecisePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Distance_PrecisePluginSupport_copy_data(
                Distance_Precise *out,
                const Distance_Precise *in);

            NDDSUSERDllExport extern void 
            Distance_PrecisePluginSupport_destroy_data_w_params(
                Distance_Precise *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Distance_PrecisePluginSupport_destroy_data_ex(
                Distance_Precise *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Distance_PrecisePluginSupport_destroy_data(
                Distance_Precise *sample);

            NDDSUSERDllExport extern void 
            Distance_PrecisePluginSupport_print_data(
                const Distance_Precise *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Distance_PrecisePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Distance_Precise *out,
                const Distance_Precise *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Distance_PrecisePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Distance_PrecisePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Distance_PrecisePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Distance_PrecisePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Duration_HoursPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Duration_HoursPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Duration_HoursPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Duration_HoursPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Duration_HoursPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Duration_Hours*
            Duration_HoursPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Duration_Hours*
            Duration_HoursPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Duration_Hours*
            Duration_HoursPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Duration_HoursPluginSupport_copy_data(
                Duration_Hours *out,
                const Duration_Hours *in);

            NDDSUSERDllExport extern void 
            Duration_HoursPluginSupport_destroy_data_w_params(
                Duration_Hours *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Duration_HoursPluginSupport_destroy_data_ex(
                Duration_Hours *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Duration_HoursPluginSupport_destroy_data(
                Duration_Hours *sample);

            NDDSUSERDllExport extern void 
            Duration_HoursPluginSupport_print_data(
                const Duration_Hours *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Duration_HoursPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Duration_Hours *out,
                const Duration_Hours *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Duration_HoursPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Duration_HoursPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Duration_HoursPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Duration_HoursPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define Duration_SecondsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Duration_SecondsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Duration_SecondsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Duration_SecondsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Duration_SecondsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Duration_Seconds*
            Duration_SecondsPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Duration_Seconds*
            Duration_SecondsPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Duration_Seconds*
            Duration_SecondsPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Duration_SecondsPluginSupport_copy_data(
                Duration_Seconds *out,
                const Duration_Seconds *in);

            NDDSUSERDllExport extern void 
            Duration_SecondsPluginSupport_destroy_data_w_params(
                Duration_Seconds *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Duration_SecondsPluginSupport_destroy_data_ex(
                Duration_Seconds *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Duration_SecondsPluginSupport_destroy_data(
                Duration_Seconds *sample);

            NDDSUSERDllExport extern void 
            Duration_SecondsPluginSupport_print_data(
                const Duration_Seconds *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Duration_SecondsPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Duration_Seconds *out,
                const Duration_Seconds *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Duration_SecondsPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Duration_SecondsPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Duration_SecondsPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Duration_SecondsPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define FieldOfView_LineOfSightFocalPlanePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FieldOfView_LineOfSightFocalPlanePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FieldOfView_LineOfSightFocalPlanePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FieldOfView_LineOfSightFocalPlanePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FieldOfView_LineOfSightFocalPlanePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FieldOfView_LineOfSightFocalPlane*
            FieldOfView_LineOfSightFocalPlanePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FieldOfView_LineOfSightFocalPlane*
            FieldOfView_LineOfSightFocalPlanePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FieldOfView_LineOfSightFocalPlane*
            FieldOfView_LineOfSightFocalPlanePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FieldOfView_LineOfSightFocalPlanePluginSupport_copy_data(
                FieldOfView_LineOfSightFocalPlane *out,
                const FieldOfView_LineOfSightFocalPlane *in);

            NDDSUSERDllExport extern void 
            FieldOfView_LineOfSightFocalPlanePluginSupport_destroy_data_w_params(
                FieldOfView_LineOfSightFocalPlane *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FieldOfView_LineOfSightFocalPlanePluginSupport_destroy_data_ex(
                FieldOfView_LineOfSightFocalPlane *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FieldOfView_LineOfSightFocalPlanePluginSupport_destroy_data(
                FieldOfView_LineOfSightFocalPlane *sample);

            NDDSUSERDllExport extern void 
            FieldOfView_LineOfSightFocalPlanePluginSupport_print_data(
                const FieldOfView_LineOfSightFocalPlane *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FieldOfView_LineOfSightFocalPlanePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FieldOfView_LineOfSightFocalPlane *out,
                const FieldOfView_LineOfSightFocalPlane *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            FieldOfView_LineOfSightFocalPlanePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FieldOfView_LineOfSightFocalPlanePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FieldOfView_LineOfSightFocalPlanePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FieldOfView_LineOfSightFocalPlanePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define FocusValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FocusValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FocusValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FocusValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FocusValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FocusValue*
            FocusValuePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FocusValue*
            FocusValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FocusValue*
            FocusValuePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FocusValuePluginSupport_copy_data(
                FocusValue *out,
                const FocusValue *in);

            NDDSUSERDllExport extern void 
            FocusValuePluginSupport_destroy_data_w_params(
                FocusValue *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FocusValuePluginSupport_destroy_data_ex(
                FocusValue *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FocusValuePluginSupport_destroy_data(
                FocusValue *sample);

            NDDSUSERDllExport extern void 
            FocusValuePluginSupport_print_data(
                const FocusValue *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FocusValuePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FocusValue *out,
                const FocusValue *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            FocusValuePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FocusValuePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FocusValuePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FocusValuePlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Frequency_HertzPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Frequency_HertzPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Frequency_HertzPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Frequency_HertzPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Frequency_HertzPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Frequency_Hertz*
            Frequency_HertzPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Frequency_Hertz*
            Frequency_HertzPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Frequency_Hertz*
            Frequency_HertzPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Frequency_HertzPluginSupport_copy_data(
                Frequency_Hertz *out,
                const Frequency_Hertz *in);

            NDDSUSERDllExport extern void 
            Frequency_HertzPluginSupport_destroy_data_w_params(
                Frequency_Hertz *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Frequency_HertzPluginSupport_destroy_data_ex(
                Frequency_Hertz *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Frequency_HertzPluginSupport_destroy_data(
                Frequency_Hertz *sample);

            NDDSUSERDllExport extern void 
            Frequency_HertzPluginSupport_print_data(
                const Frequency_Hertz *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Frequency_HertzPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Frequency_Hertz *out,
                const Frequency_Hertz *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Frequency_HertzPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Frequency_HertzPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Frequency_HertzPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Frequency_HertzPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Heading_TrueNorth_AnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Heading_TrueNorth_AnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Heading_TrueNorth_AnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Heading_TrueNorth_AnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Heading_TrueNorth_AnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Heading_TrueNorth_Angle*
            Heading_TrueNorth_AnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Heading_TrueNorth_Angle*
            Heading_TrueNorth_AnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Heading_TrueNorth_Angle*
            Heading_TrueNorth_AnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Heading_TrueNorth_AnglePluginSupport_copy_data(
                Heading_TrueNorth_Angle *out,
                const Heading_TrueNorth_Angle *in);

            NDDSUSERDllExport extern void 
            Heading_TrueNorth_AnglePluginSupport_destroy_data_w_params(
                Heading_TrueNorth_Angle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Heading_TrueNorth_AnglePluginSupport_destroy_data_ex(
                Heading_TrueNorth_Angle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Heading_TrueNorth_AnglePluginSupport_destroy_data(
                Heading_TrueNorth_Angle *sample);

            NDDSUSERDllExport extern void 
            Heading_TrueNorth_AnglePluginSupport_print_data(
                const Heading_TrueNorth_Angle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Heading_TrueNorth_AnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Heading_TrueNorth_Angle *out,
                const Heading_TrueNorth_Angle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Heading_TrueNorth_AnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Heading_TrueNorth_AnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Heading_TrueNorth_AnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Heading_TrueNorth_AnglePlugin_get_serialized_key_max_size_for_keyhash(
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

            #define IPPort_CountingPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define IPPort_CountingPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define IPPort_CountingPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define IPPort_CountingPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define IPPort_CountingPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern IPPort_Counting*
            IPPort_CountingPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern IPPort_Counting*
            IPPort_CountingPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IPPort_Counting*
            IPPort_CountingPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            IPPort_CountingPluginSupport_copy_data(
                IPPort_Counting *out,
                const IPPort_Counting *in);

            NDDSUSERDllExport extern void 
            IPPort_CountingPluginSupport_destroy_data_w_params(
                IPPort_Counting *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            IPPort_CountingPluginSupport_destroy_data_ex(
                IPPort_Counting *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IPPort_CountingPluginSupport_destroy_data(
                IPPort_Counting *sample);

            NDDSUSERDllExport extern void 
            IPPort_CountingPluginSupport_print_data(
                const IPPort_Counting *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            IPPort_CountingPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                IPPort_Counting *out,
                const IPPort_Counting *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            IPPort_CountingPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            IPPort_CountingPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            IPPort_CountingPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            IPPort_CountingPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define OrderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OrderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OrderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OrderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OrderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Order*
            OrderPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Order*
            OrderPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Order*
            OrderPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OrderPluginSupport_copy_data(
                Order *out,
                const Order *in);

            NDDSUSERDllExport extern void 
            OrderPluginSupport_destroy_data_w_params(
                Order *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OrderPluginSupport_destroy_data_ex(
                Order *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OrderPluginSupport_destroy_data(
                Order *sample);

            NDDSUSERDllExport extern void 
            OrderPluginSupport_print_data(
                const Order *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            OrderPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Order *out,
                const Order *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            OrderPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OrderPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OrderPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OrderPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Pitch_HalfAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Pitch_HalfAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Pitch_HalfAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Pitch_HalfAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Pitch_HalfAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Pitch_HalfAngle*
            Pitch_HalfAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Pitch_HalfAngle*
            Pitch_HalfAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Pitch_HalfAngle*
            Pitch_HalfAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Pitch_HalfAnglePluginSupport_copy_data(
                Pitch_HalfAngle *out,
                const Pitch_HalfAngle *in);

            NDDSUSERDllExport extern void 
            Pitch_HalfAnglePluginSupport_destroy_data_w_params(
                Pitch_HalfAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Pitch_HalfAnglePluginSupport_destroy_data_ex(
                Pitch_HalfAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Pitch_HalfAnglePluginSupport_destroy_data(
                Pitch_HalfAngle *sample);

            NDDSUSERDllExport extern void 
            Pitch_HalfAnglePluginSupport_print_data(
                const Pitch_HalfAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Pitch_HalfAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Pitch_HalfAngle *out,
                const Pitch_HalfAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Pitch_HalfAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Pitch_HalfAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Pitch_HalfAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Pitch_HalfAnglePlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Pressure_KiloPascalsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Pressure_KiloPascalsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Pressure_KiloPascalsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Pressure_KiloPascalsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Pressure_KiloPascalsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Pressure_KiloPascals*
            Pressure_KiloPascalsPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Pressure_KiloPascals*
            Pressure_KiloPascalsPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Pressure_KiloPascals*
            Pressure_KiloPascalsPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Pressure_KiloPascalsPluginSupport_copy_data(
                Pressure_KiloPascals *out,
                const Pressure_KiloPascals *in);

            NDDSUSERDllExport extern void 
            Pressure_KiloPascalsPluginSupport_destroy_data_w_params(
                Pressure_KiloPascals *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Pressure_KiloPascalsPluginSupport_destroy_data_ex(
                Pressure_KiloPascals *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Pressure_KiloPascalsPluginSupport_destroy_data(
                Pressure_KiloPascals *sample);

            NDDSUSERDllExport extern void 
            Pressure_KiloPascalsPluginSupport_print_data(
                const Pressure_KiloPascals *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Pressure_KiloPascalsPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Pressure_KiloPascals *out,
                const Pressure_KiloPascals *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Pressure_KiloPascalsPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Pressure_KiloPascalsPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Pressure_KiloPascalsPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Pressure_KiloPascalsPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define RadioFrequency_HertzPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RadioFrequency_HertzPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RadioFrequency_HertzPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RadioFrequency_HertzPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RadioFrequency_HertzPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RadioFrequency_Hertz*
            RadioFrequency_HertzPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RadioFrequency_Hertz*
            RadioFrequency_HertzPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RadioFrequency_Hertz*
            RadioFrequency_HertzPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RadioFrequency_HertzPluginSupport_copy_data(
                RadioFrequency_Hertz *out,
                const RadioFrequency_Hertz *in);

            NDDSUSERDllExport extern void 
            RadioFrequency_HertzPluginSupport_destroy_data_w_params(
                RadioFrequency_Hertz *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RadioFrequency_HertzPluginSupport_destroy_data_ex(
                RadioFrequency_Hertz *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RadioFrequency_HertzPluginSupport_destroy_data(
                RadioFrequency_Hertz *sample);

            NDDSUSERDllExport extern void 
            RadioFrequency_HertzPluginSupport_print_data(
                const RadioFrequency_Hertz *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RadioFrequency_HertzPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RadioFrequency_Hertz *out,
                const RadioFrequency_Hertz *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            RadioFrequency_HertzPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RadioFrequency_HertzPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RadioFrequency_HertzPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RadioFrequency_HertzPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Roll_AnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Roll_AnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Roll_AnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Roll_AnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Roll_AnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Roll_Angle*
            Roll_AnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Roll_Angle*
            Roll_AnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Roll_Angle*
            Roll_AnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Roll_AnglePluginSupport_copy_data(
                Roll_Angle *out,
                const Roll_Angle *in);

            NDDSUSERDllExport extern void 
            Roll_AnglePluginSupport_destroy_data_w_params(
                Roll_Angle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Roll_AnglePluginSupport_destroy_data_ex(
                Roll_Angle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Roll_AnglePluginSupport_destroy_data(
                Roll_Angle *sample);

            NDDSUSERDllExport extern void 
            Roll_AnglePluginSupport_print_data(
                const Roll_Angle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Roll_AnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Roll_Angle *out,
                const Roll_Angle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Roll_AnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Roll_AnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Roll_AnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Roll_AnglePlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Size_NumeralPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Size_NumeralPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Size_NumeralPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Size_NumeralPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Size_NumeralPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Size_Numeral*
            Size_NumeralPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Size_Numeral*
            Size_NumeralPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Size_Numeral*
            Size_NumeralPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Size_NumeralPluginSupport_copy_data(
                Size_Numeral *out,
                const Size_Numeral *in);

            NDDSUSERDllExport extern void 
            Size_NumeralPluginSupport_destroy_data_w_params(
                Size_Numeral *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Size_NumeralPluginSupport_destroy_data_ex(
                Size_Numeral *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Size_NumeralPluginSupport_destroy_data(
                Size_Numeral *sample);

            NDDSUSERDllExport extern void 
            Size_NumeralPluginSupport_print_data(
                const Size_Numeral *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Size_NumeralPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Size_Numeral *out,
                const Size_Numeral *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Size_NumeralPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Size_NumeralPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Size_NumeralPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Size_NumeralPlugin_get_serialized_key_max_size_for_keyhash(
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

            #define Yaw_PosAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Yaw_PosAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Yaw_PosAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Yaw_PosAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Yaw_PosAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Yaw_PosAngle*
            Yaw_PosAnglePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Yaw_PosAngle*
            Yaw_PosAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Yaw_PosAngle*
            Yaw_PosAnglePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Yaw_PosAnglePluginSupport_copy_data(
                Yaw_PosAngle *out,
                const Yaw_PosAngle *in);

            NDDSUSERDllExport extern void 
            Yaw_PosAnglePluginSupport_destroy_data_w_params(
                Yaw_PosAngle *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Yaw_PosAnglePluginSupport_destroy_data_ex(
                Yaw_PosAngle *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Yaw_PosAnglePluginSupport_destroy_data(
                Yaw_PosAngle *sample);

            NDDSUSERDllExport extern void 
            Yaw_PosAnglePluginSupport_print_data(
                const Yaw_PosAngle *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Yaw_PosAnglePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Yaw_PosAngle *out,
                const Yaw_PosAngle *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            Yaw_PosAnglePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Yaw_PosAnglePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Yaw_PosAnglePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Yaw_PosAnglePlugin_get_serialized_key_max_size_for_keyhash(
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

#endif /* MeasurementsPlugin_576961936_h */

