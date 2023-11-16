

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalVideoCommandStatusTypePlugin_1640307240_h
#define DigitalVideoCommandStatusTypePlugin_1640307240_h

#include "DigitalVideoCommandStatusType.hpp"

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
        namespace DigitalVideoControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DigitalVideoCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DigitalVideoCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DigitalVideoCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DigitalVideoCommandStatusType.
            */
            typedef  class DigitalVideoCommandStatusType DigitalVideoCommandStatusTypeKeyHolder;

            #define DigitalVideoCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DigitalVideoCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DigitalVideoCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DigitalVideoCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DigitalVideoCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DigitalVideoCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DigitalVideoCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DigitalVideoCommandStatusType*
            DigitalVideoCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DigitalVideoCommandStatusType*
            DigitalVideoCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoCommandStatusType*
            DigitalVideoCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandStatusTypePluginSupport_copy_data(
                DigitalVideoCommandStatusType *out,
                const DigitalVideoCommandStatusType *in);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandStatusTypePluginSupport_destroy_data_w_params(
                DigitalVideoCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandStatusTypePluginSupport_destroy_data_ex(
                DigitalVideoCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandStatusTypePluginSupport_destroy_data(
                DigitalVideoCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandStatusTypePluginSupport_print_data(
                const DigitalVideoCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DigitalVideoCommandStatusType*
            DigitalVideoCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoCommandStatusType*
            DigitalVideoCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandStatusTypePluginSupport_destroy_key_ex(
                DigitalVideoCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandStatusTypePluginSupport_destroy_key(
                DigitalVideoCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DigitalVideoCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DigitalVideoCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DigitalVideoCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandStatusType *out,
                const DigitalVideoCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DigitalVideoCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DigitalVideoCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DigitalVideoCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                DigitalVideoCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DigitalVideoCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandStatusTypeKeyHolder *key, 
                const DigitalVideoCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandStatusType *instance, 
                const DigitalVideoCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DigitalVideoCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DigitalVideoCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DigitalVideoControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DigitalVideoCommandStatusTypePlugin_1640307240_h */

