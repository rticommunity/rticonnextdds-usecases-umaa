

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MoveToPosPolicyType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MoveToPosPolicyTypePlugin_1486451355_h
#define MoveToPosPolicyTypePlugin_1486451355_h

#include "MoveToPosPolicyType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/BaseType/WaypointTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace CommsLostPolicy {

            #define MoveToPosPolicyTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MoveToPosPolicyTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MoveToPosPolicyTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MoveToPosPolicyTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MoveToPosPolicyTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MoveToPosPolicyType*
            MoveToPosPolicyTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MoveToPosPolicyType*
            MoveToPosPolicyTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MoveToPosPolicyType*
            MoveToPosPolicyTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MoveToPosPolicyTypePluginSupport_copy_data(
                MoveToPosPolicyType *out,
                const MoveToPosPolicyType *in);

            NDDSUSERDllExport extern void 
            MoveToPosPolicyTypePluginSupport_destroy_data_w_params(
                MoveToPosPolicyType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MoveToPosPolicyTypePluginSupport_destroy_data_ex(
                MoveToPosPolicyType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MoveToPosPolicyTypePluginSupport_destroy_data(
                MoveToPosPolicyType *sample);

            NDDSUSERDllExport extern void 
            MoveToPosPolicyTypePluginSupport_print_data(
                const MoveToPosPolicyType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MoveToPosPolicyTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MoveToPosPolicyTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MoveToPosPolicyTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MoveToPosPolicyTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MoveToPosPolicyTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveToPosPolicyType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MoveToPosPolicyTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveToPosPolicyType *out,
                const MoveToPosPolicyType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MoveToPosPolicyTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MoveToPosPolicyType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MoveToPosPolicyTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MoveToPosPolicyType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveToPosPolicyTypePlugin_deserialize_from_cdr_buffer(
                MoveToPosPolicyType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MoveToPosPolicyTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MoveToPosPolicyTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MoveToPosPolicyTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveToPosPolicyTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MoveToPosPolicyTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveToPosPolicyType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MoveToPosPolicyTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MoveToPosPolicyTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsLostPolicy  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MoveToPosPolicyTypePlugin_1486451355_h */

