

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointSpeedCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointSpeedCommandStatusTypePlugin_718534084_h
#define GlobalWaypointSpeedCommandStatusTypePlugin_718534084_h

#include "GlobalWaypointSpeedCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

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
            * By default, this type is struct GlobalWaypointSpeedCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalWaypointSpeedCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalWaypointSpeedCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalWaypointSpeedCommandStatusType.
            */
            typedef class GlobalWaypointSpeedCommandStatusType GlobalWaypointSpeedCommandStatusTypeKeyHolder;

            #define GlobalWaypointSpeedCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalWaypointSpeedCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalWaypointSpeedCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalWaypointSpeedCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalWaypointSpeedCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalWaypointSpeedCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalWaypointSpeedCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalWaypointSpeedCommandStatusType*
            GlobalWaypointSpeedCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalWaypointSpeedCommandStatusType*
            GlobalWaypointSpeedCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalWaypointSpeedCommandStatusType*
            GlobalWaypointSpeedCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointSpeedCommandStatusTypePluginSupport_copy_data(
                GlobalWaypointSpeedCommandStatusType *out,
                const GlobalWaypointSpeedCommandStatusType *in);

            NDDSUSERDllExport extern void 
            GlobalWaypointSpeedCommandStatusTypePluginSupport_destroy_data_w_params(
                GlobalWaypointSpeedCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalWaypointSpeedCommandStatusTypePluginSupport_destroy_data_ex(
                GlobalWaypointSpeedCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalWaypointSpeedCommandStatusTypePluginSupport_destroy_data(
                GlobalWaypointSpeedCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            GlobalWaypointSpeedCommandStatusTypePluginSupport_print_data(
                const GlobalWaypointSpeedCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalWaypointSpeedCommandStatusType*
            GlobalWaypointSpeedCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalWaypointSpeedCommandStatusType*
            GlobalWaypointSpeedCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalWaypointSpeedCommandStatusTypePluginSupport_destroy_key_ex(
                GlobalWaypointSpeedCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalWaypointSpeedCommandStatusTypePluginSupport_destroy_key(
                GlobalWaypointSpeedCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalWaypointSpeedCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalWaypointSpeedCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalWaypointSpeedCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalWaypointSpeedCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalWaypointSpeedCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointSpeedCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointSpeedCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointSpeedCommandStatusType *out,
                const GlobalWaypointSpeedCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalWaypointSpeedCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalWaypointSpeedCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointSpeedCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointSpeedCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalWaypointSpeedCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                GlobalWaypointSpeedCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointSpeedCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalWaypointSpeedCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointSpeedCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointSpeedCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointSpeedCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointSpeedCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointSpeedCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointSpeedCommandStatusTypeKeyHolder *key, 
                const GlobalWaypointSpeedCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointSpeedCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointSpeedCommandStatusType *instance, 
                const GlobalWaypointSpeedCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointSpeedCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalWaypointSpeedCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalWaypointSpeedCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalWaypointControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalWaypointSpeedCommandStatusTypePlugin_718534084_h */

