

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionCommandStatusTypePlugin_1328411909_h
#define CameraSelectionCommandStatusTypePlugin_1328411909_h

#include "CameraSelectionCommandStatusType.hpp"

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
        namespace CameraSelectionControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CameraSelectionCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CameraSelectionCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CameraSelectionCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CameraSelectionCommandStatusType.
            */
            typedef  class CameraSelectionCommandStatusType CameraSelectionCommandStatusTypeKeyHolder;

            #define CameraSelectionCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CameraSelectionCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CameraSelectionCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CameraSelectionCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CameraSelectionCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CameraSelectionCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CameraSelectionCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CameraSelectionCommandStatusType*
            CameraSelectionCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CameraSelectionCommandStatusType*
            CameraSelectionCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionCommandStatusType*
            CameraSelectionCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandStatusTypePluginSupport_copy_data(
                CameraSelectionCommandStatusType *out,
                const CameraSelectionCommandStatusType *in);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandStatusTypePluginSupport_destroy_data_w_params(
                CameraSelectionCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandStatusTypePluginSupport_destroy_data_ex(
                CameraSelectionCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandStatusTypePluginSupport_destroy_data(
                CameraSelectionCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandStatusTypePluginSupport_print_data(
                const CameraSelectionCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CameraSelectionCommandStatusType*
            CameraSelectionCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionCommandStatusType*
            CameraSelectionCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandStatusTypePluginSupport_destroy_key_ex(
                CameraSelectionCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandStatusTypePluginSupport_destroy_key(
                CameraSelectionCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CameraSelectionCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CameraSelectionCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CameraSelectionCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CameraSelectionCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandStatusType *out,
                const CameraSelectionCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CameraSelectionCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CameraSelectionCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CameraSelectionCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                CameraSelectionCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CameraSelectionCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandStatusTypeKeyHolder *key, 
                const CameraSelectionCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionCommandStatusType *instance, 
                const CameraSelectionCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CameraSelectionCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CameraSelectionCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CameraSelectionControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraSelectionCommandStatusTypePlugin_1328411909_h */

