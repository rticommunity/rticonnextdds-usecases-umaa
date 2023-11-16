

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDeadReckoningCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDeadReckoningCommandStatusTypePlugin_2096002366_h
#define LocalDeadReckoningCommandStatusTypePlugin_2096002366_h

#include "LocalDeadReckoningCommandStatusType.hpp"

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
    namespace SA {
        namespace LocalDeadReckoning {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalDeadReckoningCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalDeadReckoningCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalDeadReckoningCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalDeadReckoningCommandStatusType.
            */
            typedef class LocalDeadReckoningCommandStatusType LocalDeadReckoningCommandStatusTypeKeyHolder;

            #define LocalDeadReckoningCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalDeadReckoningCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalDeadReckoningCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalDeadReckoningCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalDeadReckoningCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalDeadReckoningCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalDeadReckoningCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalDeadReckoningCommandStatusType*
            LocalDeadReckoningCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalDeadReckoningCommandStatusType*
            LocalDeadReckoningCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalDeadReckoningCommandStatusType*
            LocalDeadReckoningCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandStatusTypePluginSupport_copy_data(
                LocalDeadReckoningCommandStatusType *out,
                const LocalDeadReckoningCommandStatusType *in);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandStatusTypePluginSupport_destroy_data_w_params(
                LocalDeadReckoningCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandStatusTypePluginSupport_destroy_data_ex(
                LocalDeadReckoningCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandStatusTypePluginSupport_destroy_data(
                LocalDeadReckoningCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandStatusTypePluginSupport_print_data(
                const LocalDeadReckoningCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalDeadReckoningCommandStatusType*
            LocalDeadReckoningCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalDeadReckoningCommandStatusType*
            LocalDeadReckoningCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandStatusTypePluginSupport_destroy_key_ex(
                LocalDeadReckoningCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandStatusTypePluginSupport_destroy_key(
                LocalDeadReckoningCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalDeadReckoningCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalDeadReckoningCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalDeadReckoningCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandStatusType *out,
                const LocalDeadReckoningCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalDeadReckoningCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalDeadReckoningCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalDeadReckoningCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                LocalDeadReckoningCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalDeadReckoningCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalDeadReckoningCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalDeadReckoningCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalDeadReckoningCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandStatusTypeKeyHolder *key, 
                const LocalDeadReckoningCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandStatusType *instance, 
                const LocalDeadReckoningCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalDeadReckoningCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalDeadReckoningCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalDeadReckoning  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalDeadReckoningCommandStatusTypePlugin_2096002366_h */

