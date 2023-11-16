

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegularPolygonStateTypePlugin_335007902_h
#define GlobalRegularPolygonStateTypePlugin_335007902_h

#include "GlobalRegularPolygonStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/GlobalRegularPolygonState/GlobalRegularPolygonPatternTypePlugin.hpp"
#include "UMAA/MO/GlobalRegularPolygonState/GlobalRegularPolygonTransitTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalRegularPolygonState {
            namespace GlobalRegularPolygonStateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalRegularPolygonStateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalRegularPolygonStateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalRegularPolygonStateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                GlobalRegularPolygonStateType_SelectorsPluginSupport_print_data(
                    const GlobalRegularPolygonStateType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define GlobalRegularPolygonStateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define GlobalRegularPolygonStateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define GlobalRegularPolygonStateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define GlobalRegularPolygonStateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define GlobalRegularPolygonStateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern GlobalRegularPolygonStateType_Union*
                GlobalRegularPolygonStateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern GlobalRegularPolygonStateType_Union*
                GlobalRegularPolygonStateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern GlobalRegularPolygonStateType_Union*
                GlobalRegularPolygonStateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                GlobalRegularPolygonStateType_UnionPluginSupport_copy_data(
                    GlobalRegularPolygonStateType_Union *out,
                    const GlobalRegularPolygonStateType_Union *in);

                NDDSUSERDllExport extern void 
                GlobalRegularPolygonStateType_UnionPluginSupport_destroy_data_w_params(
                    GlobalRegularPolygonStateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                GlobalRegularPolygonStateType_UnionPluginSupport_destroy_data_ex(
                    GlobalRegularPolygonStateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                GlobalRegularPolygonStateType_UnionPluginSupport_destroy_data(
                    GlobalRegularPolygonStateType_Union *sample);

                NDDSUSERDllExport extern void 
                GlobalRegularPolygonStateType_UnionPluginSupport_print_data(
                    const GlobalRegularPolygonStateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                GlobalRegularPolygonStateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                GlobalRegularPolygonStateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                GlobalRegularPolygonStateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                GlobalRegularPolygonStateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                GlobalRegularPolygonStateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalRegularPolygonStateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                GlobalRegularPolygonStateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalRegularPolygonStateType_Union *out,
                    const GlobalRegularPolygonStateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                GlobalRegularPolygonStateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const GlobalRegularPolygonStateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                GlobalRegularPolygonStateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalRegularPolygonStateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                GlobalRegularPolygonStateType_UnionPlugin_deserialize_from_cdr_buffer(
                    GlobalRegularPolygonStateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                GlobalRegularPolygonStateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                GlobalRegularPolygonStateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                GlobalRegularPolygonStateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalRegularPolygonStateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                GlobalRegularPolygonStateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalRegularPolygonStateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                GlobalRegularPolygonStateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                GlobalRegularPolygonStateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace GlobalRegularPolygonStateType_Specializations  */

            #define GlobalRegularPolygonStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalRegularPolygonStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalRegularPolygonStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalRegularPolygonStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalRegularPolygonStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalRegularPolygonStateType*
            GlobalRegularPolygonStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalRegularPolygonStateType*
            GlobalRegularPolygonStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalRegularPolygonStateType*
            GlobalRegularPolygonStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonStateTypePluginSupport_copy_data(
                GlobalRegularPolygonStateType *out,
                const GlobalRegularPolygonStateType *in);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonStateTypePluginSupport_destroy_data_w_params(
                GlobalRegularPolygonStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonStateTypePluginSupport_destroy_data_ex(
                GlobalRegularPolygonStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonStateTypePluginSupport_destroy_data(
                GlobalRegularPolygonStateType *sample);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonStateTypePluginSupport_print_data(
                const GlobalRegularPolygonStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalRegularPolygonStateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonStateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalRegularPolygonStateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalRegularPolygonStateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalRegularPolygonStateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonStateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonStateType *out,
                const GlobalRegularPolygonStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalRegularPolygonStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalRegularPolygonStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalRegularPolygonStateTypePlugin_deserialize_from_cdr_buffer(
                GlobalRegularPolygonStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalRegularPolygonStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalRegularPolygonStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalRegularPolygonStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalRegularPolygonStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalRegularPolygonStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegularPolygonStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalRegularPolygonStateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalRegularPolygonStateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalRegularPolygonState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalRegularPolygonStateTypePlugin_335007902_h */

