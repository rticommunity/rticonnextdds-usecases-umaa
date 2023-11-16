

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SoftwareVersionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SoftwareVersionReportTypePlugin_1126667748_h
#define SoftwareVersionReportTypePlugin_1126667748_h

#include "SoftwareVersionReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

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
        namespace SoftwareVersionStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SoftwareVersionReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SoftwareVersionReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SoftwareVersionReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SoftwareVersionReportType.
            */
            typedef class SoftwareVersionReportType SoftwareVersionReportTypeKeyHolder;

            #define SoftwareVersionReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SoftwareVersionReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SoftwareVersionReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SoftwareVersionReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SoftwareVersionReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SoftwareVersionReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SoftwareVersionReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SoftwareVersionReportType*
            SoftwareVersionReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SoftwareVersionReportType*
            SoftwareVersionReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SoftwareVersionReportType*
            SoftwareVersionReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SoftwareVersionReportTypePluginSupport_copy_data(
                SoftwareVersionReportType *out,
                const SoftwareVersionReportType *in);

            NDDSUSERDllExport extern void 
            SoftwareVersionReportTypePluginSupport_destroy_data_w_params(
                SoftwareVersionReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SoftwareVersionReportTypePluginSupport_destroy_data_ex(
                SoftwareVersionReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SoftwareVersionReportTypePluginSupport_destroy_data(
                SoftwareVersionReportType *sample);

            NDDSUSERDllExport extern void 
            SoftwareVersionReportTypePluginSupport_print_data(
                const SoftwareVersionReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SoftwareVersionReportType*
            SoftwareVersionReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SoftwareVersionReportType*
            SoftwareVersionReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SoftwareVersionReportTypePluginSupport_destroy_key_ex(
                SoftwareVersionReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SoftwareVersionReportTypePluginSupport_destroy_key(
                SoftwareVersionReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SoftwareVersionReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SoftwareVersionReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SoftwareVersionReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SoftwareVersionReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SoftwareVersionReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SoftwareVersionReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SoftwareVersionReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SoftwareVersionReportType *out,
                const SoftwareVersionReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SoftwareVersionReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SoftwareVersionReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SoftwareVersionReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SoftwareVersionReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SoftwareVersionReportTypePlugin_deserialize_from_cdr_buffer(
                SoftwareVersionReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SoftwareVersionReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SoftwareVersionReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SoftwareVersionReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SoftwareVersionReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SoftwareVersionReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SoftwareVersionReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SoftwareVersionReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SoftwareVersionReportTypeKeyHolder *key, 
                const SoftwareVersionReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SoftwareVersionReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SoftwareVersionReportType *instance, 
                const SoftwareVersionReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SoftwareVersionReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SoftwareVersionReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SoftwareVersionReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SoftwareVersionStatus  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SoftwareVersionReportTypePlugin_1126667748_h */

