

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsorReportTypePlugin_296258062_h
#define PropulsorReportTypePlugin_296258062_h

#include "PropulsorReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace PropulsorStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PropulsorReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PropulsorReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PropulsorReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PropulsorReportType.
            */
            typedef class PropulsorReportType PropulsorReportTypeKeyHolder;

            #define PropulsorReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsorReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsorReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsorReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PropulsorReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PropulsorReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsorReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsorReportType*
            PropulsorReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsorReportType*
            PropulsorReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorReportType*
            PropulsorReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsorReportTypePluginSupport_copy_data(
                PropulsorReportType *out,
                const PropulsorReportType *in);

            NDDSUSERDllExport extern void 
            PropulsorReportTypePluginSupport_destroy_data_w_params(
                PropulsorReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsorReportTypePluginSupport_destroy_data_ex(
                PropulsorReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorReportTypePluginSupport_destroy_data(
                PropulsorReportType *sample);

            NDDSUSERDllExport extern void 
            PropulsorReportTypePluginSupport_print_data(
                const PropulsorReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PropulsorReportType*
            PropulsorReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsorReportType*
            PropulsorReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PropulsorReportTypePluginSupport_destroy_key_ex(
                PropulsorReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsorReportTypePluginSupport_destroy_key(
                PropulsorReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsorReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsorReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsorReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsorReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsorReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsorReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorReportType *out,
                const PropulsorReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsorReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsorReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsorReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsorReportTypePlugin_deserialize_from_cdr_buffer(
                PropulsorReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsorReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsorReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsorReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsorReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsorReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PropulsorReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorReportTypeKeyHolder *key, 
                const PropulsorReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            PropulsorReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PropulsorReportType *instance, 
                const PropulsorReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PropulsorReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsorReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsorReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PropulsorStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsorReportTypePlugin_296258062_h */

