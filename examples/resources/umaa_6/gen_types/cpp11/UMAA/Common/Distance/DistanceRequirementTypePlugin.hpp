

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DistanceRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DistanceRequirementTypePlugin_1803002391_h
#define DistanceRequirementTypePlugin_1803002391_h

#include "DistanceRequirementType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Distance/DistanceToleranceTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Distance {

            #define DistanceRequirementTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DistanceRequirementTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DistanceRequirementTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DistanceRequirementTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DistanceRequirementTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DistanceRequirementType*
            DistanceRequirementTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DistanceRequirementType*
            DistanceRequirementTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DistanceRequirementType*
            DistanceRequirementTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DistanceRequirementTypePluginSupport_copy_data(
                DistanceRequirementType *out,
                const DistanceRequirementType *in);

            NDDSUSERDllExport extern void 
            DistanceRequirementTypePluginSupport_destroy_data_w_params(
                DistanceRequirementType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DistanceRequirementTypePluginSupport_destroy_data_ex(
                DistanceRequirementType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DistanceRequirementTypePluginSupport_destroy_data(
                DistanceRequirementType *sample);

            NDDSUSERDllExport extern void 
            DistanceRequirementTypePluginSupport_print_data(
                const DistanceRequirementType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DistanceRequirementTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DistanceRequirementType *out,
                const DistanceRequirementType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DistanceRequirementTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DistanceRequirementType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DistanceRequirementTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DistanceRequirementType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DistanceRequirementTypePlugin_deserialize_from_cdr_buffer(
                DistanceRequirementType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DistanceRequirementTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DistanceRequirementTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DistanceRequirementTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DistanceRequirementTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DistanceRequirementTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DistanceRequirementType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Distance  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DistanceRequirementTypePlugin_1803002391_h */

