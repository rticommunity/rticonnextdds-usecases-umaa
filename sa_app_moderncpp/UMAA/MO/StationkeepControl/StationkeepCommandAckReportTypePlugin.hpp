

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepCommandAckReportTypePlugin_179902339_h
#define StationkeepCommandAckReportTypePlugin_179902339_h

#include "StationkeepCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace StationkeepControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct StationkeepCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct StationkeepCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * StationkeepCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct StationkeepCommandAckReportType.
            */
            typedef  class StationkeepCommandAckReportType StationkeepCommandAckReportTypeKeyHolder;

            #define StationkeepCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define StationkeepCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StationkeepCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define StationkeepCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define StationkeepCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define StationkeepCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StationkeepCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StationkeepCommandAckReportType*
            StationkeepCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StationkeepCommandAckReportType*
            StationkeepCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StationkeepCommandAckReportType*
            StationkeepCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandAckReportTypePluginSupport_copy_data(
                StationkeepCommandAckReportType *out,
                const StationkeepCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            StationkeepCommandAckReportTypePluginSupport_destroy_data_w_params(
                StationkeepCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StationkeepCommandAckReportTypePluginSupport_destroy_data_ex(
                StationkeepCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StationkeepCommandAckReportTypePluginSupport_destroy_data(
                StationkeepCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            StationkeepCommandAckReportTypePluginSupport_print_data(
                const StationkeepCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern StationkeepCommandAckReportType*
            StationkeepCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StationkeepCommandAckReportType*
            StationkeepCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            StationkeepCommandAckReportTypePluginSupport_destroy_key_ex(
                StationkeepCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StationkeepCommandAckReportTypePluginSupport_destroy_key(
                StationkeepCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            StationkeepCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            StationkeepCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            StationkeepCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            StationkeepCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            StationkeepCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandAckReportType *out,
                const StationkeepCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            StationkeepCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const StationkeepCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StationkeepCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                StationkeepCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            StationkeepCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StationkeepCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StationkeepCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StationkeepCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandAckReportTypeKeyHolder *key, 
                const StationkeepCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                StationkeepCommandAckReportType *instance, 
                const StationkeepCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            StationkeepCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            StationkeepCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            StationkeepCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace StationkeepControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StationkeepCommandAckReportTypePlugin_179902339_h */

