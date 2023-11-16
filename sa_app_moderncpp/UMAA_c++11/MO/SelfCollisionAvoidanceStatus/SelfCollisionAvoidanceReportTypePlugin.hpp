

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceReportTypePlugin_720018204_h
#define SelfCollisionAvoidanceReportTypePlugin_720018204_h

#include "SelfCollisionAvoidanceReportType.hpp"

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
        namespace SelfCollisionAvoidanceStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SelfCollisionAvoidanceReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SelfCollisionAvoidanceReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SelfCollisionAvoidanceReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SelfCollisionAvoidanceReportType.
            */
            typedef class SelfCollisionAvoidanceReportType SelfCollisionAvoidanceReportTypeKeyHolder;

            #define SelfCollisionAvoidanceReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SelfCollisionAvoidanceReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SelfCollisionAvoidanceReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SelfCollisionAvoidanceReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SelfCollisionAvoidanceReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SelfCollisionAvoidanceReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SelfCollisionAvoidanceReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SelfCollisionAvoidanceReportType*
            SelfCollisionAvoidanceReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SelfCollisionAvoidanceReportType*
            SelfCollisionAvoidanceReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceReportType*
            SelfCollisionAvoidanceReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceReportTypePluginSupport_copy_data(
                SelfCollisionAvoidanceReportType *out,
                const SelfCollisionAvoidanceReportType *in);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceReportTypePluginSupport_destroy_data_w_params(
                SelfCollisionAvoidanceReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceReportTypePluginSupport_destroy_data_ex(
                SelfCollisionAvoidanceReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceReportTypePluginSupport_destroy_data(
                SelfCollisionAvoidanceReportType *sample);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceReportTypePluginSupport_print_data(
                const SelfCollisionAvoidanceReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SelfCollisionAvoidanceReportType*
            SelfCollisionAvoidanceReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceReportType*
            SelfCollisionAvoidanceReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceReportTypePluginSupport_destroy_key_ex(
                SelfCollisionAvoidanceReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceReportTypePluginSupport_destroy_key(
                SelfCollisionAvoidanceReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SelfCollisionAvoidanceReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SelfCollisionAvoidanceReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SelfCollisionAvoidanceReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceReportType *out,
                const SelfCollisionAvoidanceReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SelfCollisionAvoidanceReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceReportTypePlugin_deserialize_from_cdr_buffer(
                SelfCollisionAvoidanceReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SelfCollisionAvoidanceReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceReportTypeKeyHolder *key, 
                const SelfCollisionAvoidanceReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceReportType *instance, 
                const SelfCollisionAvoidanceReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SelfCollisionAvoidanceReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SelfCollisionAvoidanceReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SelfCollisionAvoidanceStatus  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SelfCollisionAvoidanceReportTypePlugin_720018204_h */

