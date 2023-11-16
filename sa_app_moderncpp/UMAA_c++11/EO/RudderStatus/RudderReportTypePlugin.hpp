

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RudderReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RudderReportTypePlugin_1323553739_h
#define RudderReportTypePlugin_1323553739_h

#include "RudderReportType.hpp"

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
    namespace EO {
        namespace RudderStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RudderReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RudderReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RudderReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RudderReportType.
            */
            typedef class RudderReportType RudderReportTypeKeyHolder;

            #define RudderReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RudderReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RudderReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RudderReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RudderReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RudderReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RudderReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RudderReportType*
            RudderReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RudderReportType*
            RudderReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RudderReportType*
            RudderReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RudderReportTypePluginSupport_copy_data(
                RudderReportType *out,
                const RudderReportType *in);

            NDDSUSERDllExport extern void 
            RudderReportTypePluginSupport_destroy_data_w_params(
                RudderReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RudderReportTypePluginSupport_destroy_data_ex(
                RudderReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RudderReportTypePluginSupport_destroy_data(
                RudderReportType *sample);

            NDDSUSERDllExport extern void 
            RudderReportTypePluginSupport_print_data(
                const RudderReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RudderReportType*
            RudderReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RudderReportType*
            RudderReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RudderReportTypePluginSupport_destroy_key_ex(
                RudderReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RudderReportTypePluginSupport_destroy_key(
                RudderReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RudderReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RudderReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RudderReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RudderReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RudderReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RudderReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RudderReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RudderReportType *out,
                const RudderReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RudderReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RudderReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RudderReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RudderReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RudderReportTypePlugin_deserialize_from_cdr_buffer(
                RudderReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RudderReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RudderReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RudderReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RudderReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RudderReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RudderReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RudderReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RudderReportTypeKeyHolder *key, 
                const RudderReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            RudderReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RudderReportType *instance, 
                const RudderReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RudderReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RudderReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RudderReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RudderStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RudderReportTypePlugin_1323553739_h */

