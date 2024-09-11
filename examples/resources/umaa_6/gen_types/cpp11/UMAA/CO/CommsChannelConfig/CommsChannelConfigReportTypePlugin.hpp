

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelConfigReportTypePlugin_1838536890_h
#define CommsChannelConfigReportTypePlugin_1838536890_h

#include "CommsChannelConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/LargeSetMetadataPlugin.hpp"
#include "UMAA/CO/CommsChannel/CommsChannelMessageConfigTypePlugin.hpp"
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
            * By default, this type is struct CommsChannelConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelConfigReportType.
            */
            typedef class CommsChannelConfigReportType CommsChannelConfigReportTypeKeyHolder;

            #define CommsChannelConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelConfigReportType*
            CommsChannelConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelConfigReportType*
            CommsChannelConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelConfigReportType*
            CommsChannelConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypePluginSupport_copy_data(
                CommsChannelConfigReportType *out,
                const CommsChannelConfigReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypePluginSupport_destroy_data_w_params(
                CommsChannelConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypePluginSupport_destroy_data_ex(
                CommsChannelConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypePluginSupport_destroy_data(
                CommsChannelConfigReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypePluginSupport_print_data(
                const CommsChannelConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelConfigReportType*
            CommsChannelConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelConfigReportType*
            CommsChannelConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypePluginSupport_destroy_key_ex(
                CommsChannelConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypePluginSupport_destroy_key(
                CommsChannelConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportType *out,
                const CommsChannelConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelConfigReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeKeyHolder *key, 
                const CommsChannelConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportType *instance, 
                const CommsChannelConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelConfigReportTypePlugin_delete(struct PRESTypePlugin *);

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelConfigReportTypeMessageConfigsSetElement
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelConfigReportTypeMessageConfigsSetElement)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelConfigReportTypeMessageConfigsSetElement must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelConfigReportTypeMessageConfigsSetElement.
            */
            typedef class CommsChannelConfigReportTypeMessageConfigsSetElement CommsChannelConfigReportTypeMessageConfigsSetElementKeyHolder;

            #define CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelConfigReportTypeMessageConfigsSetElement*
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelConfigReportTypeMessageConfigsSetElement*
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelConfigReportTypeMessageConfigsSetElement*
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_copy_data(
                CommsChannelConfigReportTypeMessageConfigsSetElement *out,
                const CommsChannelConfigReportTypeMessageConfigsSetElement *in);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_data_w_params(
                CommsChannelConfigReportTypeMessageConfigsSetElement *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_data_ex(
                CommsChannelConfigReportTypeMessageConfigsSetElement *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_data(
                CommsChannelConfigReportTypeMessageConfigsSetElement *sample);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_print_data(
                const CommsChannelConfigReportTypeMessageConfigsSetElement *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelConfigReportTypeMessageConfigsSetElement*
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelConfigReportTypeMessageConfigsSetElement*
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_key_ex(
                CommsChannelConfigReportTypeMessageConfigsSetElementKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPluginSupport_destroy_key(
                CommsChannelConfigReportTypeMessageConfigsSetElementKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElement *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElement *out,
                const CommsChannelConfigReportTypeMessageConfigsSetElement *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelConfigReportTypeMessageConfigsSetElement *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElement **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_deserialize_from_cdr_buffer(
                CommsChannelConfigReportTypeMessageConfigsSetElement *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElement ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElementKeyHolder *key, 
                const CommsChannelConfigReportTypeMessageConfigsSetElement *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelConfigReportTypeMessageConfigsSetElement *instance, 
                const CommsChannelConfigReportTypeMessageConfigsSetElementKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelConfigReportTypeMessageConfigsSetElementPlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelConfig  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelConfigReportTypePlugin_1838536890_h */

