

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelReceiverStatisticsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelReceiverStatisticsReportTypePlugin_362474612_h
#define CommsChannelReceiverStatisticsReportTypePlugin_362474612_h

#include "CommsChannelReceiverStatisticsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/CO/CommsChannel/CommsChannelReceiverStatisticsTypePlugin.hpp"
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
        namespace CommsChannelStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelReceiverStatisticsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelReceiverStatisticsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelReceiverStatisticsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelReceiverStatisticsReportType.
            */
            typedef class CommsChannelReceiverStatisticsReportType CommsChannelReceiverStatisticsReportTypeKeyHolder;

            #define CommsChannelReceiverStatisticsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelReceiverStatisticsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelReceiverStatisticsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelReceiverStatisticsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelReceiverStatisticsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelReceiverStatisticsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelReceiverStatisticsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelReceiverStatisticsReportType*
            CommsChannelReceiverStatisticsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelReceiverStatisticsReportType*
            CommsChannelReceiverStatisticsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelReceiverStatisticsReportType*
            CommsChannelReceiverStatisticsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelReceiverStatisticsReportTypePluginSupport_copy_data(
                CommsChannelReceiverStatisticsReportType *out,
                const CommsChannelReceiverStatisticsReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelReceiverStatisticsReportTypePluginSupport_destroy_data_w_params(
                CommsChannelReceiverStatisticsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelReceiverStatisticsReportTypePluginSupport_destroy_data_ex(
                CommsChannelReceiverStatisticsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelReceiverStatisticsReportTypePluginSupport_destroy_data(
                CommsChannelReceiverStatisticsReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelReceiverStatisticsReportTypePluginSupport_print_data(
                const CommsChannelReceiverStatisticsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelReceiverStatisticsReportType*
            CommsChannelReceiverStatisticsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelReceiverStatisticsReportType*
            CommsChannelReceiverStatisticsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelReceiverStatisticsReportTypePluginSupport_destroy_key_ex(
                CommsChannelReceiverStatisticsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelReceiverStatisticsReportTypePluginSupport_destroy_key(
                CommsChannelReceiverStatisticsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelReceiverStatisticsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelReceiverStatisticsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelReceiverStatisticsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelReceiverStatisticsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelReceiverStatisticsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelReceiverStatisticsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelReceiverStatisticsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelReceiverStatisticsReportType *out,
                const CommsChannelReceiverStatisticsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelReceiverStatisticsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelReceiverStatisticsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelReceiverStatisticsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelReceiverStatisticsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelReceiverStatisticsReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelReceiverStatisticsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelReceiverStatisticsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelReceiverStatisticsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelReceiverStatisticsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelReceiverStatisticsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelReceiverStatisticsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelReceiverStatisticsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelReceiverStatisticsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelReceiverStatisticsReportTypeKeyHolder *key, 
                const CommsChannelReceiverStatisticsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelReceiverStatisticsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelReceiverStatisticsReportType *instance, 
                const CommsChannelReceiverStatisticsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelReceiverStatisticsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelReceiverStatisticsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelReceiverStatisticsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelStatus  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelReceiverStatisticsReportTypePlugin_362474612_h */

