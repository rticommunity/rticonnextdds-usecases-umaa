

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConstrainedTypes.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConstrainedTypesPlugin_846145405_h
#define ConstrainedTypesPlugin_846145405_h

#include "ConstrainedTypes.hpp"

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
        namespace MeasurementConstrained {

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

        } /* namespace MeasurementConstrained  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConstrainedTypesPlugin_846145405_h */

