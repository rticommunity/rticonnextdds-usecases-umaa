

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraReportTypePlugin_1007550522_h
#define CameraReportTypePlugin_1007550522_h

#include "CameraReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position2DPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace CameraStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CameraReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CameraReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CameraReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CameraReportType.
            */
            typedef  class CameraReportType CameraReportTypeKeyHolder;

            #define CameraReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CameraReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CameraReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CameraReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CameraReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CameraReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CameraReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CameraReportType*
            CameraReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CameraReportType*
            CameraReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraReportType*
            CameraReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CameraReportTypePluginSupport_copy_data(
                CameraReportType *out,
                const CameraReportType *in);

            NDDSUSERDllExport extern void 
            CameraReportTypePluginSupport_destroy_data_w_params(
                CameraReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CameraReportTypePluginSupport_destroy_data_ex(
                CameraReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraReportTypePluginSupport_destroy_data(
                CameraReportType *sample);

            NDDSUSERDllExport extern void 
            CameraReportTypePluginSupport_print_data(
                const CameraReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CameraReportType*
            CameraReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraReportType*
            CameraReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CameraReportTypePluginSupport_destroy_key_ex(
                CameraReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraReportTypePluginSupport_destroy_key(
                CameraReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CameraReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CameraReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CameraReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CameraReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CameraReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CameraReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraReportType *out,
                const CameraReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CameraReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CameraReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CameraReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CameraReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CameraReportTypePlugin_deserialize_from_cdr_buffer(
                CameraReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CameraReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CameraReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CameraReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CameraReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CameraReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CameraReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraReportTypeKeyHolder *key, 
                const CameraReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CameraReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CameraReportType *instance, 
                const CameraReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CameraReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CameraReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CameraReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CameraStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraReportTypePlugin_1007550522_h */

