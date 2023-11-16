

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ZoneType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ZoneTypePlugin_1784329639_h
#define ZoneTypePlugin_1784329639_h

#include "ZoneType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Polygon_VolumePlugin.hpp"
#include "UMAA/MM/BaseType/PlanningZoneTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {
            namespace ZoneType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ZoneType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ZoneType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ZoneType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ZoneType_SelectorsPluginSupport_print_data(
                    const ZoneType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define ZoneType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define ZoneType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define ZoneType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define ZoneType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define ZoneType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern ZoneType_Union*
                ZoneType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern ZoneType_Union*
                ZoneType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern ZoneType_Union*
                ZoneType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                ZoneType_UnionPluginSupport_copy_data(
                    ZoneType_Union *out,
                    const ZoneType_Union *in);

                NDDSUSERDllExport extern void 
                ZoneType_UnionPluginSupport_destroy_data_w_params(
                    ZoneType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                ZoneType_UnionPluginSupport_destroy_data_ex(
                    ZoneType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                ZoneType_UnionPluginSupport_destroy_data(
                    ZoneType_Union *sample);

                NDDSUSERDllExport extern void 
                ZoneType_UnionPluginSupport_print_data(
                    const ZoneType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                ZoneType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                ZoneType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                ZoneType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                ZoneType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                ZoneType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    ZoneType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                ZoneType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    ZoneType_Union *out,
                    const ZoneType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                ZoneType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const ZoneType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                ZoneType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    ZoneType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                ZoneType_UnionPlugin_deserialize_from_cdr_buffer(
                    ZoneType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                ZoneType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                ZoneType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                ZoneType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ZoneType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                ZoneType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    ZoneType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                ZoneType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                ZoneType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace ZoneType_Specializations  */

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ZoneType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ZoneType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ZoneType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ZoneType.
            */
            typedef class ZoneType ZoneTypeKeyHolder;

            #define ZoneTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ZoneTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ZoneTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ZoneTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ZoneTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ZoneTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ZoneTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ZoneType*
            ZoneTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ZoneType*
            ZoneTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ZoneType*
            ZoneTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ZoneTypePluginSupport_copy_data(
                ZoneType *out,
                const ZoneType *in);

            NDDSUSERDllExport extern void 
            ZoneTypePluginSupport_destroy_data_w_params(
                ZoneType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ZoneTypePluginSupport_destroy_data_ex(
                ZoneType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ZoneTypePluginSupport_destroy_data(
                ZoneType *sample);

            NDDSUSERDllExport extern void 
            ZoneTypePluginSupport_print_data(
                const ZoneType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ZoneType*
            ZoneTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ZoneType*
            ZoneTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ZoneTypePluginSupport_destroy_key_ex(
                ZoneTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ZoneTypePluginSupport_destroy_key(
                ZoneTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ZoneTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ZoneTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ZoneTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ZoneTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ZoneTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ZoneType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ZoneTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ZoneType *out,
                const ZoneType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ZoneTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ZoneType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ZoneTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ZoneType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ZoneTypePlugin_deserialize_from_cdr_buffer(
                ZoneType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ZoneTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ZoneTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ZoneTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ZoneTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ZoneTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ZoneType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ZoneTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ZoneTypeKeyHolder *key, 
                const ZoneType *instance);

            NDDSUSERDllExport extern RTIBool 
            ZoneTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ZoneType *instance, 
                const ZoneTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ZoneTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ZoneTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ZoneTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ZoneTypePlugin_1784329639_h */

