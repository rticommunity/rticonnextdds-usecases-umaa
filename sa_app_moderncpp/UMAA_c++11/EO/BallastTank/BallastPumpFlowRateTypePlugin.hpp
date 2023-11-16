

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpFlowRateTypePlugin_2133444999_h
#define BallastPumpFlowRateTypePlugin_2133444999_h

#include "BallastPumpFlowRateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/EO/BallastTank/MassBallastFlowRateTypePlugin.hpp"
#include "UMAA/EO/BallastTank/VolumeBallastFlowRateTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BallastTank {
            namespace BallastPumpFlowRateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                BallastPumpFlowRateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                BallastPumpFlowRateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                BallastPumpFlowRateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                BallastPumpFlowRateType_SelectorsPluginSupport_print_data(
                    const BallastPumpFlowRateType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define BallastPumpFlowRateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define BallastPumpFlowRateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define BallastPumpFlowRateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define BallastPumpFlowRateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define BallastPumpFlowRateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern BallastPumpFlowRateType_Union*
                BallastPumpFlowRateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern BallastPumpFlowRateType_Union*
                BallastPumpFlowRateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern BallastPumpFlowRateType_Union*
                BallastPumpFlowRateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                BallastPumpFlowRateType_UnionPluginSupport_copy_data(
                    BallastPumpFlowRateType_Union *out,
                    const BallastPumpFlowRateType_Union *in);

                NDDSUSERDllExport extern void 
                BallastPumpFlowRateType_UnionPluginSupport_destroy_data_w_params(
                    BallastPumpFlowRateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                BallastPumpFlowRateType_UnionPluginSupport_destroy_data_ex(
                    BallastPumpFlowRateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                BallastPumpFlowRateType_UnionPluginSupport_destroy_data(
                    BallastPumpFlowRateType_Union *sample);

                NDDSUSERDllExport extern void 
                BallastPumpFlowRateType_UnionPluginSupport_print_data(
                    const BallastPumpFlowRateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                BallastPumpFlowRateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                BallastPumpFlowRateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                BallastPumpFlowRateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                BallastPumpFlowRateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                BallastPumpFlowRateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    BallastPumpFlowRateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                BallastPumpFlowRateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    BallastPumpFlowRateType_Union *out,
                    const BallastPumpFlowRateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                BallastPumpFlowRateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const BallastPumpFlowRateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                BallastPumpFlowRateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    BallastPumpFlowRateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                BallastPumpFlowRateType_UnionPlugin_deserialize_from_cdr_buffer(
                    BallastPumpFlowRateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                BallastPumpFlowRateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                BallastPumpFlowRateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                BallastPumpFlowRateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                BallastPumpFlowRateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                BallastPumpFlowRateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    BallastPumpFlowRateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                BallastPumpFlowRateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                BallastPumpFlowRateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace BallastPumpFlowRateType_Specializations  */

            #define BallastPumpFlowRateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastPumpFlowRateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastPumpFlowRateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastPumpFlowRateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastPumpFlowRateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastPumpFlowRateType*
            BallastPumpFlowRateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastPumpFlowRateType*
            BallastPumpFlowRateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastPumpFlowRateType*
            BallastPumpFlowRateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypePluginSupport_copy_data(
                BallastPumpFlowRateType *out,
                const BallastPumpFlowRateType *in);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePluginSupport_destroy_data_w_params(
                BallastPumpFlowRateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePluginSupport_destroy_data_ex(
                BallastPumpFlowRateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePluginSupport_destroy_data(
                BallastPumpFlowRateType *sample);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePluginSupport_print_data(
                const BallastPumpFlowRateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BallastPumpFlowRateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BallastPumpFlowRateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BallastPumpFlowRateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BallastPumpFlowRateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateType *out,
                const BallastPumpFlowRateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastPumpFlowRateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastPumpFlowRateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastPumpFlowRateTypePlugin_deserialize_from_cdr_buffer(
                BallastPumpFlowRateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastPumpFlowRateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpFlowRateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpFlowRateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpFlowRateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BallastPumpFlowRateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BallastPumpFlowRateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BallastPumpFlowRateTypePlugin_2133444999_h */

