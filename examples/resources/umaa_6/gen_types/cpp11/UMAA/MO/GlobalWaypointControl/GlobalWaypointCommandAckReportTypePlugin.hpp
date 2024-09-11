

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointCommandAckReportTypePlugin_1358667414_h
#define GlobalWaypointCommandAckReportTypePlugin_1358667414_h

#include "GlobalWaypointCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MO/GlobalWaypointControl/GlobalWaypointCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalWaypointControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalWaypointCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalWaypointCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalWaypointCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalWaypointCommandAckReportType.
            */
            typedef class GlobalWaypointCommandAckReportType GlobalWaypointCommandAckReportTypeKeyHolder;

            #define GlobalWaypointCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalWaypointCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalWaypointCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalWaypointCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalWaypointCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalWaypointCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalWaypointCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalWaypointCommandAckReportType*
            GlobalWaypointCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalWaypointCommandAckReportType*
            GlobalWaypointCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalWaypointCommandAckReportType*
            GlobalWaypointCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointCommandAckReportTypePluginSupport_copy_data(
                GlobalWaypointCommandAckReportType *out,
                const GlobalWaypointCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            GlobalWaypointCommandAckReportTypePluginSupport_destroy_data_w_params(
                GlobalWaypointCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalWaypointCommandAckReportTypePluginSupport_destroy_data_ex(
                GlobalWaypointCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalWaypointCommandAckReportTypePluginSupport_destroy_data(
                GlobalWaypointCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalWaypointCommandAckReportTypePluginSupport_print_data(
                const GlobalWaypointCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalWaypointCommandAckReportType*
            GlobalWaypointCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalWaypointCommandAckReportType*
            GlobalWaypointCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalWaypointCommandAckReportTypePluginSupport_destroy_key_ex(
                GlobalWaypointCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalWaypointCommandAckReportTypePluginSupport_destroy_key(
                GlobalWaypointCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalWaypointCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalWaypointCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalWaypointCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalWaypointCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalWaypointCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointCommandAckReportType *out,
                const GlobalWaypointCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalWaypointCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalWaypointCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalWaypointCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalWaypointCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalWaypointCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointCommandAckReportTypeKeyHolder *key, 
                const GlobalWaypointCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointCommandAckReportType *instance, 
                const GlobalWaypointCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalWaypointCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalWaypointCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalWaypointControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalWaypointCommandAckReportTypePlugin_1358667414_h */

