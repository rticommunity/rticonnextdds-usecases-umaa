

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Engineering_Coordinate_Axes.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Engineering_Coordinate_AxesPlugin_1406803632_h
#define Engineering_Coordinate_AxesPlugin_1406803632_h

#include "Engineering_Coordinate_Axes.h"

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

    #define UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_DateTimePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_DateTimePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_DateTimePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_DateTime*
    UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_DateTime*
    UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_DateTime*
    UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_DateTime *out,
        const UMAA_Common_MeasurementCoordinate_DateTime *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_DateTime *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_DateTime *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_DateTime *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DateTimePluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_DateTime *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_DateTimePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_DateTime *out,
        const UMAA_Common_MeasurementCoordinate_DateTime *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_DateTimePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_DownPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_DownPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_DownPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_DownPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_DownPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_Down*
    UMAA_Common_MeasurementCoordinate_DownPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_Down*
    UMAA_Common_MeasurementCoordinate_DownPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_Down*
    UMAA_Common_MeasurementCoordinate_DownPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_DownPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_Down *out,
        const UMAA_Common_MeasurementCoordinate_Down *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DownPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_Down *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DownPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_Down *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DownPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_Down *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DownPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_Down *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_DownPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_Down *out,
        const UMAA_Common_MeasurementCoordinate_Down *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_DownPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_DownPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_DownPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_DownPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_DownSpeed*
    UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_DownSpeed*
    UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_DownSpeed*
    UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_DownSpeed *out,
        const UMAA_Common_MeasurementCoordinate_DownSpeed *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_DownSpeed *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_DownSpeed *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_DownSpeed *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_DownSpeedPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_DownSpeed *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_DownSpeed *out,
        const UMAA_Common_MeasurementCoordinate_DownSpeed *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_DownSpeedPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_EastSpeed*
    UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_EastSpeed*
    UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_EastSpeed*
    UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_EastSpeed *out,
        const UMAA_Common_MeasurementCoordinate_EastSpeed *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_EastSpeed *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_EastSpeed *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_EastSpeed *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_EastSpeedPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_EastSpeed *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_EastSpeed *out,
        const UMAA_Common_MeasurementCoordinate_EastSpeed *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_EastSpeedPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_ForwardPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_ForwardPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_ForwardPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_Forward*
    UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_Forward*
    UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_Forward*
    UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_Forward *out,
        const UMAA_Common_MeasurementCoordinate_Forward *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_Forward *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_Forward *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_Forward *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_ForwardPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_Forward *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_ForwardPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_Forward *out,
        const UMAA_Common_MeasurementCoordinate_Forward *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_ForwardPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_ForwardSpeed*
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_ForwardSpeed*
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_ForwardSpeed*
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_ForwardSpeed *out,
        const UMAA_Common_MeasurementCoordinate_ForwardSpeed *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_ForwardSpeed *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_ForwardSpeed *out,
        const UMAA_Common_MeasurementCoordinate_ForwardSpeed *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_ForwardSpeedPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_NorthSpeed*
    UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_NorthSpeed*
    UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_NorthSpeed*
    UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_NorthSpeed *out,
        const UMAA_Common_MeasurementCoordinate_NorthSpeed *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_NorthSpeed *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_NorthSpeed *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_NorthSpeed *out,
        const UMAA_Common_MeasurementCoordinate_NorthSpeed *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_NorthSpeedPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_RadarHeight*
    UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_RadarHeight*
    UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_RadarHeight*
    UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_RadarHeight *out,
        const UMAA_Common_MeasurementCoordinate_RadarHeight *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_RadarHeight *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_RadarHeight *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_RadarHeight *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RadarHeightPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_RadarHeight *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_RadarHeight *out,
        const UMAA_Common_MeasurementCoordinate_RadarHeight *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_RadarHeightPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_RightPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_RightPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_RightPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_RightPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_RightPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_Right*
    UMAA_Common_MeasurementCoordinate_RightPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_Right*
    UMAA_Common_MeasurementCoordinate_RightPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_Right*
    UMAA_Common_MeasurementCoordinate_RightPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_RightPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_Right *out,
        const UMAA_Common_MeasurementCoordinate_Right *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RightPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_Right *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RightPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_Right *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RightPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_Right *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RightPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_Right *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_RightPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_Right *out,
        const UMAA_Common_MeasurementCoordinate_Right *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_RightPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_RightPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_RightPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_RightPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_RightSpeed*
    UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_RightSpeed*
    UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_RightSpeed*
    UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_RightSpeed *out,
        const UMAA_Common_MeasurementCoordinate_RightSpeed *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_RightSpeed *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_RightSpeed *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_RightSpeed *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_RightSpeedPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_RightSpeed *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_RightSpeed *out,
        const UMAA_Common_MeasurementCoordinate_RightSpeed *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_RightSpeedPlugin_get_serialized_key_max_size_for_keyhash(
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

#endif /* Engineering_Coordinate_AxesPlugin_1406803632_h */

