

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelClearMessageCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelClearMessageCommandAckReportTypePlugin_2003324543_h
#define CommsChannelClearMessageCommandAckReportTypePlugin_2003324543_h

#include "CommsChannelClearMessageCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/CO/CommsChannelControl/CommsChannelClearMessageCommandTypePlugin.hpp"
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
        namespace CommsChannelControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelClearMessageCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelClearMessageCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelClearMessageCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelClearMessageCommandAckReportType.
            */
            typedef class CommsChannelClearMessageCommandAckReportType CommsChannelClearMessageCommandAckReportTypeKeyHolder;

            #define CommsChannelClearMessageCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelClearMessageCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelClearMessageCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelClearMessageCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelClearMessageCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelClearMessageCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelClearMessageCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelClearMessageCommandAckReportType*
            CommsChannelClearMessageCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelClearMessageCommandAckReportType*
            CommsChannelClearMessageCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelClearMessageCommandAckReportType*
            CommsChannelClearMessageCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandAckReportTypePluginSupport_copy_data(
                CommsChannelClearMessageCommandAckReportType *out,
                const CommsChannelClearMessageCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandAckReportTypePluginSupport_destroy_data_w_params(
                CommsChannelClearMessageCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandAckReportTypePluginSupport_destroy_data_ex(
                CommsChannelClearMessageCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandAckReportTypePluginSupport_destroy_data(
                CommsChannelClearMessageCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandAckReportTypePluginSupport_print_data(
                const CommsChannelClearMessageCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelClearMessageCommandAckReportType*
            CommsChannelClearMessageCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelClearMessageCommandAckReportType*
            CommsChannelClearMessageCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandAckReportTypePluginSupport_destroy_key_ex(
                CommsChannelClearMessageCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandAckReportTypePluginSupport_destroy_key(
                CommsChannelClearMessageCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelClearMessageCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelClearMessageCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelClearMessageCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelClearMessageCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandAckReportType *out,
                const CommsChannelClearMessageCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelClearMessageCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelClearMessageCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelClearMessageCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelClearMessageCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearMessageCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelClearMessageCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearMessageCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearMessageCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandAckReportTypeKeyHolder *key, 
                const CommsChannelClearMessageCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearMessageCommandAckReportType *instance, 
                const CommsChannelClearMessageCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearMessageCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelClearMessageCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelClearMessageCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelControl  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelClearMessageCommandAckReportTypePlugin_2003324543_h */

