

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationControlInfo.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationControlInfoPlugin_616192510_h
#define ResourceAllocationControlInfoPlugin_616192510_h

#include "ResourceAllocationControlInfo.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/SO/ResourceAllocation/ResourceAllocationControlSessionPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace ResourceAllocation {

            #define ResourceAllocationControlInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ResourceAllocationControlInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ResourceAllocationControlInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ResourceAllocationControlInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ResourceAllocationControlInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ResourceAllocationControlInfo*
            ResourceAllocationControlInfoPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ResourceAllocationControlInfo*
            ResourceAllocationControlInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ResourceAllocationControlInfo*
            ResourceAllocationControlInfoPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationControlInfoPluginSupport_copy_data(
                ResourceAllocationControlInfo *out,
                const ResourceAllocationControlInfo *in);

            NDDSUSERDllExport extern void 
            ResourceAllocationControlInfoPluginSupport_destroy_data_w_params(
                ResourceAllocationControlInfo *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ResourceAllocationControlInfoPluginSupport_destroy_data_ex(
                ResourceAllocationControlInfo *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ResourceAllocationControlInfoPluginSupport_destroy_data(
                ResourceAllocationControlInfo *sample);

            NDDSUSERDllExport extern void 
            ResourceAllocationControlInfoPluginSupport_print_data(
                const ResourceAllocationControlInfo *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationControlInfoPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationControlInfo *out,
                const ResourceAllocationControlInfo *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationControlInfoPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationControlInfo *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationControlInfoPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationControlInfo **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ResourceAllocationControlInfoPlugin_deserialize_from_cdr_buffer(
                ResourceAllocationControlInfo *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationControlInfoPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ResourceAllocationControlInfoPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationControlInfoPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ResourceAllocationControlInfoPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ResourceAllocationControlInfoPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationControlInfo ** sample,
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

#endif /* ResourceAllocationControlInfoPlugin_616192510_h */

