

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RollXNEDType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RollXNEDTypePlugin_937788586_h
#define RollXNEDTypePlugin_937788586_h

#include "RollXNEDType.hpp"

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

            #define RollXNEDTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RollXNEDTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RollXNEDTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RollXNEDTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RollXNEDTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RollXNEDType*
            RollXNEDTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RollXNEDType*
            RollXNEDTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RollXNEDType*
            RollXNEDTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RollXNEDTypePluginSupport_copy_data(
                RollXNEDType *out,
                const RollXNEDType *in);

            NDDSUSERDllExport extern void 
            RollXNEDTypePluginSupport_destroy_data_w_params(
                RollXNEDType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RollXNEDTypePluginSupport_destroy_data_ex(
                RollXNEDType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RollXNEDTypePluginSupport_destroy_data(
                RollXNEDType *sample);

            NDDSUSERDllExport extern void 
            RollXNEDTypePluginSupport_print_data(
                const RollXNEDType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RollXNEDTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RollXNEDType *out,
                const RollXNEDType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RollXNEDTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RollXNEDType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RollXNEDTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RollXNEDType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RollXNEDTypePlugin_deserialize_from_cdr_buffer(
                RollXNEDType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RollXNEDTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RollXNEDTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RollXNEDTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RollXNEDTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RollXNEDTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RollXNEDType ** sample,
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

#endif /* RollXNEDTypePlugin_937788586_h */

