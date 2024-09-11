

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RGBType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RGBTypePlugin_2034401078_h
#define RGBTypePlugin_2034401078_h

#include "RGBType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace BaseType {

            #define RGBTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RGBTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RGBTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RGBTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RGBTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RGBType*
            RGBTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RGBType*
            RGBTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RGBType*
            RGBTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RGBTypePluginSupport_copy_data(
                RGBType *out,
                const RGBType *in);

            NDDSUSERDllExport extern void 
            RGBTypePluginSupport_destroy_data_w_params(
                RGBType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RGBTypePluginSupport_destroy_data_ex(
                RGBType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RGBTypePluginSupport_destroy_data(
                RGBType *sample);

            NDDSUSERDllExport extern void 
            RGBTypePluginSupport_print_data(
                const RGBType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            RGBTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RGBType *out,
                const RGBType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RGBTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RGBType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RGBTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RGBType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RGBTypePlugin_deserialize_from_cdr_buffer(
                RGBType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RGBTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RGBTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RGBTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RGBTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RGBTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RGBType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace BaseType  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RGBTypePlugin_2034401078_h */

