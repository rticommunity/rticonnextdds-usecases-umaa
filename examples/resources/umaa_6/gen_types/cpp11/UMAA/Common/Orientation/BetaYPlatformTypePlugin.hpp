

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BetaYPlatformType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BetaYPlatformTypePlugin_844967588_h
#define BetaYPlatformTypePlugin_844967588_h

#include "BetaYPlatformType.hpp"

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
        namespace Orientation {

            #define BetaYPlatformTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BetaYPlatformTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BetaYPlatformTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BetaYPlatformTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BetaYPlatformTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BetaYPlatformType*
            BetaYPlatformTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BetaYPlatformType*
            BetaYPlatformTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BetaYPlatformType*
            BetaYPlatformTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BetaYPlatformTypePluginSupport_copy_data(
                BetaYPlatformType *out,
                const BetaYPlatformType *in);

            NDDSUSERDllExport extern void 
            BetaYPlatformTypePluginSupport_destroy_data_w_params(
                BetaYPlatformType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BetaYPlatformTypePluginSupport_destroy_data_ex(
                BetaYPlatformType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BetaYPlatformTypePluginSupport_destroy_data(
                BetaYPlatformType *sample);

            NDDSUSERDllExport extern void 
            BetaYPlatformTypePluginSupport_print_data(
                const BetaYPlatformType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BetaYPlatformTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BetaYPlatformType *out,
                const BetaYPlatformType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BetaYPlatformTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BetaYPlatformType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BetaYPlatformTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BetaYPlatformType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BetaYPlatformTypePlugin_deserialize_from_cdr_buffer(
                BetaYPlatformType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BetaYPlatformTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BetaYPlatformTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BetaYPlatformTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BetaYPlatformTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BetaYPlatformTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BetaYPlatformType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BetaYPlatformTypePlugin_844967588_h */

