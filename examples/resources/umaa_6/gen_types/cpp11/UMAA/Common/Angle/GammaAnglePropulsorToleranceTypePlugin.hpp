

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GammaAnglePropulsorToleranceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GammaAnglePropulsorToleranceTypePlugin_859415003_h
#define GammaAnglePropulsorToleranceTypePlugin_859415003_h

#include "GammaAnglePropulsorToleranceType.hpp"

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
        namespace Angle {

            #define GammaAnglePropulsorToleranceTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GammaAnglePropulsorToleranceTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GammaAnglePropulsorToleranceTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GammaAnglePropulsorToleranceTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GammaAnglePropulsorToleranceTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GammaAnglePropulsorToleranceType*
            GammaAnglePropulsorToleranceTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GammaAnglePropulsorToleranceType*
            GammaAnglePropulsorToleranceTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GammaAnglePropulsorToleranceType*
            GammaAnglePropulsorToleranceTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GammaAnglePropulsorToleranceTypePluginSupport_copy_data(
                GammaAnglePropulsorToleranceType *out,
                const GammaAnglePropulsorToleranceType *in);

            NDDSUSERDllExport extern void 
            GammaAnglePropulsorToleranceTypePluginSupport_destroy_data_w_params(
                GammaAnglePropulsorToleranceType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GammaAnglePropulsorToleranceTypePluginSupport_destroy_data_ex(
                GammaAnglePropulsorToleranceType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GammaAnglePropulsorToleranceTypePluginSupport_destroy_data(
                GammaAnglePropulsorToleranceType *sample);

            NDDSUSERDllExport extern void 
            GammaAnglePropulsorToleranceTypePluginSupport_print_data(
                const GammaAnglePropulsorToleranceType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GammaAnglePropulsorToleranceTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GammaAnglePropulsorToleranceType *out,
                const GammaAnglePropulsorToleranceType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GammaAnglePropulsorToleranceTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GammaAnglePropulsorToleranceType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GammaAnglePropulsorToleranceTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GammaAnglePropulsorToleranceType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GammaAnglePropulsorToleranceTypePlugin_deserialize_from_cdr_buffer(
                GammaAnglePropulsorToleranceType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GammaAnglePropulsorToleranceTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GammaAnglePropulsorToleranceTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GammaAnglePropulsorToleranceTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GammaAnglePropulsorToleranceTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GammaAnglePropulsorToleranceTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GammaAnglePropulsorToleranceType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Angle  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GammaAnglePropulsorToleranceTypePlugin_859415003_h */

