

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoverStateTypePlugin_1303496321_h
#define LocalHoverStateTypePlugin_1303496321_h

#include "LocalHoverStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/LocalHoverState/LocalHoveringHoverTypePlugin.hpp"
#include "UMAA/MO/LocalHoverState/LocalTransitHoverTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalHoverState {
            namespace LocalHoverStateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalHoverStateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalHoverStateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalHoverStateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                LocalHoverStateType_SelectorsPluginSupport_print_data(
                    const LocalHoverStateType_Selectors *sample, const char *desc, int indent_level);

                #define LocalHoverStateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define LocalHoverStateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define LocalHoverStateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define LocalHoverStateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define LocalHoverStateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern LocalHoverStateType_Union*
                LocalHoverStateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern LocalHoverStateType_Union*
                LocalHoverStateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern LocalHoverStateType_Union*
                LocalHoverStateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                LocalHoverStateType_UnionPluginSupport_copy_data(
                    LocalHoverStateType_Union *out,
                    const LocalHoverStateType_Union *in);

                NDDSUSERDllExport extern void 
                LocalHoverStateType_UnionPluginSupport_destroy_data_w_params(
                    LocalHoverStateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                LocalHoverStateType_UnionPluginSupport_destroy_data_ex(
                    LocalHoverStateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                LocalHoverStateType_UnionPluginSupport_destroy_data(
                    LocalHoverStateType_Union *sample);

                NDDSUSERDllExport extern void 
                LocalHoverStateType_UnionPluginSupport_print_data(
                    const LocalHoverStateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                LocalHoverStateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                LocalHoverStateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                LocalHoverStateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                LocalHoverStateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                LocalHoverStateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalHoverStateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                LocalHoverStateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalHoverStateType_Union *out,
                    const LocalHoverStateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                LocalHoverStateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const LocalHoverStateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                LocalHoverStateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalHoverStateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                LocalHoverStateType_UnionPlugin_deserialize_from_cdr_buffer(
                    LocalHoverStateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                LocalHoverStateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                LocalHoverStateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                LocalHoverStateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalHoverStateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                LocalHoverStateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalHoverStateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                LocalHoverStateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                LocalHoverStateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace LocalHoverStateType_Specializations  */

            #define LocalHoverStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalHoverStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalHoverStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalHoverStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalHoverStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalHoverStateType*
            LocalHoverStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalHoverStateType*
            LocalHoverStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalHoverStateType*
            LocalHoverStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalHoverStateTypePluginSupport_copy_data(
                LocalHoverStateType *out,
                const LocalHoverStateType *in);

            NDDSUSERDllExport extern void 
            LocalHoverStateTypePluginSupport_destroy_data_w_params(
                LocalHoverStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalHoverStateTypePluginSupport_destroy_data_ex(
                LocalHoverStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalHoverStateTypePluginSupport_destroy_data(
                LocalHoverStateType *sample);

            NDDSUSERDllExport extern void 
            LocalHoverStateTypePluginSupport_print_data(
                const LocalHoverStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalHoverStateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalHoverStateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalHoverStateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalHoverStateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalHoverStateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverStateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalHoverStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverStateType *out,
                const LocalHoverStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalHoverStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalHoverStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalHoverStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalHoverStateTypePlugin_deserialize_from_cdr_buffer(
                LocalHoverStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalHoverStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalHoverStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalHoverStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalHoverStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalHoverStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalHoverStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalHoverStateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalHoverStateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalHoverState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalHoverStateTypePlugin_1303496321_h */

