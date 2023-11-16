

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverCommandAckReportTypePlugin_1826122434_h
#define GlobalHoverCommandAckReportTypePlugin_1826122434_h

#include "GlobalHoverCommandAckReportType.hpp"

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
        namespace GlobalHoverControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalHoverCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalHoverCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalHoverCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalHoverCommandAckReportType.
            */
            typedef  class GlobalHoverCommandAckReportType GlobalHoverCommandAckReportTypeKeyHolder;

            #define GlobalHoverCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalHoverCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalHoverCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalHoverCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalHoverCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalHoverCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalHoverCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalHoverCommandAckReportType*
            GlobalHoverCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalHoverCommandAckReportType*
            GlobalHoverCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalHoverCommandAckReportType*
            GlobalHoverCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandAckReportTypePluginSupport_copy_data(
                GlobalHoverCommandAckReportType *out,
                const GlobalHoverCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandAckReportTypePluginSupport_destroy_data_w_params(
                GlobalHoverCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandAckReportTypePluginSupport_destroy_data_ex(
                GlobalHoverCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandAckReportTypePluginSupport_destroy_data(
                GlobalHoverCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandAckReportTypePluginSupport_print_data(
                const GlobalHoverCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalHoverCommandAckReportType*
            GlobalHoverCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalHoverCommandAckReportType*
            GlobalHoverCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandAckReportTypePluginSupport_destroy_key_ex(
                GlobalHoverCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandAckReportTypePluginSupport_destroy_key(
                GlobalHoverCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalHoverCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalHoverCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalHoverCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalHoverCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandAckReportType *out,
                const GlobalHoverCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalHoverCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalHoverCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalHoverCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalHoverCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalHoverCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalHoverCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandAckReportTypeKeyHolder *key, 
                const GlobalHoverCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalHoverCommandAckReportType *instance, 
                const GlobalHoverCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalHoverCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalHoverCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalHoverCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalHoverControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalHoverCommandAckReportTypePlugin_1826122434_h */

