

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopCommandAckReportTypePlugin_1479877957_h
#define GuardedTeleopCommandAckReportTypePlugin_1479877957_h

#include "GuardedTeleopCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GuardedTeleopControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GuardedTeleopCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GuardedTeleopCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GuardedTeleopCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GuardedTeleopCommandAckReportType.
            */
            typedef class GuardedTeleopCommandAckReportType GuardedTeleopCommandAckReportTypeKeyHolder;

            #define GuardedTeleopCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GuardedTeleopCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GuardedTeleopCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GuardedTeleopCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GuardedTeleopCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GuardedTeleopCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GuardedTeleopCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GuardedTeleopCommandAckReportType*
            GuardedTeleopCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GuardedTeleopCommandAckReportType*
            GuardedTeleopCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GuardedTeleopCommandAckReportType*
            GuardedTeleopCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandAckReportTypePluginSupport_copy_data(
                GuardedTeleopCommandAckReportType *out,
                const GuardedTeleopCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandAckReportTypePluginSupport_destroy_data_w_params(
                GuardedTeleopCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandAckReportTypePluginSupport_destroy_data_ex(
                GuardedTeleopCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandAckReportTypePluginSupport_destroy_data(
                GuardedTeleopCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandAckReportTypePluginSupport_print_data(
                const GuardedTeleopCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GuardedTeleopCommandAckReportType*
            GuardedTeleopCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GuardedTeleopCommandAckReportType*
            GuardedTeleopCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandAckReportTypePluginSupport_destroy_key_ex(
                GuardedTeleopCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandAckReportTypePluginSupport_destroy_key(
                GuardedTeleopCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GuardedTeleopCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GuardedTeleopCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GuardedTeleopCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GuardedTeleopCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandAckReportType *out,
                const GuardedTeleopCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GuardedTeleopCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GuardedTeleopCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GuardedTeleopCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                GuardedTeleopCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GuardedTeleopCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandAckReportTypeKeyHolder *key, 
                const GuardedTeleopCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopCommandAckReportType *instance, 
                const GuardedTeleopCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GuardedTeleopCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GuardedTeleopCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GuardedTeleopControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GuardedTeleopCommandAckReportTypePlugin_1479877957_h */

