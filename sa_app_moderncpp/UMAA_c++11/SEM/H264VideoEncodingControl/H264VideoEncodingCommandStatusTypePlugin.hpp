

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from H264VideoEncodingCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef H264VideoEncodingCommandStatusTypePlugin_2034326892_h
#define H264VideoEncodingCommandStatusTypePlugin_2034326892_h

#include "H264VideoEncodingCommandStatusType.hpp"

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
    namespace SEM {
        namespace H264VideoEncodingControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct H264VideoEncodingCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct H264VideoEncodingCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * H264VideoEncodingCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct H264VideoEncodingCommandStatusType.
            */
            typedef class H264VideoEncodingCommandStatusType H264VideoEncodingCommandStatusTypeKeyHolder;

            #define H264VideoEncodingCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define H264VideoEncodingCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define H264VideoEncodingCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define H264VideoEncodingCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define H264VideoEncodingCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define H264VideoEncodingCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define H264VideoEncodingCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern H264VideoEncodingCommandStatusType*
            H264VideoEncodingCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern H264VideoEncodingCommandStatusType*
            H264VideoEncodingCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern H264VideoEncodingCommandStatusType*
            H264VideoEncodingCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandStatusTypePluginSupport_copy_data(
                H264VideoEncodingCommandStatusType *out,
                const H264VideoEncodingCommandStatusType *in);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandStatusTypePluginSupport_destroy_data_w_params(
                H264VideoEncodingCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandStatusTypePluginSupport_destroy_data_ex(
                H264VideoEncodingCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandStatusTypePluginSupport_destroy_data(
                H264VideoEncodingCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandStatusTypePluginSupport_print_data(
                const H264VideoEncodingCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern H264VideoEncodingCommandStatusType*
            H264VideoEncodingCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern H264VideoEncodingCommandStatusType*
            H264VideoEncodingCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandStatusTypePluginSupport_destroy_key_ex(
                H264VideoEncodingCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandStatusTypePluginSupport_destroy_key(
                H264VideoEncodingCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            H264VideoEncodingCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            H264VideoEncodingCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            H264VideoEncodingCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            H264VideoEncodingCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandStatusType *out,
                const H264VideoEncodingCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            H264VideoEncodingCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const H264VideoEncodingCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            H264VideoEncodingCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                H264VideoEncodingCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            H264VideoEncodingCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            H264VideoEncodingCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            H264VideoEncodingCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            H264VideoEncodingCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandStatusTypeKeyHolder *key, 
                const H264VideoEncodingCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                H264VideoEncodingCommandStatusType *instance, 
                const H264VideoEncodingCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            H264VideoEncodingCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            H264VideoEncodingCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            H264VideoEncodingCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace H264VideoEncodingControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* H264VideoEncodingCommandStatusTypePlugin_2034326892_h */

