

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSConfigSearchVolumeType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FLSConfigSearchVolumeTypePlugin_1736191800_h
#define FLSConfigSearchVolumeTypePlugin_1736191800_h

#include "FLSConfigSearchVolumeType.hpp"

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
    namespace SEM {
        namespace BaseType {

            #define FLSConfigSearchVolumeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FLSConfigSearchVolumeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FLSConfigSearchVolumeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FLSConfigSearchVolumeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FLSConfigSearchVolumeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FLSConfigSearchVolumeType*
            FLSConfigSearchVolumeTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FLSConfigSearchVolumeType*
            FLSConfigSearchVolumeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FLSConfigSearchVolumeType*
            FLSConfigSearchVolumeTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FLSConfigSearchVolumeTypePluginSupport_copy_data(
                FLSConfigSearchVolumeType *out,
                const FLSConfigSearchVolumeType *in);

            NDDSUSERDllExport extern void 
            FLSConfigSearchVolumeTypePluginSupport_destroy_data_w_params(
                FLSConfigSearchVolumeType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FLSConfigSearchVolumeTypePluginSupport_destroy_data_ex(
                FLSConfigSearchVolumeType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FLSConfigSearchVolumeTypePluginSupport_destroy_data(
                FLSConfigSearchVolumeType *sample);

            NDDSUSERDllExport extern void 
            FLSConfigSearchVolumeTypePluginSupport_print_data(
                const FLSConfigSearchVolumeType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            FLSConfigSearchVolumeTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FLSConfigSearchVolumeType *out,
                const FLSConfigSearchVolumeType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FLSConfigSearchVolumeTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FLSConfigSearchVolumeType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FLSConfigSearchVolumeTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FLSConfigSearchVolumeType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FLSConfigSearchVolumeTypePlugin_deserialize_from_cdr_buffer(
                FLSConfigSearchVolumeType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FLSConfigSearchVolumeTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FLSConfigSearchVolumeTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FLSConfigSearchVolumeTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FLSConfigSearchVolumeTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FLSConfigSearchVolumeTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FLSConfigSearchVolumeType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace BaseType  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FLSConfigSearchVolumeTypePlugin_1736191800_h */

