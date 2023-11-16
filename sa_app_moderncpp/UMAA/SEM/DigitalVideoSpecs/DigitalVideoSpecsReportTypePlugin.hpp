

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalVideoSpecsReportTypePlugin_24736465_h
#define DigitalVideoSpecsReportTypePlugin_24736465_h

#include "DigitalVideoSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace DigitalVideoSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DigitalVideoSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DigitalVideoSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DigitalVideoSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DigitalVideoSpecsReportType.
            */
            typedef  class DigitalVideoSpecsReportType DigitalVideoSpecsReportTypeKeyHolder;

            #define DigitalVideoSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DigitalVideoSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DigitalVideoSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DigitalVideoSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DigitalVideoSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DigitalVideoSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DigitalVideoSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DigitalVideoSpecsReportType*
            DigitalVideoSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DigitalVideoSpecsReportType*
            DigitalVideoSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoSpecsReportType*
            DigitalVideoSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoSpecsReportTypePluginSupport_copy_data(
                DigitalVideoSpecsReportType *out,
                const DigitalVideoSpecsReportType *in);

            NDDSUSERDllExport extern void 
            DigitalVideoSpecsReportTypePluginSupport_destroy_data_w_params(
                DigitalVideoSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DigitalVideoSpecsReportTypePluginSupport_destroy_data_ex(
                DigitalVideoSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoSpecsReportTypePluginSupport_destroy_data(
                DigitalVideoSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            DigitalVideoSpecsReportTypePluginSupport_print_data(
                const DigitalVideoSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DigitalVideoSpecsReportType*
            DigitalVideoSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoSpecsReportType*
            DigitalVideoSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DigitalVideoSpecsReportTypePluginSupport_destroy_key_ex(
                DigitalVideoSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoSpecsReportTypePluginSupport_destroy_key(
                DigitalVideoSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DigitalVideoSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DigitalVideoSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DigitalVideoSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DigitalVideoSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DigitalVideoSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoSpecsReportType *out,
                const DigitalVideoSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DigitalVideoSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DigitalVideoSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DigitalVideoSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                DigitalVideoSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DigitalVideoSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoSpecsReportTypeKeyHolder *key, 
                const DigitalVideoSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoSpecsReportType *instance, 
                const DigitalVideoSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DigitalVideoSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DigitalVideoSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DigitalVideoSpecs  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DigitalVideoSpecsReportTypePlugin_24736465_h */

