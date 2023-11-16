

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstrainedTypesPlugin_846145968_h
#define ConstrainedTypesPlugin_846145968_h

#include "ConstrainedTypes.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "BasicTypes/QuaternionPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C"{

    #define UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio*
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio*
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio*
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *out,
        const UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *out,
        const UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatio *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CarrierToNoiseDensityRatioPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CovarAngleAngle*
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CovarAngleAngle*
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CovarAngleAngle*
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_CovarAngleAngle *out,
        const UMAA_Common_PrimitiveConstrained_CovarAngleAngle *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_CovarAngleAngle *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_CovarAngleAngle *out,
        const UMAA_Common_PrimitiveConstrained_CovarAngleAngle *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CovarAngleAnglePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CovarDisAngle*
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CovarDisAngle*
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CovarDisAngle*
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_CovarDisAngle *out,
        const UMAA_Common_PrimitiveConstrained_CovarDisAngle *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_CovarDisAngle *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_CovarDisAngle *out,
        const UMAA_Common_PrimitiveConstrained_CovarDisAngle *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CovarDisAnglePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CovarDisDis*
    UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CovarDisDis*
    UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_CovarDisDis*
    UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_CovarDisDis *out,
        const UMAA_Common_PrimitiveConstrained_CovarDisDis *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_CovarDisDis *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_CovarDisDis *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_CovarDisDis *out,
        const UMAA_Common_PrimitiveConstrained_CovarDisDis *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_CovarDisDisPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_LeftPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_LeftPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_LeftPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_LeftPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_LeftPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_Left*
    UMAA_Common_PrimitiveConstrained_LeftPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_Left*
    UMAA_Common_PrimitiveConstrained_LeftPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_Left*
    UMAA_Common_PrimitiveConstrained_LeftPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_LeftPluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_Left *out,
        const UMAA_Common_PrimitiveConstrained_Left *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_LeftPluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_Left *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_LeftPluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_Left *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_LeftPluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_Left *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_LeftPluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_Left *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_LeftPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_Left *out,
        const UMAA_Common_PrimitiveConstrained_Left *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_LeftPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_LeftPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_LeftPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_LeftPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_MMSIPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_MMSIPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_MMSIPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_MMSI*
    UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_MMSI*
    UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_MMSI*
    UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_MMSI *out,
        const UMAA_Common_PrimitiveConstrained_MMSI *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_MMSI *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_MMSI *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_MMSI *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_MMSIPluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_MMSI *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_MMSIPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_MMSI *out,
        const UMAA_Common_PrimitiveConstrained_MMSI *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_MMSIPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_NanosecondsCount*
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_NanosecondsCount*
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_NanosecondsCount*
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_NanosecondsCount *out,
        const UMAA_Common_PrimitiveConstrained_NanosecondsCount *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_NanosecondsCount *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_NanosecondsCount *out,
        const UMAA_Common_PrimitiveConstrained_NanosecondsCount *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_NanosecondsCountPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_NanosecondsDrift*
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_NanosecondsDrift*
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_NanosecondsDrift*
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_NanosecondsDrift *out,
        const UMAA_Common_PrimitiveConstrained_NanosecondsDrift *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_NanosecondsDrift *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_NanosecondsDrift *out,
        const UMAA_Common_PrimitiveConstrained_NanosecondsDrift *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_NanosecondsDriftPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_StringLongDescription*
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_StringLongDescription*
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_StringLongDescription*
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_StringLongDescription *out,
        const UMAA_Common_PrimitiveConstrained_StringLongDescription *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_StringLongDescription *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_StringLongDescription *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_StringLongDescription *out,
        const UMAA_Common_PrimitiveConstrained_StringLongDescription *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_StringLongDescriptionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_StringShortDescription*
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_StringShortDescription*
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_StringShortDescription*
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_StringShortDescription *out,
        const UMAA_Common_PrimitiveConstrained_StringShortDescription *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_StringShortDescription *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_StringShortDescription *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_StringShortDescription *out,
        const UMAA_Common_PrimitiveConstrained_StringShortDescription *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_StringShortDescriptionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier*
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier*
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier*
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_copy_data(
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *out,
        const UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_destroy_data_w_params(
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_destroy_data_ex(
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_destroy_data(
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPluginSupport_print_data(
        const UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *out,
        const UMAA_Common_PrimitiveConstrained_UniformResourceIdentifier *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_PrimitiveConstrained_UniformResourceIdentifierPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConstrainedTypesPlugin_846145968_h */

