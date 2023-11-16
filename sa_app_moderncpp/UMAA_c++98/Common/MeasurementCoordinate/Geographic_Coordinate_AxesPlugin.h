

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Geographic_Coordinate_Axes.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Geographic_Coordinate_AxesPlugin_1573157812_h
#define Geographic_Coordinate_AxesPlugin_1573157812_h

#include "Geographic_Coordinate_Axes.h"

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

    #define UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_EllipsoidalHeight*
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_EllipsoidalHeight*
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_EllipsoidalHeight*
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *out,
        const UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *out,
        const UMAA_Common_MeasurementCoordinate_EllipsoidalHeight *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_EllipsoidalHeightPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_GeodeticLatitude*
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_GeodeticLatitude*
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_GeodeticLatitude*
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_GeodeticLatitude *out,
        const UMAA_Common_MeasurementCoordinate_GeodeticLatitude *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_GeodeticLatitude *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_GeodeticLatitude *out,
        const UMAA_Common_MeasurementCoordinate_GeodeticLatitude *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_GeodeticLatitudePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_GeodeticLongitude*
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_GeodeticLongitude*
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_GeodeticLongitude*
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_GeodeticLongitude *out,
        const UMAA_Common_MeasurementCoordinate_GeodeticLongitude *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_GeodeticLongitude *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_GeodeticLongitude *out,
        const UMAA_Common_MeasurementCoordinate_GeodeticLongitude *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_GeodeticLongitudePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_MSLHeight*
    UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_MSLHeight*
    UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_MeasurementCoordinate_MSLHeight*
    UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_copy_data(
        UMAA_Common_MeasurementCoordinate_MSLHeight *out,
        const UMAA_Common_MeasurementCoordinate_MSLHeight *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_destroy_data_w_params(
        UMAA_Common_MeasurementCoordinate_MSLHeight *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_destroy_data_ex(
        UMAA_Common_MeasurementCoordinate_MSLHeight *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_destroy_data(
        UMAA_Common_MeasurementCoordinate_MSLHeight *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_MeasurementCoordinate_MSLHeightPluginSupport_print_data(
        const UMAA_Common_MeasurementCoordinate_MSLHeight *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_MeasurementCoordinate_MSLHeight *out,
        const UMAA_Common_MeasurementCoordinate_MSLHeight *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MeasurementCoordinate_MSLHeightPlugin_get_serialized_key_max_size_for_keyhash(
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

#endif /* Geographic_Coordinate_AxesPlugin_1573157812_h */

