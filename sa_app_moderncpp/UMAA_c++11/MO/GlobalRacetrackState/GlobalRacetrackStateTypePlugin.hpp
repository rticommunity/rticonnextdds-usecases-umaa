

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRacetrackStateTypePlugin_1560968254_h
#define GlobalRacetrackStateTypePlugin_1560968254_h

#include "GlobalRacetrackStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/GlobalRacetrackState/GlobalRacetrackPatternTypePlugin.hpp"
#include "UMAA/MO/GlobalRacetrackState/GlobalRacetrackTransitTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalRacetrackState {
            namespace GlobalRacetrackStateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalRacetrackStateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalRacetrackStateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalRacetrackStateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                GlobalRacetrackStateType_SelectorsPluginSupport_print_data(
                    const GlobalRacetrackStateType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define GlobalRacetrackStateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define GlobalRacetrackStateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define GlobalRacetrackStateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define GlobalRacetrackStateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define GlobalRacetrackStateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern GlobalRacetrackStateType_Union*
                GlobalRacetrackStateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern GlobalRacetrackStateType_Union*
                GlobalRacetrackStateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern GlobalRacetrackStateType_Union*
                GlobalRacetrackStateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                GlobalRacetrackStateType_UnionPluginSupport_copy_data(
                    GlobalRacetrackStateType_Union *out,
                    const GlobalRacetrackStateType_Union *in);

                NDDSUSERDllExport extern void 
                GlobalRacetrackStateType_UnionPluginSupport_destroy_data_w_params(
                    GlobalRacetrackStateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                GlobalRacetrackStateType_UnionPluginSupport_destroy_data_ex(
                    GlobalRacetrackStateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                GlobalRacetrackStateType_UnionPluginSupport_destroy_data(
                    GlobalRacetrackStateType_Union *sample);

                NDDSUSERDllExport extern void 
                GlobalRacetrackStateType_UnionPluginSupport_print_data(
                    const GlobalRacetrackStateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                GlobalRacetrackStateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                GlobalRacetrackStateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                GlobalRacetrackStateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                GlobalRacetrackStateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                GlobalRacetrackStateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalRacetrackStateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                GlobalRacetrackStateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalRacetrackStateType_Union *out,
                    const GlobalRacetrackStateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                GlobalRacetrackStateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const GlobalRacetrackStateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                GlobalRacetrackStateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalRacetrackStateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                GlobalRacetrackStateType_UnionPlugin_deserialize_from_cdr_buffer(
                    GlobalRacetrackStateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                GlobalRacetrackStateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                GlobalRacetrackStateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                GlobalRacetrackStateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalRacetrackStateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                GlobalRacetrackStateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalRacetrackStateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                GlobalRacetrackStateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                GlobalRacetrackStateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace GlobalRacetrackStateType_Specializations  */

            #define GlobalRacetrackStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalRacetrackStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalRacetrackStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalRacetrackStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalRacetrackStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalRacetrackStateType*
            GlobalRacetrackStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalRacetrackStateType*
            GlobalRacetrackStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalRacetrackStateType*
            GlobalRacetrackStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackStateTypePluginSupport_copy_data(
                GlobalRacetrackStateType *out,
                const GlobalRacetrackStateType *in);

            NDDSUSERDllExport extern void 
            GlobalRacetrackStateTypePluginSupport_destroy_data_w_params(
                GlobalRacetrackStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalRacetrackStateTypePluginSupport_destroy_data_ex(
                GlobalRacetrackStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalRacetrackStateTypePluginSupport_destroy_data(
                GlobalRacetrackStateType *sample);

            NDDSUSERDllExport extern void 
            GlobalRacetrackStateTypePluginSupport_print_data(
                const GlobalRacetrackStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalRacetrackStateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalRacetrackStateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalRacetrackStateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalRacetrackStateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalRacetrackStateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackStateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackStateType *out,
                const GlobalRacetrackStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalRacetrackStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalRacetrackStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalRacetrackStateTypePlugin_deserialize_from_cdr_buffer(
                GlobalRacetrackStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalRacetrackStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalRacetrackStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalRacetrackStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalRacetrackStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalRacetrackStateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalRacetrackStateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalRacetrackState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalRacetrackStateTypePlugin_1560968254_h */

