

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorsCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorsCommandAckReportTypePlugin_2020886789_h
#define PropulsorsCommandAckReportTypePlugin_2020886789_h

#include "PropulsorsCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/PropulsorsControl/PropulsorsCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace PropulsorsControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PropulsorsCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PropulsorsCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PropulsorsCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PropulsorsCommandAckReportType.
            */
            typedef class PropulsorsCommandAckReportType PropulsorsCommandAckReportTypeKeyHolder;

            #define PropulsorsCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsorsCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsorsCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsorsCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PropulsorsCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PropulsorsCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsorsCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsorsCommandAckReportType*
            PropulsorsCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsorsCommandAckReportType*
            PropulsorsCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorsCommandAckReportType*
            PropulsorsCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandAckReportTypePluginSupport_copy_data(
                PropulsorsCommandAckReportType *out,
                const PropulsorsCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            PropulsorsCommandAckReportTypePluginSupport_destroy_data_w_params(
                PropulsorsCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsorsCommandAckReportTypePluginSupport_destroy_data_ex(
                PropulsorsCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorsCommandAckReportTypePluginSupport_destroy_data(
                PropulsorsCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            PropulsorsCommandAckReportTypePluginSupport_print_data(
                const PropulsorsCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PropulsorsCommandAckReportType*
            PropulsorsCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorsCommandAckReportType*
            PropulsorsCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PropulsorsCommandAckReportTypePluginSupport_destroy_key_ex(
                PropulsorsCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorsCommandAckReportTypePluginSupport_destroy_key(
                PropulsorsCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsorsCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsorsCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsorsCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsorsCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsorsCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandAckReportType *out,
                const PropulsorsCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsorsCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsorsCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsorsCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                PropulsorsCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsorsCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsorsCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsorsCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandAckReportTypeKeyHolder *key, 
                const PropulsorsCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorsCommandAckReportType *instance, 
                const PropulsorsCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PropulsorsCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsorsCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsorsCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PropulsorsControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsorsCommandAckReportTypePlugin_2020886789_h */

