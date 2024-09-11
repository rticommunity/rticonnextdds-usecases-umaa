

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OperationalModeCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OperationalModeCommandAckReportTypePlugin_1919448477_h
#define OperationalModeCommandAckReportTypePlugin_1919448477_h

#include "OperationalModeCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/OperationalModeControl/OperationalModeCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace OperationalModeControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct OperationalModeCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct OperationalModeCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * OperationalModeCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct OperationalModeCommandAckReportType.
            */
            typedef class OperationalModeCommandAckReportType OperationalModeCommandAckReportTypeKeyHolder;

            #define OperationalModeCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OperationalModeCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OperationalModeCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OperationalModeCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define OperationalModeCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define OperationalModeCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OperationalModeCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern OperationalModeCommandAckReportType*
            OperationalModeCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern OperationalModeCommandAckReportType*
            OperationalModeCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OperationalModeCommandAckReportType*
            OperationalModeCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandAckReportTypePluginSupport_copy_data(
                OperationalModeCommandAckReportType *out,
                const OperationalModeCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            OperationalModeCommandAckReportTypePluginSupport_destroy_data_w_params(
                OperationalModeCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OperationalModeCommandAckReportTypePluginSupport_destroy_data_ex(
                OperationalModeCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OperationalModeCommandAckReportTypePluginSupport_destroy_data(
                OperationalModeCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            OperationalModeCommandAckReportTypePluginSupport_print_data(
                const OperationalModeCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern OperationalModeCommandAckReportType*
            OperationalModeCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OperationalModeCommandAckReportType*
            OperationalModeCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            OperationalModeCommandAckReportTypePluginSupport_destroy_key_ex(
                OperationalModeCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OperationalModeCommandAckReportTypePluginSupport_destroy_key(
                OperationalModeCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            OperationalModeCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            OperationalModeCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            OperationalModeCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            OperationalModeCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            OperationalModeCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandAckReportType *out,
                const OperationalModeCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            OperationalModeCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const OperationalModeCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            OperationalModeCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                OperationalModeCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            OperationalModeCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OperationalModeCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OperationalModeCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OperationalModeCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandAckReportTypeKeyHolder *key, 
                const OperationalModeCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                OperationalModeCommandAckReportType *instance, 
                const OperationalModeCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            OperationalModeCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            OperationalModeCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            OperationalModeCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace OperationalModeControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* OperationalModeCommandAckReportTypePlugin_1919448477_h */

