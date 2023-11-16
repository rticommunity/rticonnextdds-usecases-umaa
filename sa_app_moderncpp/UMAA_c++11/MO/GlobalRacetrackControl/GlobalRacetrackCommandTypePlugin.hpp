

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRacetrackCommandTypePlugin_887739946_h
#define GlobalRacetrackCommandTypePlugin_887739946_h

#include "GlobalRacetrackCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position2DPlugin.hpp"
#include "UMAA/Common/Orientation/HeadingTypePlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalRacetrackControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalRacetrackCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalRacetrackCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalRacetrackCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalRacetrackCommandType.
            */
            typedef class GlobalRacetrackCommandType GlobalRacetrackCommandTypeKeyHolder;

            #define GlobalRacetrackCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalRacetrackCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalRacetrackCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalRacetrackCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalRacetrackCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalRacetrackCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalRacetrackCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalRacetrackCommandType*
            GlobalRacetrackCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalRacetrackCommandType*
            GlobalRacetrackCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalRacetrackCommandType*
            GlobalRacetrackCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackCommandTypePluginSupport_copy_data(
                GlobalRacetrackCommandType *out,
                const GlobalRacetrackCommandType *in);

            NDDSUSERDllExport extern void 
            GlobalRacetrackCommandTypePluginSupport_destroy_data_w_params(
                GlobalRacetrackCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalRacetrackCommandTypePluginSupport_destroy_data_ex(
                GlobalRacetrackCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalRacetrackCommandTypePluginSupport_destroy_data(
                GlobalRacetrackCommandType *sample);

            NDDSUSERDllExport extern void 
            GlobalRacetrackCommandTypePluginSupport_print_data(
                const GlobalRacetrackCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalRacetrackCommandType*
            GlobalRacetrackCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalRacetrackCommandType*
            GlobalRacetrackCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalRacetrackCommandTypePluginSupport_destroy_key_ex(
                GlobalRacetrackCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalRacetrackCommandTypePluginSupport_destroy_key(
                GlobalRacetrackCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalRacetrackCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalRacetrackCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalRacetrackCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalRacetrackCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalRacetrackCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackCommandType *out,
                const GlobalRacetrackCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalRacetrackCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalRacetrackCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalRacetrackCommandTypePlugin_deserialize_from_cdr_buffer(
                GlobalRacetrackCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalRacetrackCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalRacetrackCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalRacetrackCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalRacetrackCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackCommandTypeKeyHolder *key, 
                const GlobalRacetrackCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRacetrackCommandType *instance, 
                const GlobalRacetrackCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalRacetrackCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalRacetrackCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalRacetrackCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalRacetrackControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalRacetrackCommandTypePlugin_887739946_h */

