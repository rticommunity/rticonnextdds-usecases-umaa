

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SeaStateReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SeaStateReportTypePlugin_2026684814_h
#define SeaStateReportTypePlugin_2026684814_h

#include "SeaStateReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
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
        namespace SeaStateReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SeaStateReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SeaStateReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SeaStateReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SeaStateReportType.
            */
            typedef class SeaStateReportType SeaStateReportTypeKeyHolder;

            #define SeaStateReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SeaStateReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SeaStateReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SeaStateReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SeaStateReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SeaStateReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SeaStateReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SeaStateReportType*
            SeaStateReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SeaStateReportType*
            SeaStateReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SeaStateReportType*
            SeaStateReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SeaStateReportTypePluginSupport_copy_data(
                SeaStateReportType *out,
                const SeaStateReportType *in);

            NDDSUSERDllExport extern void 
            SeaStateReportTypePluginSupport_destroy_data_w_params(
                SeaStateReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SeaStateReportTypePluginSupport_destroy_data_ex(
                SeaStateReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SeaStateReportTypePluginSupport_destroy_data(
                SeaStateReportType *sample);

            NDDSUSERDllExport extern void 
            SeaStateReportTypePluginSupport_print_data(
                const SeaStateReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SeaStateReportType*
            SeaStateReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SeaStateReportType*
            SeaStateReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SeaStateReportTypePluginSupport_destroy_key_ex(
                SeaStateReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SeaStateReportTypePluginSupport_destroy_key(
                SeaStateReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SeaStateReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SeaStateReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SeaStateReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SeaStateReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SeaStateReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SeaStateReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SeaStateReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SeaStateReportType *out,
                const SeaStateReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SeaStateReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SeaStateReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SeaStateReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SeaStateReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SeaStateReportTypePlugin_deserialize_from_cdr_buffer(
                SeaStateReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SeaStateReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SeaStateReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SeaStateReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SeaStateReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SeaStateReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SeaStateReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SeaStateReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SeaStateReportTypeKeyHolder *key, 
                const SeaStateReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SeaStateReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SeaStateReportType *instance, 
                const SeaStateReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SeaStateReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SeaStateReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SeaStateReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace SeaStateReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SeaStateReportTypePlugin_2026684814_h */

