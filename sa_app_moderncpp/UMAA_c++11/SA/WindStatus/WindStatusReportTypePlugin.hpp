

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WindStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WindStatusReportTypePlugin_955608806_h
#define WindStatusReportTypePlugin_955608806_h

#include "WindStatusReportType.hpp"

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
        namespace WindStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WindStatusReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WindStatusReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WindStatusReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WindStatusReportType.
            */
            typedef class WindStatusReportType WindStatusReportTypeKeyHolder;

            #define WindStatusReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WindStatusReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WindStatusReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WindStatusReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WindStatusReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WindStatusReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WindStatusReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WindStatusReportType*
            WindStatusReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WindStatusReportType*
            WindStatusReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WindStatusReportType*
            WindStatusReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WindStatusReportTypePluginSupport_copy_data(
                WindStatusReportType *out,
                const WindStatusReportType *in);

            NDDSUSERDllExport extern void 
            WindStatusReportTypePluginSupport_destroy_data_w_params(
                WindStatusReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WindStatusReportTypePluginSupport_destroy_data_ex(
                WindStatusReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WindStatusReportTypePluginSupport_destroy_data(
                WindStatusReportType *sample);

            NDDSUSERDllExport extern void 
            WindStatusReportTypePluginSupport_print_data(
                const WindStatusReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WindStatusReportType*
            WindStatusReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WindStatusReportType*
            WindStatusReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WindStatusReportTypePluginSupport_destroy_key_ex(
                WindStatusReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WindStatusReportTypePluginSupport_destroy_key(
                WindStatusReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WindStatusReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WindStatusReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WindStatusReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WindStatusReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WindStatusReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WindStatusReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WindStatusReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WindStatusReportType *out,
                const WindStatusReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WindStatusReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WindStatusReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WindStatusReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WindStatusReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WindStatusReportTypePlugin_deserialize_from_cdr_buffer(
                WindStatusReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WindStatusReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WindStatusReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WindStatusReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WindStatusReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WindStatusReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WindStatusReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WindStatusReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WindStatusReportTypeKeyHolder *key, 
                const WindStatusReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            WindStatusReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WindStatusReportType *instance, 
                const WindStatusReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WindStatusReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WindStatusReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WindStatusReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WindStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WindStatusReportTypePlugin_955608806_h */

