

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationDefinitionType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationDefinitionTypePlugin_1903603243_h
#define ResourceAllocationDefinitionTypePlugin_1903603243_h

#include "ResourceAllocationDefinitionType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace ResourceAllocation {

            #define ResourceAllocationDefinitionTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationDefinitionTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationDefinitionTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationDefinitionTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationDefinitionTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationDefinitionType*
            ResourceAllocationDefinitionTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationDefinitionType*
            ResourceAllocationDefinitionTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationDefinitionType*
            ResourceAllocationDefinitionTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationDefinitionTypePluginSupport_copy_data(
                ResourceAllocationDefinitionType *out,
                const ResourceAllocationDefinitionType *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationDefinitionTypePluginSupport_destroy_data_w_params(
                ResourceAllocationDefinitionType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationDefinitionTypePluginSupport_destroy_data_ex(
                ResourceAllocationDefinitionType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationDefinitionTypePluginSupport_destroy_data(
                ResourceAllocationDefinitionType *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationDefinitionTypePluginSupport_print_data(
                const ResourceAllocationDefinitionType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationDefinitionTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationDefinitionType *out,
                const ResourceAllocationDefinitionType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationDefinitionTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationDefinitionType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationDefinitionTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationDefinitionType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationDefinitionTypePlugin_deserialize_from_cdr_buffer(
                ResourceAllocationDefinitionType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationDefinitionTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationDefinitionTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationDefinitionTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationDefinitionTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationDefinitionTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationDefinitionType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace ResourceAllocation  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ResourceAllocationDefinitionTypePlugin_1903603243_h */

