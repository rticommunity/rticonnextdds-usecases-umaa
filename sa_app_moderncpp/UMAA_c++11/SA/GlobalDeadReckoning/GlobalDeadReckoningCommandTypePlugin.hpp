

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDeadReckoningCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDeadReckoningCommandTypePlugin_1136684221_h
#define GlobalDeadReckoningCommandTypePlugin_1136684221_h

#include "GlobalDeadReckoningCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/CovarianceOrientationTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovariancePositionPositionTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Orientation3D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/Measurement/Position2DPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace GlobalDeadReckoning {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalDeadReckoningCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalDeadReckoningCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalDeadReckoningCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalDeadReckoningCommandType.
            */
            typedef class GlobalDeadReckoningCommandType GlobalDeadReckoningCommandTypeKeyHolder;

            #define GlobalDeadReckoningCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalDeadReckoningCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalDeadReckoningCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalDeadReckoningCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalDeadReckoningCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalDeadReckoningCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalDeadReckoningCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalDeadReckoningCommandType*
            GlobalDeadReckoningCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandType*
            GlobalDeadReckoningCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandType*
            GlobalDeadReckoningCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandTypePluginSupport_copy_data(
                GlobalDeadReckoningCommandType *out,
                const GlobalDeadReckoningCommandType *in);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandTypePluginSupport_destroy_data_w_params(
                GlobalDeadReckoningCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandTypePluginSupport_destroy_data_ex(
                GlobalDeadReckoningCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandTypePluginSupport_destroy_data(
                GlobalDeadReckoningCommandType *sample);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandTypePluginSupport_print_data(
                const GlobalDeadReckoningCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandType*
            GlobalDeadReckoningCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandType*
            GlobalDeadReckoningCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandTypePluginSupport_destroy_key_ex(
                GlobalDeadReckoningCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandTypePluginSupport_destroy_key(
                GlobalDeadReckoningCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalDeadReckoningCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalDeadReckoningCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalDeadReckoningCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandType *out,
                const GlobalDeadReckoningCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalDeadReckoningCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalDeadReckoningCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalDeadReckoningCommandTypePlugin_deserialize_from_cdr_buffer(
                GlobalDeadReckoningCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalDeadReckoningCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalDeadReckoningCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalDeadReckoningCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalDeadReckoningCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandTypeKeyHolder *key, 
                const GlobalDeadReckoningCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandType *instance, 
                const GlobalDeadReckoningCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalDeadReckoningCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalDeadReckoningCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalDeadReckoning  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalDeadReckoningCommandTypePlugin_1136684221_h */

