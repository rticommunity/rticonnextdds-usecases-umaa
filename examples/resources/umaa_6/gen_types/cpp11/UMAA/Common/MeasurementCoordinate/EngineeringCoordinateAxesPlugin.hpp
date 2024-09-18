

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineeringCoordinateAxes.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineeringCoordinateAxesPlugin_1521922864_h
#define EngineeringCoordinateAxesPlugin_1521922864_h

#include "EngineeringCoordinateAxes.hpp"

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

            #define DownPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DownPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DownPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DownPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DownPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Down*
            DownPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Down*
            DownPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Down*
            DownPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DownPluginSupport_copy_data(
                Down *out,
                const Down *in);

            NDDSUSERDllExport extern void 
            DownPluginSupport_destroy_data_w_params(
                Down *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DownPluginSupport_destroy_data_ex(
                Down *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DownPluginSupport_destroy_data(
                Down *sample);

            NDDSUSERDllExport extern void 
            DownPluginSupport_print_data(
                const Down *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DownPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Down *out,
                const Down *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DownPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DownPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DownPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DownPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define DownSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DownSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DownSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DownSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DownSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DownSpeed*
            DownSpeedPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DownSpeed*
            DownSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DownSpeed*
            DownSpeedPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DownSpeedPluginSupport_copy_data(
                DownSpeed *out,
                const DownSpeed *in);

            NDDSUSERDllExport extern void 
            DownSpeedPluginSupport_destroy_data_w_params(
                DownSpeed *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DownSpeedPluginSupport_destroy_data_ex(
                DownSpeed *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DownSpeedPluginSupport_destroy_data(
                DownSpeed *sample);

            NDDSUSERDllExport extern void 
            DownSpeedPluginSupport_print_data(
                const DownSpeed *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DownSpeedPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DownSpeed *out,
                const DownSpeed *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            DownSpeedPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DownSpeedPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DownSpeedPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DownSpeedPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define EastSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EastSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EastSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EastSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EastSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EastSpeed*
            EastSpeedPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EastSpeed*
            EastSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EastSpeed*
            EastSpeedPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EastSpeedPluginSupport_copy_data(
                EastSpeed *out,
                const EastSpeed *in);

            NDDSUSERDllExport extern void 
            EastSpeedPluginSupport_destroy_data_w_params(
                EastSpeed *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EastSpeedPluginSupport_destroy_data_ex(
                EastSpeed *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EastSpeedPluginSupport_destroy_data(
                EastSpeed *sample);

            NDDSUSERDllExport extern void 
            EastSpeedPluginSupport_print_data(
                const EastSpeed *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            EastSpeedPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EastSpeed *out,
                const EastSpeed *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            EastSpeedPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EastSpeedPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EastSpeedPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EastSpeedPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define ForwardPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ForwardPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ForwardPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ForwardPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ForwardPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Forward*
            ForwardPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Forward*
            ForwardPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Forward*
            ForwardPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ForwardPluginSupport_copy_data(
                Forward *out,
                const Forward *in);

            NDDSUSERDllExport extern void 
            ForwardPluginSupport_destroy_data_w_params(
                Forward *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ForwardPluginSupport_destroy_data_ex(
                Forward *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ForwardPluginSupport_destroy_data(
                Forward *sample);

            NDDSUSERDllExport extern void 
            ForwardPluginSupport_print_data(
                const Forward *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ForwardPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Forward *out,
                const Forward *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ForwardPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ForwardPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ForwardPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ForwardPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            #define NorthSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define NorthSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NorthSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define NorthSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NorthSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NorthSpeed*
            NorthSpeedPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NorthSpeed*
            NorthSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NorthSpeed*
            NorthSpeedPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NorthSpeedPluginSupport_copy_data(
                NorthSpeed *out,
                const NorthSpeed *in);

            NDDSUSERDllExport extern void 
            NorthSpeedPluginSupport_destroy_data_w_params(
                NorthSpeed *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NorthSpeedPluginSupport_destroy_data_ex(
                NorthSpeed *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NorthSpeedPluginSupport_destroy_data(
                NorthSpeed *sample);

            NDDSUSERDllExport extern void 
            NorthSpeedPluginSupport_print_data(
                const NorthSpeed *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NorthSpeedPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NorthSpeed *out,
                const NorthSpeed *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            NorthSpeedPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NorthSpeedPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NorthSpeedPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NorthSpeedPlugin_get_serialized_key_max_size_for_keyhash(
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

#endif /* EngineeringCoordinateAxesPlugin_1521922864_h */
