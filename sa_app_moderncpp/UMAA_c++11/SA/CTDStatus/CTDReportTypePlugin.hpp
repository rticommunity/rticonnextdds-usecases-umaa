

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CTDReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CTDReportTypePlugin_828906307_h
#define CTDReportTypePlugin_828906307_h

#include "CTDReportType.hpp"

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
        namespace CTDStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CTDReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CTDReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CTDReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CTDReportType.
            */
            typedef class CTDReportType CTDReportTypeKeyHolder;

            #define CTDReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CTDReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CTDReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CTDReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CTDReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CTDReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CTDReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CTDReportType*
            CTDReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CTDReportType*
            CTDReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CTDReportType*
            CTDReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CTDReportTypePluginSupport_copy_data(
                CTDReportType *out,
                const CTDReportType *in);

            NDDSUSERDllExport extern void 
            CTDReportTypePluginSupport_destroy_data_w_params(
                CTDReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CTDReportTypePluginSupport_destroy_data_ex(
                CTDReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CTDReportTypePluginSupport_destroy_data(
                CTDReportType *sample);

            NDDSUSERDllExport extern void 
            CTDReportTypePluginSupport_print_data(
                const CTDReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CTDReportType*
            CTDReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CTDReportType*
            CTDReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CTDReportTypePluginSupport_destroy_key_ex(
                CTDReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CTDReportTypePluginSupport_destroy_key(
                CTDReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CTDReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CTDReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CTDReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CTDReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CTDReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CTDReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CTDReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CTDReportType *out,
                const CTDReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CTDReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CTDReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CTDReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CTDReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CTDReportTypePlugin_deserialize_from_cdr_buffer(
                CTDReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CTDReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CTDReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CTDReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CTDReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CTDReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CTDReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CTDReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CTDReportTypeKeyHolder *key, 
                const CTDReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CTDReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CTDReportType *instance, 
                const CTDReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CTDReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CTDReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CTDReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CTDStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CTDReportTypePlugin_828906307_h */

