

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalVectorCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalVectorCommandTypePlugin_1781556570_h
#define GlobalVectorCommandTypePlugin_1781556570_h

#include "GlobalVectorCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Orientation3D_TolerancePlugin.hpp"
#include "UMAA/Common/Orientation/OrientationTypePlugin.hpp"
#include "UMAA/Common/Speed/SpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalVectorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalVectorCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalVectorCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalVectorCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalVectorCommandType.
            */
            typedef  class GlobalVectorCommandType GlobalVectorCommandTypeKeyHolder;

            #define GlobalVectorCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalVectorCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalVectorCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalVectorCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalVectorCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalVectorCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalVectorCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalVectorCommandType*
            GlobalVectorCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalVectorCommandType*
            GlobalVectorCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalVectorCommandType*
            GlobalVectorCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandTypePluginSupport_copy_data(
                GlobalVectorCommandType *out,
                const GlobalVectorCommandType *in);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandTypePluginSupport_destroy_data_w_params(
                GlobalVectorCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandTypePluginSupport_destroy_data_ex(
                GlobalVectorCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandTypePluginSupport_destroy_data(
                GlobalVectorCommandType *sample);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandTypePluginSupport_print_data(
                const GlobalVectorCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalVectorCommandType*
            GlobalVectorCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalVectorCommandType*
            GlobalVectorCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandTypePluginSupport_destroy_key_ex(
                GlobalVectorCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandTypePluginSupport_destroy_key(
                GlobalVectorCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalVectorCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalVectorCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalVectorCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandType *out,
                const GlobalVectorCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalVectorCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalVectorCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalVectorCommandTypePlugin_deserialize_from_cdr_buffer(
                GlobalVectorCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalVectorCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalVectorCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalVectorCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalVectorCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandTypeKeyHolder *key, 
                const GlobalVectorCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandType *instance, 
                const GlobalVectorCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalVectorCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalVectorCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalVectorControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalVectorCommandTypePlugin_1781556570_h */

