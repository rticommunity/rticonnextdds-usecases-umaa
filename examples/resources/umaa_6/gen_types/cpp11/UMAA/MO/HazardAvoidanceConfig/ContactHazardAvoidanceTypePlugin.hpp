

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactHazardAvoidanceType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactHazardAvoidanceTypePlugin_2011818696_h
#define ContactHazardAvoidanceTypePlugin_2011818696_h

#include "ContactHazardAvoidanceType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MO/HazardAvoidanceConfig/COLREGSConfigurationTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace HazardAvoidanceConfig {

            #define ContactHazardAvoidanceTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ContactHazardAvoidanceTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ContactHazardAvoidanceTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ContactHazardAvoidanceTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ContactHazardAvoidanceTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ContactHazardAvoidanceType*
            ContactHazardAvoidanceTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ContactHazardAvoidanceType*
            ContactHazardAvoidanceTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ContactHazardAvoidanceType*
            ContactHazardAvoidanceTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ContactHazardAvoidanceTypePluginSupport_copy_data(
                ContactHazardAvoidanceType *out,
                const ContactHazardAvoidanceType *in);

            NDDSUSERDllExport extern void 
            ContactHazardAvoidanceTypePluginSupport_destroy_data_w_params(
                ContactHazardAvoidanceType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ContactHazardAvoidanceTypePluginSupport_destroy_data_ex(
                ContactHazardAvoidanceType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ContactHazardAvoidanceTypePluginSupport_destroy_data(
                ContactHazardAvoidanceType *sample);

            NDDSUSERDllExport extern void 
            ContactHazardAvoidanceTypePluginSupport_print_data(
                const ContactHazardAvoidanceType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ContactHazardAvoidanceTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ContactHazardAvoidanceType *out,
                const ContactHazardAvoidanceType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ContactHazardAvoidanceTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ContactHazardAvoidanceType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ContactHazardAvoidanceTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ContactHazardAvoidanceType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ContactHazardAvoidanceTypePlugin_deserialize_from_cdr_buffer(
                ContactHazardAvoidanceType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ContactHazardAvoidanceTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ContactHazardAvoidanceTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ContactHazardAvoidanceTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ContactHazardAvoidanceTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ContactHazardAvoidanceTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ContactHazardAvoidanceType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace HazardAvoidanceConfig  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ContactHazardAvoidanceTypePlugin_2011818696_h */

