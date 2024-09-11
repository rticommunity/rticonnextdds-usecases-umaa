

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleSpeedModeVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VehicleSpeedModeVariantTypePlugin_902773669_h
#define VehicleSpeedModeVariantTypePlugin_902773669_h

#include "VehicleSpeedModeVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Speed {

            #define VehicleSpeedModeVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VehicleSpeedModeVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VehicleSpeedModeVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VehicleSpeedModeVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VehicleSpeedModeVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VehicleSpeedModeVariantType*
            VehicleSpeedModeVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VehicleSpeedModeVariantType*
            VehicleSpeedModeVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VehicleSpeedModeVariantType*
            VehicleSpeedModeVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VehicleSpeedModeVariantTypePluginSupport_copy_data(
                VehicleSpeedModeVariantType *out,
                const VehicleSpeedModeVariantType *in);

            NDDSUSERDllExport extern void 
            VehicleSpeedModeVariantTypePluginSupport_destroy_data_w_params(
                VehicleSpeedModeVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VehicleSpeedModeVariantTypePluginSupport_destroy_data_ex(
                VehicleSpeedModeVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VehicleSpeedModeVariantTypePluginSupport_destroy_data(
                VehicleSpeedModeVariantType *sample);

            NDDSUSERDllExport extern void 
            VehicleSpeedModeVariantTypePluginSupport_print_data(
                const VehicleSpeedModeVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            VehicleSpeedModeVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VehicleSpeedModeVariantType *out,
                const VehicleSpeedModeVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VehicleSpeedModeVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VehicleSpeedModeVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VehicleSpeedModeVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VehicleSpeedModeVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VehicleSpeedModeVariantTypePlugin_deserialize_from_cdr_buffer(
                VehicleSpeedModeVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VehicleSpeedModeVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VehicleSpeedModeVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VehicleSpeedModeVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VehicleSpeedModeVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VehicleSpeedModeVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VehicleSpeedModeVariantType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Speed  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VehicleSpeedModeVariantTypePlugin_902773669_h */

