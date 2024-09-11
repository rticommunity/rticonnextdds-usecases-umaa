

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Acceleration3DPlatformXYZ.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Acceleration3DPlatformXYZPlugin_1804486619_h
#define Acceleration3DPlatformXYZPlugin_1804486619_h

#include "Acceleration3DPlatformXYZ.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define Acceleration3DPlatformXYZPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Acceleration3DPlatformXYZPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Acceleration3DPlatformXYZPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Acceleration3DPlatformXYZPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Acceleration3DPlatformXYZPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Acceleration3DPlatformXYZ*
            Acceleration3DPlatformXYZPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Acceleration3DPlatformXYZ*
            Acceleration3DPlatformXYZPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Acceleration3DPlatformXYZ*
            Acceleration3DPlatformXYZPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Acceleration3DPlatformXYZPluginSupport_copy_data(
                Acceleration3DPlatformXYZ *out,
                const Acceleration3DPlatformXYZ *in);

            NDDSUSERDllExport extern void 
            Acceleration3DPlatformXYZPluginSupport_destroy_data_w_params(
                Acceleration3DPlatformXYZ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Acceleration3DPlatformXYZPluginSupport_destroy_data_ex(
                Acceleration3DPlatformXYZ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Acceleration3DPlatformXYZPluginSupport_destroy_data(
                Acceleration3DPlatformXYZ *sample);

            NDDSUSERDllExport extern void 
            Acceleration3DPlatformXYZPluginSupport_print_data(
                const Acceleration3DPlatformXYZ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Acceleration3DPlatformXYZPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Acceleration3DPlatformXYZ *out,
                const Acceleration3DPlatformXYZ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Acceleration3DPlatformXYZPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Acceleration3DPlatformXYZ *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Acceleration3DPlatformXYZPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Acceleration3DPlatformXYZ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Acceleration3DPlatformXYZPlugin_deserialize_from_cdr_buffer(
                Acceleration3DPlatformXYZ *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Acceleration3DPlatformXYZPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Acceleration3DPlatformXYZPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Acceleration3DPlatformXYZPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Acceleration3DPlatformXYZPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Acceleration3DPlatformXYZPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Acceleration3DPlatformXYZ ** sample,
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

#endif /* Acceleration3DPlatformXYZPlugin_1804486619_h */

