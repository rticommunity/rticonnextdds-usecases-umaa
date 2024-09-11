

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpBooleanValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ExpBooleanValueTypePlugin_1420624782_h
#define ExpBooleanValueTypePlugin_1420624782_h

#include "ExpBooleanValueType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            #define ExpBooleanValueTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ExpBooleanValueTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ExpBooleanValueTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ExpBooleanValueTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ExpBooleanValueTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ExpBooleanValueType*
            ExpBooleanValueTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ExpBooleanValueType*
            ExpBooleanValueTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpBooleanValueType*
            ExpBooleanValueTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ExpBooleanValueTypePluginSupport_copy_data(
                ExpBooleanValueType *out,
                const ExpBooleanValueType *in);

            NDDSUSERDllExport extern void 
            ExpBooleanValueTypePluginSupport_destroy_data_w_params(
                ExpBooleanValueType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ExpBooleanValueTypePluginSupport_destroy_data_ex(
                ExpBooleanValueType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpBooleanValueTypePluginSupport_destroy_data(
                ExpBooleanValueType *sample);

            NDDSUSERDllExport extern void 
            ExpBooleanValueTypePluginSupport_print_data(
                const ExpBooleanValueType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ExpBooleanValueTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpBooleanValueType *out,
                const ExpBooleanValueType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ExpBooleanValueTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ExpBooleanValueType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ExpBooleanValueTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ExpBooleanValueType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ExpBooleanValueTypePlugin_deserialize_from_cdr_buffer(
                ExpBooleanValueType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ExpBooleanValueTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ExpBooleanValueTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ExpBooleanValueTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ExpBooleanValueTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ExpBooleanValueTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpBooleanValueType ** sample,
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

#endif /* ExpBooleanValueTypePlugin_1420624782_h */

