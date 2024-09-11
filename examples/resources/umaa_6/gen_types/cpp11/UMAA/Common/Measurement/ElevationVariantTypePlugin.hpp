

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ElevationVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ElevationVariantTypePlugin_636719920_h
#define ElevationVariantTypePlugin_636719920_h

#include "ElevationVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/AltitudeAGLVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/AltitudeASFVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/AltitudeGeodeticVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/AltitudeMSLVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/DepthVariantTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ElevationVariantTypeEnumPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern unsigned int 
            ElevationVariantTypeEnumPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ElevationVariantTypeEnumPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* ----------------------------------------------------------------------------
            Support functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern void
            ElevationVariantTypeEnumPluginSupport_print_data(
                const ElevationVariantTypeEnum *sample,
                const char *desc,
                unsigned int indent_level);

            #define ElevationVariantTypeUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ElevationVariantTypeUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ElevationVariantTypeUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ElevationVariantTypeUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ElevationVariantTypeUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ElevationVariantTypeUnion*
            ElevationVariantTypeUnionPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ElevationVariantTypeUnion*
            ElevationVariantTypeUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ElevationVariantTypeUnion*
            ElevationVariantTypeUnionPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ElevationVariantTypeUnionPluginSupport_copy_data(
                ElevationVariantTypeUnion *out,
                const ElevationVariantTypeUnion *in);

            NDDSUSERDllExport extern void 
            ElevationVariantTypeUnionPluginSupport_destroy_data_w_params(
                ElevationVariantTypeUnion *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ElevationVariantTypeUnionPluginSupport_destroy_data_ex(
                ElevationVariantTypeUnion *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ElevationVariantTypeUnionPluginSupport_destroy_data(
                ElevationVariantTypeUnion *sample);

            NDDSUSERDllExport extern void 
            ElevationVariantTypeUnionPluginSupport_print_data(
                const ElevationVariantTypeUnion *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ElevationVariantTypeUnionPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ElevationVariantTypeUnion *out,
                const ElevationVariantTypeUnion *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ElevationVariantTypeUnionPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ElevationVariantTypeUnion *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ElevationVariantTypeUnionPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ElevationVariantTypeUnion **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ElevationVariantTypeUnionPlugin_deserialize_from_cdr_buffer(
                ElevationVariantTypeUnion *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ElevationVariantTypeUnionPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ElevationVariantTypeUnionPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ElevationVariantTypeUnionPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ElevationVariantTypeUnionPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ElevationVariantTypeUnionPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ElevationVariantTypeUnion ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            #define ElevationVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ElevationVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ElevationVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ElevationVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ElevationVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ElevationVariantType*
            ElevationVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ElevationVariantType*
            ElevationVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ElevationVariantType*
            ElevationVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ElevationVariantTypePluginSupport_copy_data(
                ElevationVariantType *out,
                const ElevationVariantType *in);

            NDDSUSERDllExport extern void 
            ElevationVariantTypePluginSupport_destroy_data_w_params(
                ElevationVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ElevationVariantTypePluginSupport_destroy_data_ex(
                ElevationVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ElevationVariantTypePluginSupport_destroy_data(
                ElevationVariantType *sample);

            NDDSUSERDllExport extern void 
            ElevationVariantTypePluginSupport_print_data(
                const ElevationVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ElevationVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ElevationVariantType *out,
                const ElevationVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ElevationVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ElevationVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ElevationVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ElevationVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ElevationVariantTypePlugin_deserialize_from_cdr_buffer(
                ElevationVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ElevationVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ElevationVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ElevationVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ElevationVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ElevationVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ElevationVariantType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ElevationVariantTypePlugin_636719920_h */

