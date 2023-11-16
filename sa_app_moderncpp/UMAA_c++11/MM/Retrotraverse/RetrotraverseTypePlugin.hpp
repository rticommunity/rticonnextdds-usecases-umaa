

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RetrotraverseType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RetrotraverseTypePlugin_1296792066_h
#define RetrotraverseTypePlugin_1296792066_h

#include "RetrotraverseType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace Retrotraverse {

            #define RetrotraverseTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RetrotraverseTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RetrotraverseTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RetrotraverseTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RetrotraverseTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RetrotraverseType*
            RetrotraverseTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RetrotraverseType*
            RetrotraverseTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RetrotraverseType*
            RetrotraverseTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RetrotraverseTypePluginSupport_copy_data(
                RetrotraverseType *out,
                const RetrotraverseType *in);

            NDDSUSERDllExport extern void 
            RetrotraverseTypePluginSupport_destroy_data_w_params(
                RetrotraverseType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RetrotraverseTypePluginSupport_destroy_data_ex(
                RetrotraverseType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RetrotraverseTypePluginSupport_destroy_data(
                RetrotraverseType *sample);

            NDDSUSERDllExport extern void 
            RetrotraverseTypePluginSupport_print_data(
                const RetrotraverseType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RetrotraverseTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RetrotraverseTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RetrotraverseTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RetrotraverseTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RetrotraverseTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RetrotraverseType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RetrotraverseTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RetrotraverseType *out,
                const RetrotraverseType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RetrotraverseTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RetrotraverseType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RetrotraverseTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RetrotraverseType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RetrotraverseTypePlugin_deserialize_from_cdr_buffer(
                RetrotraverseType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RetrotraverseTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RetrotraverseTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RetrotraverseTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RetrotraverseTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RetrotraverseTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RetrotraverseType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RetrotraverseTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RetrotraverseTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Retrotraverse  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RetrotraverseTypePlugin_1296792066_h */

