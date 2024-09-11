

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConditionalStateReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConditionalStateReportTypePlugin_1655043474_h
#define ConditionalStateReportTypePlugin_1655043474_h

#include "ConditionalStateReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ConditionalStateReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ConditionalStateReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ConditionalStateReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ConditionalStateReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ConditionalStateReportType.
            */
            typedef class ConditionalStateReportType ConditionalStateReportTypeKeyHolder;

            #define ConditionalStateReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ConditionalStateReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ConditionalStateReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ConditionalStateReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ConditionalStateReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ConditionalStateReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ConditionalStateReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ConditionalStateReportType*
            ConditionalStateReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ConditionalStateReportType*
            ConditionalStateReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalStateReportType*
            ConditionalStateReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ConditionalStateReportTypePluginSupport_copy_data(
                ConditionalStateReportType *out,
                const ConditionalStateReportType *in);

            NDDSUSERDllExport extern void 
            ConditionalStateReportTypePluginSupport_destroy_data_w_params(
                ConditionalStateReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ConditionalStateReportTypePluginSupport_destroy_data_ex(
                ConditionalStateReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalStateReportTypePluginSupport_destroy_data(
                ConditionalStateReportType *sample);

            NDDSUSERDllExport extern void 
            ConditionalStateReportTypePluginSupport_print_data(
                const ConditionalStateReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ConditionalStateReportType*
            ConditionalStateReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ConditionalStateReportType*
            ConditionalStateReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ConditionalStateReportTypePluginSupport_destroy_key_ex(
                ConditionalStateReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ConditionalStateReportTypePluginSupport_destroy_key(
                ConditionalStateReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ConditionalStateReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ConditionalStateReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ConditionalStateReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ConditionalStateReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ConditionalStateReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalStateReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ConditionalStateReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalStateReportType *out,
                const ConditionalStateReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ConditionalStateReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ConditionalStateReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ConditionalStateReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalStateReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ConditionalStateReportTypePlugin_deserialize_from_cdr_buffer(
                ConditionalStateReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ConditionalStateReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ConditionalStateReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ConditionalStateReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ConditionalStateReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ConditionalStateReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalStateReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ConditionalStateReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalStateReportTypeKeyHolder *key, 
                const ConditionalStateReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ConditionalStateReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ConditionalStateReportType *instance, 
                const ConditionalStateReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ConditionalStateReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ConditionalStateReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ConditionalStateReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ConditionalStateReport  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ConditionalStateReportTypePlugin_1655043474_h */

