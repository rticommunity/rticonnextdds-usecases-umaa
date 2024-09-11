

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelSystemTimeReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelSystemTimeReportTypePlugin_227534564_h
#define CommsChannelSystemTimeReportTypePlugin_227534564_h

#include "CommsChannelSystemTimeReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

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
        namespace CommsChannelSystemTimeReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelSystemTimeReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelSystemTimeReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelSystemTimeReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelSystemTimeReportType.
            */
            typedef class CommsChannelSystemTimeReportType CommsChannelSystemTimeReportTypeKeyHolder;

            #define CommsChannelSystemTimeReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelSystemTimeReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelSystemTimeReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelSystemTimeReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelSystemTimeReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelSystemTimeReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelSystemTimeReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelSystemTimeReportType*
            CommsChannelSystemTimeReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelSystemTimeReportType*
            CommsChannelSystemTimeReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelSystemTimeReportType*
            CommsChannelSystemTimeReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSystemTimeReportTypePluginSupport_copy_data(
                CommsChannelSystemTimeReportType *out,
                const CommsChannelSystemTimeReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelSystemTimeReportTypePluginSupport_destroy_data_w_params(
                CommsChannelSystemTimeReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelSystemTimeReportTypePluginSupport_destroy_data_ex(
                CommsChannelSystemTimeReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelSystemTimeReportTypePluginSupport_destroy_data(
                CommsChannelSystemTimeReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelSystemTimeReportTypePluginSupport_print_data(
                const CommsChannelSystemTimeReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelSystemTimeReportType*
            CommsChannelSystemTimeReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelSystemTimeReportType*
            CommsChannelSystemTimeReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelSystemTimeReportTypePluginSupport_destroy_key_ex(
                CommsChannelSystemTimeReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelSystemTimeReportTypePluginSupport_destroy_key(
                CommsChannelSystemTimeReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelSystemTimeReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelSystemTimeReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelSystemTimeReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelSystemTimeReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelSystemTimeReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSystemTimeReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSystemTimeReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSystemTimeReportType *out,
                const CommsChannelSystemTimeReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelSystemTimeReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelSystemTimeReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSystemTimeReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSystemTimeReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelSystemTimeReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelSystemTimeReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSystemTimeReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelSystemTimeReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSystemTimeReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelSystemTimeReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSystemTimeReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSystemTimeReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSystemTimeReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSystemTimeReportTypeKeyHolder *key, 
                const CommsChannelSystemTimeReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSystemTimeReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelSystemTimeReportType *instance, 
                const CommsChannelSystemTimeReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelSystemTimeReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelSystemTimeReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelSystemTimeReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelSystemTimeReport  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelSystemTimeReportTypePlugin_227534564_h */

