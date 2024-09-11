

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IlluminatorCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef IlluminatorCommandTypePlugin_1519960562_h
#define IlluminatorCommandTypePlugin_1519960562_h

#include "IlluminatorCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/SEM/BaseType/RGBTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace IlluminatorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct IlluminatorCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct IlluminatorCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * IlluminatorCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct IlluminatorCommandType.
            */
            typedef class IlluminatorCommandType IlluminatorCommandTypeKeyHolder;

            #define IlluminatorCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define IlluminatorCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define IlluminatorCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define IlluminatorCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define IlluminatorCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define IlluminatorCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define IlluminatorCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern IlluminatorCommandType*
            IlluminatorCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern IlluminatorCommandType*
            IlluminatorCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorCommandType*
            IlluminatorCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandTypePluginSupport_copy_data(
                IlluminatorCommandType *out,
                const IlluminatorCommandType *in);

            NDDSUSERDllExport extern void 
            IlluminatorCommandTypePluginSupport_destroy_data_w_params(
                IlluminatorCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            IlluminatorCommandTypePluginSupport_destroy_data_ex(
                IlluminatorCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorCommandTypePluginSupport_destroy_data(
                IlluminatorCommandType *sample);

            NDDSUSERDllExport extern void 
            IlluminatorCommandTypePluginSupport_print_data(
                const IlluminatorCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern IlluminatorCommandType*
            IlluminatorCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern IlluminatorCommandType*
            IlluminatorCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            IlluminatorCommandTypePluginSupport_destroy_key_ex(
                IlluminatorCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            IlluminatorCommandTypePluginSupport_destroy_key(
                IlluminatorCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            IlluminatorCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            IlluminatorCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            IlluminatorCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            IlluminatorCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            IlluminatorCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandType *out,
                const IlluminatorCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            IlluminatorCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const IlluminatorCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            IlluminatorCommandTypePlugin_deserialize_from_cdr_buffer(
                IlluminatorCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            IlluminatorCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            IlluminatorCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            IlluminatorCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandTypeKeyHolder *key, 
                const IlluminatorCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                IlluminatorCommandType *instance, 
                const IlluminatorCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            IlluminatorCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            IlluminatorCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            IlluminatorCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace IlluminatorControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* IlluminatorCommandTypePlugin_1519960562_h */

