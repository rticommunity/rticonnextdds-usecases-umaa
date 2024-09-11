

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DepthToleranceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DepthToleranceTypePlugin_1342111669_h
#define DepthToleranceTypePlugin_1342111669_h

#include "DepthToleranceType.hpp"

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

            #define DepthToleranceTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DepthToleranceTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DepthToleranceTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DepthToleranceTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DepthToleranceTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DepthToleranceType*
            DepthToleranceTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DepthToleranceType*
            DepthToleranceTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DepthToleranceType*
            DepthToleranceTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DepthToleranceTypePluginSupport_copy_data(
                DepthToleranceType *out,
                const DepthToleranceType *in);

            NDDSUSERDllExport extern void 
            DepthToleranceTypePluginSupport_destroy_data_w_params(
                DepthToleranceType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DepthToleranceTypePluginSupport_destroy_data_ex(
                DepthToleranceType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DepthToleranceTypePluginSupport_destroy_data(
                DepthToleranceType *sample);

            NDDSUSERDllExport extern void 
            DepthToleranceTypePluginSupport_print_data(
                const DepthToleranceType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DepthToleranceTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DepthToleranceType *out,
                const DepthToleranceType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DepthToleranceTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DepthToleranceType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DepthToleranceTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DepthToleranceType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DepthToleranceTypePlugin_deserialize_from_cdr_buffer(
                DepthToleranceType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DepthToleranceTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DepthToleranceTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DepthToleranceTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DepthToleranceTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DepthToleranceTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DepthToleranceType ** sample,
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

#endif /* DepthToleranceTypePlugin_1342111669_h */

