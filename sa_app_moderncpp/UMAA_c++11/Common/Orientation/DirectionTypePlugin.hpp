

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionTypePlugin_1507435713_h
#define DirectionTypePlugin_1507435713_h

#include "DirectionType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/CourseTypePlugin.hpp"
#include "UMAA/Common/Orientation/HeadingCurrentDirectionTypePlugin.hpp"
#include "UMAA/Common/Orientation/HeadingMagneticNorthTypePlugin.hpp"
#include "UMAA/Common/Orientation/HeadingTrueNorthTypePlugin.hpp"
#include "UMAA/Common/Orientation/HeadingTypePlugin.hpp"
#include "UMAA/Common/Orientation/HeadingWindDirectionTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {
            namespace DirectionType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                DirectionType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                DirectionType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                DirectionType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                DirectionType_SelectorsPluginSupport_print_data(
                    const DirectionType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define DirectionType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define DirectionType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define DirectionType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define DirectionType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define DirectionType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern DirectionType_Union*
                DirectionType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern DirectionType_Union*
                DirectionType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern DirectionType_Union*
                DirectionType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                DirectionType_UnionPluginSupport_copy_data(
                    DirectionType_Union *out,
                    const DirectionType_Union *in);

                NDDSUSERDllExport extern void 
                DirectionType_UnionPluginSupport_destroy_data_w_params(
                    DirectionType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                DirectionType_UnionPluginSupport_destroy_data_ex(
                    DirectionType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                DirectionType_UnionPluginSupport_destroy_data(
                    DirectionType_Union *sample);

                NDDSUSERDllExport extern void 
                DirectionType_UnionPluginSupport_print_data(
                    const DirectionType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                DirectionType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                DirectionType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                DirectionType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                DirectionType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                DirectionType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    DirectionType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                DirectionType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    DirectionType_Union *out,
                    const DirectionType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                DirectionType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const DirectionType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                DirectionType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    DirectionType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                DirectionType_UnionPlugin_deserialize_from_cdr_buffer(
                    DirectionType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                DirectionType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                DirectionType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                DirectionType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                DirectionType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                DirectionType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    DirectionType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                DirectionType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                DirectionType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace DirectionType_Specializations  */

            #define DirectionTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DirectionTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DirectionTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DirectionTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DirectionTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DirectionType*
            DirectionTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DirectionType*
            DirectionTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DirectionType*
            DirectionTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DirectionTypePluginSupport_copy_data(
                DirectionType *out,
                const DirectionType *in);

            NDDSUSERDllExport extern void 
            DirectionTypePluginSupport_destroy_data_w_params(
                DirectionType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DirectionTypePluginSupport_destroy_data_ex(
                DirectionType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DirectionTypePluginSupport_destroy_data(
                DirectionType *sample);

            NDDSUSERDllExport extern void 
            DirectionTypePluginSupport_print_data(
                const DirectionType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DirectionTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DirectionTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DirectionTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DirectionTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DirectionTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DirectionTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionType *out,
                const DirectionType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DirectionTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DirectionTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DirectionType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DirectionTypePlugin_deserialize_from_cdr_buffer(
                DirectionType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DirectionTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DirectionTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DirectionTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DirectionTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DirectionTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DirectionTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DirectionTypePlugin_1507435713_h */

