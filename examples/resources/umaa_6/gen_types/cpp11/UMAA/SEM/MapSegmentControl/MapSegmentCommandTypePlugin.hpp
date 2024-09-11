

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapSegmentCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MapSegmentCommandTypePlugin_347991557_h
#define MapSegmentCommandTypePlugin_347991557_h

#include "MapSegmentCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace MapSegmentControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct MapSegmentCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct MapSegmentCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * MapSegmentCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct MapSegmentCommandType.
            */
            typedef class MapSegmentCommandType MapSegmentCommandTypeKeyHolder;

            #define MapSegmentCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define MapSegmentCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MapSegmentCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define MapSegmentCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define MapSegmentCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define MapSegmentCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MapSegmentCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MapSegmentCommandType*
            MapSegmentCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MapSegmentCommandType*
            MapSegmentCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MapSegmentCommandType*
            MapSegmentCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MapSegmentCommandTypePluginSupport_copy_data(
                MapSegmentCommandType *out,
                const MapSegmentCommandType *in);

            NDDSUSERDllExport extern void 
            MapSegmentCommandTypePluginSupport_destroy_data_w_params(
                MapSegmentCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MapSegmentCommandTypePluginSupport_destroy_data_ex(
                MapSegmentCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MapSegmentCommandTypePluginSupport_destroy_data(
                MapSegmentCommandType *sample);

            NDDSUSERDllExport extern void 
            MapSegmentCommandTypePluginSupport_print_data(
                const MapSegmentCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern MapSegmentCommandType*
            MapSegmentCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MapSegmentCommandType*
            MapSegmentCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            MapSegmentCommandTypePluginSupport_destroy_key_ex(
                MapSegmentCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MapSegmentCommandTypePluginSupport_destroy_key(
                MapSegmentCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MapSegmentCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MapSegmentCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MapSegmentCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MapSegmentCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MapSegmentCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MapSegmentCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MapSegmentCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MapSegmentCommandType *out,
                const MapSegmentCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            MapSegmentCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MapSegmentCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            MapSegmentCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MapSegmentCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MapSegmentCommandTypePlugin_deserialize_from_cdr_buffer(
                MapSegmentCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            MapSegmentCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MapSegmentCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MapSegmentCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MapSegmentCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MapSegmentCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MapSegmentCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MapSegmentCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MapSegmentCommandTypeKeyHolder *key, 
                const MapSegmentCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            MapSegmentCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                MapSegmentCommandType *instance, 
                const MapSegmentCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            MapSegmentCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MapSegmentCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            MapSegmentCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace MapSegmentControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MapSegmentCommandTypePlugin_347991557_h */

