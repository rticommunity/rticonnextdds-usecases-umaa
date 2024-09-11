

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeoPosition3DWGS84.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeoPosition3DWGS84Plugin_1437946805_h
#define GeoPosition3DWGS84Plugin_1437946805_h

#include "GeoPosition3DWGS84.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define GeoPosition3DWGS84Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeoPosition3DWGS84Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeoPosition3DWGS84Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeoPosition3DWGS84Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeoPosition3DWGS84Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeoPosition3DWGS84*
            GeoPosition3DWGS84PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeoPosition3DWGS84*
            GeoPosition3DWGS84PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeoPosition3DWGS84*
            GeoPosition3DWGS84PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeoPosition3DWGS84PluginSupport_copy_data(
                GeoPosition3DWGS84 *out,
                const GeoPosition3DWGS84 *in);

            NDDSUSERDllExport extern void 
            GeoPosition3DWGS84PluginSupport_destroy_data_w_params(
                GeoPosition3DWGS84 *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeoPosition3DWGS84PluginSupport_destroy_data_ex(
                GeoPosition3DWGS84 *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeoPosition3DWGS84PluginSupport_destroy_data(
                GeoPosition3DWGS84 *sample);

            NDDSUSERDllExport extern void 
            GeoPosition3DWGS84PluginSupport_print_data(
                const GeoPosition3DWGS84 *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GeoPosition3DWGS84Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeoPosition3DWGS84 *out,
                const GeoPosition3DWGS84 *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GeoPosition3DWGS84Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GeoPosition3DWGS84 *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GeoPosition3DWGS84Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GeoPosition3DWGS84 **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeoPosition3DWGS84Plugin_deserialize_from_cdr_buffer(
                GeoPosition3DWGS84 *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GeoPosition3DWGS84Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeoPosition3DWGS84Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeoPosition3DWGS84Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeoPosition3DWGS84Plugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GeoPosition3DWGS84Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GeoPosition3DWGS84 ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GeoPosition3DWGS84Plugin_1437946805_h */

