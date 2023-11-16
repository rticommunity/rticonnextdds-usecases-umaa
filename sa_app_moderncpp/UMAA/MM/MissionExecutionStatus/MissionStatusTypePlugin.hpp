

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionStatusTypePlugin_928516912_h
#define MissionStatusTypePlugin_928516912_h

#include "MissionStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace MissionExecutionStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionStatusType.
            */
            typedef  class MissionStatusType MissionStatusTypeKeyHolder;

            #define MissionStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionStatusType*
            MissionStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionStatusType*
            MissionStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionStatusType*
            MissionStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionStatusTypePluginSupport_copy_data(
                MissionStatusType *out,
                const MissionStatusType *in);

            NDDSUSERDllExport extern void 
            MissionStatusTypePluginSupport_destroy_data_w_params(
                MissionStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionStatusTypePluginSupport_destroy_data_ex(
                MissionStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionStatusTypePluginSupport_destroy_data(
                MissionStatusType *sample);

            NDDSUSERDllExport extern void 
            MissionStatusTypePluginSupport_print_data(
                const MissionStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionStatusType*
            MissionStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionStatusType*
            MissionStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionStatusTypePluginSupport_destroy_key_ex(
                MissionStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionStatusTypePluginSupport_destroy_key(
                MissionStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionStatusType *out,
                const MissionStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionStatusTypePlugin_deserialize_from_cdr_buffer(
                MissionStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionStatusTypeKeyHolder *key, 
                const MissionStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionStatusType *instance, 
                const MissionStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MissionExecutionStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionStatusTypePlugin_928516912_h */

