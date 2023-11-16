

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRacetrackStateTypePlugin_856341078_h
#define LocalRacetrackStateTypePlugin_856341078_h

#include "LocalRacetrackStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/LocalRacetrackState/LocalRacetrackPatternTypePlugin.hpp"
#include "UMAA/MO/LocalRacetrackState/LocalRacetrackTransitTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalRacetrackState {
            namespace LocalRacetrackStateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalRacetrackStateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalRacetrackStateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalRacetrackStateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                LocalRacetrackStateType_SelectorsPluginSupport_print_data(
                    const LocalRacetrackStateType_Selectors *sample, const char *desc, int indent_level);

                #define LocalRacetrackStateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define LocalRacetrackStateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define LocalRacetrackStateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define LocalRacetrackStateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define LocalRacetrackStateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern LocalRacetrackStateType_Union*
                LocalRacetrackStateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern LocalRacetrackStateType_Union*
                LocalRacetrackStateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern LocalRacetrackStateType_Union*
                LocalRacetrackStateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                LocalRacetrackStateType_UnionPluginSupport_copy_data(
                    LocalRacetrackStateType_Union *out,
                    const LocalRacetrackStateType_Union *in);

                NDDSUSERDllExport extern void 
                LocalRacetrackStateType_UnionPluginSupport_destroy_data_w_params(
                    LocalRacetrackStateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                LocalRacetrackStateType_UnionPluginSupport_destroy_data_ex(
                    LocalRacetrackStateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                LocalRacetrackStateType_UnionPluginSupport_destroy_data(
                    LocalRacetrackStateType_Union *sample);

                NDDSUSERDllExport extern void 
                LocalRacetrackStateType_UnionPluginSupport_print_data(
                    const LocalRacetrackStateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                LocalRacetrackStateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                LocalRacetrackStateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                LocalRacetrackStateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                LocalRacetrackStateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                LocalRacetrackStateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalRacetrackStateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                LocalRacetrackStateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalRacetrackStateType_Union *out,
                    const LocalRacetrackStateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                LocalRacetrackStateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const LocalRacetrackStateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                LocalRacetrackStateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalRacetrackStateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                LocalRacetrackStateType_UnionPlugin_deserialize_from_cdr_buffer(
                    LocalRacetrackStateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                LocalRacetrackStateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                LocalRacetrackStateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                LocalRacetrackStateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalRacetrackStateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                LocalRacetrackStateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalRacetrackStateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                LocalRacetrackStateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                LocalRacetrackStateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace LocalRacetrackStateType_Specializations  */

            #define LocalRacetrackStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalRacetrackStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalRacetrackStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalRacetrackStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalRacetrackStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalRacetrackStateType*
            LocalRacetrackStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalRacetrackStateType*
            LocalRacetrackStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalRacetrackStateType*
            LocalRacetrackStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackStateTypePluginSupport_copy_data(
                LocalRacetrackStateType *out,
                const LocalRacetrackStateType *in);

            NDDSUSERDllExport extern void 
            LocalRacetrackStateTypePluginSupport_destroy_data_w_params(
                LocalRacetrackStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalRacetrackStateTypePluginSupport_destroy_data_ex(
                LocalRacetrackStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalRacetrackStateTypePluginSupport_destroy_data(
                LocalRacetrackStateType *sample);

            NDDSUSERDllExport extern void 
            LocalRacetrackStateTypePluginSupport_print_data(
                const LocalRacetrackStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalRacetrackStateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalRacetrackStateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalRacetrackStateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalRacetrackStateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalRacetrackStateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackStateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackStateType *out,
                const LocalRacetrackStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalRacetrackStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalRacetrackStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalRacetrackStateTypePlugin_deserialize_from_cdr_buffer(
                LocalRacetrackStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalRacetrackStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalRacetrackStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalRacetrackStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalRacetrackStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalRacetrackStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalRacetrackStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalRacetrackStateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalRacetrackStateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalRacetrackState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalRacetrackStateTypePlugin_856341078_h */

