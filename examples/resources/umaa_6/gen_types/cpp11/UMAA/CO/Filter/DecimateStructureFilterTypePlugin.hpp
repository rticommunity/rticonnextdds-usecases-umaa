

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DecimateStructureFilterType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DecimateStructureFilterTypePlugin_1774000838_h
#define DecimateStructureFilterTypePlugin_1774000838_h

#include "DecimateStructureFilterType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace CO {
        namespace Filter {

            #define DecimateStructureFilterTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DecimateStructureFilterTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DecimateStructureFilterTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DecimateStructureFilterTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DecimateStructureFilterTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DecimateStructureFilterType*
            DecimateStructureFilterTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DecimateStructureFilterType*
            DecimateStructureFilterTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DecimateStructureFilterType*
            DecimateStructureFilterTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DecimateStructureFilterTypePluginSupport_copy_data(
                DecimateStructureFilterType *out,
                const DecimateStructureFilterType *in);

            NDDSUSERDllExport extern void 
            DecimateStructureFilterTypePluginSupport_destroy_data_w_params(
                DecimateStructureFilterType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DecimateStructureFilterTypePluginSupport_destroy_data_ex(
                DecimateStructureFilterType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DecimateStructureFilterTypePluginSupport_destroy_data(
                DecimateStructureFilterType *sample);

            NDDSUSERDllExport extern void 
            DecimateStructureFilterTypePluginSupport_print_data(
                const DecimateStructureFilterType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DecimateStructureFilterTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DecimateStructureFilterType *out,
                const DecimateStructureFilterType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DecimateStructureFilterTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DecimateStructureFilterType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DecimateStructureFilterTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DecimateStructureFilterType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DecimateStructureFilterTypePlugin_deserialize_from_cdr_buffer(
                DecimateStructureFilterType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DecimateStructureFilterTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DecimateStructureFilterTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DecimateStructureFilterTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DecimateStructureFilterTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DecimateStructureFilterTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DecimateStructureFilterType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Filter  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DecimateStructureFilterTypePlugin_1774000838_h */

