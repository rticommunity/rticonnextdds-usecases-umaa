

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverStateTypePlugin_1807390999_h
#define GlobalHoverStateTypePlugin_1807390999_h

#include "GlobalHoverStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/GlobalHoverState/GlobalHoveringHoverTypePlugin.hpp"
#include "UMAA/MO/GlobalHoverState/GlobalTransitHoverTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalHoverState {
            namespace GlobalHoverStateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalHoverStateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalHoverStateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalHoverStateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                GlobalHoverStateType_SelectorsPluginSupport_print_data(
                    const GlobalHoverStateType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define GlobalHoverStateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define GlobalHoverStateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define GlobalHoverStateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define GlobalHoverStateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define GlobalHoverStateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern GlobalHoverStateType_Union*
                GlobalHoverStateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern GlobalHoverStateType_Union*
                GlobalHoverStateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern GlobalHoverStateType_Union*
                GlobalHoverStateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                GlobalHoverStateType_UnionPluginSupport_copy_data(
                    GlobalHoverStateType_Union *out,
                    const GlobalHoverStateType_Union *in);

                NDDSUSERDllExport extern void 
                GlobalHoverStateType_UnionPluginSupport_destroy_data_w_params(
                    GlobalHoverStateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                GlobalHoverStateType_UnionPluginSupport_destroy_data_ex(
                    GlobalHoverStateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                GlobalHoverStateType_UnionPluginSupport_destroy_data(
                    GlobalHoverStateType_Union *sample);

                NDDSUSERDllExport extern void 
                GlobalHoverStateType_UnionPluginSupport_print_data(
                    const GlobalHoverStateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                GlobalHoverStateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                GlobalHoverStateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                GlobalHoverStateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                GlobalHoverStateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                GlobalHoverStateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalHoverStateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                GlobalHoverStateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalHoverStateType_Union *out,
                    const GlobalHoverStateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                GlobalHoverStateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const GlobalHoverStateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                GlobalHoverStateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalHoverStateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                GlobalHoverStateType_UnionPlugin_deserialize_from_cdr_buffer(
                    GlobalHoverStateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                GlobalHoverStateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                GlobalHoverStateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                GlobalHoverStateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalHoverStateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                GlobalHoverStateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalHoverStateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                GlobalHoverStateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                GlobalHoverStateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace GlobalHoverStateType_Specializations  */

            #define GlobalHoverStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalHoverStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalHoverStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalHoverStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalHoverStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalHoverStateType*
            GlobalHoverStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalHoverStateType*
            GlobalHoverStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalHoverStateType*
            GlobalHoverStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypePluginSupport_copy_data(
                GlobalHoverStateType *out,
                const GlobalHoverStateType *in);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePluginSupport_destroy_data_w_params(
                GlobalHoverStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePluginSupport_destroy_data_ex(
                GlobalHoverStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePluginSupport_destroy_data(
                GlobalHoverStateType *sample);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePluginSupport_print_data(
                const GlobalHoverStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalHoverStateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalHoverStateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalHoverStateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalHoverStateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateType *out,
                const GlobalHoverStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalHoverStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalHoverStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalHoverStateTypePlugin_deserialize_from_cdr_buffer(
                GlobalHoverStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalHoverStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalHoverStateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalHoverStateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalHoverState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalHoverStateTypePlugin_1807390999_h */

