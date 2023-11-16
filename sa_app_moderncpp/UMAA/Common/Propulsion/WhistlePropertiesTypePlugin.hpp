

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistlePropertiesType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WhistlePropertiesTypePlugin_350957921_h
#define WhistlePropertiesTypePlugin_350957921_h

#include "WhistlePropertiesType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Propulsion {

            #define WhistlePropertiesTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WhistlePropertiesTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WhistlePropertiesTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WhistlePropertiesTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WhistlePropertiesTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WhistlePropertiesType*
            WhistlePropertiesTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WhistlePropertiesType*
            WhistlePropertiesTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WhistlePropertiesType*
            WhistlePropertiesTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WhistlePropertiesTypePluginSupport_copy_data(
                WhistlePropertiesType *out,
                const WhistlePropertiesType *in);

            NDDSUSERDllExport extern void 
            WhistlePropertiesTypePluginSupport_destroy_data_w_params(
                WhistlePropertiesType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WhistlePropertiesTypePluginSupport_destroy_data_ex(
                WhistlePropertiesType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WhistlePropertiesTypePluginSupport_destroy_data(
                WhistlePropertiesType *sample);

            NDDSUSERDllExport extern void 
            WhistlePropertiesTypePluginSupport_print_data(
                const WhistlePropertiesType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WhistlePropertiesTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WhistlePropertiesTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WhistlePropertiesTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WhistlePropertiesTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WhistlePropertiesTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WhistlePropertiesType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WhistlePropertiesTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WhistlePropertiesType *out,
                const WhistlePropertiesType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WhistlePropertiesTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WhistlePropertiesType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WhistlePropertiesTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WhistlePropertiesType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WhistlePropertiesTypePlugin_deserialize_from_cdr_buffer(
                WhistlePropertiesType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WhistlePropertiesTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WhistlePropertiesTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WhistlePropertiesTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WhistlePropertiesTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WhistlePropertiesTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WhistlePropertiesType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WhistlePropertiesTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WhistlePropertiesTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Propulsion  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WhistlePropertiesTypePlugin_350957921_h */

