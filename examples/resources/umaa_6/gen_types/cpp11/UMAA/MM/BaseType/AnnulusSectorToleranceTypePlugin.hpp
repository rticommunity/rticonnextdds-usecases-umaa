

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnnulusSectorToleranceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnnulusSectorToleranceTypePlugin_494661040_h
#define AnnulusSectorToleranceTypePlugin_494661040_h

#include "AnnulusSectorToleranceType.hpp"

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
    namespace MM {
        namespace BaseType {

            #define AnnulusSectorToleranceTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnnulusSectorToleranceTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnnulusSectorToleranceTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnnulusSectorToleranceTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnnulusSectorToleranceTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AnnulusSectorToleranceType*
            AnnulusSectorToleranceTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AnnulusSectorToleranceType*
            AnnulusSectorToleranceTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnnulusSectorToleranceType*
            AnnulusSectorToleranceTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnnulusSectorToleranceTypePluginSupport_copy_data(
                AnnulusSectorToleranceType *out,
                const AnnulusSectorToleranceType *in);

            NDDSUSERDllExport extern void 
            AnnulusSectorToleranceTypePluginSupport_destroy_data_w_params(
                AnnulusSectorToleranceType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnnulusSectorToleranceTypePluginSupport_destroy_data_ex(
                AnnulusSectorToleranceType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnnulusSectorToleranceTypePluginSupport_destroy_data(
                AnnulusSectorToleranceType *sample);

            NDDSUSERDllExport extern void 
            AnnulusSectorToleranceTypePluginSupport_print_data(
                const AnnulusSectorToleranceType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AnnulusSectorToleranceTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnnulusSectorToleranceType *out,
                const AnnulusSectorToleranceType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AnnulusSectorToleranceTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AnnulusSectorToleranceType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AnnulusSectorToleranceTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AnnulusSectorToleranceType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AnnulusSectorToleranceTypePlugin_deserialize_from_cdr_buffer(
                AnnulusSectorToleranceType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AnnulusSectorToleranceTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnnulusSectorToleranceTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnnulusSectorToleranceTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnnulusSectorToleranceTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AnnulusSectorToleranceTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AnnulusSectorToleranceType ** sample,
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

#endif /* AnnulusSectorToleranceTypePlugin_494661040_h */

