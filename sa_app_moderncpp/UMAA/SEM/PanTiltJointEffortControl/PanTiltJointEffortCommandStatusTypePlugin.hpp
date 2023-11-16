

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointEffortCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointEffortCommandStatusTypePlugin_1508622541_h
#define PanTiltJointEffortCommandStatusTypePlugin_1508622541_h

#include "PanTiltJointEffortCommandStatusType.hpp"

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
        namespace PanTiltJointEffortControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PanTiltJointEffortCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PanTiltJointEffortCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PanTiltJointEffortCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PanTiltJointEffortCommandStatusType.
            */
            typedef  class PanTiltJointEffortCommandStatusType PanTiltJointEffortCommandStatusTypeKeyHolder;

            #define PanTiltJointEffortCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PanTiltJointEffortCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PanTiltJointEffortCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PanTiltJointEffortCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PanTiltJointEffortCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PanTiltJointEffortCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PanTiltJointEffortCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PanTiltJointEffortCommandStatusType*
            PanTiltJointEffortCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PanTiltJointEffortCommandStatusType*
            PanTiltJointEffortCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointEffortCommandStatusType*
            PanTiltJointEffortCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandStatusTypePluginSupport_copy_data(
                PanTiltJointEffortCommandStatusType *out,
                const PanTiltJointEffortCommandStatusType *in);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandStatusTypePluginSupport_destroy_data_w_params(
                PanTiltJointEffortCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandStatusTypePluginSupport_destroy_data_ex(
                PanTiltJointEffortCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandStatusTypePluginSupport_destroy_data(
                PanTiltJointEffortCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandStatusTypePluginSupport_print_data(
                const PanTiltJointEffortCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PanTiltJointEffortCommandStatusType*
            PanTiltJointEffortCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointEffortCommandStatusType*
            PanTiltJointEffortCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandStatusTypePluginSupport_destroy_key_ex(
                PanTiltJointEffortCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandStatusTypePluginSupport_destroy_key(
                PanTiltJointEffortCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PanTiltJointEffortCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PanTiltJointEffortCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PanTiltJointEffortCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PanTiltJointEffortCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandStatusType *out,
                const PanTiltJointEffortCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PanTiltJointEffortCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PanTiltJointEffortCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PanTiltJointEffortCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                PanTiltJointEffortCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointEffortCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PanTiltJointEffortCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointEffortCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointEffortCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandStatusTypeKeyHolder *key, 
                const PanTiltJointEffortCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointEffortCommandStatusType *instance, 
                const PanTiltJointEffortCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointEffortCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PanTiltJointEffortCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PanTiltJointEffortCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PanTiltJointEffortControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PanTiltJointEffortCommandStatusTypePlugin_1508622541_h */

