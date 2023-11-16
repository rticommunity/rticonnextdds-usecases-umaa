

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionSpecsReportTypePlugin_146783325_h
#define CameraSelectionSpecsReportTypePlugin_146783325_h

#include "CameraSelectionSpecsReportType.hpp"

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
        namespace CameraSelectionSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CameraSelectionSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CameraSelectionSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CameraSelectionSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CameraSelectionSpecsReportType.
            */
            typedef class CameraSelectionSpecsReportType CameraSelectionSpecsReportTypeKeyHolder;

            #define CameraSelectionSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CameraSelectionSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CameraSelectionSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CameraSelectionSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CameraSelectionSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CameraSelectionSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CameraSelectionSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CameraSelectionSpecsReportType*
            CameraSelectionSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CameraSelectionSpecsReportType*
            CameraSelectionSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionSpecsReportType*
            CameraSelectionSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionSpecsReportTypePluginSupport_copy_data(
                CameraSelectionSpecsReportType *out,
                const CameraSelectionSpecsReportType *in);

            NDDSUSERDllExport extern void 
            CameraSelectionSpecsReportTypePluginSupport_destroy_data_w_params(
                CameraSelectionSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CameraSelectionSpecsReportTypePluginSupport_destroy_data_ex(
                CameraSelectionSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionSpecsReportTypePluginSupport_destroy_data(
                CameraSelectionSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            CameraSelectionSpecsReportTypePluginSupport_print_data(
                const CameraSelectionSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CameraSelectionSpecsReportType*
            CameraSelectionSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CameraSelectionSpecsReportType*
            CameraSelectionSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CameraSelectionSpecsReportTypePluginSupport_destroy_key_ex(
                CameraSelectionSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CameraSelectionSpecsReportTypePluginSupport_destroy_key(
                CameraSelectionSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CameraSelectionSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CameraSelectionSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CameraSelectionSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CameraSelectionSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CameraSelectionSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionSpecsReportType *out,
                const CameraSelectionSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CameraSelectionSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CameraSelectionSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CameraSelectionSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                CameraSelectionSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CameraSelectionSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CameraSelectionSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionSpecsReportTypeKeyHolder *key, 
                const CameraSelectionSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CameraSelectionSpecsReportType *instance, 
                const CameraSelectionSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CameraSelectionSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CameraSelectionSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CameraSelectionSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CameraSelectionSpecs  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraSelectionSpecsReportTypePlugin_146783325_h */

