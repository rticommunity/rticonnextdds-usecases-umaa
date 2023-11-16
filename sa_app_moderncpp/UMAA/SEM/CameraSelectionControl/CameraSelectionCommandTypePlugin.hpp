

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionCommandTypePlugin_1371587223_h
#define CameraSelectionCommandTypePlugin_1371587223_h

#include "CameraSelectionCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace CameraSelectionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CameraSelectionCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CameraSelectionCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CameraSelectionCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CameraSelectionCommandType.
            */
            typedef  class CameraSelectionCommandType CameraSelectionCommandTypeKeyHolder;

            #define CameraSelectionCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CameraSelectionCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CameraSelectionCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CameraSelectionCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CameraSelectionCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CameraSelectionCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CameraSelectionCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CameraSelectionCommandType*
            CameraSelectionCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CameraSelectionCommandType*
            CameraSelectionCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionCommandType*
            CameraSelectionCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandTypePluginSupport_copy_data(
                CameraSelectionCommandType *out,
                const CameraSelectionCommandType *in);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandTypePluginSupport_destroy_data_w_params(
                CameraSelectionCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandTypePluginSupport_destroy_data_ex(
                CameraSelectionCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandTypePluginSupport_destroy_data(
                CameraSelectionCommandType *sample);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandTypePluginSupport_print_data(
                const CameraSelectionCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CameraSelectionCommandType*
            CameraSelectionCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionCommandType*
            CameraSelectionCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandTypePluginSupport_destroy_key_ex(
                CameraSelectionCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandTypePluginSupport_destroy_key(
                CameraSelectionCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CameraSelectionCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CameraSelectionCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CameraSelectionCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandType *out,
                const CameraSelectionCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CameraSelectionCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CameraSelectionCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CameraSelectionCommandTypePlugin_deserialize_from_cdr_buffer(
                CameraSelectionCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CameraSelectionCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandTypeKeyHolder *key, 
                const CameraSelectionCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandType *instance, 
                const CameraSelectionCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CameraSelectionCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CameraSelectionCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CameraSelectionControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraSelectionCommandTypePlugin_1371587223_h */

