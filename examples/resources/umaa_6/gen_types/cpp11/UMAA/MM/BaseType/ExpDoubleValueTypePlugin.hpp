

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpDoubleValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ExpDoubleValueTypePlugin_1953693062_h
#define ExpDoubleValueTypePlugin_1953693062_h

#include "ExpDoubleValueType.hpp"

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
    namespace MM {
        namespace BaseType {

            #define ExpDoubleValueTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ExpDoubleValueTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ExpDoubleValueTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ExpDoubleValueTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ExpDoubleValueTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ExpDoubleValueType*
            ExpDoubleValueTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ExpDoubleValueType*
            ExpDoubleValueTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpDoubleValueType*
            ExpDoubleValueTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ExpDoubleValueTypePluginSupport_copy_data(
                ExpDoubleValueType *out,
                const ExpDoubleValueType *in);

            NDDSUSERDllExport extern void 
            ExpDoubleValueTypePluginSupport_destroy_data_w_params(
                ExpDoubleValueType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ExpDoubleValueTypePluginSupport_destroy_data_ex(
                ExpDoubleValueType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpDoubleValueTypePluginSupport_destroy_data(
                ExpDoubleValueType *sample);

            NDDSUSERDllExport extern void 
            ExpDoubleValueTypePluginSupport_print_data(
                const ExpDoubleValueType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ExpDoubleValueTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpDoubleValueType *out,
                const ExpDoubleValueType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ExpDoubleValueTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ExpDoubleValueType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ExpDoubleValueTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ExpDoubleValueType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ExpDoubleValueTypePlugin_deserialize_from_cdr_buffer(
                ExpDoubleValueType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ExpDoubleValueTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ExpDoubleValueTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ExpDoubleValueTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ExpDoubleValueTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ExpDoubleValueTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpDoubleValueType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ExpDoubleValueTypePlugin_1953693062_h */

