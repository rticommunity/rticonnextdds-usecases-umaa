

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceCommandAckReportTypePlugin_1854435426_h
#define SelfCollisionAvoidanceCommandAckReportTypePlugin_1854435426_h

#include "SelfCollisionAvoidanceCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

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
        namespace SelfCollisionAvoidanceControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SelfCollisionAvoidanceCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SelfCollisionAvoidanceCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SelfCollisionAvoidanceCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SelfCollisionAvoidanceCommandAckReportType.
            */
            typedef  class SelfCollisionAvoidanceCommandAckReportType SelfCollisionAvoidanceCommandAckReportTypeKeyHolder;

            #define SelfCollisionAvoidanceCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SelfCollisionAvoidanceCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SelfCollisionAvoidanceCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SelfCollisionAvoidanceCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SelfCollisionAvoidanceCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SelfCollisionAvoidanceCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SelfCollisionAvoidanceCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandAckReportType*
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandAckReportType*
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandAckReportType*
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_copy_data(
                SelfCollisionAvoidanceCommandAckReportType *out,
                const SelfCollisionAvoidanceCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_destroy_data_w_params(
                SelfCollisionAvoidanceCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_destroy_data_ex(
                SelfCollisionAvoidanceCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_destroy_data(
                SelfCollisionAvoidanceCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_print_data(
                const SelfCollisionAvoidanceCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandAckReportType*
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceCommandAckReportType*
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_destroy_key_ex(
                SelfCollisionAvoidanceCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandAckReportTypePluginSupport_destroy_key(
                SelfCollisionAvoidanceCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SelfCollisionAvoidanceCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandAckReportType *out,
                const SelfCollisionAvoidanceCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SelfCollisionAvoidanceCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                SelfCollisionAvoidanceCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandAckReportTypeKeyHolder *key, 
                const SelfCollisionAvoidanceCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceCommandAckReportType *instance, 
                const SelfCollisionAvoidanceCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SelfCollisionAvoidanceCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SelfCollisionAvoidanceCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SelfCollisionAvoidanceControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SelfCollisionAvoidanceCommandAckReportTypePlugin_1854435426_h */

