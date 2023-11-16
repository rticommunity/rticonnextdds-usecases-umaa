

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinReportTypePlugin_1650218495_h
#define FinReportTypePlugin_1650218495_h

#include "FinReportType.hpp"

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
        namespace FinStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FinReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FinReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FinReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FinReportType.
            */
            typedef  class FinReportType FinReportTypeKeyHolder;

            #define FinReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FinReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FinReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FinReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FinReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FinReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FinReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FinReportType*
            FinReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FinReportType*
            FinReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinReportType*
            FinReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FinReportTypePluginSupport_copy_data(
                FinReportType *out,
                const FinReportType *in);

            NDDSUSERDllExport extern void 
            FinReportTypePluginSupport_destroy_data_w_params(
                FinReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FinReportTypePluginSupport_destroy_data_ex(
                FinReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinReportTypePluginSupport_destroy_data(
                FinReportType *sample);

            NDDSUSERDllExport extern void 
            FinReportTypePluginSupport_print_data(
                const FinReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FinReportType*
            FinReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinReportType*
            FinReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FinReportTypePluginSupport_destroy_key_ex(
                FinReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinReportTypePluginSupport_destroy_key(
                FinReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FinReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FinReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FinReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FinReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FinReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FinReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinReportType *out,
                const FinReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FinReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FinReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FinReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FinReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FinReportTypePlugin_deserialize_from_cdr_buffer(
                FinReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FinReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FinReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FinReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FinReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FinReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FinReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FinReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FinReportTypeKeyHolder *key, 
                const FinReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            FinReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FinReportType *instance, 
                const FinReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FinReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FinReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FinReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FinStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FinReportTypePlugin_1650218495_h */

