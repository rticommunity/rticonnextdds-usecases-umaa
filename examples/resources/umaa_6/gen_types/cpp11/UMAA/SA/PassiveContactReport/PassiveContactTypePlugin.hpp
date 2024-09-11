

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveContactType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PassiveContactTypePlugin_1738029701_h
#define PassiveContactTypePlugin_1738029701_h

#include "PassiveContactType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MeasurementConstrained/MeasurementConstrainedTypesPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace PassiveContactReport {

            #define PassiveContactTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PassiveContactTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PassiveContactTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PassiveContactTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PassiveContactTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PassiveContactType*
            PassiveContactTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PassiveContactType*
            PassiveContactTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PassiveContactType*
            PassiveContactTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactTypePluginSupport_copy_data(
                PassiveContactType *out,
                const PassiveContactType *in);

            NDDSUSERDllExport extern void 
            PassiveContactTypePluginSupport_destroy_data_w_params(
                PassiveContactType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PassiveContactTypePluginSupport_destroy_data_ex(
                PassiveContactType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PassiveContactTypePluginSupport_destroy_data(
                PassiveContactType *sample);

            NDDSUSERDllExport extern void 
            PassiveContactTypePluginSupport_print_data(
                const PassiveContactType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PassiveContactTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactType *out,
                const PassiveContactType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PassiveContactTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PassiveContactType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PassiveContactTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PassiveContactTypePlugin_deserialize_from_cdr_buffer(
                PassiveContactType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PassiveContactTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PassiveContactTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PassiveContactTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PassiveContactTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PassiveContactTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PassiveContactType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace PassiveContactReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PassiveContactTypePlugin_1738029701_h */

