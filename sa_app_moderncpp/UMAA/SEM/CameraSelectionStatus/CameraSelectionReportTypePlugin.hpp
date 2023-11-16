

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionReportTypePlugin_1381006136_h
#define CameraSelectionReportTypePlugin_1381006136_h

#include "CameraSelectionReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace CameraSelectionStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CameraSelectionReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CameraSelectionReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CameraSelectionReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CameraSelectionReportType.
            */
            typedef  class CameraSelectionReportType CameraSelectionReportTypeKeyHolder;

            #define CameraSelectionReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CameraSelectionReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CameraSelectionReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CameraSelectionReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CameraSelectionReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CameraSelectionReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CameraSelectionReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CameraSelectionReportType*
            CameraSelectionReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CameraSelectionReportType*
            CameraSelectionReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionReportType*
            CameraSelectionReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionReportTypePluginSupport_copy_data(
                CameraSelectionReportType *out,
                const CameraSelectionReportType *in);

            NDDSUSERDllExport extern void 
            CameraSelectionReportTypePluginSupport_destroy_data_w_params(
                CameraSelectionReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CameraSelectionReportTypePluginSupport_destroy_data_ex(
                CameraSelectionReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionReportTypePluginSupport_destroy_data(
                CameraSelectionReportType *sample);

            NDDSUSERDllExport extern void 
            CameraSelectionReportTypePluginSupport_print_data(
                const CameraSelectionReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CameraSelectionReportType*
            CameraSelectionReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionReportType*
            CameraSelectionReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CameraSelectionReportTypePluginSupport_destroy_key_ex(
                CameraSelectionReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionReportTypePluginSupport_destroy_key(
                CameraSelectionReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CameraSelectionReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CameraSelectionReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CameraSelectionReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CameraSelectionReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CameraSelectionReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionReportType *out,
                const CameraSelectionReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CameraSelectionReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CameraSelectionReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CameraSelectionReportTypePlugin_deserialize_from_cdr_buffer(
                CameraSelectionReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CameraSelectionReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionReportTypeKeyHolder *key, 
                const CameraSelectionReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionReportType *instance, 
                const CameraSelectionReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CameraSelectionReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CameraSelectionReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CameraSelectionStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraSelectionReportTypePlugin_1381006136_h */

