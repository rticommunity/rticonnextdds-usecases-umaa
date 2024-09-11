

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InertialSensorReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef InertialSensorReportTypePlugin_1033786812_h
#define InertialSensorReportTypePlugin_1033786812_h

#include "InertialSensorReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace InertialSensorStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct InertialSensorReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct InertialSensorReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * InertialSensorReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct InertialSensorReportType.
            */
            typedef class InertialSensorReportType InertialSensorReportTypeKeyHolder;

            #define InertialSensorReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define InertialSensorReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define InertialSensorReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define InertialSensorReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define InertialSensorReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define InertialSensorReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define InertialSensorReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern InertialSensorReportType*
            InertialSensorReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern InertialSensorReportType*
            InertialSensorReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern InertialSensorReportType*
            InertialSensorReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorReportTypePluginSupport_copy_data(
                InertialSensorReportType *out,
                const InertialSensorReportType *in);

            NDDSUSERDllExport extern void 
            InertialSensorReportTypePluginSupport_destroy_data_w_params(
                InertialSensorReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            InertialSensorReportTypePluginSupport_destroy_data_ex(
                InertialSensorReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            InertialSensorReportTypePluginSupport_destroy_data(
                InertialSensorReportType *sample);

            NDDSUSERDllExport extern void 
            InertialSensorReportTypePluginSupport_print_data(
                const InertialSensorReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern InertialSensorReportType*
            InertialSensorReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern InertialSensorReportType*
            InertialSensorReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            InertialSensorReportTypePluginSupport_destroy_key_ex(
                InertialSensorReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            InertialSensorReportTypePluginSupport_destroy_key(
                InertialSensorReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            InertialSensorReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            InertialSensorReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            InertialSensorReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            InertialSensorReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            InertialSensorReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            InertialSensorReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorReportType *out,
                const InertialSensorReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            InertialSensorReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const InertialSensorReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            InertialSensorReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            InertialSensorReportTypePlugin_deserialize_from_cdr_buffer(
                InertialSensorReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            InertialSensorReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            InertialSensorReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            InertialSensorReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            InertialSensorReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorReportTypeKeyHolder *key, 
                const InertialSensorReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                InertialSensorReportType *instance, 
                const InertialSensorReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            InertialSensorReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            InertialSensorReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            InertialSensorReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace InertialSensorStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* InertialSensorReportTypePlugin_1033786812_h */

