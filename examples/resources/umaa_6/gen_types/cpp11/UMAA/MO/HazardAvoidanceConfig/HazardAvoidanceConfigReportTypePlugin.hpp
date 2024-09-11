

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HazardAvoidanceConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HazardAvoidanceConfigReportTypePlugin_1703484055_h
#define HazardAvoidanceConfigReportTypePlugin_1703484055_h

#include "HazardAvoidanceConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MO/HazardAvoidanceConfig/ContactHazardAvoidanceTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace HazardAvoidanceConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct HazardAvoidanceConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct HazardAvoidanceConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * HazardAvoidanceConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct HazardAvoidanceConfigReportType.
            */
            typedef class HazardAvoidanceConfigReportType HazardAvoidanceConfigReportTypeKeyHolder;

            #define HazardAvoidanceConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HazardAvoidanceConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HazardAvoidanceConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HazardAvoidanceConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define HazardAvoidanceConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define HazardAvoidanceConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HazardAvoidanceConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HazardAvoidanceConfigReportType*
            HazardAvoidanceConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HazardAvoidanceConfigReportType*
            HazardAvoidanceConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HazardAvoidanceConfigReportType*
            HazardAvoidanceConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HazardAvoidanceConfigReportTypePluginSupport_copy_data(
                HazardAvoidanceConfigReportType *out,
                const HazardAvoidanceConfigReportType *in);

            NDDSUSERDllExport extern void 
            HazardAvoidanceConfigReportTypePluginSupport_destroy_data_w_params(
                HazardAvoidanceConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HazardAvoidanceConfigReportTypePluginSupport_destroy_data_ex(
                HazardAvoidanceConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HazardAvoidanceConfigReportTypePluginSupport_destroy_data(
                HazardAvoidanceConfigReportType *sample);

            NDDSUSERDllExport extern void 
            HazardAvoidanceConfigReportTypePluginSupport_print_data(
                const HazardAvoidanceConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern HazardAvoidanceConfigReportType*
            HazardAvoidanceConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HazardAvoidanceConfigReportType*
            HazardAvoidanceConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            HazardAvoidanceConfigReportTypePluginSupport_destroy_key_ex(
                HazardAvoidanceConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HazardAvoidanceConfigReportTypePluginSupport_destroy_key(
                HazardAvoidanceConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HazardAvoidanceConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HazardAvoidanceConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HazardAvoidanceConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HazardAvoidanceConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HazardAvoidanceConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HazardAvoidanceConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HazardAvoidanceConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HazardAvoidanceConfigReportType *out,
                const HazardAvoidanceConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HazardAvoidanceConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HazardAvoidanceConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HazardAvoidanceConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HazardAvoidanceConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HazardAvoidanceConfigReportTypePlugin_deserialize_from_cdr_buffer(
                HazardAvoidanceConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HazardAvoidanceConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HazardAvoidanceConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HazardAvoidanceConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HazardAvoidanceConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HazardAvoidanceConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HazardAvoidanceConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            HazardAvoidanceConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                HazardAvoidanceConfigReportTypeKeyHolder *key, 
                const HazardAvoidanceConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            HazardAvoidanceConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                HazardAvoidanceConfigReportType *instance, 
                const HazardAvoidanceConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            HazardAvoidanceConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HazardAvoidanceConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HazardAvoidanceConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace HazardAvoidanceConfig  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HazardAvoidanceConfigReportTypePlugin_1703484055_h */

