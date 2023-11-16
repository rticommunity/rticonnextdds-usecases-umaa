

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftStateTypePlugin_190883952_h
#define GlobalDriftStateTypePlugin_190883952_h

#include "GlobalDriftStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/GlobalDriftState/GlobalRegionDriftTypePlugin.hpp"
#include "UMAA/MO/GlobalDriftState/GlobalTransitDriftTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalDriftState {
            namespace GlobalDriftStateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalDriftStateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalDriftStateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalDriftStateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                GlobalDriftStateType_SelectorsPluginSupport_print_data(
                    const GlobalDriftStateType_Selectors *sample, const char *desc, int indent_level);

                #define GlobalDriftStateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define GlobalDriftStateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define GlobalDriftStateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define GlobalDriftStateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define GlobalDriftStateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern GlobalDriftStateType_Union*
                GlobalDriftStateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern GlobalDriftStateType_Union*
                GlobalDriftStateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern GlobalDriftStateType_Union*
                GlobalDriftStateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                GlobalDriftStateType_UnionPluginSupport_copy_data(
                    GlobalDriftStateType_Union *out,
                    const GlobalDriftStateType_Union *in);

                NDDSUSERDllExport extern void 
                GlobalDriftStateType_UnionPluginSupport_destroy_data_w_params(
                    GlobalDriftStateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                GlobalDriftStateType_UnionPluginSupport_destroy_data_ex(
                    GlobalDriftStateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                GlobalDriftStateType_UnionPluginSupport_destroy_data(
                    GlobalDriftStateType_Union *sample);

                NDDSUSERDllExport extern void 
                GlobalDriftStateType_UnionPluginSupport_print_data(
                    const GlobalDriftStateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                GlobalDriftStateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                GlobalDriftStateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                GlobalDriftStateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                GlobalDriftStateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                GlobalDriftStateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalDriftStateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                GlobalDriftStateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalDriftStateType_Union *out,
                    const GlobalDriftStateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                GlobalDriftStateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const GlobalDriftStateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                GlobalDriftStateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalDriftStateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                GlobalDriftStateType_UnionPlugin_deserialize_from_cdr_buffer(
                    GlobalDriftStateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                GlobalDriftStateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                GlobalDriftStateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                GlobalDriftStateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalDriftStateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                GlobalDriftStateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalDriftStateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                GlobalDriftStateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                GlobalDriftStateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace GlobalDriftStateType_Specializations  */

            #define GlobalDriftStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalDriftStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalDriftStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalDriftStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalDriftStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalDriftStateType*
            GlobalDriftStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalDriftStateType*
            GlobalDriftStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDriftStateType*
            GlobalDriftStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypePluginSupport_copy_data(
                GlobalDriftStateType *out,
                const GlobalDriftStateType *in);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePluginSupport_destroy_data_w_params(
                GlobalDriftStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePluginSupport_destroy_data_ex(
                GlobalDriftStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePluginSupport_destroy_data(
                GlobalDriftStateType *sample);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePluginSupport_print_data(
                const GlobalDriftStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalDriftStateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalDriftStateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalDriftStateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalDriftStateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateType *out,
                const GlobalDriftStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalDriftStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalDriftStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalDriftStateTypePlugin_deserialize_from_cdr_buffer(
                GlobalDriftStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalDriftStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalDriftStateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalDriftStateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalDriftState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalDriftStateTypePlugin_190883952_h */

