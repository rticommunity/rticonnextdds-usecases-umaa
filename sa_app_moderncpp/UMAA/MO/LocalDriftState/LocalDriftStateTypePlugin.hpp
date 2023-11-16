

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDriftStateTypePlugin_694778570_h
#define LocalDriftStateTypePlugin_694778570_h

#include "LocalDriftStateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/LocalDriftState/LocalRegionDriftTypePlugin.hpp"
#include "UMAA/MO/LocalDriftState/LocalTransitDriftTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalDriftState {
            namespace LocalDriftStateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalDriftStateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalDriftStateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalDriftStateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                LocalDriftStateType_SelectorsPluginSupport_print_data(
                    const LocalDriftStateType_Selectors *sample, const char *desc, int indent_level);

                #define LocalDriftStateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define LocalDriftStateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define LocalDriftStateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define LocalDriftStateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define LocalDriftStateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern LocalDriftStateType_Union*
                LocalDriftStateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern LocalDriftStateType_Union*
                LocalDriftStateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern LocalDriftStateType_Union*
                LocalDriftStateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                LocalDriftStateType_UnionPluginSupport_copy_data(
                    LocalDriftStateType_Union *out,
                    const LocalDriftStateType_Union *in);

                NDDSUSERDllExport extern void 
                LocalDriftStateType_UnionPluginSupport_destroy_data_w_params(
                    LocalDriftStateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                LocalDriftStateType_UnionPluginSupport_destroy_data_ex(
                    LocalDriftStateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                LocalDriftStateType_UnionPluginSupport_destroy_data(
                    LocalDriftStateType_Union *sample);

                NDDSUSERDllExport extern void 
                LocalDriftStateType_UnionPluginSupport_print_data(
                    const LocalDriftStateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                LocalDriftStateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                LocalDriftStateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                LocalDriftStateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                LocalDriftStateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                LocalDriftStateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalDriftStateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                LocalDriftStateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalDriftStateType_Union *out,
                    const LocalDriftStateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                LocalDriftStateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const LocalDriftStateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                LocalDriftStateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalDriftStateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                LocalDriftStateType_UnionPlugin_deserialize_from_cdr_buffer(
                    LocalDriftStateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                LocalDriftStateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                LocalDriftStateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                LocalDriftStateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalDriftStateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                LocalDriftStateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalDriftStateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                LocalDriftStateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                LocalDriftStateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace LocalDriftStateType_Specializations  */

            #define LocalDriftStateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalDriftStateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalDriftStateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalDriftStateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalDriftStateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalDriftStateType*
            LocalDriftStateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalDriftStateType*
            LocalDriftStateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalDriftStateType*
            LocalDriftStateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalDriftStateTypePluginSupport_copy_data(
                LocalDriftStateType *out,
                const LocalDriftStateType *in);

            NDDSUSERDllExport extern void 
            LocalDriftStateTypePluginSupport_destroy_data_w_params(
                LocalDriftStateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalDriftStateTypePluginSupport_destroy_data_ex(
                LocalDriftStateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalDriftStateTypePluginSupport_destroy_data(
                LocalDriftStateType *sample);

            NDDSUSERDllExport extern void 
            LocalDriftStateTypePluginSupport_print_data(
                const LocalDriftStateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalDriftStateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalDriftStateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalDriftStateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalDriftStateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalDriftStateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftStateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalDriftStateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftStateType *out,
                const LocalDriftStateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalDriftStateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalDriftStateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalDriftStateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftStateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalDriftStateTypePlugin_deserialize_from_cdr_buffer(
                LocalDriftStateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalDriftStateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalDriftStateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalDriftStateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalDriftStateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalDriftStateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalDriftStateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalDriftStateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalDriftStateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalDriftState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalDriftStateTypePlugin_694778570_h */

