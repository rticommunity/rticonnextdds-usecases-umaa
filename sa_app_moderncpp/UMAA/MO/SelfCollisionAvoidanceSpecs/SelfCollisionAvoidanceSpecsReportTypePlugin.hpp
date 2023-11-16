

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceSpecsReportTypePlugin_742993316_h
#define SelfCollisionAvoidanceSpecsReportTypePlugin_742993316_h

#include "SelfCollisionAvoidanceSpecsReportType.hpp"

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
    namespace MO {
        namespace SelfCollisionAvoidanceSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SelfCollisionAvoidanceSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SelfCollisionAvoidanceSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SelfCollisionAvoidanceSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SelfCollisionAvoidanceSpecsReportType.
            */
            typedef  class SelfCollisionAvoidanceSpecsReportType SelfCollisionAvoidanceSpecsReportTypeKeyHolder;

            #define SelfCollisionAvoidanceSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SelfCollisionAvoidanceSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SelfCollisionAvoidanceSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SelfCollisionAvoidanceSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SelfCollisionAvoidanceSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SelfCollisionAvoidanceSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SelfCollisionAvoidanceSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SelfCollisionAvoidanceSpecsReportType*
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SelfCollisionAvoidanceSpecsReportType*
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceSpecsReportType*
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_copy_data(
                SelfCollisionAvoidanceSpecsReportType *out,
                const SelfCollisionAvoidanceSpecsReportType *in);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_destroy_data_w_params(
                SelfCollisionAvoidanceSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_destroy_data_ex(
                SelfCollisionAvoidanceSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_destroy_data(
                SelfCollisionAvoidanceSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_print_data(
                const SelfCollisionAvoidanceSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SelfCollisionAvoidanceSpecsReportType*
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SelfCollisionAvoidanceSpecsReportType*
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_destroy_key_ex(
                SelfCollisionAvoidanceSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceSpecsReportTypePluginSupport_destroy_key(
                SelfCollisionAvoidanceSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SelfCollisionAvoidanceSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SelfCollisionAvoidanceSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SelfCollisionAvoidanceSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SelfCollisionAvoidanceSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceSpecsReportType *out,
                const SelfCollisionAvoidanceSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SelfCollisionAvoidanceSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SelfCollisionAvoidanceSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                SelfCollisionAvoidanceSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SelfCollisionAvoidanceSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SelfCollisionAvoidanceSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceSpecsReportTypeKeyHolder *key, 
                const SelfCollisionAvoidanceSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SelfCollisionAvoidanceSpecsReportType *instance, 
                const SelfCollisionAvoidanceSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SelfCollisionAvoidanceSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SelfCollisionAvoidanceSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SelfCollisionAvoidanceSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SelfCollisionAvoidanceSpecs  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SelfCollisionAvoidanceSpecsReportTypePlugin_742993316_h */

