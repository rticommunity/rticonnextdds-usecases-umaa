

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SeaStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SeaStatusReportTypePlugin_507414258_h
#define SeaStatusReportTypePlugin_507414258_h

#include "SeaStatusReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/OrderedEnumeration/OrderedEnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace SeaStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SeaStatusReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SeaStatusReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SeaStatusReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SeaStatusReportType.
            */
            typedef class SeaStatusReportType SeaStatusReportTypeKeyHolder;

            #define SeaStatusReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SeaStatusReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SeaStatusReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SeaStatusReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SeaStatusReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SeaStatusReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SeaStatusReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SeaStatusReportType*
            SeaStatusReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SeaStatusReportType*
            SeaStatusReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SeaStatusReportType*
            SeaStatusReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SeaStatusReportTypePluginSupport_copy_data(
                SeaStatusReportType *out,
                const SeaStatusReportType *in);

            NDDSUSERDllExport extern void 
            SeaStatusReportTypePluginSupport_destroy_data_w_params(
                SeaStatusReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SeaStatusReportTypePluginSupport_destroy_data_ex(
                SeaStatusReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SeaStatusReportTypePluginSupport_destroy_data(
                SeaStatusReportType *sample);

            NDDSUSERDllExport extern void 
            SeaStatusReportTypePluginSupport_print_data(
                const SeaStatusReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SeaStatusReportType*
            SeaStatusReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SeaStatusReportType*
            SeaStatusReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SeaStatusReportTypePluginSupport_destroy_key_ex(
                SeaStatusReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SeaStatusReportTypePluginSupport_destroy_key(
                SeaStatusReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SeaStatusReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SeaStatusReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SeaStatusReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SeaStatusReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SeaStatusReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SeaStatusReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SeaStatusReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SeaStatusReportType *out,
                const SeaStatusReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SeaStatusReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SeaStatusReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SeaStatusReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SeaStatusReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SeaStatusReportTypePlugin_deserialize_from_cdr_buffer(
                SeaStatusReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SeaStatusReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SeaStatusReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SeaStatusReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SeaStatusReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SeaStatusReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SeaStatusReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SeaStatusReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SeaStatusReportTypeKeyHolder *key, 
                const SeaStatusReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SeaStatusReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SeaStatusReportType *instance, 
                const SeaStatusReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SeaStatusReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SeaStatusReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SeaStatusReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SeaStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SeaStatusReportTypePlugin_507414258_h */

