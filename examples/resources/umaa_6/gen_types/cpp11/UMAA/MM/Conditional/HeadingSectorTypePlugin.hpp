

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingSectorType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingSectorTypePlugin_1640221822_h
#define HeadingSectorTypePlugin_1640221822_h

#include "HeadingSectorType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace Conditional {

            #define HeadingSectorTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingSectorTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingSectorTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingSectorTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingSectorTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingSectorType*
            HeadingSectorTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingSectorType*
            HeadingSectorTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingSectorType*
            HeadingSectorTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorTypePluginSupport_copy_data(
                HeadingSectorType *out,
                const HeadingSectorType *in);

            NDDSUSERDllExport extern void 
            HeadingSectorTypePluginSupport_destroy_data_w_params(
                HeadingSectorType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingSectorTypePluginSupport_destroy_data_ex(
                HeadingSectorType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingSectorTypePluginSupport_destroy_data(
                HeadingSectorType *sample);

            NDDSUSERDllExport extern void 
            HeadingSectorTypePluginSupport_print_data(
                const HeadingSectorType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingSectorType *out,
                const HeadingSectorType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HeadingSectorTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HeadingSectorType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HeadingSectorType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HeadingSectorTypePlugin_deserialize_from_cdr_buffer(
                HeadingSectorType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HeadingSectorTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingSectorTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingSectorTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingSectorTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HeadingSectorTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HeadingSectorType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Conditional  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HeadingSectorTypePlugin_1640221822_h */

