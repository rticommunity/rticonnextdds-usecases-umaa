

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftCommandTypePlugin_1016333804_h
#define GlobalDriftCommandTypePlugin_1016333804_h

#include "GlobalDriftCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Distance/DistanceRequirementTypePlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationRequirementVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Speed/SpeedVariantTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalDriftControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalDriftCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalDriftCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalDriftCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalDriftCommandType.
            */
            typedef class GlobalDriftCommandType GlobalDriftCommandTypeKeyHolder;

            #define GlobalDriftCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalDriftCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalDriftCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalDriftCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalDriftCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalDriftCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalDriftCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalDriftCommandType*
            GlobalDriftCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalDriftCommandType*
            GlobalDriftCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDriftCommandType*
            GlobalDriftCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandTypePluginSupport_copy_data(
                GlobalDriftCommandType *out,
                const GlobalDriftCommandType *in);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandTypePluginSupport_destroy_data_w_params(
                GlobalDriftCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandTypePluginSupport_destroy_data_ex(
                GlobalDriftCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandTypePluginSupport_destroy_data(
                GlobalDriftCommandType *sample);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandTypePluginSupport_print_data(
                const GlobalDriftCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalDriftCommandType*
            GlobalDriftCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDriftCommandType*
            GlobalDriftCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandTypePluginSupport_destroy_key_ex(
                GlobalDriftCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandTypePluginSupport_destroy_key(
                GlobalDriftCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalDriftCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalDriftCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalDriftCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandType *out,
                const GlobalDriftCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalDriftCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalDriftCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalDriftCommandTypePlugin_deserialize_from_cdr_buffer(
                GlobalDriftCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalDriftCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandTypeKeyHolder *key, 
                const GlobalDriftCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandType *instance, 
                const GlobalDriftCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalDriftCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalDriftCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalDriftControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalDriftCommandTypePlugin_1016333804_h */

