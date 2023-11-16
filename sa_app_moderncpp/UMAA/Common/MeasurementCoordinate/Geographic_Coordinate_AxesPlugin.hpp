

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Geographic_Coordinate_Axes.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Geographic_Coordinate_AxesPlugin_1573157812_h
#define Geographic_Coordinate_AxesPlugin_1573157812_h

#include "Geographic_Coordinate_Axes.hpp"

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
        namespace MeasurementCoordinate {

            #define EllipsoidalHeightPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EllipsoidalHeightPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EllipsoidalHeightPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EllipsoidalHeightPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EllipsoidalHeightPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EllipsoidalHeight*
            EllipsoidalHeightPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EllipsoidalHeight*
            EllipsoidalHeightPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EllipsoidalHeight*
            EllipsoidalHeightPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EllipsoidalHeightPluginSupport_copy_data(
                EllipsoidalHeight *out,
                const EllipsoidalHeight *in);

            NDDSUSERDllExport extern void 
            EllipsoidalHeightPluginSupport_destroy_data_w_params(
                EllipsoidalHeight *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EllipsoidalHeightPluginSupport_destroy_data_ex(
                EllipsoidalHeight *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EllipsoidalHeightPluginSupport_destroy_data(
                EllipsoidalHeight *sample);

            NDDSUSERDllExport extern void 
            EllipsoidalHeightPluginSupport_print_data(
                const EllipsoidalHeight *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            EllipsoidalHeightPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EllipsoidalHeight *out,
                const EllipsoidalHeight *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            EllipsoidalHeightPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EllipsoidalHeightPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EllipsoidalHeightPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EllipsoidalHeightPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define GeodeticLatitudePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeodeticLatitudePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeodeticLatitudePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeodeticLatitudePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeodeticLatitudePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeodeticLatitude*
            GeodeticLatitudePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeodeticLatitude*
            GeodeticLatitudePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeodeticLatitude*
            GeodeticLatitudePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeodeticLatitudePluginSupport_copy_data(
                GeodeticLatitude *out,
                const GeodeticLatitude *in);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePluginSupport_destroy_data_w_params(
                GeodeticLatitude *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePluginSupport_destroy_data_ex(
                GeodeticLatitude *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePluginSupport_destroy_data(
                GeodeticLatitude *sample);

            NDDSUSERDllExport extern void 
            GeodeticLatitudePluginSupport_print_data(
                const GeodeticLatitude *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GeodeticLatitudePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLatitude *out,
                const GeodeticLatitude *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            GeodeticLatitudePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeodeticLatitudePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeodeticLatitudePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeodeticLatitudePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define GeodeticLongitudePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeodeticLongitudePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeodeticLongitudePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeodeticLongitudePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeodeticLongitudePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeodeticLongitude*
            GeodeticLongitudePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeodeticLongitude*
            GeodeticLongitudePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeodeticLongitude*
            GeodeticLongitudePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeodeticLongitudePluginSupport_copy_data(
                GeodeticLongitude *out,
                const GeodeticLongitude *in);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePluginSupport_destroy_data_w_params(
                GeodeticLongitude *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePluginSupport_destroy_data_ex(
                GeodeticLongitude *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePluginSupport_destroy_data(
                GeodeticLongitude *sample);

            NDDSUSERDllExport extern void 
            GeodeticLongitudePluginSupport_print_data(
                const GeodeticLongitude *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GeodeticLongitudePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeodeticLongitude *out,
                const GeodeticLongitude *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            GeodeticLongitudePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeodeticLongitudePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeodeticLongitudePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeodeticLongitudePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define MSLHeightPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MSLHeightPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MSLHeightPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MSLHeightPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MSLHeightPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MSLHeight*
            MSLHeightPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MSLHeight*
            MSLHeightPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MSLHeight*
            MSLHeightPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MSLHeightPluginSupport_copy_data(
                MSLHeight *out,
                const MSLHeight *in);

            NDDSUSERDllExport extern void 
            MSLHeightPluginSupport_destroy_data_w_params(
                MSLHeight *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MSLHeightPluginSupport_destroy_data_ex(
                MSLHeight *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MSLHeightPluginSupport_destroy_data(
                MSLHeight *sample);

            NDDSUSERDllExport extern void 
            MSLHeightPluginSupport_print_data(
                const MSLHeight *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MSLHeightPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MSLHeight *out,
                const MSLHeight *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MSLHeightPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MSLHeightPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MSLHeightPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MSLHeightPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

        } /* namespace MeasurementCoordinate  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Geographic_Coordinate_AxesPlugin_1573157812_h */

