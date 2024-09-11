

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelDeleteMessageConfigAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelDeleteMessageConfigAckReportTypePlugin_698714046_h
#define CommsChannelDeleteMessageConfigAckReportTypePlugin_698714046_h

#include "CommsChannelDeleteMessageConfigAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/CO/CommsChannelConfig/CommsChannelDeleteMessageConfigCommandTypePlugin.hpp"
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
        namespace CommsChannelConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelDeleteMessageConfigAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelDeleteMessageConfigAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelDeleteMessageConfigAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelDeleteMessageConfigAckReportType.
            */
            typedef class CommsChannelDeleteMessageConfigAckReportType CommsChannelDeleteMessageConfigAckReportTypeKeyHolder;

            #define CommsChannelDeleteMessageConfigAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelDeleteMessageConfigAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelDeleteMessageConfigAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelDeleteMessageConfigAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelDeleteMessageConfigAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelDeleteMessageConfigAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelDeleteMessageConfigAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigAckReportType*
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigAckReportType*
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigAckReportType*
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_copy_data(
                CommsChannelDeleteMessageConfigAckReportType *out,
                const CommsChannelDeleteMessageConfigAckReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_destroy_data_w_params(
                CommsChannelDeleteMessageConfigAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_destroy_data_ex(
                CommsChannelDeleteMessageConfigAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_destroy_data(
                CommsChannelDeleteMessageConfigAckReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_print_data(
                const CommsChannelDeleteMessageConfigAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigAckReportType*
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDeleteMessageConfigAckReportType*
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_destroy_key_ex(
                CommsChannelDeleteMessageConfigAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigAckReportTypePluginSupport_destroy_key(
                CommsChannelDeleteMessageConfigAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelDeleteMessageConfigAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigAckReportType *out,
                const CommsChannelDeleteMessageConfigAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelDeleteMessageConfigAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelDeleteMessageConfigAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelDeleteMessageConfigAckReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelDeleteMessageConfigAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigAckReportTypeKeyHolder *key, 
                const CommsChannelDeleteMessageConfigAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDeleteMessageConfigAckReportType *instance, 
                const CommsChannelDeleteMessageConfigAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDeleteMessageConfigAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelDeleteMessageConfigAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelDeleteMessageConfigAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelConfig  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelDeleteMessageConfigAckReportTypePlugin_698714046_h */

