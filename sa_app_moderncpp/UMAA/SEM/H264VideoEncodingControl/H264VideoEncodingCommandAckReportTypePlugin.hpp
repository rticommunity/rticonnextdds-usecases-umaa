

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingCommandAckReportTypePlugin_1940141359_h
#define H264VideoEncodingCommandAckReportTypePlugin_1940141359_h

#include "H264VideoEncodingCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace H264VideoEncodingControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct H264VideoEncodingCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct H264VideoEncodingCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * H264VideoEncodingCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct H264VideoEncodingCommandAckReportType.
            */
            typedef  class H264VideoEncodingCommandAckReportType H264VideoEncodingCommandAckReportTypeKeyHolder;

            #define H264VideoEncodingCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define H264VideoEncodingCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define H264VideoEncodingCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define H264VideoEncodingCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define H264VideoEncodingCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define H264VideoEncodingCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define H264VideoEncodingCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern H264VideoEncodingCommandAckReportType*
            H264VideoEncodingCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern H264VideoEncodingCommandAckReportType*
            H264VideoEncodingCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern H264VideoEncodingCommandAckReportType*
            H264VideoEncodingCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandAckReportTypePluginSupport_copy_data(
                H264VideoEncodingCommandAckReportType *out,
                const H264VideoEncodingCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandAckReportTypePluginSupport_destroy_data_w_params(
                H264VideoEncodingCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandAckReportTypePluginSupport_destroy_data_ex(
                H264VideoEncodingCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandAckReportTypePluginSupport_destroy_data(
                H264VideoEncodingCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandAckReportTypePluginSupport_print_data(
                const H264VideoEncodingCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern H264VideoEncodingCommandAckReportType*
            H264VideoEncodingCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern H264VideoEncodingCommandAckReportType*
            H264VideoEncodingCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandAckReportTypePluginSupport_destroy_key_ex(
                H264VideoEncodingCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandAckReportTypePluginSupport_destroy_key(
                H264VideoEncodingCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            H264VideoEncodingCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            H264VideoEncodingCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            H264VideoEncodingCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandAckReportType *out,
                const H264VideoEncodingCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            H264VideoEncodingCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const H264VideoEncodingCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            H264VideoEncodingCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                H264VideoEncodingCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            H264VideoEncodingCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            H264VideoEncodingCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            H264VideoEncodingCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            H264VideoEncodingCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandAckReportTypeKeyHolder *key, 
                const H264VideoEncodingCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandAckReportType *instance, 
                const H264VideoEncodingCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            H264VideoEncodingCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            H264VideoEncodingCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace H264VideoEncodingControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* H264VideoEncodingCommandAckReportTypePlugin_1940141359_h */

