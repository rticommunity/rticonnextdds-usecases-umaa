

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftStateTypePlugin_190884955_h
#define GlobalDriftStateTypePlugin_190884955_h

#include "GlobalDriftStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/GlobalDriftState/GlobalRegionDriftTypePlugin.hpp"
#include "UMAA/MO/GlobalDriftState/GlobalTransitDriftTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalDriftState {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            GlobalDriftStateTypeEnumPluginSupport_print_data(
                const GlobalDriftStateTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define GlobalDriftStateTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalDriftStateTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalDriftStateTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalDriftStateTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalDriftStateTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalDriftStateTypeUnion*
            GlobalDriftStateTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalDriftStateTypeUnion*
            GlobalDriftStateTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDriftStateTypeUnion*
            GlobalDriftStateTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypeUnionPluginSupport_copy_data(
                GlobalDriftStateTypeUnion *out,
                const GlobalDriftStateTypeUnion *in);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypeUnionPluginSupport_destroy_data_w_params(
                GlobalDriftStateTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypeUnionPluginSupport_destroy_data_ex(
                GlobalDriftStateTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypeUnionPluginSupport_destroy_data(
                GlobalDriftStateTypeUnion *sample);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypeUnionPluginSupport_print_data(
                const GlobalDriftStateTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateTypeUnion *out,
                const GlobalDriftStateTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalDriftStateTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalDriftStateTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalDriftStateTypeUnionPlugin_deserialize_from_cdr_buffer(
                GlobalDriftStateTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalDriftStateTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define GlobalDriftStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalDriftStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalDriftStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalDriftStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalDriftStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalDriftStateType*
            GlobalDriftStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalDriftStateType*
            GlobalDriftStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDriftStateType*
            GlobalDriftStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypePluginSupport_copy_data(
                GlobalDriftStateType *out,
                const GlobalDriftStateType *in);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePluginSupport_destroy_data_w_params(
                GlobalDriftStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePluginSupport_destroy_data_ex(
                GlobalDriftStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePluginSupport_destroy_data(
                GlobalDriftStateType *sample);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePluginSupport_print_data(
                const GlobalDriftStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateType *out,
                const GlobalDriftStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalDriftStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalDriftStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalDriftStateTypePlugin_deserialize_from_cdr_buffer(
                GlobalDriftStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalDriftStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace GlobalDriftState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalDriftStateTypePlugin_190884955_h */

