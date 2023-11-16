

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstrainedTypesPlugin_846145405_h
#define ConstrainedTypesPlugin_846145405_h

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

    #define UMAA_Common_MeasurementConstrained_PercentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementConstrained_PercentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementConstrained_PercentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementConstrained_PercentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementConstrained_PercentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementConstrained_Percent*
    UMAA_Common_MeasurementConstrained_PercentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementConstrained_Percent*
    UMAA_Common_MeasurementConstrained_PercentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementConstrained_Percent*
    UMAA_Common_MeasurementConstrained_PercentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementConstrained_PercentPluginSupport_copy_data(
        UMAA_Common_MeasurementConstrained_Percent *out,
        const UMAA_Common_MeasurementConstrained_Percent *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementConstrained_PercentPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementConstrained_Percent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementConstrained_PercentPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementConstrained_Percent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementConstrained_PercentPluginSupport_destroy_data(
        UMAA_Common_MeasurementConstrained_Percent *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementConstrained_PercentPluginSupport_print_data(
        const UMAA_Common_MeasurementConstrained_Percent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementConstrained_PercentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementConstrained_Percent *out,
        const UMAA_Common_MeasurementConstrained_Percent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementConstrained_PercentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementConstrained_PercentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementConstrained_PercentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementConstrained_PercentPlugin_get_serialized_key_max_size_for_keyhash(
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

#endif /* ConstrainedTypesPlugin_846145405_h */

