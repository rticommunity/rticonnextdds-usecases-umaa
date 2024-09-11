

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityInfo.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationPriorityInfoPlugin_2029097673_h
#define ResourceAllocationPriorityInfoPlugin_2029097673_h

#include "ResourceAllocationPriorityInfo.hpp"

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

            #define ResourceAllocationPriorityInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationPriorityInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationPriorityInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationPriorityInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationPriorityInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationPriorityInfo*
            ResourceAllocationPriorityInfoPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationPriorityInfo*
            ResourceAllocationPriorityInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationPriorityInfo*
            ResourceAllocationPriorityInfoPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityInfoPluginSupport_copy_data(
                ResourceAllocationPriorityInfo *out,
                const ResourceAllocationPriorityInfo *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityInfoPluginSupport_destroy_data_w_params(
                ResourceAllocationPriorityInfo *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityInfoPluginSupport_destroy_data_ex(
                ResourceAllocationPriorityInfo *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityInfoPluginSupport_destroy_data(
                ResourceAllocationPriorityInfo *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationPriorityInfoPluginSupport_print_data(
                const ResourceAllocationPriorityInfo *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityInfoPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityInfo *out,
                const ResourceAllocationPriorityInfo *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationPriorityInfoPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationPriorityInfo *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityInfoPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityInfo **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationPriorityInfoPlugin_deserialize_from_cdr_buffer(
                ResourceAllocationPriorityInfo *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationPriorityInfoPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationPriorityInfoPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationPriorityInfoPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationPriorityInfoPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationPriorityInfoPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationPriorityInfo ** sample,
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

#endif /* ResourceAllocationPriorityInfoPlugin_2029097673_h */

