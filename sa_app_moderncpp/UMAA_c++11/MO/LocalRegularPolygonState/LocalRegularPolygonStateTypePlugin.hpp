

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonStateTypePlugin_2639132_h
#define LocalRegularPolygonStateTypePlugin_2639132_h

#include "LocalRegularPolygonStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/LocalRegularPolygonState/LocalRegularPolygonPatternTypePlugin.hpp"
#include "UMAA/MO/LocalRegularPolygonState/LocalRegularPolygonTransitTypeTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalRegularPolygonState {
            namespace LocalRegularPolygonStateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalRegularPolygonStateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalRegularPolygonStateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalRegularPolygonStateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                LocalRegularPolygonStateType_SelectorsPluginSupport_print_data(
                    const LocalRegularPolygonStateType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define LocalRegularPolygonStateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define LocalRegularPolygonStateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define LocalRegularPolygonStateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define LocalRegularPolygonStateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define LocalRegularPolygonStateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern LocalRegularPolygonStateType_Union*
                LocalRegularPolygonStateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern LocalRegularPolygonStateType_Union*
                LocalRegularPolygonStateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern LocalRegularPolygonStateType_Union*
                LocalRegularPolygonStateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                LocalRegularPolygonStateType_UnionPluginSupport_copy_data(
                    LocalRegularPolygonStateType_Union *out,
                    const LocalRegularPolygonStateType_Union *in);

                NDDSUSERDllExport extern void 
                LocalRegularPolygonStateType_UnionPluginSupport_destroy_data_w_params(
                    LocalRegularPolygonStateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                LocalRegularPolygonStateType_UnionPluginSupport_destroy_data_ex(
                    LocalRegularPolygonStateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                LocalRegularPolygonStateType_UnionPluginSupport_destroy_data(
                    LocalRegularPolygonStateType_Union *sample);

                NDDSUSERDllExport extern void 
                LocalRegularPolygonStateType_UnionPluginSupport_print_data(
                    const LocalRegularPolygonStateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                LocalRegularPolygonStateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                LocalRegularPolygonStateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                LocalRegularPolygonStateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                LocalRegularPolygonStateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                LocalRegularPolygonStateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalRegularPolygonStateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                LocalRegularPolygonStateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalRegularPolygonStateType_Union *out,
                    const LocalRegularPolygonStateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                LocalRegularPolygonStateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const LocalRegularPolygonStateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                LocalRegularPolygonStateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalRegularPolygonStateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                LocalRegularPolygonStateType_UnionPlugin_deserialize_from_cdr_buffer(
                    LocalRegularPolygonStateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                LocalRegularPolygonStateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                LocalRegularPolygonStateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                LocalRegularPolygonStateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalRegularPolygonStateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                LocalRegularPolygonStateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalRegularPolygonStateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                LocalRegularPolygonStateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                LocalRegularPolygonStateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace LocalRegularPolygonStateType_Specializations  */

            #define LocalRegularPolygonStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalRegularPolygonStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalRegularPolygonStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalRegularPolygonStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalRegularPolygonStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalRegularPolygonStateType*
            LocalRegularPolygonStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalRegularPolygonStateType*
            LocalRegularPolygonStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalRegularPolygonStateType*
            LocalRegularPolygonStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonStateTypePluginSupport_copy_data(
                LocalRegularPolygonStateType *out,
                const LocalRegularPolygonStateType *in);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonStateTypePluginSupport_destroy_data_w_params(
                LocalRegularPolygonStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonStateTypePluginSupport_destroy_data_ex(
                LocalRegularPolygonStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonStateTypePluginSupport_destroy_data(
                LocalRegularPolygonStateType *sample);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonStateTypePluginSupport_print_data(
                const LocalRegularPolygonStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalRegularPolygonStateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonStateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalRegularPolygonStateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalRegularPolygonStateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalRegularPolygonStateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonStateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonStateType *out,
                const LocalRegularPolygonStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalRegularPolygonStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalRegularPolygonStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalRegularPolygonStateTypePlugin_deserialize_from_cdr_buffer(
                LocalRegularPolygonStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalRegularPolygonStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalRegularPolygonStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalRegularPolygonStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalRegularPolygonStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalRegularPolygonStateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalRegularPolygonStateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalRegularPolygonState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalRegularPolygonStateTypePlugin_2639132_h */

