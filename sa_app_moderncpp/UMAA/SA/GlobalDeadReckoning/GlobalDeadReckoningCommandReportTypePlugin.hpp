

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDeadReckoningCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDeadReckoningCommandReportTypePlugin_530883023_h
#define GlobalDeadReckoningCommandReportTypePlugin_530883023_h

#include "GlobalDeadReckoningCommandReportType.hpp"

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
            * By default, this type is struct GlobalDeadReckoningCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalDeadReckoningCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalDeadReckoningCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalDeadReckoningCommandReportType.
            */
            typedef  class GlobalDeadReckoningCommandReportType GlobalDeadReckoningCommandReportTypeKeyHolder;

            #define GlobalDeadReckoningCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalDeadReckoningCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalDeadReckoningCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalDeadReckoningCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalDeadReckoningCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalDeadReckoningCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalDeadReckoningCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalDeadReckoningCommandReportType*
            GlobalDeadReckoningCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandReportType*
            GlobalDeadReckoningCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandReportType*
            GlobalDeadReckoningCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandReportTypePluginSupport_copy_data(
                GlobalDeadReckoningCommandReportType *out,
                const GlobalDeadReckoningCommandReportType *in);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandReportTypePluginSupport_destroy_data_w_params(
                GlobalDeadReckoningCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandReportTypePluginSupport_destroy_data_ex(
                GlobalDeadReckoningCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandReportTypePluginSupport_destroy_data(
                GlobalDeadReckoningCommandReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandReportTypePluginSupport_print_data(
                const GlobalDeadReckoningCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandReportType*
            GlobalDeadReckoningCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDeadReckoningCommandReportType*
            GlobalDeadReckoningCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandReportTypePluginSupport_destroy_key_ex(
                GlobalDeadReckoningCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandReportTypePluginSupport_destroy_key(
                GlobalDeadReckoningCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalDeadReckoningCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalDeadReckoningCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalDeadReckoningCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalDeadReckoningCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandReportType *out,
                const GlobalDeadReckoningCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalDeadReckoningCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalDeadReckoningCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalDeadReckoningCommandReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalDeadReckoningCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalDeadReckoningCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalDeadReckoningCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalDeadReckoningCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalDeadReckoningCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandReportTypeKeyHolder *key, 
                const GlobalDeadReckoningCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDeadReckoningCommandReportType *instance, 
                const GlobalDeadReckoningCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalDeadReckoningCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalDeadReckoningCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalDeadReckoningCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalDeadReckoning  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalDeadReckoningCommandReportTypePlugin_530883023_h */

