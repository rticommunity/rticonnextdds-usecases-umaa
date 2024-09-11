

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MessageFilterType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MessageFilterTypePlugin_862856399_h
#define MessageFilterTypePlugin_862856399_h

#include "MessageFilterType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/CO/Filter/AllFilterTypePlugin.hpp"
#include "UMAA/CO/Filter/DecimateStructureFilterTypePlugin.hpp"
#include "UMAA/CO/Filter/SendOnlyIfChangedFilterTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace CO {
        namespace Filter {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MessageFilterTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            MessageFilterTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MessageFilterTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            MessageFilterTypeEnumPluginSupport_print_data(
                const MessageFilterTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define MessageFilterTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MessageFilterTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MessageFilterTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MessageFilterTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MessageFilterTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MessageFilterTypeUnion*
            MessageFilterTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MessageFilterTypeUnion*
            MessageFilterTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MessageFilterTypeUnion*
            MessageFilterTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterTypeUnionPluginSupport_copy_data(
                MessageFilterTypeUnion *out,
                const MessageFilterTypeUnion *in);

            NDDSUSERDllExport extern void 
            MessageFilterTypeUnionPluginSupport_destroy_data_w_params(
                MessageFilterTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MessageFilterTypeUnionPluginSupport_destroy_data_ex(
                MessageFilterTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MessageFilterTypeUnionPluginSupport_destroy_data(
                MessageFilterTypeUnion *sample);

            NDDSUSERDllExport extern void 
            MessageFilterTypeUnionPluginSupport_print_data(
                const MessageFilterTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MessageFilterTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterTypeUnion *out,
                const MessageFilterTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MessageFilterTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MessageFilterTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MessageFilterTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MessageFilterTypeUnionPlugin_deserialize_from_cdr_buffer(
                MessageFilterTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MessageFilterTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MessageFilterTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MessageFilterTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MessageFilterTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define MessageFilterTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MessageFilterTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MessageFilterTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MessageFilterTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MessageFilterTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MessageFilterType*
            MessageFilterTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MessageFilterType*
            MessageFilterTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MessageFilterType*
            MessageFilterTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterTypePluginSupport_copy_data(
                MessageFilterType *out,
                const MessageFilterType *in);

            NDDSUSERDllExport extern void 
            MessageFilterTypePluginSupport_destroy_data_w_params(
                MessageFilterType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MessageFilterTypePluginSupport_destroy_data_ex(
                MessageFilterType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MessageFilterTypePluginSupport_destroy_data(
                MessageFilterType *sample);

            NDDSUSERDllExport extern void 
            MessageFilterTypePluginSupport_print_data(
                const MessageFilterType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MessageFilterTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterType *out,
                const MessageFilterType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MessageFilterTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MessageFilterType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MessageFilterTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MessageFilterTypePlugin_deserialize_from_cdr_buffer(
                MessageFilterType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MessageFilterTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MessageFilterTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MessageFilterTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MessageFilterTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterType ** sample,
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

#endif /* MessageFilterTypePlugin_862856399_h */

