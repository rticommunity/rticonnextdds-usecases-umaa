

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelDataEncodingReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelDataEncodingReportTypePlugin_1702893139_h
#define CommsChannelDataEncodingReportTypePlugin_1702893139_h

#include "CommsChannelDataEncodingReportType.hpp"

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
        namespace CommsChannelDataEncodingReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelDataEncodingReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelDataEncodingReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelDataEncodingReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelDataEncodingReportType.
            */
            typedef class CommsChannelDataEncodingReportType CommsChannelDataEncodingReportTypeKeyHolder;

            #define CommsChannelDataEncodingReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelDataEncodingReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelDataEncodingReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelDataEncodingReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelDataEncodingReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelDataEncodingReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelDataEncodingReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelDataEncodingReportType*
            CommsChannelDataEncodingReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelDataEncodingReportType*
            CommsChannelDataEncodingReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDataEncodingReportType*
            CommsChannelDataEncodingReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDataEncodingReportTypePluginSupport_copy_data(
                CommsChannelDataEncodingReportType *out,
                const CommsChannelDataEncodingReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelDataEncodingReportTypePluginSupport_destroy_data_w_params(
                CommsChannelDataEncodingReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelDataEncodingReportTypePluginSupport_destroy_data_ex(
                CommsChannelDataEncodingReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDataEncodingReportTypePluginSupport_destroy_data(
                CommsChannelDataEncodingReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelDataEncodingReportTypePluginSupport_print_data(
                const CommsChannelDataEncodingReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelDataEncodingReportType*
            CommsChannelDataEncodingReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelDataEncodingReportType*
            CommsChannelDataEncodingReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelDataEncodingReportTypePluginSupport_destroy_key_ex(
                CommsChannelDataEncodingReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelDataEncodingReportTypePluginSupport_destroy_key(
                CommsChannelDataEncodingReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelDataEncodingReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelDataEncodingReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelDataEncodingReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelDataEncodingReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelDataEncodingReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDataEncodingReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDataEncodingReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDataEncodingReportType *out,
                const CommsChannelDataEncodingReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelDataEncodingReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelDataEncodingReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDataEncodingReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDataEncodingReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelDataEncodingReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelDataEncodingReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDataEncodingReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelDataEncodingReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDataEncodingReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelDataEncodingReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDataEncodingReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDataEncodingReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDataEncodingReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDataEncodingReportTypeKeyHolder *key, 
                const CommsChannelDataEncodingReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDataEncodingReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelDataEncodingReportType *instance, 
                const CommsChannelDataEncodingReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelDataEncodingReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelDataEncodingReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelDataEncodingReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelDataEncodingReport  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelDataEncodingReportTypePlugin_1702893139_h */

