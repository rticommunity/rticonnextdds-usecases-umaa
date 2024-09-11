

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpIntegerValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ExpIntegerValueTypePlugin_2024645889_h
#define ExpIntegerValueTypePlugin_2024645889_h

#include "ExpIntegerValueType.hpp"

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

            #define ExpIntegerValueTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ExpIntegerValueTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ExpIntegerValueTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ExpIntegerValueTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ExpIntegerValueTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ExpIntegerValueType*
            ExpIntegerValueTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ExpIntegerValueType*
            ExpIntegerValueTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ExpIntegerValueType*
            ExpIntegerValueTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ExpIntegerValueTypePluginSupport_copy_data(
                ExpIntegerValueType *out,
                const ExpIntegerValueType *in);

            NDDSUSERDllExport extern void 
            ExpIntegerValueTypePluginSupport_destroy_data_w_params(
                ExpIntegerValueType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ExpIntegerValueTypePluginSupport_destroy_data_ex(
                ExpIntegerValueType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ExpIntegerValueTypePluginSupport_destroy_data(
                ExpIntegerValueType *sample);

            NDDSUSERDllExport extern void 
            ExpIntegerValueTypePluginSupport_print_data(
                const ExpIntegerValueType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ExpIntegerValueTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ExpIntegerValueType *out,
                const ExpIntegerValueType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ExpIntegerValueTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ExpIntegerValueType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ExpIntegerValueTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ExpIntegerValueType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ExpIntegerValueTypePlugin_deserialize_from_cdr_buffer(
                ExpIntegerValueType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ExpIntegerValueTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ExpIntegerValueTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ExpIntegerValueTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ExpIntegerValueTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ExpIntegerValueTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ExpIntegerValueType ** sample,
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

#endif /* ExpIntegerValueTypePlugin_2024645889_h */

