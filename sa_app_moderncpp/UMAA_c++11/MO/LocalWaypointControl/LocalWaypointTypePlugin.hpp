

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointTypePlugin_1914962981_h
#define LocalWaypointTypePlugin_1914962981_h

#include "LocalWaypointType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Orientation3D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/Measurement/Position2D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalWaypointControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalWaypointType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalWaypointType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalWaypointType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalWaypointType.
            */
            typedef class LocalWaypointType LocalWaypointTypeKeyHolder;

            #define LocalWaypointTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalWaypointTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalWaypointTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalWaypointTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalWaypointTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalWaypointTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalWaypointTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalWaypointType*
            LocalWaypointTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalWaypointType*
            LocalWaypointTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointType*
            LocalWaypointTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointTypePluginSupport_copy_data(
                LocalWaypointType *out,
                const LocalWaypointType *in);

            NDDSUSERDllExport extern void 
            LocalWaypointTypePluginSupport_destroy_data_w_params(
                LocalWaypointType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalWaypointTypePluginSupport_destroy_data_ex(
                LocalWaypointType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointTypePluginSupport_destroy_data(
                LocalWaypointType *sample);

            NDDSUSERDllExport extern void 
            LocalWaypointTypePluginSupport_print_data(
                const LocalWaypointType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalWaypointType*
            LocalWaypointTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointType*
            LocalWaypointTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalWaypointTypePluginSupport_destroy_key_ex(
                LocalWaypointTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointTypePluginSupport_destroy_key(
                LocalWaypointTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalWaypointTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalWaypointTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalWaypointTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalWaypointTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalWaypointTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointType *out,
                const LocalWaypointType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalWaypointTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalWaypointType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalWaypointTypePlugin_deserialize_from_cdr_buffer(
                LocalWaypointType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalWaypointTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointTypeKeyHolder *key, 
                const LocalWaypointType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointType *instance, 
                const LocalWaypointTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalWaypointTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalWaypointTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalWaypointControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalWaypointTypePlugin_1914962981_h */

