

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InertialSensorCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef InertialSensorCommandTypePlugin_749508381_h
#define InertialSensorCommandTypePlugin_749508381_h

#include "InertialSensorCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace InertialSensorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct InertialSensorCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct InertialSensorCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * InertialSensorCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct InertialSensorCommandType.
            */
            typedef class InertialSensorCommandType InertialSensorCommandTypeKeyHolder;

            #define InertialSensorCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define InertialSensorCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define InertialSensorCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define InertialSensorCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define InertialSensorCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define InertialSensorCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define InertialSensorCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern InertialSensorCommandType*
            InertialSensorCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern InertialSensorCommandType*
            InertialSensorCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern InertialSensorCommandType*
            InertialSensorCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorCommandTypePluginSupport_copy_data(
                InertialSensorCommandType *out,
                const InertialSensorCommandType *in);

            NDDSUSERDllExport extern void 
            InertialSensorCommandTypePluginSupport_destroy_data_w_params(
                InertialSensorCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            InertialSensorCommandTypePluginSupport_destroy_data_ex(
                InertialSensorCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            InertialSensorCommandTypePluginSupport_destroy_data(
                InertialSensorCommandType *sample);

            NDDSUSERDllExport extern void 
            InertialSensorCommandTypePluginSupport_print_data(
                const InertialSensorCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern InertialSensorCommandType*
            InertialSensorCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern InertialSensorCommandType*
            InertialSensorCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            InertialSensorCommandTypePluginSupport_destroy_key_ex(
                InertialSensorCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            InertialSensorCommandTypePluginSupport_destroy_key(
                InertialSensorCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            InertialSensorCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            InertialSensorCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            InertialSensorCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            InertialSensorCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            InertialSensorCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            InertialSensorCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorCommandType *out,
                const InertialSensorCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            InertialSensorCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const InertialSensorCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            InertialSensorCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            InertialSensorCommandTypePlugin_deserialize_from_cdr_buffer(
                InertialSensorCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            InertialSensorCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            InertialSensorCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            InertialSensorCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            InertialSensorCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorCommandTypeKeyHolder *key, 
                const InertialSensorCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorCommandType *instance, 
                const InertialSensorCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            InertialSensorCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            InertialSensorCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace InertialSensorControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* InertialSensorCommandTypePlugin_749508381_h */
