

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmitterReportTypePlugin_874999388_h
#define EmitterReportTypePlugin_874999388_h

#include "EmitterReportType.hpp"

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
    namespace SO {
        namespace EmitterReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EmitterReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmitterReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmitterReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmitterReportType.
            */
            typedef class EmitterReportType EmitterReportTypeKeyHolder;

            #define EmitterReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmitterReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmitterReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmitterReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmitterReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmitterReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmitterReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmitterReportType*
            EmitterReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmitterReportType*
            EmitterReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterReportType*
            EmitterReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmitterReportTypePluginSupport_copy_data(
                EmitterReportType *out,
                const EmitterReportType *in);

            NDDSUSERDllExport extern void 
            EmitterReportTypePluginSupport_destroy_data_w_params(
                EmitterReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmitterReportTypePluginSupport_destroy_data_ex(
                EmitterReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterReportTypePluginSupport_destroy_data(
                EmitterReportType *sample);

            NDDSUSERDllExport extern void 
            EmitterReportTypePluginSupport_print_data(
                const EmitterReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmitterReportType*
            EmitterReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmitterReportType*
            EmitterReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmitterReportTypePluginSupport_destroy_key_ex(
                EmitterReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmitterReportTypePluginSupport_destroy_key(
                EmitterReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmitterReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmitterReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmitterReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmitterReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmitterReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmitterReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmitterReportType *out,
                const EmitterReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmitterReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmitterReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmitterReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmitterReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmitterReportTypePlugin_deserialize_from_cdr_buffer(
                EmitterReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmitterReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmitterReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmitterReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmitterReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmitterReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmitterReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmitterReportTypeKeyHolder *key, 
                const EmitterReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmitterReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmitterReportType *instance, 
                const EmitterReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmitterReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmitterReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmitterReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EmitterReport  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmitterReportTypePlugin_874999388_h */

