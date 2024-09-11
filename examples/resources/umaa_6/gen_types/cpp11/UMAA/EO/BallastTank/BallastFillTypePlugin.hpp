

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastFillType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastFillTypePlugin_331398751_h
#define BallastFillTypePlugin_331398751_h

#include "BallastFillType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/BallastMassTypePlugin.hpp"
#include "UMAA/Common/Measurement/LevelTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BallastTank {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            BallastFillTypeEnumPluginSupport_print_data(
                const BallastFillTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define BallastFillTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastFillTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastFillTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastFillTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastFillTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastFillTypeUnion*
            BallastFillTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastFillTypeUnion*
            BallastFillTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastFillTypeUnion*
            BallastFillTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypeUnionPluginSupport_copy_data(
                BallastFillTypeUnion *out,
                const BallastFillTypeUnion *in);

            NDDSUSERDllExport extern void 
            BallastFillTypeUnionPluginSupport_destroy_data_w_params(
                BallastFillTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastFillTypeUnionPluginSupport_destroy_data_ex(
                BallastFillTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastFillTypeUnionPluginSupport_destroy_data(
                BallastFillTypeUnion *sample);

            NDDSUSERDllExport extern void 
            BallastFillTypeUnionPluginSupport_print_data(
                const BallastFillTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillTypeUnion *out,
                const BallastFillTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastFillTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastFillTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastFillTypeUnionPlugin_deserialize_from_cdr_buffer(
                BallastFillTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastFillTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define BallastFillTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastFillTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastFillTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastFillTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastFillTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastFillType*
            BallastFillTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastFillType*
            BallastFillTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastFillType*
            BallastFillTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypePluginSupport_copy_data(
                BallastFillType *out,
                const BallastFillType *in);

            NDDSUSERDllExport extern void 
            BallastFillTypePluginSupport_destroy_data_w_params(
                BallastFillType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastFillTypePluginSupport_destroy_data_ex(
                BallastFillType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastFillTypePluginSupport_destroy_data(
                BallastFillType *sample);

            NDDSUSERDllExport extern void 
            BallastFillTypePluginSupport_print_data(
                const BallastFillType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillType *out,
                const BallastFillType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastFillTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastFillType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastFillTypePlugin_deserialize_from_cdr_buffer(
                BallastFillType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastFillTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BallastFillTypePlugin_331398751_h */

