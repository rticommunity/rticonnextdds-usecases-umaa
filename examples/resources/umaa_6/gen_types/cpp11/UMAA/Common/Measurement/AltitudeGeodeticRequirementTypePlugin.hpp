

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AltitudeGeodeticRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AltitudeGeodeticRequirementTypePlugin_1049404362_h
#define AltitudeGeodeticRequirementTypePlugin_1049404362_h

#include "AltitudeGeodeticRequirementType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/AltitudeGeodeticToleranceTypePlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define AltitudeGeodeticRequirementTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AltitudeGeodeticRequirementTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AltitudeGeodeticRequirementTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AltitudeGeodeticRequirementTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AltitudeGeodeticRequirementTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AltitudeGeodeticRequirementType*
            AltitudeGeodeticRequirementTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AltitudeGeodeticRequirementType*
            AltitudeGeodeticRequirementTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AltitudeGeodeticRequirementType*
            AltitudeGeodeticRequirementTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AltitudeGeodeticRequirementTypePluginSupport_copy_data(
                AltitudeGeodeticRequirementType *out,
                const AltitudeGeodeticRequirementType *in);

            NDDSUSERDllExport extern void 
            AltitudeGeodeticRequirementTypePluginSupport_destroy_data_w_params(
                AltitudeGeodeticRequirementType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AltitudeGeodeticRequirementTypePluginSupport_destroy_data_ex(
                AltitudeGeodeticRequirementType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AltitudeGeodeticRequirementTypePluginSupport_destroy_data(
                AltitudeGeodeticRequirementType *sample);

            NDDSUSERDllExport extern void 
            AltitudeGeodeticRequirementTypePluginSupport_print_data(
                const AltitudeGeodeticRequirementType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AltitudeGeodeticRequirementTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AltitudeGeodeticRequirementType *out,
                const AltitudeGeodeticRequirementType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AltitudeGeodeticRequirementTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AltitudeGeodeticRequirementType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AltitudeGeodeticRequirementTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AltitudeGeodeticRequirementType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AltitudeGeodeticRequirementTypePlugin_deserialize_from_cdr_buffer(
                AltitudeGeodeticRequirementType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AltitudeGeodeticRequirementTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AltitudeGeodeticRequirementTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AltitudeGeodeticRequirementTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AltitudeGeodeticRequirementTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AltitudeGeodeticRequirementTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AltitudeGeodeticRequirementType ** sample,
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

#endif /* AltitudeGeodeticRequirementTypePlugin_1049404362_h */

