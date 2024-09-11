

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PolygonAreaRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PolygonAreaRequirementTypePlugin_1394216045_h
#define PolygonAreaRequirementTypePlugin_1394216045_h

#include "PolygonAreaRequirementType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/PolygonPlugin.hpp"
#include "UMAA/MM/BaseType/PolygonAreaToleranceTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            #define PolygonAreaRequirementTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PolygonAreaRequirementTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PolygonAreaRequirementTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PolygonAreaRequirementTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PolygonAreaRequirementTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PolygonAreaRequirementType*
            PolygonAreaRequirementTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PolygonAreaRequirementType*
            PolygonAreaRequirementTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PolygonAreaRequirementType*
            PolygonAreaRequirementTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PolygonAreaRequirementTypePluginSupport_copy_data(
                PolygonAreaRequirementType *out,
                const PolygonAreaRequirementType *in);

            NDDSUSERDllExport extern void 
            PolygonAreaRequirementTypePluginSupport_destroy_data_w_params(
                PolygonAreaRequirementType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PolygonAreaRequirementTypePluginSupport_destroy_data_ex(
                PolygonAreaRequirementType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PolygonAreaRequirementTypePluginSupport_destroy_data(
                PolygonAreaRequirementType *sample);

            NDDSUSERDllExport extern void 
            PolygonAreaRequirementTypePluginSupport_print_data(
                const PolygonAreaRequirementType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PolygonAreaRequirementTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PolygonAreaRequirementType *out,
                const PolygonAreaRequirementType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PolygonAreaRequirementTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PolygonAreaRequirementType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PolygonAreaRequirementTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PolygonAreaRequirementType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PolygonAreaRequirementTypePlugin_deserialize_from_cdr_buffer(
                PolygonAreaRequirementType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PolygonAreaRequirementTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PolygonAreaRequirementTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PolygonAreaRequirementTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PolygonAreaRequirementTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PolygonAreaRequirementTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PolygonAreaRequirementType ** sample,
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

#endif /* PolygonAreaRequirementTypePlugin_1394216045_h */

