

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GongControlReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GongControlReportTypePlugin_252200848_h
#define GongControlReportTypePlugin_252200848_h

#include "GongControlReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace GongControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GongControlReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GongControlReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GongControlReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GongControlReportType.
            */
            typedef class GongControlReportType GongControlReportTypeKeyHolder;

            #define GongControlReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GongControlReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GongControlReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GongControlReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GongControlReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GongControlReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GongControlReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GongControlReportType*
            GongControlReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GongControlReportType*
            GongControlReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GongControlReportType*
            GongControlReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GongControlReportTypePluginSupport_copy_data(
                GongControlReportType *out,
                const GongControlReportType *in);

            NDDSUSERDllExport extern void 
            GongControlReportTypePluginSupport_destroy_data_w_params(
                GongControlReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GongControlReportTypePluginSupport_destroy_data_ex(
                GongControlReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GongControlReportTypePluginSupport_destroy_data(
                GongControlReportType *sample);

            NDDSUSERDllExport extern void 
            GongControlReportTypePluginSupport_print_data(
                const GongControlReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GongControlReportType*
            GongControlReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GongControlReportType*
            GongControlReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GongControlReportTypePluginSupport_destroy_key_ex(
                GongControlReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GongControlReportTypePluginSupport_destroy_key(
                GongControlReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GongControlReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GongControlReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GongControlReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GongControlReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GongControlReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GongControlReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GongControlReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GongControlReportType *out,
                const GongControlReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GongControlReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GongControlReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GongControlReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GongControlReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GongControlReportTypePlugin_deserialize_from_cdr_buffer(
                GongControlReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GongControlReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GongControlReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GongControlReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GongControlReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GongControlReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GongControlReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GongControlReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GongControlReportTypeKeyHolder *key, 
                const GongControlReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GongControlReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GongControlReportType *instance, 
                const GongControlReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GongControlReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GongControlReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GongControlReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GongControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GongControlReportTypePlugin_252200848_h */

