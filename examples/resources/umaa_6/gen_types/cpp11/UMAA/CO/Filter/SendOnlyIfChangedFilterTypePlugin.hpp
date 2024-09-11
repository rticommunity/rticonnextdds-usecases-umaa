

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SendOnlyIfChangedFilterType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SendOnlyIfChangedFilterTypePlugin_502959734_h
#define SendOnlyIfChangedFilterTypePlugin_502959734_h

#include "SendOnlyIfChangedFilterType.hpp"

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
    namespace CO {
        namespace Filter {

            #define SendOnlyIfChangedFilterTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SendOnlyIfChangedFilterTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SendOnlyIfChangedFilterTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SendOnlyIfChangedFilterTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SendOnlyIfChangedFilterTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SendOnlyIfChangedFilterType*
            SendOnlyIfChangedFilterTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SendOnlyIfChangedFilterType*
            SendOnlyIfChangedFilterTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SendOnlyIfChangedFilterType*
            SendOnlyIfChangedFilterTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SendOnlyIfChangedFilterTypePluginSupport_copy_data(
                SendOnlyIfChangedFilterType *out,
                const SendOnlyIfChangedFilterType *in);

            NDDSUSERDllExport extern void 
            SendOnlyIfChangedFilterTypePluginSupport_destroy_data_w_params(
                SendOnlyIfChangedFilterType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SendOnlyIfChangedFilterTypePluginSupport_destroy_data_ex(
                SendOnlyIfChangedFilterType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SendOnlyIfChangedFilterTypePluginSupport_destroy_data(
                SendOnlyIfChangedFilterType *sample);

            NDDSUSERDllExport extern void 
            SendOnlyIfChangedFilterTypePluginSupport_print_data(
                const SendOnlyIfChangedFilterType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            SendOnlyIfChangedFilterTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SendOnlyIfChangedFilterType *out,
                const SendOnlyIfChangedFilterType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SendOnlyIfChangedFilterTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SendOnlyIfChangedFilterType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SendOnlyIfChangedFilterTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SendOnlyIfChangedFilterType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SendOnlyIfChangedFilterTypePlugin_deserialize_from_cdr_buffer(
                SendOnlyIfChangedFilterType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SendOnlyIfChangedFilterTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SendOnlyIfChangedFilterTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SendOnlyIfChangedFilterTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SendOnlyIfChangedFilterTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SendOnlyIfChangedFilterTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SendOnlyIfChangedFilterType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Filter  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SendOnlyIfChangedFilterTypePlugin_502959734_h */

