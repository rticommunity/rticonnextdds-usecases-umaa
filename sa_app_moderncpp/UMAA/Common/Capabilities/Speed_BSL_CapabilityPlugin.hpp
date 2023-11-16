

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Speed_BSL_Capability.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Speed_BSL_CapabilityPlugin_311073524_h
#define Speed_BSL_CapabilityPlugin_311073524_h

#include "Speed_BSL_Capability.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MeasurementSpecifications/Speed_BSL_SpecificationPlugin.hpp"
#include "UMAA/Common/Requirements/Speed_BSL_RequirementPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Capabilities {

            #define Speed_BSL_CapabilityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Speed_BSL_CapabilityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Speed_BSL_CapabilityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Speed_BSL_CapabilityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Speed_BSL_CapabilityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Speed_BSL_Capability*
            Speed_BSL_CapabilityPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Speed_BSL_Capability*
            Speed_BSL_CapabilityPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Speed_BSL_Capability*
            Speed_BSL_CapabilityPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Speed_BSL_CapabilityPluginSupport_copy_data(
                Speed_BSL_Capability *out,
                const Speed_BSL_Capability *in);

            NDDSUSERDllExport extern void 
            Speed_BSL_CapabilityPluginSupport_destroy_data_w_params(
                Speed_BSL_Capability *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Speed_BSL_CapabilityPluginSupport_destroy_data_ex(
                Speed_BSL_Capability *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Speed_BSL_CapabilityPluginSupport_destroy_data(
                Speed_BSL_Capability *sample);

            NDDSUSERDllExport extern void 
            Speed_BSL_CapabilityPluginSupport_print_data(
                const Speed_BSL_Capability *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Speed_BSL_CapabilityPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Speed_BSL_CapabilityPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Speed_BSL_CapabilityPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Speed_BSL_CapabilityPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Speed_BSL_CapabilityPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Speed_BSL_Capability *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Speed_BSL_CapabilityPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Speed_BSL_Capability *out,
                const Speed_BSL_Capability *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Speed_BSL_CapabilityPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Speed_BSL_Capability *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Speed_BSL_CapabilityPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Speed_BSL_Capability **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Speed_BSL_CapabilityPlugin_deserialize_from_cdr_buffer(
                Speed_BSL_Capability *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Speed_BSL_CapabilityPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Speed_BSL_CapabilityPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Speed_BSL_CapabilityPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Speed_BSL_CapabilityPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Speed_BSL_CapabilityPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Speed_BSL_Capability ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Speed_BSL_CapabilityPlugin_new(void);

            NDDSUSERDllExport extern void
            Speed_BSL_CapabilityPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Capabilities  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Speed_BSL_CapabilityPlugin_311073524_h */

