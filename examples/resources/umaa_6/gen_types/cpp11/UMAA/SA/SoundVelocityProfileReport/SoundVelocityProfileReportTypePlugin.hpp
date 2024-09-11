

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SoundVelocityProfileReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SoundVelocityProfileReportTypePlugin_410166589_h
#define SoundVelocityProfileReportTypePlugin_410166589_h

#include "SoundVelocityProfileReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Environment/DepthSpeedPairTypePlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace SoundVelocityProfileReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SoundVelocityProfileReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SoundVelocityProfileReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SoundVelocityProfileReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SoundVelocityProfileReportType.
            */
            typedef class SoundVelocityProfileReportType SoundVelocityProfileReportTypeKeyHolder;

            #define SoundVelocityProfileReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SoundVelocityProfileReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SoundVelocityProfileReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SoundVelocityProfileReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SoundVelocityProfileReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SoundVelocityProfileReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SoundVelocityProfileReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SoundVelocityProfileReportType*
            SoundVelocityProfileReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SoundVelocityProfileReportType*
            SoundVelocityProfileReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SoundVelocityProfileReportType*
            SoundVelocityProfileReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SoundVelocityProfileReportTypePluginSupport_copy_data(
                SoundVelocityProfileReportType *out,
                const SoundVelocityProfileReportType *in);

            NDDSUSERDllExport extern void 
            SoundVelocityProfileReportTypePluginSupport_destroy_data_w_params(
                SoundVelocityProfileReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SoundVelocityProfileReportTypePluginSupport_destroy_data_ex(
                SoundVelocityProfileReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SoundVelocityProfileReportTypePluginSupport_destroy_data(
                SoundVelocityProfileReportType *sample);

            NDDSUSERDllExport extern void 
            SoundVelocityProfileReportTypePluginSupport_print_data(
                const SoundVelocityProfileReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SoundVelocityProfileReportType*
            SoundVelocityProfileReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SoundVelocityProfileReportType*
            SoundVelocityProfileReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SoundVelocityProfileReportTypePluginSupport_destroy_key_ex(
                SoundVelocityProfileReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SoundVelocityProfileReportTypePluginSupport_destroy_key(
                SoundVelocityProfileReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SoundVelocityProfileReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SoundVelocityProfileReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SoundVelocityProfileReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SoundVelocityProfileReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SoundVelocityProfileReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SoundVelocityProfileReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SoundVelocityProfileReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SoundVelocityProfileReportType *out,
                const SoundVelocityProfileReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SoundVelocityProfileReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SoundVelocityProfileReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SoundVelocityProfileReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SoundVelocityProfileReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SoundVelocityProfileReportTypePlugin_deserialize_from_cdr_buffer(
                SoundVelocityProfileReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SoundVelocityProfileReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SoundVelocityProfileReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SoundVelocityProfileReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SoundVelocityProfileReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SoundVelocityProfileReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SoundVelocityProfileReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SoundVelocityProfileReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SoundVelocityProfileReportTypeKeyHolder *key, 
                const SoundVelocityProfileReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SoundVelocityProfileReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SoundVelocityProfileReportType *instance, 
                const SoundVelocityProfileReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SoundVelocityProfileReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SoundVelocityProfileReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SoundVelocityProfileReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SoundVelocityProfileReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SoundVelocityProfileReportTypePlugin_410166589_h */

