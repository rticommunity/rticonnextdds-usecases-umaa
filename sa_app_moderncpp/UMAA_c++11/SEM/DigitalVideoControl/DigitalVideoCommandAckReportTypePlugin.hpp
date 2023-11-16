

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalVideoCommandAckReportTypePlugin_1851282318_h
#define DigitalVideoCommandAckReportTypePlugin_1851282318_h

#include "DigitalVideoCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/BuiltInTestStatusType_AllPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace DigitalVideoControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DigitalVideoCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DigitalVideoCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DigitalVideoCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DigitalVideoCommandAckReportType.
            */
            typedef class DigitalVideoCommandAckReportType DigitalVideoCommandAckReportTypeKeyHolder;

            #define DigitalVideoCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DigitalVideoCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DigitalVideoCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DigitalVideoCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DigitalVideoCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DigitalVideoCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DigitalVideoCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DigitalVideoCommandAckReportType*
            DigitalVideoCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DigitalVideoCommandAckReportType*
            DigitalVideoCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoCommandAckReportType*
            DigitalVideoCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandAckReportTypePluginSupport_copy_data(
                DigitalVideoCommandAckReportType *out,
                const DigitalVideoCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandAckReportTypePluginSupport_destroy_data_w_params(
                DigitalVideoCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandAckReportTypePluginSupport_destroy_data_ex(
                DigitalVideoCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandAckReportTypePluginSupport_destroy_data(
                DigitalVideoCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandAckReportTypePluginSupport_print_data(
                const DigitalVideoCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DigitalVideoCommandAckReportType*
            DigitalVideoCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoCommandAckReportType*
            DigitalVideoCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandAckReportTypePluginSupport_destroy_key_ex(
                DigitalVideoCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandAckReportTypePluginSupport_destroy_key(
                DigitalVideoCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DigitalVideoCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DigitalVideoCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DigitalVideoCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandAckReportType *out,
                const DigitalVideoCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DigitalVideoCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DigitalVideoCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DigitalVideoCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                DigitalVideoCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DigitalVideoCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandAckReportTypeKeyHolder *key, 
                const DigitalVideoCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandAckReportType *instance, 
                const DigitalVideoCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DigitalVideoCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DigitalVideoCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DigitalVideoControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DigitalVideoCommandAckReportTypePlugin_1851282318_h */

