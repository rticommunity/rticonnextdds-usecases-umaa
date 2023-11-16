

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinCommandStatusTypePlugin_2049444464_h
#define FinCommandStatusTypePlugin_2049444464_h

#include "FinCommandStatusType.hpp"

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
    namespace EO {
        namespace FinControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FinCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FinCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FinCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FinCommandStatusType.
            */
            typedef class FinCommandStatusType FinCommandStatusTypeKeyHolder;

            #define FinCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FinCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FinCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FinCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FinCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FinCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FinCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FinCommandStatusType*
            FinCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FinCommandStatusType*
            FinCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinCommandStatusType*
            FinCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FinCommandStatusTypePluginSupport_copy_data(
                FinCommandStatusType *out,
                const FinCommandStatusType *in);

            NDDSUSERDllExport extern void 
            FinCommandStatusTypePluginSupport_destroy_data_w_params(
                FinCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FinCommandStatusTypePluginSupport_destroy_data_ex(
                FinCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinCommandStatusTypePluginSupport_destroy_data(
                FinCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            FinCommandStatusTypePluginSupport_print_data(
                const FinCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FinCommandStatusType*
            FinCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FinCommandStatusType*
            FinCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FinCommandStatusTypePluginSupport_destroy_key_ex(
                FinCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FinCommandStatusTypePluginSupport_destroy_key(
                FinCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FinCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FinCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FinCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FinCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FinCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FinCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandStatusType *out,
                const FinCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FinCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FinCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FinCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FinCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                FinCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FinCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FinCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FinCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FinCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FinCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FinCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandStatusTypeKeyHolder *key, 
                const FinCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            FinCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FinCommandStatusType *instance, 
                const FinCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FinCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FinCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FinCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FinControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FinCommandStatusTypePlugin_2049444464_h */

