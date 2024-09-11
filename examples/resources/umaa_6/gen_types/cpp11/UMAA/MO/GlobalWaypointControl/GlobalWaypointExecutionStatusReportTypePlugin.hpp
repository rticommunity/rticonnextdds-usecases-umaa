

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointExecutionStatusReportTypePlugin_607922644_h
#define GlobalWaypointExecutionStatusReportTypePlugin_607922644_h

#include "GlobalWaypointExecutionStatusReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

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
            * By default, this type is struct GlobalWaypointExecutionStatusReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalWaypointExecutionStatusReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalWaypointExecutionStatusReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalWaypointExecutionStatusReportType.
            */
            typedef class GlobalWaypointExecutionStatusReportType GlobalWaypointExecutionStatusReportTypeKeyHolder;

            #define GlobalWaypointExecutionStatusReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalWaypointExecutionStatusReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalWaypointExecutionStatusReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalWaypointExecutionStatusReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalWaypointExecutionStatusReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalWaypointExecutionStatusReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalWaypointExecutionStatusReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalWaypointExecutionStatusReportType*
            GlobalWaypointExecutionStatusReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalWaypointExecutionStatusReportType*
            GlobalWaypointExecutionStatusReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalWaypointExecutionStatusReportType*
            GlobalWaypointExecutionStatusReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointExecutionStatusReportTypePluginSupport_copy_data(
                GlobalWaypointExecutionStatusReportType *out,
                const GlobalWaypointExecutionStatusReportType *in);

            NDDSUSERDllExport extern void 
            GlobalWaypointExecutionStatusReportTypePluginSupport_destroy_data_w_params(
                GlobalWaypointExecutionStatusReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalWaypointExecutionStatusReportTypePluginSupport_destroy_data_ex(
                GlobalWaypointExecutionStatusReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalWaypointExecutionStatusReportTypePluginSupport_destroy_data(
                GlobalWaypointExecutionStatusReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalWaypointExecutionStatusReportTypePluginSupport_print_data(
                const GlobalWaypointExecutionStatusReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalWaypointExecutionStatusReportType*
            GlobalWaypointExecutionStatusReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalWaypointExecutionStatusReportType*
            GlobalWaypointExecutionStatusReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalWaypointExecutionStatusReportTypePluginSupport_destroy_key_ex(
                GlobalWaypointExecutionStatusReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalWaypointExecutionStatusReportTypePluginSupport_destroy_key(
                GlobalWaypointExecutionStatusReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalWaypointExecutionStatusReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalWaypointExecutionStatusReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalWaypointExecutionStatusReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalWaypointExecutionStatusReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalWaypointExecutionStatusReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointExecutionStatusReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointExecutionStatusReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointExecutionStatusReportType *out,
                const GlobalWaypointExecutionStatusReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalWaypointExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalWaypointExecutionStatusReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointExecutionStatusReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointExecutionStatusReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalWaypointExecutionStatusReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalWaypointExecutionStatusReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointExecutionStatusReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalWaypointExecutionStatusReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointExecutionStatusReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalWaypointExecutionStatusReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointExecutionStatusReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointExecutionStatusReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointExecutionStatusReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointExecutionStatusReportTypeKeyHolder *key, 
                const GlobalWaypointExecutionStatusReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointExecutionStatusReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalWaypointExecutionStatusReportType *instance, 
                const GlobalWaypointExecutionStatusReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalWaypointExecutionStatusReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalWaypointExecutionStatusReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalWaypointExecutionStatusReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalWaypointControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalWaypointExecutionStatusReportTypePlugin_607922644_h */

