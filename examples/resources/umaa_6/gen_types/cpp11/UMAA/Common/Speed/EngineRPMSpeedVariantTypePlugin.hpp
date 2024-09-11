

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineRPMSpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineRPMSpeedVariantTypePlugin_1616889451_h
#define EngineRPMSpeedVariantTypePlugin_1616889451_h

#include "EngineRPMSpeedVariantType.hpp"

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
        namespace Speed {

            #define EngineRPMSpeedVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EngineRPMSpeedVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EngineRPMSpeedVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EngineRPMSpeedVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EngineRPMSpeedVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EngineRPMSpeedVariantType*
            EngineRPMSpeedVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EngineRPMSpeedVariantType*
            EngineRPMSpeedVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineRPMSpeedVariantType*
            EngineRPMSpeedVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EngineRPMSpeedVariantTypePluginSupport_copy_data(
                EngineRPMSpeedVariantType *out,
                const EngineRPMSpeedVariantType *in);

            NDDSUSERDllExport extern void 
            EngineRPMSpeedVariantTypePluginSupport_destroy_data_w_params(
                EngineRPMSpeedVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EngineRPMSpeedVariantTypePluginSupport_destroy_data_ex(
                EngineRPMSpeedVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineRPMSpeedVariantTypePluginSupport_destroy_data(
                EngineRPMSpeedVariantType *sample);

            NDDSUSERDllExport extern void 
            EngineRPMSpeedVariantTypePluginSupport_print_data(
                const EngineRPMSpeedVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            EngineRPMSpeedVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPMSpeedVariantType *out,
                const EngineRPMSpeedVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EngineRPMSpeedVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EngineRPMSpeedVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EngineRPMSpeedVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPMSpeedVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EngineRPMSpeedVariantTypePlugin_deserialize_from_cdr_buffer(
                EngineRPMSpeedVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EngineRPMSpeedVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EngineRPMSpeedVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EngineRPMSpeedVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EngineRPMSpeedVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EngineRPMSpeedVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineRPMSpeedVariantType ** sample,
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

#endif /* EngineRPMSpeedVariantTypePlugin_1616889451_h */

