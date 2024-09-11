

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionTurnRateToleranceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionTurnRateToleranceTypePlugin_1317507154_h
#define DirectionTurnRateToleranceTypePlugin_1317507154_h

#include "DirectionTurnRateToleranceType.hpp"

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

            #define DirectionTurnRateToleranceTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DirectionTurnRateToleranceTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DirectionTurnRateToleranceTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DirectionTurnRateToleranceTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DirectionTurnRateToleranceTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DirectionTurnRateToleranceType*
            DirectionTurnRateToleranceTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DirectionTurnRateToleranceType*
            DirectionTurnRateToleranceTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DirectionTurnRateToleranceType*
            DirectionTurnRateToleranceTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DirectionTurnRateToleranceTypePluginSupport_copy_data(
                DirectionTurnRateToleranceType *out,
                const DirectionTurnRateToleranceType *in);

            NDDSUSERDllExport extern void 
            DirectionTurnRateToleranceTypePluginSupport_destroy_data_w_params(
                DirectionTurnRateToleranceType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DirectionTurnRateToleranceTypePluginSupport_destroy_data_ex(
                DirectionTurnRateToleranceType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DirectionTurnRateToleranceTypePluginSupport_destroy_data(
                DirectionTurnRateToleranceType *sample);

            NDDSUSERDllExport extern void 
            DirectionTurnRateToleranceTypePluginSupport_print_data(
                const DirectionTurnRateToleranceType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DirectionTurnRateToleranceTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionTurnRateToleranceType *out,
                const DirectionTurnRateToleranceType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DirectionTurnRateToleranceTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionTurnRateToleranceType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DirectionTurnRateToleranceTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DirectionTurnRateToleranceType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DirectionTurnRateToleranceTypePlugin_deserialize_from_cdr_buffer(
                DirectionTurnRateToleranceType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DirectionTurnRateToleranceTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DirectionTurnRateToleranceTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DirectionTurnRateToleranceTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionTurnRateToleranceTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DirectionTurnRateToleranceTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionTurnRateToleranceType ** sample,
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

#endif /* DirectionTurnRateToleranceTypePlugin_1317507154_h */

