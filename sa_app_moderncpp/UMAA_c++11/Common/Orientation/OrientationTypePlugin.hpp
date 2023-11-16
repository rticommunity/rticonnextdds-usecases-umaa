

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationTypePlugin_1949645477_h
#define OrientationTypePlugin_1949645477_h

#include "OrientationType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/AttitudeTypePlugin.hpp"
#include "UMAA/Common/Orientation/CourseTypePlugin.hpp"
#include "UMAA/Common/Orientation/DirectionTypePlugin.hpp"
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
            namespace OrientationType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                OrientationType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                OrientationType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                OrientationType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                OrientationType_SelectorsPluginSupport_print_data(
                    const OrientationType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define OrientationType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define OrientationType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define OrientationType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define OrientationType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define OrientationType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern OrientationType_Union*
                OrientationType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern OrientationType_Union*
                OrientationType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern OrientationType_Union*
                OrientationType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                OrientationType_UnionPluginSupport_copy_data(
                    OrientationType_Union *out,
                    const OrientationType_Union *in);

                NDDSUSERDllExport extern void 
                OrientationType_UnionPluginSupport_destroy_data_w_params(
                    OrientationType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                OrientationType_UnionPluginSupport_destroy_data_ex(
                    OrientationType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                OrientationType_UnionPluginSupport_destroy_data(
                    OrientationType_Union *sample);

                NDDSUSERDllExport extern void 
                OrientationType_UnionPluginSupport_print_data(
                    const OrientationType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                OrientationType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                OrientationType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                OrientationType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                OrientationType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                OrientationType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    OrientationType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                OrientationType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    OrientationType_Union *out,
                    const OrientationType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                OrientationType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const OrientationType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                OrientationType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    OrientationType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                OrientationType_UnionPlugin_deserialize_from_cdr_buffer(
                    OrientationType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                OrientationType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                OrientationType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                OrientationType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                OrientationType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                OrientationType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    OrientationType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                OrientationType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                OrientationType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace OrientationType_Specializations  */

            #define OrientationTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OrientationTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OrientationTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OrientationTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OrientationTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern OrientationType*
            OrientationTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern OrientationType*
            OrientationTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OrientationType*
            OrientationTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OrientationTypePluginSupport_copy_data(
                OrientationType *out,
                const OrientationType *in);

            NDDSUSERDllExport extern void 
            OrientationTypePluginSupport_destroy_data_w_params(
                OrientationType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OrientationTypePluginSupport_destroy_data_ex(
                OrientationType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OrientationTypePluginSupport_destroy_data(
                OrientationType *sample);

            NDDSUSERDllExport extern void 
            OrientationTypePluginSupport_print_data(
                const OrientationType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            OrientationTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            OrientationTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            OrientationTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            OrientationTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            OrientationTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            OrientationTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationType *out,
                const OrientationType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            OrientationTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const OrientationType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            OrientationTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                OrientationType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            OrientationTypePlugin_deserialize_from_cdr_buffer(
                OrientationType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            OrientationTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OrientationTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OrientationTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OrientationTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            OrientationTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                OrientationType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            OrientationTypePlugin_new(void);

            NDDSUSERDllExport extern void
            OrientationTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* OrientationTypePlugin_1949645477_h */

