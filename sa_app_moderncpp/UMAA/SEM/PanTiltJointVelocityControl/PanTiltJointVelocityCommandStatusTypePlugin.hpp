

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointVelocityCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointVelocityCommandStatusTypePlugin_1204072854_h
#define PanTiltJointVelocityCommandStatusTypePlugin_1204072854_h

#include "PanTiltJointVelocityCommandStatusType.hpp"

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
        namespace PanTiltJointVelocityControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PanTiltJointVelocityCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PanTiltJointVelocityCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PanTiltJointVelocityCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PanTiltJointVelocityCommandStatusType.
            */
            typedef  class PanTiltJointVelocityCommandStatusType PanTiltJointVelocityCommandStatusTypeKeyHolder;

            #define PanTiltJointVelocityCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PanTiltJointVelocityCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PanTiltJointVelocityCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PanTiltJointVelocityCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PanTiltJointVelocityCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PanTiltJointVelocityCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PanTiltJointVelocityCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PanTiltJointVelocityCommandStatusType*
            PanTiltJointVelocityCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandStatusType*
            PanTiltJointVelocityCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandStatusType*
            PanTiltJointVelocityCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandStatusTypePluginSupport_copy_data(
                PanTiltJointVelocityCommandStatusType *out,
                const PanTiltJointVelocityCommandStatusType *in);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandStatusTypePluginSupport_destroy_data_w_params(
                PanTiltJointVelocityCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandStatusTypePluginSupport_destroy_data_ex(
                PanTiltJointVelocityCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandStatusTypePluginSupport_destroy_data(
                PanTiltJointVelocityCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandStatusTypePluginSupport_print_data(
                const PanTiltJointVelocityCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandStatusType*
            PanTiltJointVelocityCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointVelocityCommandStatusType*
            PanTiltJointVelocityCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandStatusTypePluginSupport_destroy_key_ex(
                PanTiltJointVelocityCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandStatusTypePluginSupport_destroy_key(
                PanTiltJointVelocityCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PanTiltJointVelocityCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PanTiltJointVelocityCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PanTiltJointVelocityCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PanTiltJointVelocityCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandStatusType *out,
                const PanTiltJointVelocityCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PanTiltJointVelocityCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PanTiltJointVelocityCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PanTiltJointVelocityCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                PanTiltJointVelocityCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointVelocityCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PanTiltJointVelocityCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointVelocityCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointVelocityCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandStatusTypeKeyHolder *key, 
                const PanTiltJointVelocityCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointVelocityCommandStatusType *instance, 
                const PanTiltJointVelocityCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointVelocityCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PanTiltJointVelocityCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PanTiltJointVelocityCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PanTiltJointVelocityControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PanTiltJointVelocityCommandStatusTypePlugin_1204072854_h */

