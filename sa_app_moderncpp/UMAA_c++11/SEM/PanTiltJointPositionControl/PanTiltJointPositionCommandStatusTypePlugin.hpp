

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointPositionCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointPositionCommandStatusTypePlugin_894620552_h
#define PanTiltJointPositionCommandStatusTypePlugin_894620552_h

#include "PanTiltJointPositionCommandStatusType.hpp"

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
        namespace PanTiltJointPositionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PanTiltJointPositionCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PanTiltJointPositionCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PanTiltJointPositionCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PanTiltJointPositionCommandStatusType.
            */
            typedef class PanTiltJointPositionCommandStatusType PanTiltJointPositionCommandStatusTypeKeyHolder;

            #define PanTiltJointPositionCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PanTiltJointPositionCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PanTiltJointPositionCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PanTiltJointPositionCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PanTiltJointPositionCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PanTiltJointPositionCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PanTiltJointPositionCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PanTiltJointPositionCommandStatusType*
            PanTiltJointPositionCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PanTiltJointPositionCommandStatusType*
            PanTiltJointPositionCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointPositionCommandStatusType*
            PanTiltJointPositionCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandStatusTypePluginSupport_copy_data(
                PanTiltJointPositionCommandStatusType *out,
                const PanTiltJointPositionCommandStatusType *in);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandStatusTypePluginSupport_destroy_data_w_params(
                PanTiltJointPositionCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandStatusTypePluginSupport_destroy_data_ex(
                PanTiltJointPositionCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandStatusTypePluginSupport_destroy_data(
                PanTiltJointPositionCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandStatusTypePluginSupport_print_data(
                const PanTiltJointPositionCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PanTiltJointPositionCommandStatusType*
            PanTiltJointPositionCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PanTiltJointPositionCommandStatusType*
            PanTiltJointPositionCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandStatusTypePluginSupport_destroy_key_ex(
                PanTiltJointPositionCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandStatusTypePluginSupport_destroy_key(
                PanTiltJointPositionCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PanTiltJointPositionCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PanTiltJointPositionCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PanTiltJointPositionCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PanTiltJointPositionCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandStatusType *out,
                const PanTiltJointPositionCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PanTiltJointPositionCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PanTiltJointPositionCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PanTiltJointPositionCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                PanTiltJointPositionCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointPositionCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PanTiltJointPositionCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointPositionCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PanTiltJointPositionCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandStatusTypeKeyHolder *key, 
                const PanTiltJointPositionCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PanTiltJointPositionCommandStatusType *instance, 
                const PanTiltJointPositionCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PanTiltJointPositionCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PanTiltJointPositionCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PanTiltJointPositionCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PanTiltJointPositionControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PanTiltJointPositionCommandStatusTypePlugin_894620552_h */

