

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnchorCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnchorCommandStatusTypePlugin_1290944899_h
#define AnchorCommandStatusTypePlugin_1290944899_h

#include "AnchorCommandStatusType.hpp"

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
    namespace EO {
        namespace AnchorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct AnchorCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct AnchorCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * AnchorCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct AnchorCommandStatusType.
            */
            typedef class AnchorCommandStatusType AnchorCommandStatusTypeKeyHolder;

            #define AnchorCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define AnchorCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define AnchorCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define AnchorCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define AnchorCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define AnchorCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define AnchorCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern AnchorCommandStatusType*
            AnchorCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern AnchorCommandStatusType*
            AnchorCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnchorCommandStatusType*
            AnchorCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            AnchorCommandStatusTypePluginSupport_copy_data(
                AnchorCommandStatusType *out,
                const AnchorCommandStatusType *in);

            NDDSUSERDllExport extern void 
            AnchorCommandStatusTypePluginSupport_destroy_data_w_params(
                AnchorCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            AnchorCommandStatusTypePluginSupport_destroy_data_ex(
                AnchorCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnchorCommandStatusTypePluginSupport_destroy_data(
                AnchorCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            AnchorCommandStatusTypePluginSupport_print_data(
                const AnchorCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern AnchorCommandStatusType*
            AnchorCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern AnchorCommandStatusType*
            AnchorCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            AnchorCommandStatusTypePluginSupport_destroy_key_ex(
                AnchorCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            AnchorCommandStatusTypePluginSupport_destroy_key(
                AnchorCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            AnchorCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            AnchorCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            AnchorCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            AnchorCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            AnchorCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnchorCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            AnchorCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                AnchorCommandStatusType *out,
                const AnchorCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            AnchorCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const AnchorCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            AnchorCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                AnchorCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            AnchorCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                AnchorCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            AnchorCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            AnchorCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            AnchorCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            AnchorCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            AnchorCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                AnchorCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            AnchorCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                AnchorCommandStatusTypeKeyHolder *key, 
                const AnchorCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            AnchorCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                AnchorCommandStatusType *instance, 
                const AnchorCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            AnchorCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            AnchorCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            AnchorCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace AnchorControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AnchorCommandStatusTypePlugin_1290944899_h */

