

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LogReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LogReportTypePlugin_448976825_h
#define LogReportTypePlugin_448976825_h

#include "LogReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace LogReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LogReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LogReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LogReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LogReportType.
            */
            typedef class LogReportType LogReportTypeKeyHolder;

            #define LogReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LogReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LogReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LogReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LogReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LogReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LogReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LogReportType*
            LogReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LogReportType*
            LogReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LogReportType*
            LogReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LogReportTypePluginSupport_copy_data(
                LogReportType *out,
                const LogReportType *in);

            NDDSUSERDllExport extern void 
            LogReportTypePluginSupport_destroy_data_w_params(
                LogReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LogReportTypePluginSupport_destroy_data_ex(
                LogReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LogReportTypePluginSupport_destroy_data(
                LogReportType *sample);

            NDDSUSERDllExport extern void 
            LogReportTypePluginSupport_print_data(
                const LogReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LogReportType*
            LogReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LogReportType*
            LogReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LogReportTypePluginSupport_destroy_key_ex(
                LogReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LogReportTypePluginSupport_destroy_key(
                LogReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LogReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LogReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LogReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LogReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LogReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LogReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LogReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LogReportType *out,
                const LogReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LogReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LogReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LogReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LogReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LogReportTypePlugin_deserialize_from_cdr_buffer(
                LogReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LogReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LogReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LogReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LogReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LogReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LogReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LogReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LogReportTypeKeyHolder *key, 
                const LogReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            LogReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LogReportType *instance, 
                const LogReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LogReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LogReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LogReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LogReport  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LogReportTypePlugin_448976825_h */

