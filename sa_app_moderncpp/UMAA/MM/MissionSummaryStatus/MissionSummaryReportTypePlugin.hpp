

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionSummaryReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionSummaryReportTypePlugin_1645860920_h
#define MissionSummaryReportTypePlugin_1645860920_h

#include "MissionSummaryReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/BaseType/MissionSummaryTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace MissionSummaryStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionSummaryReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionSummaryReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionSummaryReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionSummaryReportType.
            */
            typedef  class MissionSummaryReportType MissionSummaryReportTypeKeyHolder;

            #define MissionSummaryReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionSummaryReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionSummaryReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionSummaryReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionSummaryReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionSummaryReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionSummaryReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionSummaryReportType*
            MissionSummaryReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionSummaryReportType*
            MissionSummaryReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionSummaryReportType*
            MissionSummaryReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryReportTypePluginSupport_copy_data(
                MissionSummaryReportType *out,
                const MissionSummaryReportType *in);

            NDDSUSERDllExport extern void 
            MissionSummaryReportTypePluginSupport_destroy_data_w_params(
                MissionSummaryReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionSummaryReportTypePluginSupport_destroy_data_ex(
                MissionSummaryReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionSummaryReportTypePluginSupport_destroy_data(
                MissionSummaryReportType *sample);

            NDDSUSERDllExport extern void 
            MissionSummaryReportTypePluginSupport_print_data(
                const MissionSummaryReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionSummaryReportType*
            MissionSummaryReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionSummaryReportType*
            MissionSummaryReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionSummaryReportTypePluginSupport_destroy_key_ex(
                MissionSummaryReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionSummaryReportTypePluginSupport_destroy_key(
                MissionSummaryReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionSummaryReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionSummaryReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionSummaryReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionSummaryReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionSummaryReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryReportType *out,
                const MissionSummaryReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionSummaryReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionSummaryReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionSummaryReportTypePlugin_deserialize_from_cdr_buffer(
                MissionSummaryReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionSummaryReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionSummaryReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionSummaryReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionSummaryReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryReportTypeKeyHolder *key, 
                const MissionSummaryReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryReportType *instance, 
                const MissionSummaryReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionSummaryReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionSummaryReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionSummaryStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionSummaryReportTypePlugin_1645860920_h */

