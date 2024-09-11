

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeographicCoordinateAxes.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeographicCoordinateAxesPlugin_1347447485_h
#define GeographicCoordinateAxesPlugin_1347447485_h

#include "GeographicCoordinateAxes.hpp"

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
        namespace MeasurementCoordinate {

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

        } /* namespace MeasurementCoordinate  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GeographicCoordinateAxesPlugin_1347447485_h */

