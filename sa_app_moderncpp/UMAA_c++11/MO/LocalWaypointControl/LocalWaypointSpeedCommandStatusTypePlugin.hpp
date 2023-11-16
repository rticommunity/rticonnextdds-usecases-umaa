

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointSpeedCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointSpeedCommandStatusTypePlugin_1620629551_h
#define LocalWaypointSpeedCommandStatusTypePlugin_1620629551_h

#include "LocalWaypointSpeedCommandStatusType.hpp"

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
        namespace LocalWaypointControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalWaypointSpeedCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalWaypointSpeedCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalWaypointSpeedCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalWaypointSpeedCommandStatusType.
            */
            typedef class LocalWaypointSpeedCommandStatusType LocalWaypointSpeedCommandStatusTypeKeyHolder;

            #define LocalWaypointSpeedCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalWaypointSpeedCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalWaypointSpeedCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalWaypointSpeedCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalWaypointSpeedCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalWaypointSpeedCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalWaypointSpeedCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalWaypointSpeedCommandStatusType*
            LocalWaypointSpeedCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandStatusType*
            LocalWaypointSpeedCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandStatusType*
            LocalWaypointSpeedCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandStatusTypePluginSupport_copy_data(
                LocalWaypointSpeedCommandStatusType *out,
                const LocalWaypointSpeedCommandStatusType *in);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandStatusTypePluginSupport_destroy_data_w_params(
                LocalWaypointSpeedCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandStatusTypePluginSupport_destroy_data_ex(
                LocalWaypointSpeedCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandStatusTypePluginSupport_destroy_data(
                LocalWaypointSpeedCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandStatusTypePluginSupport_print_data(
                const LocalWaypointSpeedCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandStatusType*
            LocalWaypointSpeedCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandStatusType*
            LocalWaypointSpeedCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandStatusTypePluginSupport_destroy_key_ex(
                LocalWaypointSpeedCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandStatusTypePluginSupport_destroy_key(
                LocalWaypointSpeedCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalWaypointSpeedCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalWaypointSpeedCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalWaypointSpeedCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandStatusType *out,
                const LocalWaypointSpeedCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalWaypointSpeedCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalWaypointSpeedCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalWaypointSpeedCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                LocalWaypointSpeedCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointSpeedCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalWaypointSpeedCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointSpeedCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointSpeedCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandStatusTypeKeyHolder *key, 
                const LocalWaypointSpeedCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandStatusType *instance, 
                const LocalWaypointSpeedCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalWaypointSpeedCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalWaypointSpeedCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalWaypointControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalWaypointSpeedCommandStatusTypePlugin_1620629551_h */

