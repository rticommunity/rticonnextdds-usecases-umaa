

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedControlType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedControlTypePlugin_1610912839_h
#define SpeedControlTypePlugin_1610912839_h

#include "SpeedControlType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Speed/EngineRPMPlugin.hpp"
#include "UMAA/Common/Speed/SpeedOverGroundPlugin.hpp"
#include "UMAA/Common/Speed/SpeedThroughAirPlugin.hpp"
#include "UMAA/Common/Speed/SpeedThroughWaterPlugin.hpp"
#include "UMAA/Common/Speed/VehicleSpeedModePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Speed {
            namespace SpeedControlType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                SpeedControlType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                SpeedControlType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                SpeedControlType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                SpeedControlType_SelectorsPluginSupport_print_data(
                    const SpeedControlType_Selectors *sample, const char *desc, int indent_level);

                #define SpeedControlType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define SpeedControlType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define SpeedControlType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define SpeedControlType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define SpeedControlType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern SpeedControlType_Union*
                SpeedControlType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern SpeedControlType_Union*
                SpeedControlType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern SpeedControlType_Union*
                SpeedControlType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                SpeedControlType_UnionPluginSupport_copy_data(
                    SpeedControlType_Union *out,
                    const SpeedControlType_Union *in);

                NDDSUSERDllExport extern void 
                SpeedControlType_UnionPluginSupport_destroy_data_w_params(
                    SpeedControlType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                SpeedControlType_UnionPluginSupport_destroy_data_ex(
                    SpeedControlType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                SpeedControlType_UnionPluginSupport_destroy_data(
                    SpeedControlType_Union *sample);

                NDDSUSERDllExport extern void 
                SpeedControlType_UnionPluginSupport_print_data(
                    const SpeedControlType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                SpeedControlType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                SpeedControlType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                SpeedControlType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                SpeedControlType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                SpeedControlType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    SpeedControlType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                SpeedControlType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    SpeedControlType_Union *out,
                    const SpeedControlType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                SpeedControlType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const SpeedControlType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                SpeedControlType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    SpeedControlType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                SpeedControlType_UnionPlugin_deserialize_from_cdr_buffer(
                    SpeedControlType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                SpeedControlType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                SpeedControlType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                SpeedControlType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                SpeedControlType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                SpeedControlType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    SpeedControlType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                SpeedControlType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                SpeedControlType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace SpeedControlType_Specializations  */

            #define SpeedControlTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SpeedControlTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SpeedControlTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SpeedControlTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SpeedControlTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SpeedControlType*
            SpeedControlTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SpeedControlType*
            SpeedControlTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SpeedControlType*
            SpeedControlTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SpeedControlTypePluginSupport_copy_data(
                SpeedControlType *out,
                const SpeedControlType *in);

            NDDSUSERDllExport extern void 
            SpeedControlTypePluginSupport_destroy_data_w_params(
                SpeedControlType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SpeedControlTypePluginSupport_destroy_data_ex(
                SpeedControlType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SpeedControlTypePluginSupport_destroy_data(
                SpeedControlType *sample);

            NDDSUSERDllExport extern void 
            SpeedControlTypePluginSupport_print_data(
                const SpeedControlType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SpeedControlTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SpeedControlTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SpeedControlTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SpeedControlTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SpeedControlTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedControlType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SpeedControlTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SpeedControlType *out,
                const SpeedControlType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SpeedControlTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SpeedControlType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SpeedControlTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SpeedControlType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SpeedControlTypePlugin_deserialize_from_cdr_buffer(
                SpeedControlType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SpeedControlTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SpeedControlTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SpeedControlTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SpeedControlTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SpeedControlTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SpeedControlType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SpeedControlTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SpeedControlTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Speed  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SpeedControlTypePlugin_1610912839_h */

