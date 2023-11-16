

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpCommandTypePlugin_1495240865_h
#define BallastPumpCommandTypePlugin_1495240865_h

#include "BallastPumpCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/BallastTank/BallastPumpFlowRateTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BallastTank {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BallastPumpCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BallastPumpCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BallastPumpCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BallastPumpCommandType.
            */
            typedef class BallastPumpCommandType BallastPumpCommandTypeKeyHolder;

            #define BallastPumpCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastPumpCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastPumpCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastPumpCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BallastPumpCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BallastPumpCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastPumpCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastPumpCommandType*
            BallastPumpCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastPumpCommandType*
            BallastPumpCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastPumpCommandType*
            BallastPumpCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandTypePluginSupport_copy_data(
                BallastPumpCommandType *out,
                const BallastPumpCommandType *in);

            NDDSUSERDllExport extern void 
            BallastPumpCommandTypePluginSupport_destroy_data_w_params(
                BallastPumpCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastPumpCommandTypePluginSupport_destroy_data_ex(
                BallastPumpCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastPumpCommandTypePluginSupport_destroy_data(
                BallastPumpCommandType *sample);

            NDDSUSERDllExport extern void 
            BallastPumpCommandTypePluginSupport_print_data(
                const BallastPumpCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BallastPumpCommandType*
            BallastPumpCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastPumpCommandType*
            BallastPumpCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BallastPumpCommandTypePluginSupport_destroy_key_ex(
                BallastPumpCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastPumpCommandTypePluginSupport_destroy_key(
                BallastPumpCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BallastPumpCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BallastPumpCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BallastPumpCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BallastPumpCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BallastPumpCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandType *out,
                const BallastPumpCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastPumpCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastPumpCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastPumpCommandTypePlugin_deserialize_from_cdr_buffer(
                BallastPumpCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastPumpCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastPumpCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandTypeKeyHolder *key, 
                const BallastPumpCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandType *instance, 
                const BallastPumpCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BallastPumpCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BallastPumpCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BallastPumpCommandTypePlugin_1495240865_h */

