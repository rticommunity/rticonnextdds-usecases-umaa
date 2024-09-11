

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpDateTimeValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ExpDateTimeValueTypePlugin_1606839259_h
#define ExpDateTimeValueTypePlugin_1606839259_h

#include "ExpDateTimeValueType.hpp"

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

            #define ExpDateTimeValueTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ExpDateTimeValueTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ExpDateTimeValueTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ExpDateTimeValueTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ExpDateTimeValueTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ExpDateTimeValueType*
            ExpDateTimeValueTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ExpDateTimeValueType*
            ExpDateTimeValueTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpDateTimeValueType*
            ExpDateTimeValueTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ExpDateTimeValueTypePluginSupport_copy_data(
                ExpDateTimeValueType *out,
                const ExpDateTimeValueType *in);

            NDDSUSERDllExport extern void 
            ExpDateTimeValueTypePluginSupport_destroy_data_w_params(
                ExpDateTimeValueType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ExpDateTimeValueTypePluginSupport_destroy_data_ex(
                ExpDateTimeValueType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpDateTimeValueTypePluginSupport_destroy_data(
                ExpDateTimeValueType *sample);

            NDDSUSERDllExport extern void 
            ExpDateTimeValueTypePluginSupport_print_data(
                const ExpDateTimeValueType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ExpDateTimeValueTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpDateTimeValueType *out,
                const ExpDateTimeValueType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ExpDateTimeValueTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ExpDateTimeValueType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ExpDateTimeValueTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ExpDateTimeValueType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ExpDateTimeValueTypePlugin_deserialize_from_cdr_buffer(
                ExpDateTimeValueType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ExpDateTimeValueTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ExpDateTimeValueTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ExpDateTimeValueTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ExpDateTimeValueTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ExpDateTimeValueTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpDateTimeValueType ** sample,
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

#endif /* ExpDateTimeValueTypePlugin_1606839259_h */

