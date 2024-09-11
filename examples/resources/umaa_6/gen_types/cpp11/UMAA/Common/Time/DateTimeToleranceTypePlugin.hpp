

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DateTimeToleranceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DateTimeToleranceTypePlugin_970093543_h
#define DateTimeToleranceTypePlugin_970093543_h

#include "DateTimeToleranceType.hpp"

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
        namespace Time {

            #define DateTimeToleranceTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DateTimeToleranceTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DateTimeToleranceTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DateTimeToleranceTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DateTimeToleranceTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DateTimeToleranceType*
            DateTimeToleranceTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DateTimeToleranceType*
            DateTimeToleranceTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DateTimeToleranceType*
            DateTimeToleranceTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DateTimeToleranceTypePluginSupport_copy_data(
                DateTimeToleranceType *out,
                const DateTimeToleranceType *in);

            NDDSUSERDllExport extern void 
            DateTimeToleranceTypePluginSupport_destroy_data_w_params(
                DateTimeToleranceType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DateTimeToleranceTypePluginSupport_destroy_data_ex(
                DateTimeToleranceType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DateTimeToleranceTypePluginSupport_destroy_data(
                DateTimeToleranceType *sample);

            NDDSUSERDllExport extern void 
            DateTimeToleranceTypePluginSupport_print_data(
                const DateTimeToleranceType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DateTimeToleranceTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeToleranceType *out,
                const DateTimeToleranceType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DateTimeToleranceTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DateTimeToleranceType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DateTimeToleranceTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeToleranceType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DateTimeToleranceTypePlugin_deserialize_from_cdr_buffer(
                DateTimeToleranceType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DateTimeToleranceTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DateTimeToleranceTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DateTimeToleranceTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DateTimeToleranceTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DateTimeToleranceTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeToleranceType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Time  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DateTimeToleranceTypePlugin_970093543_h */

