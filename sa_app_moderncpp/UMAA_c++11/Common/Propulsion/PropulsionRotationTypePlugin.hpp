

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionRotationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsionRotationTypePlugin_1045182234_h
#define PropulsionRotationTypePlugin_1045182234_h

#include "PropulsionRotationType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Propulsion/PropulsiveRotationAngleTypePlugin.hpp"
#include "UMAA/Common/Propulsion/PropulsiveRotationEffortTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Propulsion {
            namespace PropulsionRotationType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PropulsionRotationType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PropulsionRotationType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PropulsionRotationType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                PropulsionRotationType_SelectorsPluginSupport_print_data(
                    const PropulsionRotationType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define PropulsionRotationType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define PropulsionRotationType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define PropulsionRotationType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define PropulsionRotationType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define PropulsionRotationType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PropulsionRotationType_Union*
                PropulsionRotationType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern PropulsionRotationType_Union*
                PropulsionRotationType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern PropulsionRotationType_Union*
                PropulsionRotationType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                PropulsionRotationType_UnionPluginSupport_copy_data(
                    PropulsionRotationType_Union *out,
                    const PropulsionRotationType_Union *in);

                NDDSUSERDllExport extern void 
                PropulsionRotationType_UnionPluginSupport_destroy_data_w_params(
                    PropulsionRotationType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                PropulsionRotationType_UnionPluginSupport_destroy_data_ex(
                    PropulsionRotationType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                PropulsionRotationType_UnionPluginSupport_destroy_data(
                    PropulsionRotationType_Union *sample);

                NDDSUSERDllExport extern void 
                PropulsionRotationType_UnionPluginSupport_print_data(
                    const PropulsionRotationType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                PropulsionRotationType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                PropulsionRotationType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                PropulsionRotationType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                PropulsionRotationType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                PropulsionRotationType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    PropulsionRotationType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                PropulsionRotationType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    PropulsionRotationType_Union *out,
                    const PropulsionRotationType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                PropulsionRotationType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const PropulsionRotationType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                PropulsionRotationType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    PropulsionRotationType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                PropulsionRotationType_UnionPlugin_deserialize_from_cdr_buffer(
                    PropulsionRotationType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                PropulsionRotationType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                PropulsionRotationType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                PropulsionRotationType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PropulsionRotationType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                PropulsionRotationType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    PropulsionRotationType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                PropulsionRotationType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                PropulsionRotationType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace PropulsionRotationType_Specializations  */

            #define PropulsionRotationTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsionRotationTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsionRotationTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsionRotationTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsionRotationTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsionRotationType*
            PropulsionRotationTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsionRotationType*
            PropulsionRotationTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsionRotationType*
            PropulsionRotationTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsionRotationTypePluginSupport_copy_data(
                PropulsionRotationType *out,
                const PropulsionRotationType *in);

            NDDSUSERDllExport extern void 
            PropulsionRotationTypePluginSupport_destroy_data_w_params(
                PropulsionRotationType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsionRotationTypePluginSupport_destroy_data_ex(
                PropulsionRotationType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsionRotationTypePluginSupport_destroy_data(
                PropulsionRotationType *sample);

            NDDSUSERDllExport extern void 
            PropulsionRotationTypePluginSupport_print_data(
                const PropulsionRotationType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsionRotationTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsionRotationTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsionRotationTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsionRotationTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsionRotationTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionRotationType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsionRotationTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionRotationType *out,
                const PropulsionRotationType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsionRotationTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsionRotationType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsionRotationTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionRotationType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsionRotationTypePlugin_deserialize_from_cdr_buffer(
                PropulsionRotationType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsionRotationTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsionRotationTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsionRotationTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsionRotationTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsionRotationTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsionRotationType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsionRotationTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsionRotationTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Propulsion  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsionRotationTypePlugin_1045182234_h */

