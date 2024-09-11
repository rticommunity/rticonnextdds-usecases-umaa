

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnnulusSectorRequirementType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnnulusSectorRequirementTypePlugin_1771335808_h
#define AnnulusSectorRequirementTypePlugin_1771335808_h

#include "AnnulusSectorRequirementType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/BearingSectorVariantTypePlugin.hpp"
#include "UMAA/MM/BaseType/AnnulusSectorToleranceTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            #define AnnulusSectorRequirementTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnnulusSectorRequirementTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnnulusSectorRequirementTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnnulusSectorRequirementTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnnulusSectorRequirementTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AnnulusSectorRequirementType*
            AnnulusSectorRequirementTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AnnulusSectorRequirementType*
            AnnulusSectorRequirementTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnnulusSectorRequirementType*
            AnnulusSectorRequirementTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnnulusSectorRequirementTypePluginSupport_copy_data(
                AnnulusSectorRequirementType *out,
                const AnnulusSectorRequirementType *in);

            NDDSUSERDllExport extern void 
            AnnulusSectorRequirementTypePluginSupport_destroy_data_w_params(
                AnnulusSectorRequirementType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnnulusSectorRequirementTypePluginSupport_destroy_data_ex(
                AnnulusSectorRequirementType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnnulusSectorRequirementTypePluginSupport_destroy_data(
                AnnulusSectorRequirementType *sample);

            NDDSUSERDllExport extern void 
            AnnulusSectorRequirementTypePluginSupport_print_data(
                const AnnulusSectorRequirementType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            AnnulusSectorRequirementTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnnulusSectorRequirementType *out,
                const AnnulusSectorRequirementType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AnnulusSectorRequirementTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AnnulusSectorRequirementType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AnnulusSectorRequirementTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AnnulusSectorRequirementType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AnnulusSectorRequirementTypePlugin_deserialize_from_cdr_buffer(
                AnnulusSectorRequirementType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AnnulusSectorRequirementTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnnulusSectorRequirementTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnnulusSectorRequirementTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnnulusSectorRequirementTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AnnulusSectorRequirementTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AnnulusSectorRequirementType ** sample,
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

#endif /* AnnulusSectorRequirementTypePlugin_1771335808_h */

