

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterspaceReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterspaceReportTypePlugin_1445519817_h
#define WaterspaceReportTypePlugin_1445519817_h

#include "WaterspaceReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/BaseType/ZoneTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace WaterspaceStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WaterspaceReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WaterspaceReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WaterspaceReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WaterspaceReportType.
            */
            typedef  class WaterspaceReportType WaterspaceReportTypeKeyHolder;

            #define WaterspaceReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WaterspaceReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WaterspaceReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WaterspaceReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WaterspaceReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WaterspaceReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WaterspaceReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WaterspaceReportType*
            WaterspaceReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WaterspaceReportType*
            WaterspaceReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterspaceReportType*
            WaterspaceReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WaterspaceReportTypePluginSupport_copy_data(
                WaterspaceReportType *out,
                const WaterspaceReportType *in);

            NDDSUSERDllExport extern void 
            WaterspaceReportTypePluginSupport_destroy_data_w_params(
                WaterspaceReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WaterspaceReportTypePluginSupport_destroy_data_ex(
                WaterspaceReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterspaceReportTypePluginSupport_destroy_data(
                WaterspaceReportType *sample);

            NDDSUSERDllExport extern void 
            WaterspaceReportTypePluginSupport_print_data(
                const WaterspaceReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WaterspaceReportType*
            WaterspaceReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterspaceReportType*
            WaterspaceReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WaterspaceReportTypePluginSupport_destroy_key_ex(
                WaterspaceReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterspaceReportTypePluginSupport_destroy_key(
                WaterspaceReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WaterspaceReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WaterspaceReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WaterspaceReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WaterspaceReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WaterspaceReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterspaceReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WaterspaceReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterspaceReportType *out,
                const WaterspaceReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WaterspaceReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WaterspaceReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WaterspaceReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WaterspaceReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WaterspaceReportTypePlugin_deserialize_from_cdr_buffer(
                WaterspaceReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WaterspaceReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WaterspaceReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WaterspaceReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WaterspaceReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WaterspaceReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterspaceReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WaterspaceReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterspaceReportTypeKeyHolder *key, 
                const WaterspaceReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            WaterspaceReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WaterspaceReportType *instance, 
                const WaterspaceReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WaterspaceReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WaterspaceReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WaterspaceReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WaterspaceStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WaterspaceReportTypePlugin_1445519817_h */

