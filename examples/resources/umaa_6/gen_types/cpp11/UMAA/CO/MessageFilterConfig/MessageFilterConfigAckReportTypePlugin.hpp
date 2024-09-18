

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MessageFilterConfigAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MessageFilterConfigAckReportTypePlugin_1567267702_h
#define MessageFilterConfigAckReportTypePlugin_1567267702_h

#include "MessageFilterConfigAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/CO/MessageFilterConfig/MessageFilterConfigCommandTypePlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace CO {
        namespace MessageFilterConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MessageFilterConfigAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MessageFilterConfigAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MessageFilterConfigAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MessageFilterConfigAckReportType.
            */
            typedef class MessageFilterConfigAckReportType MessageFilterConfigAckReportTypeKeyHolder;

            #define MessageFilterConfigAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MessageFilterConfigAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MessageFilterConfigAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MessageFilterConfigAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MessageFilterConfigAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MessageFilterConfigAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MessageFilterConfigAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MessageFilterConfigAckReportType*
            MessageFilterConfigAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MessageFilterConfigAckReportType*
            MessageFilterConfigAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MessageFilterConfigAckReportType*
            MessageFilterConfigAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigAckReportTypePluginSupport_copy_data(
                MessageFilterConfigAckReportType *out,
                const MessageFilterConfigAckReportType *in);

            NDDSUSERDllExport extern void 
            MessageFilterConfigAckReportTypePluginSupport_destroy_data_w_params(
                MessageFilterConfigAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MessageFilterConfigAckReportTypePluginSupport_destroy_data_ex(
                MessageFilterConfigAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MessageFilterConfigAckReportTypePluginSupport_destroy_data(
                MessageFilterConfigAckReportType *sample);

            NDDSUSERDllExport extern void 
            MessageFilterConfigAckReportTypePluginSupport_print_data(
                const MessageFilterConfigAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MessageFilterConfigAckReportType*
            MessageFilterConfigAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MessageFilterConfigAckReportType*
            MessageFilterConfigAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MessageFilterConfigAckReportTypePluginSupport_destroy_key_ex(
                MessageFilterConfigAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MessageFilterConfigAckReportTypePluginSupport_destroy_key(
                MessageFilterConfigAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MessageFilterConfigAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MessageFilterConfigAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MessageFilterConfigAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MessageFilterConfigAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MessageFilterConfigAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigAckReportType *out,
                const MessageFilterConfigAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MessageFilterConfigAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MessageFilterConfigAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MessageFilterConfigAckReportTypePlugin_deserialize_from_cdr_buffer(
                MessageFilterConfigAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MessageFilterConfigAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MessageFilterConfigAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MessageFilterConfigAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MessageFilterConfigAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigAckReportTypeKeyHolder *key, 
                const MessageFilterConfigAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MessageFilterConfigAckReportType *instance, 
                const MessageFilterConfigAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MessageFilterConfigAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MessageFilterConfigAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MessageFilterConfigAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MessageFilterConfig  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MessageFilterConfigAckReportTypePlugin_1567267702_h */
