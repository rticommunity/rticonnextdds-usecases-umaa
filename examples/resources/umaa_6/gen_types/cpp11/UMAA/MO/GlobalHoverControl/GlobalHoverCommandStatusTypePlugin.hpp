

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverCommandStatusTypePlugin_1376454307_h
#define GlobalHoverCommandStatusTypePlugin_1376454307_h

#include "GlobalHoverCommandStatusType.hpp"

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
    namespace MO {
        namespace GlobalHoverControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalHoverCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalHoverCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalHoverCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalHoverCommandStatusType.
            */
            typedef class GlobalHoverCommandStatusType GlobalHoverCommandStatusTypeKeyHolder;

            #define GlobalHoverCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalHoverCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalHoverCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalHoverCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalHoverCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalHoverCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalHoverCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalHoverCommandStatusType*
            GlobalHoverCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalHoverCommandStatusType*
            GlobalHoverCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalHoverCommandStatusType*
            GlobalHoverCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandStatusTypePluginSupport_copy_data(
                GlobalHoverCommandStatusType *out,
                const GlobalHoverCommandStatusType *in);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandStatusTypePluginSupport_destroy_data_w_params(
                GlobalHoverCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandStatusTypePluginSupport_destroy_data_ex(
                GlobalHoverCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandStatusTypePluginSupport_destroy_data(
                GlobalHoverCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandStatusTypePluginSupport_print_data(
                const GlobalHoverCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalHoverCommandStatusType*
            GlobalHoverCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalHoverCommandStatusType*
            GlobalHoverCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandStatusTypePluginSupport_destroy_key_ex(
                GlobalHoverCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandStatusTypePluginSupport_destroy_key(
                GlobalHoverCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalHoverCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalHoverCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalHoverCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandStatusType *out,
                const GlobalHoverCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalHoverCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalHoverCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalHoverCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                GlobalHoverCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalHoverCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandStatusTypeKeyHolder *key, 
                const GlobalHoverCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandStatusType *instance, 
                const GlobalHoverCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalHoverCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalHoverCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalHoverControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalHoverCommandStatusTypePlugin_1376454307_h */

