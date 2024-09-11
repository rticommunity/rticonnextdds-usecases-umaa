

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelClearAllCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelClearAllCommandAckReportTypePlugin_1706888383_h
#define CommsChannelClearAllCommandAckReportTypePlugin_1706888383_h

#include "CommsChannelClearAllCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/CO/CommsChannelControl/CommsChannelClearAllCommandTypePlugin.hpp"
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
            * By default, this type is struct CommsChannelClearAllCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelClearAllCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelClearAllCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelClearAllCommandAckReportType.
            */
            typedef class CommsChannelClearAllCommandAckReportType CommsChannelClearAllCommandAckReportTypeKeyHolder;

            #define CommsChannelClearAllCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelClearAllCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelClearAllCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelClearAllCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelClearAllCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelClearAllCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelClearAllCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelClearAllCommandAckReportType*
            CommsChannelClearAllCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelClearAllCommandAckReportType*
            CommsChannelClearAllCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelClearAllCommandAckReportType*
            CommsChannelClearAllCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandAckReportTypePluginSupport_copy_data(
                CommsChannelClearAllCommandAckReportType *out,
                const CommsChannelClearAllCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandAckReportTypePluginSupport_destroy_data_w_params(
                CommsChannelClearAllCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandAckReportTypePluginSupport_destroy_data_ex(
                CommsChannelClearAllCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandAckReportTypePluginSupport_destroy_data(
                CommsChannelClearAllCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandAckReportTypePluginSupport_print_data(
                const CommsChannelClearAllCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelClearAllCommandAckReportType*
            CommsChannelClearAllCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelClearAllCommandAckReportType*
            CommsChannelClearAllCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandAckReportTypePluginSupport_destroy_key_ex(
                CommsChannelClearAllCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandAckReportTypePluginSupport_destroy_key(
                CommsChannelClearAllCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelClearAllCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelClearAllCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelClearAllCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelClearAllCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandAckReportType *out,
                const CommsChannelClearAllCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelClearAllCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelClearAllCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelClearAllCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelClearAllCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearAllCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelClearAllCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearAllCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelClearAllCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandAckReportTypeKeyHolder *key, 
                const CommsChannelClearAllCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelClearAllCommandAckReportType *instance, 
                const CommsChannelClearAllCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelClearAllCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelClearAllCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelClearAllCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelControl  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelClearAllCommandAckReportTypePlugin_1706888383_h */

