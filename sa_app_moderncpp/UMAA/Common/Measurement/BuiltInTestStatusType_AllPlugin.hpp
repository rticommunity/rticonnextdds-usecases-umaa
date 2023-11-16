

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BuiltInTestStatusType_All.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BuiltInTestStatusType_AllPlugin_723379715_h
#define BuiltInTestStatusType_AllPlugin_723379715_h

#include "BuiltInTestStatusType_All.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define BuiltInTestStatusType_AllPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BuiltInTestStatusType_AllPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BuiltInTestStatusType_AllPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BuiltInTestStatusType_AllPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BuiltInTestStatusType_AllPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BuiltInTestStatusType_All*
            BuiltInTestStatusType_AllPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BuiltInTestStatusType_All*
            BuiltInTestStatusType_AllPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BuiltInTestStatusType_All*
            BuiltInTestStatusType_AllPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BuiltInTestStatusType_AllPluginSupport_copy_data(
                BuiltInTestStatusType_All *out,
                const BuiltInTestStatusType_All *in);

            NDDSUSERDllExport extern void 
            BuiltInTestStatusType_AllPluginSupport_destroy_data_w_params(
                BuiltInTestStatusType_All *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BuiltInTestStatusType_AllPluginSupport_destroy_data_ex(
                BuiltInTestStatusType_All *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BuiltInTestStatusType_AllPluginSupport_destroy_data(
                BuiltInTestStatusType_All *sample);

            NDDSUSERDllExport extern void 
            BuiltInTestStatusType_AllPluginSupport_print_data(
                const BuiltInTestStatusType_All *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BuiltInTestStatusType_AllPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BuiltInTestStatusType_AllPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BuiltInTestStatusType_AllPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BuiltInTestStatusType_AllPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BuiltInTestStatusType_AllPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BuiltInTestStatusType_All *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BuiltInTestStatusType_AllPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BuiltInTestStatusType_All *out,
                const BuiltInTestStatusType_All *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BuiltInTestStatusType_AllPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BuiltInTestStatusType_All *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BuiltInTestStatusType_AllPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BuiltInTestStatusType_All **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BuiltInTestStatusType_AllPlugin_deserialize_from_cdr_buffer(
                BuiltInTestStatusType_All *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BuiltInTestStatusType_AllPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BuiltInTestStatusType_AllPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BuiltInTestStatusType_AllPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BuiltInTestStatusType_AllPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BuiltInTestStatusType_AllPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BuiltInTestStatusType_All ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BuiltInTestStatusType_AllPlugin_new(void);

            NDDSUSERDllExport extern void
            BuiltInTestStatusType_AllPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BuiltInTestStatusType_AllPlugin_723379715_h */

