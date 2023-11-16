

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastFillType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastFillTypePlugin_331398662_h
#define BallastFillTypePlugin_331398662_h

#include "BallastFillType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/BallastMassTypePlugin.hpp"
#include "UMAA/Common/Measurement/LevelTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BallastTank {
            namespace BallastFillType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                BallastFillType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                BallastFillType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                BallastFillType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                BallastFillType_SelectorsPluginSupport_print_data(
                    const BallastFillType_Selectors *sample, const char *desc, int indent_level);

                #define BallastFillType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define BallastFillType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define BallastFillType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define BallastFillType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define BallastFillType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern BallastFillType_Union*
                BallastFillType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern BallastFillType_Union*
                BallastFillType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern BallastFillType_Union*
                BallastFillType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                BallastFillType_UnionPluginSupport_copy_data(
                    BallastFillType_Union *out,
                    const BallastFillType_Union *in);

                NDDSUSERDllExport extern void 
                BallastFillType_UnionPluginSupport_destroy_data_w_params(
                    BallastFillType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                BallastFillType_UnionPluginSupport_destroy_data_ex(
                    BallastFillType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                BallastFillType_UnionPluginSupport_destroy_data(
                    BallastFillType_Union *sample);

                NDDSUSERDllExport extern void 
                BallastFillType_UnionPluginSupport_print_data(
                    const BallastFillType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                BallastFillType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                BallastFillType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                BallastFillType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                BallastFillType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                BallastFillType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    BallastFillType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                BallastFillType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    BallastFillType_Union *out,
                    const BallastFillType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                BallastFillType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const BallastFillType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                BallastFillType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    BallastFillType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                BallastFillType_UnionPlugin_deserialize_from_cdr_buffer(
                    BallastFillType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                BallastFillType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                BallastFillType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                BallastFillType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                BallastFillType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                BallastFillType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    BallastFillType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                BallastFillType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                BallastFillType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace BallastFillType_Specializations  */

            #define BallastFillTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastFillTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastFillTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastFillTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastFillTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastFillType*
            BallastFillTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastFillType*
            BallastFillTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastFillType*
            BallastFillTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypePluginSupport_copy_data(
                BallastFillType *out,
                const BallastFillType *in);

            NDDSUSERDllExport extern void 
            BallastFillTypePluginSupport_destroy_data_w_params(
                BallastFillType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastFillTypePluginSupport_destroy_data_ex(
                BallastFillType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastFillTypePluginSupport_destroy_data(
                BallastFillType *sample);

            NDDSUSERDllExport extern void 
            BallastFillTypePluginSupport_print_data(
                const BallastFillType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BallastFillTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BallastFillTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BallastFillTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BallastFillTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BallastFillTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillType *out,
                const BallastFillType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastFillTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastFillType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastFillTypePlugin_deserialize_from_cdr_buffer(
                BallastFillType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastFillTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastFillTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastFillTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastFillType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BallastFillTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BallastFillTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BallastFillTypePlugin_331398662_h */

