

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionSummaryType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionSummaryTypePlugin_327615880_h
#define MissionSummaryTypePlugin_327615880_h

#include "MissionSummaryType.hpp"

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
        namespace BaseType {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MissionSummaryType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MissionSummaryType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MissionSummaryType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MissionSummaryType.
            */
            typedef  class MissionSummaryType MissionSummaryTypeKeyHolder;

            #define MissionSummaryTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MissionSummaryTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MissionSummaryTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MissionSummaryTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MissionSummaryTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MissionSummaryTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MissionSummaryTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MissionSummaryType*
            MissionSummaryTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MissionSummaryType*
            MissionSummaryTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionSummaryType*
            MissionSummaryTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryTypePluginSupport_copy_data(
                MissionSummaryType *out,
                const MissionSummaryType *in);

            NDDSUSERDllExport extern void 
            MissionSummaryTypePluginSupport_destroy_data_w_params(
                MissionSummaryType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MissionSummaryTypePluginSupport_destroy_data_ex(
                MissionSummaryType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionSummaryTypePluginSupport_destroy_data(
                MissionSummaryType *sample);

            NDDSUSERDllExport extern void 
            MissionSummaryTypePluginSupport_print_data(
                const MissionSummaryType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MissionSummaryType*
            MissionSummaryTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MissionSummaryType*
            MissionSummaryTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MissionSummaryTypePluginSupport_destroy_key_ex(
                MissionSummaryTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MissionSummaryTypePluginSupport_destroy_key(
                MissionSummaryTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MissionSummaryTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MissionSummaryTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MissionSummaryTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MissionSummaryTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MissionSummaryTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryType *out,
                const MissionSummaryType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MissionSummaryTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MissionSummaryType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MissionSummaryTypePlugin_deserialize_from_cdr_buffer(
                MissionSummaryType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MissionSummaryTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MissionSummaryTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MissionSummaryTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MissionSummaryTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryTypeKeyHolder *key, 
                const MissionSummaryType *instance);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MissionSummaryType *instance, 
                const MissionSummaryTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MissionSummaryTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MissionSummaryTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MissionSummaryTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MissionSummaryTypePlugin_327615880_h */

