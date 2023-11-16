

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopConfigReportTypePlugin_1549002656_h
#define GuardedTeleopConfigReportTypePlugin_1549002656_h

#include "GuardedTeleopConfigReportType.hpp"

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
        namespace GuardedTeleopConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GuardedTeleopConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GuardedTeleopConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GuardedTeleopConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GuardedTeleopConfigReportType.
            */
            typedef  class GuardedTeleopConfigReportType GuardedTeleopConfigReportTypeKeyHolder;

            #define GuardedTeleopConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GuardedTeleopConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GuardedTeleopConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GuardedTeleopConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GuardedTeleopConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GuardedTeleopConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GuardedTeleopConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GuardedTeleopConfigReportType*
            GuardedTeleopConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GuardedTeleopConfigReportType*
            GuardedTeleopConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GuardedTeleopConfigReportType*
            GuardedTeleopConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopConfigReportTypePluginSupport_copy_data(
                GuardedTeleopConfigReportType *out,
                const GuardedTeleopConfigReportType *in);

            NDDSUSERDllExport extern void 
            GuardedTeleopConfigReportTypePluginSupport_destroy_data_w_params(
                GuardedTeleopConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GuardedTeleopConfigReportTypePluginSupport_destroy_data_ex(
                GuardedTeleopConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GuardedTeleopConfigReportTypePluginSupport_destroy_data(
                GuardedTeleopConfigReportType *sample);

            NDDSUSERDllExport extern void 
            GuardedTeleopConfigReportTypePluginSupport_print_data(
                const GuardedTeleopConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GuardedTeleopConfigReportType*
            GuardedTeleopConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GuardedTeleopConfigReportType*
            GuardedTeleopConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GuardedTeleopConfigReportTypePluginSupport_destroy_key_ex(
                GuardedTeleopConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GuardedTeleopConfigReportTypePluginSupport_destroy_key(
                GuardedTeleopConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GuardedTeleopConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GuardedTeleopConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GuardedTeleopConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GuardedTeleopConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GuardedTeleopConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopConfigReportType *out,
                const GuardedTeleopConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GuardedTeleopConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GuardedTeleopConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GuardedTeleopConfigReportTypePlugin_deserialize_from_cdr_buffer(
                GuardedTeleopConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GuardedTeleopConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GuardedTeleopConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopConfigReportTypeKeyHolder *key, 
                const GuardedTeleopConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GuardedTeleopConfigReportType *instance, 
                const GuardedTeleopConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GuardedTeleopConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GuardedTeleopConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GuardedTeleopConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GuardedTeleopConfig  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GuardedTeleopConfigReportTypePlugin_1549002656_h */

