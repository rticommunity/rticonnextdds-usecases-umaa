

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverCommandTypePlugin_1045313480_h
#define PrimitiveDriverCommandTypePlugin_1045313480_h

#include "PrimitiveDriverCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/LinearEffortPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/RotationalEffortPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace PrimitiveDriverControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct PrimitiveDriverCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct PrimitiveDriverCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * PrimitiveDriverCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct PrimitiveDriverCommandType.
            */
            typedef class PrimitiveDriverCommandType PrimitiveDriverCommandTypeKeyHolder;

            #define PrimitiveDriverCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PrimitiveDriverCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PrimitiveDriverCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PrimitiveDriverCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define PrimitiveDriverCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define PrimitiveDriverCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PrimitiveDriverCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PrimitiveDriverCommandType*
            PrimitiveDriverCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PrimitiveDriverCommandType*
            PrimitiveDriverCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverCommandType*
            PrimitiveDriverCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandTypePluginSupport_copy_data(
                PrimitiveDriverCommandType *out,
                const PrimitiveDriverCommandType *in);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandTypePluginSupport_destroy_data_w_params(
                PrimitiveDriverCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandTypePluginSupport_destroy_data_ex(
                PrimitiveDriverCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandTypePluginSupport_destroy_data(
                PrimitiveDriverCommandType *sample);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandTypePluginSupport_print_data(
                const PrimitiveDriverCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern PrimitiveDriverCommandType*
            PrimitiveDriverCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PrimitiveDriverCommandType*
            PrimitiveDriverCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandTypePluginSupport_destroy_key_ex(
                PrimitiveDriverCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandTypePluginSupport_destroy_key(
                PrimitiveDriverCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PrimitiveDriverCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PrimitiveDriverCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PrimitiveDriverCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PrimitiveDriverCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandType *out,
                const PrimitiveDriverCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PrimitiveDriverCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PrimitiveDriverCommandTypePlugin_deserialize_from_cdr_buffer(
                PrimitiveDriverCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PrimitiveDriverCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PrimitiveDriverCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandTypeKeyHolder *key, 
                const PrimitiveDriverCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                PrimitiveDriverCommandType *instance, 
                const PrimitiveDriverCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            PrimitiveDriverCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PrimitiveDriverCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PrimitiveDriverCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace PrimitiveDriverControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PrimitiveDriverCommandTypePlugin_1045313480_h */

