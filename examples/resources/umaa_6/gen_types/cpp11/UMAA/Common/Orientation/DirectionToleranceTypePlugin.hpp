

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionToleranceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionToleranceTypePlugin_862047081_h
#define DirectionToleranceTypePlugin_862047081_h

#include "DirectionToleranceType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define DirectionToleranceTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DirectionToleranceTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DirectionToleranceTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DirectionToleranceTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DirectionToleranceTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DirectionToleranceType*
            DirectionToleranceTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DirectionToleranceType*
            DirectionToleranceTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DirectionToleranceType*
            DirectionToleranceTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DirectionToleranceTypePluginSupport_copy_data(
                DirectionToleranceType *out,
                const DirectionToleranceType *in);

            NDDSUSERDllExport extern void 
            DirectionToleranceTypePluginSupport_destroy_data_w_params(
                DirectionToleranceType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DirectionToleranceTypePluginSupport_destroy_data_ex(
                DirectionToleranceType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DirectionToleranceTypePluginSupport_destroy_data(
                DirectionToleranceType *sample);

            NDDSUSERDllExport extern void 
            DirectionToleranceTypePluginSupport_print_data(
                const DirectionToleranceType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DirectionToleranceTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionToleranceType *out,
                const DirectionToleranceType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DirectionToleranceTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionToleranceType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DirectionToleranceTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DirectionToleranceType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DirectionToleranceTypePlugin_deserialize_from_cdr_buffer(
                DirectionToleranceType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DirectionToleranceTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DirectionToleranceTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DirectionToleranceTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionToleranceTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DirectionToleranceTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionToleranceType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DirectionToleranceTypePlugin_862047081_h */

