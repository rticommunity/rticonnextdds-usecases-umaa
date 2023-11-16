

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalFigure8CommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalFigure8CommandAckReportTypePlugin_1601158838_h
#define GlobalFigure8CommandAckReportTypePlugin_1601158838_h

#include "GlobalFigure8CommandAckReportType.hpp"

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
        namespace GlobalFigure8Control {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalFigure8CommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalFigure8CommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalFigure8CommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalFigure8CommandAckReportType.
            */
            typedef  class GlobalFigure8CommandAckReportType GlobalFigure8CommandAckReportTypeKeyHolder;

            #define GlobalFigure8CommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalFigure8CommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalFigure8CommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalFigure8CommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalFigure8CommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalFigure8CommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalFigure8CommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalFigure8CommandAckReportType*
            GlobalFigure8CommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalFigure8CommandAckReportType*
            GlobalFigure8CommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalFigure8CommandAckReportType*
            GlobalFigure8CommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8CommandAckReportTypePluginSupport_copy_data(
                GlobalFigure8CommandAckReportType *out,
                const GlobalFigure8CommandAckReportType *in);

            NDDSUSERDllExport extern void 
            GlobalFigure8CommandAckReportTypePluginSupport_destroy_data_w_params(
                GlobalFigure8CommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalFigure8CommandAckReportTypePluginSupport_destroy_data_ex(
                GlobalFigure8CommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalFigure8CommandAckReportTypePluginSupport_destroy_data(
                GlobalFigure8CommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalFigure8CommandAckReportTypePluginSupport_print_data(
                const GlobalFigure8CommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalFigure8CommandAckReportType*
            GlobalFigure8CommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalFigure8CommandAckReportType*
            GlobalFigure8CommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalFigure8CommandAckReportTypePluginSupport_destroy_key_ex(
                GlobalFigure8CommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalFigure8CommandAckReportTypePluginSupport_destroy_key(
                GlobalFigure8CommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalFigure8CommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalFigure8CommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalFigure8CommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalFigure8CommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalFigure8CommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8CommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8CommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8CommandAckReportType *out,
                const GlobalFigure8CommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalFigure8CommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalFigure8CommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8CommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8CommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalFigure8CommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalFigure8CommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalFigure8CommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalFigure8CommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalFigure8CommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalFigure8CommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8CommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8CommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8CommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8CommandAckReportTypeKeyHolder *key, 
                const GlobalFigure8CommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8CommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalFigure8CommandAckReportType *instance, 
                const GlobalFigure8CommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalFigure8CommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalFigure8CommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalFigure8CommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalFigure8Control  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalFigure8CommandAckReportTypePlugin_1601158838_h */

