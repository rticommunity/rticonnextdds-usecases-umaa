

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PitchYNEDType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PitchYNEDTypePlugin_818392246_h
#define PitchYNEDTypePlugin_818392246_h

#include "PitchYNEDType.hpp"

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

            #define PitchYNEDTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PitchYNEDTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PitchYNEDTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PitchYNEDTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PitchYNEDTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PitchYNEDType*
            PitchYNEDTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PitchYNEDType*
            PitchYNEDTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PitchYNEDType*
            PitchYNEDTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PitchYNEDTypePluginSupport_copy_data(
                PitchYNEDType *out,
                const PitchYNEDType *in);

            NDDSUSERDllExport extern void 
            PitchYNEDTypePluginSupport_destroy_data_w_params(
                PitchYNEDType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PitchYNEDTypePluginSupport_destroy_data_ex(
                PitchYNEDType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PitchYNEDTypePluginSupport_destroy_data(
                PitchYNEDType *sample);

            NDDSUSERDllExport extern void 
            PitchYNEDTypePluginSupport_print_data(
                const PitchYNEDType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PitchYNEDTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PitchYNEDType *out,
                const PitchYNEDType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PitchYNEDTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PitchYNEDType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PitchYNEDTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PitchYNEDType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PitchYNEDTypePlugin_deserialize_from_cdr_buffer(
                PitchYNEDType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PitchYNEDTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PitchYNEDTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PitchYNEDTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PitchYNEDTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PitchYNEDTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PitchYNEDType ** sample,
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

#endif /* PitchYNEDTypePlugin_818392246_h */

