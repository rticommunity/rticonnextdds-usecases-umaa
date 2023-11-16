

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsionTypePlugin_1416675266_h
#define PropulsionTypePlugin_1416675266_h

#include "PropulsionType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Propulsion/PropulsiveEffortTypePlugin.hpp"
#include "UMAA/Common/Propulsion/PropulsiveRPMTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Propulsion {
            namespace PropulsionType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PropulsionType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PropulsionType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PropulsionType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                PropulsionType_SelectorsPluginSupport_print_data(
                    const PropulsionType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define PropulsionType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define PropulsionType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define PropulsionType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define PropulsionType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define PropulsionType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PropulsionType_Union*
                PropulsionType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern PropulsionType_Union*
                PropulsionType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern PropulsionType_Union*
                PropulsionType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                PropulsionType_UnionPluginSupport_copy_data(
                    PropulsionType_Union *out,
                    const PropulsionType_Union *in);

                NDDSUSERDllExport extern void 
                PropulsionType_UnionPluginSupport_destroy_data_w_params(
                    PropulsionType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                PropulsionType_UnionPluginSupport_destroy_data_ex(
                    PropulsionType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                PropulsionType_UnionPluginSupport_destroy_data(
                    PropulsionType_Union *sample);

                NDDSUSERDllExport extern void 
                PropulsionType_UnionPluginSupport_print_data(
                    const PropulsionType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                PropulsionType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                PropulsionType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                PropulsionType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                PropulsionType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                PropulsionType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    PropulsionType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                PropulsionType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    PropulsionType_Union *out,
                    const PropulsionType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                PropulsionType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const PropulsionType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                PropulsionType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    PropulsionType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                PropulsionType_UnionPlugin_deserialize_from_cdr_buffer(
                    PropulsionType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                PropulsionType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                PropulsionType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                PropulsionType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PropulsionType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                PropulsionType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    PropulsionType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                PropulsionType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                PropulsionType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace PropulsionType_Specializations  */

            #define PropulsionTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsionTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsionTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsionTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsionTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsionType*
            PropulsionTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsionType*
            PropulsionTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsionType*
            PropulsionTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypePluginSupport_copy_data(
                PropulsionType *out,
                const PropulsionType *in);

            NDDSUSERDllExport extern void 
            PropulsionTypePluginSupport_destroy_data_w_params(
                PropulsionType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsionTypePluginSupport_destroy_data_ex(
                PropulsionType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsionTypePluginSupport_destroy_data(
                PropulsionType *sample);

            NDDSUSERDllExport extern void 
            PropulsionTypePluginSupport_print_data(
                const PropulsionType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsionTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsionTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsionTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsionTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsionTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionType *out,
                const PropulsionType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsionTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsionType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsionTypePlugin_deserialize_from_cdr_buffer(
                PropulsionType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsionTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsionTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsionTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsionTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsionTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Propulsion  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsionTypePlugin_1416675266_h */

