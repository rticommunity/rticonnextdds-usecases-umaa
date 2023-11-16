

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ElevationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ElevationTypePlugin_506920845_h
#define ElevationTypePlugin_506920845_h

#include "ElevationType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/AltitudeAGLTypePlugin.hpp"
#include "UMAA/Common/Measurement/AltitudeASFTypePlugin.hpp"
#include "UMAA/Common/Measurement/AltitudeMSLTypePlugin.hpp"
#include "UMAA/Common/Measurement/DepthTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {
            namespace ElevationType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ElevationType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ElevationType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ElevationType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ElevationType_SelectorsPluginSupport_print_data(
                    const ElevationType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define ElevationType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define ElevationType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define ElevationType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define ElevationType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define ElevationType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern ElevationType_Union*
                ElevationType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern ElevationType_Union*
                ElevationType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern ElevationType_Union*
                ElevationType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                ElevationType_UnionPluginSupport_copy_data(
                    ElevationType_Union *out,
                    const ElevationType_Union *in);

                NDDSUSERDllExport extern void 
                ElevationType_UnionPluginSupport_destroy_data_w_params(
                    ElevationType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                ElevationType_UnionPluginSupport_destroy_data_ex(
                    ElevationType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                ElevationType_UnionPluginSupport_destroy_data(
                    ElevationType_Union *sample);

                NDDSUSERDllExport extern void 
                ElevationType_UnionPluginSupport_print_data(
                    const ElevationType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                ElevationType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                ElevationType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                ElevationType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                ElevationType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                ElevationType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    ElevationType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                ElevationType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    ElevationType_Union *out,
                    const ElevationType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                ElevationType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const ElevationType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                ElevationType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    ElevationType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                ElevationType_UnionPlugin_deserialize_from_cdr_buffer(
                    ElevationType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                ElevationType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                ElevationType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                ElevationType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ElevationType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                ElevationType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    ElevationType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                ElevationType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                ElevationType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace ElevationType_Specializations  */

            #define ElevationTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ElevationTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ElevationTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ElevationTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ElevationTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ElevationType*
            ElevationTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ElevationType*
            ElevationTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ElevationType*
            ElevationTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ElevationTypePluginSupport_copy_data(
                ElevationType *out,
                const ElevationType *in);

            NDDSUSERDllExport extern void 
            ElevationTypePluginSupport_destroy_data_w_params(
                ElevationType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ElevationTypePluginSupport_destroy_data_ex(
                ElevationType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ElevationTypePluginSupport_destroy_data(
                ElevationType *sample);

            NDDSUSERDllExport extern void 
            ElevationTypePluginSupport_print_data(
                const ElevationType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ElevationTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ElevationTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ElevationTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ElevationTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ElevationTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ElevationType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ElevationTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ElevationType *out,
                const ElevationType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ElevationTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ElevationType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ElevationTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ElevationType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ElevationTypePlugin_deserialize_from_cdr_buffer(
                ElevationType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ElevationTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ElevationTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ElevationTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ElevationTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ElevationTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ElevationType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ElevationTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ElevationTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ElevationTypePlugin_506920845_h */

