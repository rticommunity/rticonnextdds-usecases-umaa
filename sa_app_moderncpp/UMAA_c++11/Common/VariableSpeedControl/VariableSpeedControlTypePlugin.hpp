

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VariableSpeedControlType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VariableSpeedControlTypePlugin_455525219_h
#define VariableSpeedControlTypePlugin_455525219_h

#include "VariableSpeedControlType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/VariableSpeedControl/RecommendedSpeedControlPlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/RequiredSpeedControlPlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/TimeWithSpeedPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace VariableSpeedControl {
            namespace VariableSpeedControlType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                VariableSpeedControlType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                VariableSpeedControlType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                VariableSpeedControlType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                VariableSpeedControlType_SelectorsPluginSupport_print_data(
                    const VariableSpeedControlType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define VariableSpeedControlType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define VariableSpeedControlType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define VariableSpeedControlType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define VariableSpeedControlType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define VariableSpeedControlType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern VariableSpeedControlType_Union*
                VariableSpeedControlType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern VariableSpeedControlType_Union*
                VariableSpeedControlType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern VariableSpeedControlType_Union*
                VariableSpeedControlType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                VariableSpeedControlType_UnionPluginSupport_copy_data(
                    VariableSpeedControlType_Union *out,
                    const VariableSpeedControlType_Union *in);

                NDDSUSERDllExport extern void 
                VariableSpeedControlType_UnionPluginSupport_destroy_data_w_params(
                    VariableSpeedControlType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                VariableSpeedControlType_UnionPluginSupport_destroy_data_ex(
                    VariableSpeedControlType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                VariableSpeedControlType_UnionPluginSupport_destroy_data(
                    VariableSpeedControlType_Union *sample);

                NDDSUSERDllExport extern void 
                VariableSpeedControlType_UnionPluginSupport_print_data(
                    const VariableSpeedControlType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                VariableSpeedControlType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                VariableSpeedControlType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                VariableSpeedControlType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                VariableSpeedControlType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                VariableSpeedControlType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    VariableSpeedControlType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                VariableSpeedControlType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    VariableSpeedControlType_Union *out,
                    const VariableSpeedControlType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                VariableSpeedControlType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const VariableSpeedControlType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                VariableSpeedControlType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    VariableSpeedControlType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                VariableSpeedControlType_UnionPlugin_deserialize_from_cdr_buffer(
                    VariableSpeedControlType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                VariableSpeedControlType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                VariableSpeedControlType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                VariableSpeedControlType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                VariableSpeedControlType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                VariableSpeedControlType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    VariableSpeedControlType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                VariableSpeedControlType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                VariableSpeedControlType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace VariableSpeedControlType_Specializations  */

            #define VariableSpeedControlTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VariableSpeedControlTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VariableSpeedControlTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VariableSpeedControlTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VariableSpeedControlTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VariableSpeedControlType*
            VariableSpeedControlTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VariableSpeedControlType*
            VariableSpeedControlTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VariableSpeedControlType*
            VariableSpeedControlTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedControlTypePluginSupport_copy_data(
                VariableSpeedControlType *out,
                const VariableSpeedControlType *in);

            NDDSUSERDllExport extern void 
            VariableSpeedControlTypePluginSupport_destroy_data_w_params(
                VariableSpeedControlType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VariableSpeedControlTypePluginSupport_destroy_data_ex(
                VariableSpeedControlType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VariableSpeedControlTypePluginSupport_destroy_data(
                VariableSpeedControlType *sample);

            NDDSUSERDllExport extern void 
            VariableSpeedControlTypePluginSupport_print_data(
                const VariableSpeedControlType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VariableSpeedControlTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VariableSpeedControlTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VariableSpeedControlTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VariableSpeedControlTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VariableSpeedControlTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedControlType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedControlTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedControlType *out,
                const VariableSpeedControlType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VariableSpeedControlTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VariableSpeedControlType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedControlTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedControlType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VariableSpeedControlTypePlugin_deserialize_from_cdr_buffer(
                VariableSpeedControlType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedControlTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VariableSpeedControlTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedControlTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VariableSpeedControlTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VariableSpeedControlTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VariableSpeedControlType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VariableSpeedControlTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VariableSpeedControlTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace VariableSpeedControl  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VariableSpeedControlTypePlugin_455525219_h */

