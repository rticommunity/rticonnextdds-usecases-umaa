

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelPowerConfigAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelPowerConfigAckReportTypePlugin_1347078224_h
#define CommsChannelPowerConfigAckReportTypePlugin_1347078224_h

#include "CommsChannelPowerConfigAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/CO/CommsChannelPowerConfig/CommsChannelPowerConfigCommandTypePlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace CO {
        namespace CommsChannelPowerConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CommsChannelPowerConfigAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CommsChannelPowerConfigAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CommsChannelPowerConfigAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CommsChannelPowerConfigAckReportType.
            */
            typedef class CommsChannelPowerConfigAckReportType CommsChannelPowerConfigAckReportTypeKeyHolder;

            #define CommsChannelPowerConfigAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CommsChannelPowerConfigAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CommsChannelPowerConfigAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CommsChannelPowerConfigAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CommsChannelPowerConfigAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CommsChannelPowerConfigAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CommsChannelPowerConfigAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CommsChannelPowerConfigAckReportType*
            CommsChannelPowerConfigAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CommsChannelPowerConfigAckReportType*
            CommsChannelPowerConfigAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelPowerConfigAckReportType*
            CommsChannelPowerConfigAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelPowerConfigAckReportTypePluginSupport_copy_data(
                CommsChannelPowerConfigAckReportType *out,
                const CommsChannelPowerConfigAckReportType *in);

            NDDSUSERDllExport extern void 
            CommsChannelPowerConfigAckReportTypePluginSupport_destroy_data_w_params(
                CommsChannelPowerConfigAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CommsChannelPowerConfigAckReportTypePluginSupport_destroy_data_ex(
                CommsChannelPowerConfigAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelPowerConfigAckReportTypePluginSupport_destroy_data(
                CommsChannelPowerConfigAckReportType *sample);

            NDDSUSERDllExport extern void 
            CommsChannelPowerConfigAckReportTypePluginSupport_print_data(
                const CommsChannelPowerConfigAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CommsChannelPowerConfigAckReportType*
            CommsChannelPowerConfigAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CommsChannelPowerConfigAckReportType*
            CommsChannelPowerConfigAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CommsChannelPowerConfigAckReportTypePluginSupport_destroy_key_ex(
                CommsChannelPowerConfigAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CommsChannelPowerConfigAckReportTypePluginSupport_destroy_key(
                CommsChannelPowerConfigAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CommsChannelPowerConfigAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CommsChannelPowerConfigAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CommsChannelPowerConfigAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CommsChannelPowerConfigAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CommsChannelPowerConfigAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelPowerConfigAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CommsChannelPowerConfigAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelPowerConfigAckReportType *out,
                const CommsChannelPowerConfigAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CommsChannelPowerConfigAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CommsChannelPowerConfigAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CommsChannelPowerConfigAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelPowerConfigAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CommsChannelPowerConfigAckReportTypePlugin_deserialize_from_cdr_buffer(
                CommsChannelPowerConfigAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CommsChannelPowerConfigAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CommsChannelPowerConfigAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelPowerConfigAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CommsChannelPowerConfigAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelPowerConfigAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelPowerConfigAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelPowerConfigAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelPowerConfigAckReportTypeKeyHolder *key, 
                const CommsChannelPowerConfigAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelPowerConfigAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CommsChannelPowerConfigAckReportType *instance, 
                const CommsChannelPowerConfigAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CommsChannelPowerConfigAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CommsChannelPowerConfigAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CommsChannelPowerConfigAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CommsChannelPowerConfig  */
    } /* namespace CO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CommsChannelPowerConfigAckReportTypePlugin_1347078224_h */

