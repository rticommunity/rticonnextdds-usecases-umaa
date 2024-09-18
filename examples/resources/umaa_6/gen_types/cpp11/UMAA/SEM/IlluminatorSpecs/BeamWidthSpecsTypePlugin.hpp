

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BeamWidthSpecsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BeamWidthSpecsTypePlugin_713209182_h
#define BeamWidthSpecsTypePlugin_713209182_h

#include "BeamWidthSpecsType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace IlluminatorSpecs {

            #define BeamWidthSpecsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BeamWidthSpecsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BeamWidthSpecsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BeamWidthSpecsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BeamWidthSpecsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BeamWidthSpecsType*
            BeamWidthSpecsTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BeamWidthSpecsType*
            BeamWidthSpecsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BeamWidthSpecsType*
            BeamWidthSpecsTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BeamWidthSpecsTypePluginSupport_copy_data(
                BeamWidthSpecsType *out,
                const BeamWidthSpecsType *in);

            NDDSUSERDllExport extern void 
            BeamWidthSpecsTypePluginSupport_destroy_data_w_params(
                BeamWidthSpecsType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BeamWidthSpecsTypePluginSupport_destroy_data_ex(
                BeamWidthSpecsType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BeamWidthSpecsTypePluginSupport_destroy_data(
                BeamWidthSpecsType *sample);

            NDDSUSERDllExport extern void 
            BeamWidthSpecsTypePluginSupport_print_data(
                const BeamWidthSpecsType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BeamWidthSpecsTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BeamWidthSpecsType *out,
                const BeamWidthSpecsType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BeamWidthSpecsTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BeamWidthSpecsType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BeamWidthSpecsTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BeamWidthSpecsType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BeamWidthSpecsTypePlugin_deserialize_from_cdr_buffer(
                BeamWidthSpecsType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BeamWidthSpecsTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BeamWidthSpecsTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BeamWidthSpecsTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BeamWidthSpecsTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BeamWidthSpecsTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BeamWidthSpecsType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace IlluminatorSpecs  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BeamWidthSpecsTypePlugin_713209182_h */
