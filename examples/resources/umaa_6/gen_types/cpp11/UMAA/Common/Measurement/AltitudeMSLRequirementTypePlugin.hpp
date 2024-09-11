

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AltitudeMSLRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AltitudeMSLRequirementTypePlugin_842837247_h
#define AltitudeMSLRequirementTypePlugin_842837247_h

#include "AltitudeMSLRequirementType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/AltitudeMSLToleranceTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define AltitudeMSLRequirementTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AltitudeMSLRequirementTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AltitudeMSLRequirementTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AltitudeMSLRequirementTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AltitudeMSLRequirementTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AltitudeMSLRequirementType*
            AltitudeMSLRequirementTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AltitudeMSLRequirementType*
            AltitudeMSLRequirementTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AltitudeMSLRequirementType*
            AltitudeMSLRequirementTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AltitudeMSLRequirementTypePluginSupport_copy_data(
                AltitudeMSLRequirementType *out,
                const AltitudeMSLRequirementType *in);

            NDDSUSERDllExport extern void 
            AltitudeMSLRequirementTypePluginSupport_destroy_data_w_params(
                AltitudeMSLRequirementType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AltitudeMSLRequirementTypePluginSupport_destroy_data_ex(
                AltitudeMSLRequirementType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AltitudeMSLRequirementTypePluginSupport_destroy_data(
                AltitudeMSLRequirementType *sample);

            NDDSUSERDllExport extern void 
            AltitudeMSLRequirementTypePluginSupport_print_data(
                const AltitudeMSLRequirementType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AltitudeMSLRequirementTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AltitudeMSLRequirementType *out,
                const AltitudeMSLRequirementType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AltitudeMSLRequirementTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AltitudeMSLRequirementType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AltitudeMSLRequirementTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AltitudeMSLRequirementType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AltitudeMSLRequirementTypePlugin_deserialize_from_cdr_buffer(
                AltitudeMSLRequirementType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AltitudeMSLRequirementTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AltitudeMSLRequirementTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AltitudeMSLRequirementTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AltitudeMSLRequirementTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AltitudeMSLRequirementTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AltitudeMSLRequirementType ** sample,
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

#endif /* AltitudeMSLRequirementTypePlugin_842837247_h */

