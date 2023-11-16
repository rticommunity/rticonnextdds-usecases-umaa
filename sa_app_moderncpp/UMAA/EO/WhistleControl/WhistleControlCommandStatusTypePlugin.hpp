

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistleControlCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WhistleControlCommandStatusTypePlugin_1158913205_h
#define WhistleControlCommandStatusTypePlugin_1158913205_h

#include "WhistleControlCommandStatusType.hpp"

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
        namespace WhistleControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WhistleControlCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WhistleControlCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WhistleControlCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WhistleControlCommandStatusType.
            */
            typedef  class WhistleControlCommandStatusType WhistleControlCommandStatusTypeKeyHolder;

            #define WhistleControlCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WhistleControlCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WhistleControlCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WhistleControlCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WhistleControlCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WhistleControlCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WhistleControlCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WhistleControlCommandStatusType*
            WhistleControlCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WhistleControlCommandStatusType*
            WhistleControlCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WhistleControlCommandStatusType*
            WhistleControlCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandStatusTypePluginSupport_copy_data(
                WhistleControlCommandStatusType *out,
                const WhistleControlCommandStatusType *in);

            NDDSUSERDllExport extern void 
            WhistleControlCommandStatusTypePluginSupport_destroy_data_w_params(
                WhistleControlCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WhistleControlCommandStatusTypePluginSupport_destroy_data_ex(
                WhistleControlCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WhistleControlCommandStatusTypePluginSupport_destroy_data(
                WhistleControlCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            WhistleControlCommandStatusTypePluginSupport_print_data(
                const WhistleControlCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WhistleControlCommandStatusType*
            WhistleControlCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WhistleControlCommandStatusType*
            WhistleControlCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WhistleControlCommandStatusTypePluginSupport_destroy_key_ex(
                WhistleControlCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WhistleControlCommandStatusTypePluginSupport_destroy_key(
                WhistleControlCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WhistleControlCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WhistleControlCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WhistleControlCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WhistleControlCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WhistleControlCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandStatusType *out,
                const WhistleControlCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WhistleControlCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WhistleControlCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WhistleControlCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                WhistleControlCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WhistleControlCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WhistleControlCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WhistleControlCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WhistleControlCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandStatusTypeKeyHolder *key, 
                const WhistleControlCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WhistleControlCommandStatusType *instance, 
                const WhistleControlCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WhistleControlCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WhistleControlCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WhistleControlCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WhistleControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WhistleControlCommandStatusTypePlugin_1158913205_h */

