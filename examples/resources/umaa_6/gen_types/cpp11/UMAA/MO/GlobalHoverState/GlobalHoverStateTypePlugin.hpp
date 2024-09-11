

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverStateTypePlugin_1807392099_h
#define GlobalHoverStateTypePlugin_1807392099_h

#include "GlobalHoverStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/GlobalHoverState/GlobalHoveringHoverTypePlugin.hpp"
#include "UMAA/MO/GlobalHoverState/GlobalTransitHoverTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalHoverState {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            GlobalHoverStateTypeEnumPluginSupport_print_data(
                const GlobalHoverStateTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define GlobalHoverStateTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalHoverStateTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalHoverStateTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalHoverStateTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalHoverStateTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalHoverStateTypeUnion*
            GlobalHoverStateTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalHoverStateTypeUnion*
            GlobalHoverStateTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalHoverStateTypeUnion*
            GlobalHoverStateTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypeUnionPluginSupport_copy_data(
                GlobalHoverStateTypeUnion *out,
                const GlobalHoverStateTypeUnion *in);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypeUnionPluginSupport_destroy_data_w_params(
                GlobalHoverStateTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypeUnionPluginSupport_destroy_data_ex(
                GlobalHoverStateTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypeUnionPluginSupport_destroy_data(
                GlobalHoverStateTypeUnion *sample);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypeUnionPluginSupport_print_data(
                const GlobalHoverStateTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateTypeUnion *out,
                const GlobalHoverStateTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalHoverStateTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalHoverStateTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalHoverStateTypeUnionPlugin_deserialize_from_cdr_buffer(
                GlobalHoverStateTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalHoverStateTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define GlobalHoverStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalHoverStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalHoverStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalHoverStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalHoverStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalHoverStateType*
            GlobalHoverStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalHoverStateType*
            GlobalHoverStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalHoverStateType*
            GlobalHoverStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypePluginSupport_copy_data(
                GlobalHoverStateType *out,
                const GlobalHoverStateType *in);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePluginSupport_destroy_data_w_params(
                GlobalHoverStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePluginSupport_destroy_data_ex(
                GlobalHoverStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePluginSupport_destroy_data(
                GlobalHoverStateType *sample);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePluginSupport_print_data(
                const GlobalHoverStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateType *out,
                const GlobalHoverStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalHoverStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalHoverStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalHoverStateTypePlugin_deserialize_from_cdr_buffer(
                GlobalHoverStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalHoverStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace GlobalHoverState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalHoverStateTypePlugin_1807392099_h */

