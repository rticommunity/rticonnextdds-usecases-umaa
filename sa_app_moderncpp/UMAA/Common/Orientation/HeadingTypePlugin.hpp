

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingTypePlugin_1335779745_h
#define HeadingTypePlugin_1335779745_h

#include "HeadingType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/HeadingCurrentDirectionTypePlugin.hpp"
#include "UMAA/Common/Orientation/HeadingMagneticNorthTypePlugin.hpp"
#include "UMAA/Common/Orientation/HeadingTrueNorthTypePlugin.hpp"
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
            namespace HeadingType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                HeadingType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                HeadingType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                HeadingType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                HeadingType_SelectorsPluginSupport_print_data(
                    const HeadingType_Selectors *sample, const char *desc, int indent_level);

                #define HeadingType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define HeadingType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define HeadingType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define HeadingType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define HeadingType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern HeadingType_Union*
                HeadingType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern HeadingType_Union*
                HeadingType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern HeadingType_Union*
                HeadingType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                HeadingType_UnionPluginSupport_copy_data(
                    HeadingType_Union *out,
                    const HeadingType_Union *in);

                NDDSUSERDllExport extern void 
                HeadingType_UnionPluginSupport_destroy_data_w_params(
                    HeadingType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                HeadingType_UnionPluginSupport_destroy_data_ex(
                    HeadingType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                HeadingType_UnionPluginSupport_destroy_data(
                    HeadingType_Union *sample);

                NDDSUSERDllExport extern void 
                HeadingType_UnionPluginSupport_print_data(
                    const HeadingType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                HeadingType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                HeadingType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                HeadingType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                HeadingType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                HeadingType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    HeadingType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                HeadingType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    HeadingType_Union *out,
                    const HeadingType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                HeadingType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const HeadingType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                HeadingType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    HeadingType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                HeadingType_UnionPlugin_deserialize_from_cdr_buffer(
                    HeadingType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                HeadingType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                HeadingType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                HeadingType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                HeadingType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                HeadingType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    HeadingType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                HeadingType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                HeadingType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace HeadingType_Specializations  */

            #define HeadingTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define HeadingTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define HeadingTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define HeadingTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define HeadingTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern HeadingType*
            HeadingTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern HeadingType*
            HeadingTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern HeadingType*
            HeadingTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            HeadingTypePluginSupport_copy_data(
                HeadingType *out,
                const HeadingType *in);

            NDDSUSERDllExport extern void 
            HeadingTypePluginSupport_destroy_data_w_params(
                HeadingType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            HeadingTypePluginSupport_destroy_data_ex(
                HeadingType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            HeadingTypePluginSupport_destroy_data(
                HeadingType *sample);

            NDDSUSERDllExport extern void 
            HeadingTypePluginSupport_print_data(
                const HeadingType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            HeadingTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            HeadingTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            HeadingTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            HeadingTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            HeadingTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            HeadingTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                HeadingType *out,
                const HeadingType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            HeadingTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const HeadingType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            HeadingTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                HeadingType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            HeadingTypePlugin_deserialize_from_cdr_buffer(
                HeadingType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            HeadingTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            HeadingTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            HeadingTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            HeadingTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            HeadingTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                HeadingType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            HeadingTypePlugin_new(void);

            NDDSUSERDllExport extern void
            HeadingTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HeadingTypePlugin_1335779745_h */

