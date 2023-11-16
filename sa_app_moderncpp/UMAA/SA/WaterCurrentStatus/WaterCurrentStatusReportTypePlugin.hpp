

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterCurrentStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterCurrentStatusReportTypePlugin_1099163204_h
#define WaterCurrentStatusReportTypePlugin_1099163204_h

#include "WaterCurrentStatusReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace WaterCurrentStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WaterCurrentStatusReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WaterCurrentStatusReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WaterCurrentStatusReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WaterCurrentStatusReportType.
            */
            typedef  class WaterCurrentStatusReportType WaterCurrentStatusReportTypeKeyHolder;

            #define WaterCurrentStatusReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WaterCurrentStatusReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WaterCurrentStatusReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WaterCurrentStatusReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WaterCurrentStatusReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WaterCurrentStatusReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WaterCurrentStatusReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WaterCurrentStatusReportType*
            WaterCurrentStatusReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WaterCurrentStatusReportType*
            WaterCurrentStatusReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterCurrentStatusReportType*
            WaterCurrentStatusReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WaterCurrentStatusReportTypePluginSupport_copy_data(
                WaterCurrentStatusReportType *out,
                const WaterCurrentStatusReportType *in);

            NDDSUSERDllExport extern void 
            WaterCurrentStatusReportTypePluginSupport_destroy_data_w_params(
                WaterCurrentStatusReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WaterCurrentStatusReportTypePluginSupport_destroy_data_ex(
                WaterCurrentStatusReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterCurrentStatusReportTypePluginSupport_destroy_data(
                WaterCurrentStatusReportType *sample);

            NDDSUSERDllExport extern void 
            WaterCurrentStatusReportTypePluginSupport_print_data(
                const WaterCurrentStatusReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WaterCurrentStatusReportType*
            WaterCurrentStatusReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaterCurrentStatusReportType*
            WaterCurrentStatusReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WaterCurrentStatusReportTypePluginSupport_destroy_key_ex(
                WaterCurrentStatusReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaterCurrentStatusReportTypePluginSupport_destroy_key(
                WaterCurrentStatusReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WaterCurrentStatusReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WaterCurrentStatusReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WaterCurrentStatusReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WaterCurrentStatusReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WaterCurrentStatusReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterCurrentStatusReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WaterCurrentStatusReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaterCurrentStatusReportType *out,
                const WaterCurrentStatusReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WaterCurrentStatusReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WaterCurrentStatusReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WaterCurrentStatusReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WaterCurrentStatusReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WaterCurrentStatusReportTypePlugin_deserialize_from_cdr_buffer(
                WaterCurrentStatusReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WaterCurrentStatusReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WaterCurrentStatusReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WaterCurrentStatusReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WaterCurrentStatusReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WaterCurrentStatusReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterCurrentStatusReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WaterCurrentStatusReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WaterCurrentStatusReportTypeKeyHolder *key, 
                const WaterCurrentStatusReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            WaterCurrentStatusReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WaterCurrentStatusReportType *instance, 
                const WaterCurrentStatusReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WaterCurrentStatusReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WaterCurrentStatusReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WaterCurrentStatusReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WaterCurrentStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WaterCurrentStatusReportTypePlugin_1099163204_h */

