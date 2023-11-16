

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDeadReckoningCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDeadReckoningCommandTypePlugin_1444791514_h
#define LocalDeadReckoningCommandTypePlugin_1444791514_h

#include "LocalDeadReckoningCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/CovarianceOrientationTypePlugin.hpp"
#include "UMAA/Common/Measurement/CovariancePositionVelocityTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Orientation3D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/Measurement/Position3D_PlatformXYZPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace LocalDeadReckoning {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalDeadReckoningCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalDeadReckoningCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalDeadReckoningCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalDeadReckoningCommandType.
            */
            typedef  class LocalDeadReckoningCommandType LocalDeadReckoningCommandTypeKeyHolder;

            #define LocalDeadReckoningCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalDeadReckoningCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalDeadReckoningCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalDeadReckoningCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalDeadReckoningCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalDeadReckoningCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalDeadReckoningCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalDeadReckoningCommandType*
            LocalDeadReckoningCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalDeadReckoningCommandType*
            LocalDeadReckoningCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalDeadReckoningCommandType*
            LocalDeadReckoningCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandTypePluginSupport_copy_data(
                LocalDeadReckoningCommandType *out,
                const LocalDeadReckoningCommandType *in);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandTypePluginSupport_destroy_data_w_params(
                LocalDeadReckoningCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandTypePluginSupport_destroy_data_ex(
                LocalDeadReckoningCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandTypePluginSupport_destroy_data(
                LocalDeadReckoningCommandType *sample);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandTypePluginSupport_print_data(
                const LocalDeadReckoningCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalDeadReckoningCommandType*
            LocalDeadReckoningCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalDeadReckoningCommandType*
            LocalDeadReckoningCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandTypePluginSupport_destroy_key_ex(
                LocalDeadReckoningCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandTypePluginSupport_destroy_key(
                LocalDeadReckoningCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalDeadReckoningCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalDeadReckoningCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalDeadReckoningCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalDeadReckoningCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandType *out,
                const LocalDeadReckoningCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalDeadReckoningCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalDeadReckoningCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalDeadReckoningCommandTypePlugin_deserialize_from_cdr_buffer(
                LocalDeadReckoningCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalDeadReckoningCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalDeadReckoningCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalDeadReckoningCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalDeadReckoningCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandTypeKeyHolder *key, 
                const LocalDeadReckoningCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalDeadReckoningCommandType *instance, 
                const LocalDeadReckoningCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalDeadReckoningCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalDeadReckoningCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalDeadReckoningCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalDeadReckoning  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalDeadReckoningCommandTypePlugin_1444791514_h */

