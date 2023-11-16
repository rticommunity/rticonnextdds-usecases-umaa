

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DateTimeReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DateTimeReportTypePlugin_502473012_h
#define DateTimeReportTypePlugin_502473012_h

#include "DateTimeReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace DateTimeStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DateTimeReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DateTimeReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DateTimeReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DateTimeReportType.
            */
            typedef class DateTimeReportType DateTimeReportTypeKeyHolder;

            #define DateTimeReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DateTimeReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DateTimeReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DateTimeReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DateTimeReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DateTimeReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DateTimeReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DateTimeReportType*
            DateTimeReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DateTimeReportType*
            DateTimeReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DateTimeReportType*
            DateTimeReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DateTimeReportTypePluginSupport_copy_data(
                DateTimeReportType *out,
                const DateTimeReportType *in);

            NDDSUSERDllExport extern void 
            DateTimeReportTypePluginSupport_destroy_data_w_params(
                DateTimeReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DateTimeReportTypePluginSupport_destroy_data_ex(
                DateTimeReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DateTimeReportTypePluginSupport_destroy_data(
                DateTimeReportType *sample);

            NDDSUSERDllExport extern void 
            DateTimeReportTypePluginSupport_print_data(
                const DateTimeReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DateTimeReportType*
            DateTimeReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DateTimeReportType*
            DateTimeReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DateTimeReportTypePluginSupport_destroy_key_ex(
                DateTimeReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DateTimeReportTypePluginSupport_destroy_key(
                DateTimeReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DateTimeReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DateTimeReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DateTimeReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DateTimeReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DateTimeReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DateTimeReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeReportType *out,
                const DateTimeReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DateTimeReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DateTimeReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DateTimeReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DateTimeReportTypePlugin_deserialize_from_cdr_buffer(
                DateTimeReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DateTimeReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DateTimeReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DateTimeReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DateTimeReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DateTimeReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DateTimeReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeReportTypeKeyHolder *key, 
                const DateTimeReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            DateTimeReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DateTimeReportType *instance, 
                const DateTimeReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DateTimeReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DateTimeReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DateTimeReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DateTimeStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DateTimeReportTypePlugin_502473012_h */

