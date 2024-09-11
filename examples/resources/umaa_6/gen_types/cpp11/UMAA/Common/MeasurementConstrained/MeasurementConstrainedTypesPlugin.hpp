

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MeasurementConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MeasurementConstrainedTypesPlugin_694043226_h
#define MeasurementConstrainedTypesPlugin_694043226_h

#include "MeasurementConstrainedTypes.hpp"

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
        namespace MeasurementConstrained {

            #define AngleHalfPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AngleHalfPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AngleHalfPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AngleHalfPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AngleHalfPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AngleHalf*
            AngleHalfPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AngleHalf*
            AngleHalfPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AngleHalf*
            AngleHalfPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AngleHalfPluginSupport_copy_data(
                AngleHalf *out,
                const AngleHalf *in);

            NDDSUSERDllExport extern void 
            AngleHalfPluginSupport_destroy_data_w_params(
                AngleHalf *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AngleHalfPluginSupport_destroy_data_ex(
                AngleHalf *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AngleHalfPluginSupport_destroy_data(
                AngleHalf *sample);

            NDDSUSERDllExport extern void 
            AngleHalfPluginSupport_print_data(
                const AngleHalf *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AngleHalfPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AngleHalf *out,
                const AngleHalf *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            AngleHalfPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AngleHalfPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AngleHalfPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AngleHalfPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

        } /* namespace MeasurementConstrained  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MeasurementConstrainedTypesPlugin_694043226_h */

