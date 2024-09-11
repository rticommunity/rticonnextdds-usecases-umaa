

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ExpValueTypePlugin_1760834647_h
#define ExpValueTypePlugin_1760834647_h

#include "ExpValueType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MM/BaseType/ExpBinaryValueTypePlugin.hpp"
#include "UMAA/MM/BaseType/ExpBooleanValueTypePlugin.hpp"
#include "UMAA/MM/BaseType/ExpByteValueTypePlugin.hpp"
#include "UMAA/MM/BaseType/ExpCharValueTypePlugin.hpp"
#include "UMAA/MM/BaseType/ExpDateTimeValueTypePlugin.hpp"
#include "UMAA/MM/BaseType/ExpDoubleValueTypePlugin.hpp"
#include "UMAA/MM/BaseType/ExpIntegerValueTypePlugin.hpp"
#include "UMAA/MM/BaseType/ExpLongLongValueTypePlugin.hpp"
#include "UMAA/MM/BaseType/ExpStringValueTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ExpValueTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ExpValueTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ExpValueTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            ExpValueTypeEnumPluginSupport_print_data(
                const ExpValueTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define ExpValueTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ExpValueTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ExpValueTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ExpValueTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ExpValueTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ExpValueTypeUnion*
            ExpValueTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ExpValueTypeUnion*
            ExpValueTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpValueTypeUnion*
            ExpValueTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ExpValueTypeUnionPluginSupport_copy_data(
                ExpValueTypeUnion *out,
                const ExpValueTypeUnion *in);

            NDDSUSERDllExport extern void 
            ExpValueTypeUnionPluginSupport_destroy_data_w_params(
                ExpValueTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ExpValueTypeUnionPluginSupport_destroy_data_ex(
                ExpValueTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpValueTypeUnionPluginSupport_destroy_data(
                ExpValueTypeUnion *sample);

            NDDSUSERDllExport extern void 
            ExpValueTypeUnionPluginSupport_print_data(
                const ExpValueTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ExpValueTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpValueTypeUnion *out,
                const ExpValueTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ExpValueTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ExpValueTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ExpValueTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ExpValueTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ExpValueTypeUnionPlugin_deserialize_from_cdr_buffer(
                ExpValueTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ExpValueTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ExpValueTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ExpValueTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ExpValueTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ExpValueTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpValueTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define ExpValueTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ExpValueTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ExpValueTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ExpValueTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ExpValueTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ExpValueType*
            ExpValueTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ExpValueType*
            ExpValueTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpValueType*
            ExpValueTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ExpValueTypePluginSupport_copy_data(
                ExpValueType *out,
                const ExpValueType *in);

            NDDSUSERDllExport extern void 
            ExpValueTypePluginSupport_destroy_data_w_params(
                ExpValueType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ExpValueTypePluginSupport_destroy_data_ex(
                ExpValueType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpValueTypePluginSupport_destroy_data(
                ExpValueType *sample);

            NDDSUSERDllExport extern void 
            ExpValueTypePluginSupport_print_data(
                const ExpValueType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ExpValueTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpValueType *out,
                const ExpValueType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ExpValueTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ExpValueType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ExpValueTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ExpValueType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ExpValueTypePlugin_deserialize_from_cdr_buffer(
                ExpValueType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ExpValueTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ExpValueTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ExpValueTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ExpValueTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ExpValueTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpValueType ** sample,
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

#endif /* ExpValueTypePlugin_1760834647_h */

