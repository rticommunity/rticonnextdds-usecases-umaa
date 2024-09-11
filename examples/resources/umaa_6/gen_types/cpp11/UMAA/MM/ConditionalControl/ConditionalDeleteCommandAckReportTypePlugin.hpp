

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConditionalDeleteCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConditionalDeleteCommandAckReportTypePlugin_1215302372_h
#define ConditionalDeleteCommandAckReportTypePlugin_1215302372_h

#include "ConditionalDeleteCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/ConditionalControl/ConditionalDeleteCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ConditionalControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ConditionalDeleteCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ConditionalDeleteCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ConditionalDeleteCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ConditionalDeleteCommandAckReportType.
            */
            typedef class ConditionalDeleteCommandAckReportType ConditionalDeleteCommandAckReportTypeKeyHolder;

            #define ConditionalDeleteCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ConditionalDeleteCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ConditionalDeleteCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ConditionalDeleteCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ConditionalDeleteCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ConditionalDeleteCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ConditionalDeleteCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ConditionalDeleteCommandAckReportType*
            ConditionalDeleteCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ConditionalDeleteCommandAckReportType*
            ConditionalDeleteCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalDeleteCommandAckReportType*
            ConditionalDeleteCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandAckReportTypePluginSupport_copy_data(
                ConditionalDeleteCommandAckReportType *out,
                const ConditionalDeleteCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandAckReportTypePluginSupport_destroy_data_w_params(
                ConditionalDeleteCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandAckReportTypePluginSupport_destroy_data_ex(
                ConditionalDeleteCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandAckReportTypePluginSupport_destroy_data(
                ConditionalDeleteCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandAckReportTypePluginSupport_print_data(
                const ConditionalDeleteCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ConditionalDeleteCommandAckReportType*
            ConditionalDeleteCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalDeleteCommandAckReportType*
            ConditionalDeleteCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandAckReportTypePluginSupport_destroy_key_ex(
                ConditionalDeleteCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandAckReportTypePluginSupport_destroy_key(
                ConditionalDeleteCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ConditionalDeleteCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ConditionalDeleteCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ConditionalDeleteCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ConditionalDeleteCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandAckReportType *out,
                const ConditionalDeleteCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ConditionalDeleteCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ConditionalDeleteCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ConditionalDeleteCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                ConditionalDeleteCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ConditionalDeleteCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ConditionalDeleteCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ConditionalDeleteCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ConditionalDeleteCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandAckReportTypeKeyHolder *key, 
                const ConditionalDeleteCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalDeleteCommandAckReportType *instance, 
                const ConditionalDeleteCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ConditionalDeleteCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ConditionalDeleteCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ConditionalDeleteCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ConditionalControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConditionalDeleteCommandAckReportTypePlugin_1215302372_h */

