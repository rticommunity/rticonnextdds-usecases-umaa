

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalVectorCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalVectorCommandStatusTypePlugin_1048301381_h
#define LocalVectorCommandStatusTypePlugin_1048301381_h

#include "LocalVectorCommandStatusType.hpp"

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
    namespace MO {
        namespace LocalVectorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalVectorCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalVectorCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalVectorCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalVectorCommandStatusType.
            */
            typedef class LocalVectorCommandStatusType LocalVectorCommandStatusTypeKeyHolder;

            #define LocalVectorCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalVectorCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalVectorCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalVectorCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalVectorCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalVectorCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalVectorCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalVectorCommandStatusType*
            LocalVectorCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalVectorCommandStatusType*
            LocalVectorCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalVectorCommandStatusType*
            LocalVectorCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalVectorCommandStatusTypePluginSupport_copy_data(
                LocalVectorCommandStatusType *out,
                const LocalVectorCommandStatusType *in);

            NDDSUSERDllExport extern void 
            LocalVectorCommandStatusTypePluginSupport_destroy_data_w_params(
                LocalVectorCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalVectorCommandStatusTypePluginSupport_destroy_data_ex(
                LocalVectorCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalVectorCommandStatusTypePluginSupport_destroy_data(
                LocalVectorCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            LocalVectorCommandStatusTypePluginSupport_print_data(
                const LocalVectorCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalVectorCommandStatusType*
            LocalVectorCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalVectorCommandStatusType*
            LocalVectorCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalVectorCommandStatusTypePluginSupport_destroy_key_ex(
                LocalVectorCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalVectorCommandStatusTypePluginSupport_destroy_key(
                LocalVectorCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalVectorCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalVectorCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalVectorCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalVectorCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalVectorCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalVectorCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalVectorCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalVectorCommandStatusType *out,
                const LocalVectorCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalVectorCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalVectorCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalVectorCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalVectorCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalVectorCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                LocalVectorCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalVectorCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalVectorCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalVectorCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalVectorCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalVectorCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalVectorCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalVectorCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalVectorCommandStatusTypeKeyHolder *key, 
                const LocalVectorCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalVectorCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalVectorCommandStatusType *instance, 
                const LocalVectorCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalVectorCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalVectorCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalVectorCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalVectorControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalVectorCommandStatusTypePlugin_1048301381_h */

