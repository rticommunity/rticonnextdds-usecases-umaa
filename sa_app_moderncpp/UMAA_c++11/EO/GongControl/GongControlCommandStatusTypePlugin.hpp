

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GongControlCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GongControlCommandStatusTypePlugin_670978943_h
#define GongControlCommandStatusTypePlugin_670978943_h

#include "GongControlCommandStatusType.hpp"

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
        namespace GongControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GongControlCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GongControlCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GongControlCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GongControlCommandStatusType.
            */
            typedef class GongControlCommandStatusType GongControlCommandStatusTypeKeyHolder;

            #define GongControlCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GongControlCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GongControlCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GongControlCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GongControlCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GongControlCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GongControlCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GongControlCommandStatusType*
            GongControlCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GongControlCommandStatusType*
            GongControlCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GongControlCommandStatusType*
            GongControlCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandStatusTypePluginSupport_copy_data(
                GongControlCommandStatusType *out,
                const GongControlCommandStatusType *in);

            NDDSUSERDllExport extern void 
            GongControlCommandStatusTypePluginSupport_destroy_data_w_params(
                GongControlCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GongControlCommandStatusTypePluginSupport_destroy_data_ex(
                GongControlCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GongControlCommandStatusTypePluginSupport_destroy_data(
                GongControlCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            GongControlCommandStatusTypePluginSupport_print_data(
                const GongControlCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GongControlCommandStatusType*
            GongControlCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GongControlCommandStatusType*
            GongControlCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GongControlCommandStatusTypePluginSupport_destroy_key_ex(
                GongControlCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GongControlCommandStatusTypePluginSupport_destroy_key(
                GongControlCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GongControlCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GongControlCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GongControlCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GongControlCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GongControlCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandStatusType *out,
                const GongControlCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GongControlCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GongControlCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GongControlCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                GongControlCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GongControlCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GongControlCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GongControlCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GongControlCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandStatusTypeKeyHolder *key, 
                const GongControlCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandStatusType *instance, 
                const GongControlCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GongControlCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GongControlCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GongControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GongControlCommandStatusTypePlugin_670978943_h */

