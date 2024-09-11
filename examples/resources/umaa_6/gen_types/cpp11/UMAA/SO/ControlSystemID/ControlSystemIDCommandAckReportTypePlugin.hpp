

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemIDCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemIDCommandAckReportTypePlugin_1763057736_h
#define ControlSystemIDCommandAckReportTypePlugin_1763057736_h

#include "ControlSystemIDCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/ControlSystemID/ControlSystemIDCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace ControlSystemID {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ControlSystemIDCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ControlSystemIDCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ControlSystemIDCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ControlSystemIDCommandAckReportType.
            */
            typedef class ControlSystemIDCommandAckReportType ControlSystemIDCommandAckReportTypeKeyHolder;

            #define ControlSystemIDCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ControlSystemIDCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ControlSystemIDCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ControlSystemIDCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ControlSystemIDCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ControlSystemIDCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ControlSystemIDCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ControlSystemIDCommandAckReportType*
            ControlSystemIDCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ControlSystemIDCommandAckReportType*
            ControlSystemIDCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ControlSystemIDCommandAckReportType*
            ControlSystemIDCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandAckReportTypePluginSupport_copy_data(
                ControlSystemIDCommandAckReportType *out,
                const ControlSystemIDCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandAckReportTypePluginSupport_destroy_data_w_params(
                ControlSystemIDCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandAckReportTypePluginSupport_destroy_data_ex(
                ControlSystemIDCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandAckReportTypePluginSupport_destroy_data(
                ControlSystemIDCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandAckReportTypePluginSupport_print_data(
                const ControlSystemIDCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ControlSystemIDCommandAckReportType*
            ControlSystemIDCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ControlSystemIDCommandAckReportType*
            ControlSystemIDCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandAckReportTypePluginSupport_destroy_key_ex(
                ControlSystemIDCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandAckReportTypePluginSupport_destroy_key(
                ControlSystemIDCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ControlSystemIDCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ControlSystemIDCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ControlSystemIDCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ControlSystemIDCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandAckReportType *out,
                const ControlSystemIDCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ControlSystemIDCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ControlSystemIDCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ControlSystemIDCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                ControlSystemIDCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ControlSystemIDCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ControlSystemIDCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ControlSystemIDCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ControlSystemIDCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandAckReportTypeKeyHolder *key, 
                const ControlSystemIDCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ControlSystemIDCommandAckReportType *instance, 
                const ControlSystemIDCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ControlSystemIDCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ControlSystemIDCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ControlSystemIDCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ControlSystemID  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ControlSystemIDCommandAckReportTypePlugin_1763057736_h */

