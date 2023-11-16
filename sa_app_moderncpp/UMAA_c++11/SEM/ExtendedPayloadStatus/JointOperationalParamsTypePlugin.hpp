

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointOperationalParamsType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef JointOperationalParamsTypePlugin_851585563_h
#define JointOperationalParamsTypePlugin_851585563_h

#include "JointOperationalParamsType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SEM/ExtendedPayloadStatus/OperationalParamsTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace ExtendedPayloadStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct JointOperationalParamsType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct JointOperationalParamsType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * JointOperationalParamsType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct JointOperationalParamsType.
            */
            typedef class JointOperationalParamsType JointOperationalParamsTypeKeyHolder;

            #define JointOperationalParamsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define JointOperationalParamsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define JointOperationalParamsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define JointOperationalParamsTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define JointOperationalParamsTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define JointOperationalParamsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define JointOperationalParamsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern JointOperationalParamsType*
            JointOperationalParamsTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern JointOperationalParamsType*
            JointOperationalParamsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern JointOperationalParamsType*
            JointOperationalParamsTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsTypePluginSupport_copy_data(
                JointOperationalParamsType *out,
                const JointOperationalParamsType *in);

            NDDSUSERDllExport extern void 
            JointOperationalParamsTypePluginSupport_destroy_data_w_params(
                JointOperationalParamsType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            JointOperationalParamsTypePluginSupport_destroy_data_ex(
                JointOperationalParamsType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            JointOperationalParamsTypePluginSupport_destroy_data(
                JointOperationalParamsType *sample);

            NDDSUSERDllExport extern void 
            JointOperationalParamsTypePluginSupport_print_data(
                const JointOperationalParamsType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern JointOperationalParamsType*
            JointOperationalParamsTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern JointOperationalParamsType*
            JointOperationalParamsTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            JointOperationalParamsTypePluginSupport_destroy_key_ex(
                JointOperationalParamsTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            JointOperationalParamsTypePluginSupport_destroy_key(
                JointOperationalParamsTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            JointOperationalParamsTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            JointOperationalParamsTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            JointOperationalParamsTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            JointOperationalParamsTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            JointOperationalParamsTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsType *out,
                const JointOperationalParamsType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            JointOperationalParamsTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const JointOperationalParamsType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            JointOperationalParamsTypePlugin_deserialize_from_cdr_buffer(
                JointOperationalParamsType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            JointOperationalParamsTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            JointOperationalParamsTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            JointOperationalParamsTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            JointOperationalParamsTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsTypeKeyHolder *key, 
                const JointOperationalParamsType *instance);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsType *instance, 
                const JointOperationalParamsTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            JointOperationalParamsTypePlugin_new(void);

            NDDSUSERDllExport extern void
            JointOperationalParamsTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ExtendedPayloadStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* JointOperationalParamsTypePlugin_851585563_h */

