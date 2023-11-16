

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraCommandTypePlugin_63809630_h
#define CameraCommandTypePlugin_63809630_h

#include "CameraCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/BuiltInTestStatusType_AllPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position2DPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace CameraControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CameraCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CameraCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CameraCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CameraCommandType.
            */
            typedef  class CameraCommandType CameraCommandTypeKeyHolder;

            #define CameraCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CameraCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CameraCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CameraCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CameraCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CameraCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CameraCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CameraCommandType*
            CameraCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CameraCommandType*
            CameraCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraCommandType*
            CameraCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CameraCommandTypePluginSupport_copy_data(
                CameraCommandType *out,
                const CameraCommandType *in);

            NDDSUSERDllExport extern void 
            CameraCommandTypePluginSupport_destroy_data_w_params(
                CameraCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CameraCommandTypePluginSupport_destroy_data_ex(
                CameraCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraCommandTypePluginSupport_destroy_data(
                CameraCommandType *sample);

            NDDSUSERDllExport extern void 
            CameraCommandTypePluginSupport_print_data(
                const CameraCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CameraCommandType*
            CameraCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraCommandType*
            CameraCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CameraCommandTypePluginSupport_destroy_key_ex(
                CameraCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraCommandTypePluginSupport_destroy_key(
                CameraCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CameraCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CameraCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CameraCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CameraCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CameraCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CameraCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraCommandType *out,
                const CameraCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CameraCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CameraCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CameraCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CameraCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CameraCommandTypePlugin_deserialize_from_cdr_buffer(
                CameraCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CameraCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CameraCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CameraCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CameraCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CameraCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CameraCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraCommandTypeKeyHolder *key, 
                const CameraCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            CameraCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CameraCommandType *instance, 
                const CameraCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CameraCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CameraCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CameraCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CameraControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraCommandTypePlugin_63809630_h */

