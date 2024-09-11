

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorsSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorsSpecsReportTypePlugin_687072658_h
#define PropulsorsSpecsReportTypePlugin_687072658_h

#include "PropulsorsSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/PropulsorsSpecs/PropulsorSpecsTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace PropulsorsSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PropulsorsSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PropulsorsSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PropulsorsSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PropulsorsSpecsReportType.
            */
            typedef class PropulsorsSpecsReportType PropulsorsSpecsReportTypeKeyHolder;

            #define PropulsorsSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsorsSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsorsSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsorsSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PropulsorsSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PropulsorsSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsorsSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsorsSpecsReportType*
            PropulsorsSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsorsSpecsReportType*
            PropulsorsSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorsSpecsReportType*
            PropulsorsSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsSpecsReportTypePluginSupport_copy_data(
                PropulsorsSpecsReportType *out,
                const PropulsorsSpecsReportType *in);

            NDDSUSERDllExport extern void 
            PropulsorsSpecsReportTypePluginSupport_destroy_data_w_params(
                PropulsorsSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsorsSpecsReportTypePluginSupport_destroy_data_ex(
                PropulsorsSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorsSpecsReportTypePluginSupport_destroy_data(
                PropulsorsSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            PropulsorsSpecsReportTypePluginSupport_print_data(
                const PropulsorsSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PropulsorsSpecsReportType*
            PropulsorsSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorsSpecsReportType*
            PropulsorsSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PropulsorsSpecsReportTypePluginSupport_destroy_key_ex(
                PropulsorsSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorsSpecsReportTypePluginSupport_destroy_key(
                PropulsorsSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsorsSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsorsSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsorsSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsorsSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsorsSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsorsSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsSpecsReportType *out,
                const PropulsorsSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsorsSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsorsSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsorsSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsorsSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                PropulsorsSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsorsSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsorsSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsSpecsReportTypeKeyHolder *key, 
                const PropulsorsSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsSpecsReportType *instance, 
                const PropulsorsSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsorsSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsorsSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PropulsorsSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsorsSpecsReportTypePlugin_687072658_h */

