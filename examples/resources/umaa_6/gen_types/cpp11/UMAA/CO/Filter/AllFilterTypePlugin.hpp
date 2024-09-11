

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AllFilterType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AllFilterTypePlugin_488486359_h
#define AllFilterTypePlugin_488486359_h

#include "AllFilterType.hpp"

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

            #define AllFilterTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AllFilterTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AllFilterTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AllFilterTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AllFilterTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AllFilterType*
            AllFilterTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AllFilterType*
            AllFilterTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AllFilterType*
            AllFilterTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AllFilterTypePluginSupport_copy_data(
                AllFilterType *out,
                const AllFilterType *in);

            NDDSUSERDllExport extern void 
            AllFilterTypePluginSupport_destroy_data_w_params(
                AllFilterType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AllFilterTypePluginSupport_destroy_data_ex(
                AllFilterType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AllFilterTypePluginSupport_destroy_data(
                AllFilterType *sample);

            NDDSUSERDllExport extern void 
            AllFilterTypePluginSupport_print_data(
                const AllFilterType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AllFilterTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AllFilterType *out,
                const AllFilterType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AllFilterTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AllFilterType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AllFilterTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AllFilterType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AllFilterTypePlugin_deserialize_from_cdr_buffer(
                AllFilterType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AllFilterTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AllFilterTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AllFilterTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AllFilterTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AllFilterTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AllFilterType ** sample,
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

#endif /* AllFilterTypePlugin_488486359_h */

