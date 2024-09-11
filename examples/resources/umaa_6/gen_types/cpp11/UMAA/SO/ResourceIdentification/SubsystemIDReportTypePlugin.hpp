

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SubsystemIDReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SubsystemIDReportTypePlugin_1513266196_h
#define SubsystemIDReportTypePlugin_1513266196_h

#include "SubsystemIDReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace ResourceIdentification {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct SubsystemIDReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct SubsystemIDReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * SubsystemIDReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct SubsystemIDReportType.
            */
            typedef class SubsystemIDReportType SubsystemIDReportTypeKeyHolder;

            #define SubsystemIDReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define SubsystemIDReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define SubsystemIDReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define SubsystemIDReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define SubsystemIDReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define SubsystemIDReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define SubsystemIDReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern SubsystemIDReportType*
            SubsystemIDReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern SubsystemIDReportType*
            SubsystemIDReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SubsystemIDReportType*
            SubsystemIDReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            SubsystemIDReportTypePluginSupport_copy_data(
                SubsystemIDReportType *out,
                const SubsystemIDReportType *in);

            NDDSUSERDllExport extern void 
            SubsystemIDReportTypePluginSupport_destroy_data_w_params(
                SubsystemIDReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            SubsystemIDReportTypePluginSupport_destroy_data_ex(
                SubsystemIDReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SubsystemIDReportTypePluginSupport_destroy_data(
                SubsystemIDReportType *sample);

            NDDSUSERDllExport extern void 
            SubsystemIDReportTypePluginSupport_print_data(
                const SubsystemIDReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern SubsystemIDReportType*
            SubsystemIDReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern SubsystemIDReportType*
            SubsystemIDReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            SubsystemIDReportTypePluginSupport_destroy_key_ex(
                SubsystemIDReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            SubsystemIDReportTypePluginSupport_destroy_key(
                SubsystemIDReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            SubsystemIDReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            SubsystemIDReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            SubsystemIDReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            SubsystemIDReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            SubsystemIDReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                SubsystemIDReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            SubsystemIDReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                SubsystemIDReportType *out,
                const SubsystemIDReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            SubsystemIDReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const SubsystemIDReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            SubsystemIDReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                SubsystemIDReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            SubsystemIDReportTypePlugin_deserialize_from_cdr_buffer(
                SubsystemIDReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            SubsystemIDReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            SubsystemIDReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            SubsystemIDReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            SubsystemIDReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            SubsystemIDReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                SubsystemIDReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            SubsystemIDReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                SubsystemIDReportTypeKeyHolder *key, 
                const SubsystemIDReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            SubsystemIDReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                SubsystemIDReportType *instance, 
                const SubsystemIDReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            SubsystemIDReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            SubsystemIDReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            SubsystemIDReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ResourceIdentification  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SubsystemIDReportTypePlugin_1513266196_h */

