

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalVectorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalVectorCommandAckReportTypePlugin_775209799_h
#define GlobalVectorCommandAckReportTypePlugin_775209799_h

#include "GlobalVectorCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Orientation3D_TolerancePlugin.hpp"
#include "UMAA/Common/Orientation/OrientationTypePlugin.hpp"
#include "UMAA/Common/Speed/SpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalVectorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalVectorCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalVectorCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalVectorCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalVectorCommandAckReportType.
            */
            typedef class GlobalVectorCommandAckReportType GlobalVectorCommandAckReportTypeKeyHolder;

            #define GlobalVectorCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalVectorCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalVectorCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalVectorCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalVectorCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalVectorCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalVectorCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalVectorCommandAckReportType*
            GlobalVectorCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalVectorCommandAckReportType*
            GlobalVectorCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalVectorCommandAckReportType*
            GlobalVectorCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandAckReportTypePluginSupport_copy_data(
                GlobalVectorCommandAckReportType *out,
                const GlobalVectorCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandAckReportTypePluginSupport_destroy_data_w_params(
                GlobalVectorCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandAckReportTypePluginSupport_destroy_data_ex(
                GlobalVectorCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandAckReportTypePluginSupport_destroy_data(
                GlobalVectorCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandAckReportTypePluginSupport_print_data(
                const GlobalVectorCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalVectorCommandAckReportType*
            GlobalVectorCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalVectorCommandAckReportType*
            GlobalVectorCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandAckReportTypePluginSupport_destroy_key_ex(
                GlobalVectorCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandAckReportTypePluginSupport_destroy_key(
                GlobalVectorCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalVectorCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalVectorCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalVectorCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalVectorCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandAckReportType *out,
                const GlobalVectorCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalVectorCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalVectorCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalVectorCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalVectorCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalVectorCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalVectorCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalVectorCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalVectorCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandAckReportTypeKeyHolder *key, 
                const GlobalVectorCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalVectorCommandAckReportType *instance, 
                const GlobalVectorCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalVectorCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalVectorCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalVectorCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalVectorControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalVectorCommandAckReportTypePlugin_775209799_h */

