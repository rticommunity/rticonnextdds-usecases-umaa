

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SituationalSignalCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SituationalSignalCommandAckReportTypePlugin_2138419042_h
#define SituationalSignalCommandAckReportTypePlugin_2138419042_h

#include "SituationalSignalCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace SituationalSignalControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SituationalSignalCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SituationalSignalCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SituationalSignalCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SituationalSignalCommandAckReportType.
            */
            typedef class SituationalSignalCommandAckReportType SituationalSignalCommandAckReportTypeKeyHolder;

            #define SituationalSignalCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SituationalSignalCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SituationalSignalCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SituationalSignalCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SituationalSignalCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SituationalSignalCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SituationalSignalCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SituationalSignalCommandAckReportType*
            SituationalSignalCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SituationalSignalCommandAckReportType*
            SituationalSignalCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SituationalSignalCommandAckReportType*
            SituationalSignalCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandAckReportTypePluginSupport_copy_data(
                SituationalSignalCommandAckReportType *out,
                const SituationalSignalCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandAckReportTypePluginSupport_destroy_data_w_params(
                SituationalSignalCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandAckReportTypePluginSupport_destroy_data_ex(
                SituationalSignalCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandAckReportTypePluginSupport_destroy_data(
                SituationalSignalCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandAckReportTypePluginSupport_print_data(
                const SituationalSignalCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SituationalSignalCommandAckReportType*
            SituationalSignalCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SituationalSignalCommandAckReportType*
            SituationalSignalCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandAckReportTypePluginSupport_destroy_key_ex(
                SituationalSignalCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandAckReportTypePluginSupport_destroy_key(
                SituationalSignalCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SituationalSignalCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SituationalSignalCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SituationalSignalCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SituationalSignalCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandAckReportType *out,
                const SituationalSignalCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SituationalSignalCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SituationalSignalCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SituationalSignalCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                SituationalSignalCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SituationalSignalCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SituationalSignalCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SituationalSignalCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SituationalSignalCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandAckReportTypeKeyHolder *key, 
                const SituationalSignalCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SituationalSignalCommandAckReportType *instance, 
                const SituationalSignalCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SituationalSignalCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SituationalSignalCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SituationalSignalCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SituationalSignalControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SituationalSignalCommandAckReportTypePlugin_2138419042_h */

