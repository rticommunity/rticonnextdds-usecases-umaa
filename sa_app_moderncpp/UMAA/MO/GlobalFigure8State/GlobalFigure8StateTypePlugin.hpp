

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalFigure8StateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalFigure8StateTypePlugin_2019986166_h
#define GlobalFigure8StateTypePlugin_2019986166_h

#include "GlobalFigure8StateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/GlobalFigure8State/GlobalFigure8PatternTypePlugin.hpp"
#include "UMAA/MO/GlobalFigure8State/GlobalFigure8TransitTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalFigure8State {
            namespace GlobalFigure8StateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalFigure8StateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GlobalFigure8StateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalFigure8StateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                GlobalFigure8StateType_SelectorsPluginSupport_print_data(
                    const GlobalFigure8StateType_Selectors *sample, const char *desc, int indent_level);

                #define GlobalFigure8StateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define GlobalFigure8StateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define GlobalFigure8StateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define GlobalFigure8StateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define GlobalFigure8StateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern GlobalFigure8StateType_Union*
                GlobalFigure8StateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern GlobalFigure8StateType_Union*
                GlobalFigure8StateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern GlobalFigure8StateType_Union*
                GlobalFigure8StateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                GlobalFigure8StateType_UnionPluginSupport_copy_data(
                    GlobalFigure8StateType_Union *out,
                    const GlobalFigure8StateType_Union *in);

                NDDSUSERDllExport extern void 
                GlobalFigure8StateType_UnionPluginSupport_destroy_data_w_params(
                    GlobalFigure8StateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                GlobalFigure8StateType_UnionPluginSupport_destroy_data_ex(
                    GlobalFigure8StateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                GlobalFigure8StateType_UnionPluginSupport_destroy_data(
                    GlobalFigure8StateType_Union *sample);

                NDDSUSERDllExport extern void 
                GlobalFigure8StateType_UnionPluginSupport_print_data(
                    const GlobalFigure8StateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                GlobalFigure8StateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                GlobalFigure8StateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                GlobalFigure8StateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                GlobalFigure8StateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                GlobalFigure8StateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalFigure8StateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                GlobalFigure8StateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalFigure8StateType_Union *out,
                    const GlobalFigure8StateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                GlobalFigure8StateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const GlobalFigure8StateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                GlobalFigure8StateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalFigure8StateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                GlobalFigure8StateType_UnionPlugin_deserialize_from_cdr_buffer(
                    GlobalFigure8StateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                GlobalFigure8StateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                GlobalFigure8StateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                GlobalFigure8StateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GlobalFigure8StateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                GlobalFigure8StateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    GlobalFigure8StateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                GlobalFigure8StateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                GlobalFigure8StateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace GlobalFigure8StateType_Specializations  */

            #define GlobalFigure8StateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalFigure8StateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalFigure8StateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalFigure8StateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalFigure8StateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalFigure8StateType*
            GlobalFigure8StateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalFigure8StateType*
            GlobalFigure8StateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalFigure8StateType*
            GlobalFigure8StateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8StateTypePluginSupport_copy_data(
                GlobalFigure8StateType *out,
                const GlobalFigure8StateType *in);

            NDDSUSERDllExport extern void 
            GlobalFigure8StateTypePluginSupport_destroy_data_w_params(
                GlobalFigure8StateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalFigure8StateTypePluginSupport_destroy_data_ex(
                GlobalFigure8StateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalFigure8StateTypePluginSupport_destroy_data(
                GlobalFigure8StateType *sample);

            NDDSUSERDllExport extern void 
            GlobalFigure8StateTypePluginSupport_print_data(
                const GlobalFigure8StateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalFigure8StateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalFigure8StateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalFigure8StateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalFigure8StateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalFigure8StateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8StateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8StateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8StateType *out,
                const GlobalFigure8StateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalFigure8StateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalFigure8StateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8StateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8StateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalFigure8StateTypePlugin_deserialize_from_cdr_buffer(
                GlobalFigure8StateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalFigure8StateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalFigure8StateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalFigure8StateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalFigure8StateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8StateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8StateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalFigure8StateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalFigure8StateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalFigure8State  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalFigure8StateTypePlugin_2019986166_h */

