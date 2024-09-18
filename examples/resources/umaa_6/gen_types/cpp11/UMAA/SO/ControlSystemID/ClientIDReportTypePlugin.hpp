

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ClientIDReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ClientIDReportTypePlugin_309797481_h
#define ClientIDReportTypePlugin_309797481_h

#include "ClientIDReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

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
        namespace ControlSystemID {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ClientIDReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ClientIDReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ClientIDReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ClientIDReportType.
            */
            typedef class ClientIDReportType ClientIDReportTypeKeyHolder;

            #define ClientIDReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ClientIDReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ClientIDReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ClientIDReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ClientIDReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ClientIDReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ClientIDReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ClientIDReportType*
            ClientIDReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ClientIDReportType*
            ClientIDReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ClientIDReportType*
            ClientIDReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ClientIDReportTypePluginSupport_copy_data(
                ClientIDReportType *out,
                const ClientIDReportType *in);

            NDDSUSERDllExport extern void 
            ClientIDReportTypePluginSupport_destroy_data_w_params(
                ClientIDReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ClientIDReportTypePluginSupport_destroy_data_ex(
                ClientIDReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ClientIDReportTypePluginSupport_destroy_data(
                ClientIDReportType *sample);

            NDDSUSERDllExport extern void 
            ClientIDReportTypePluginSupport_print_data(
                const ClientIDReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ClientIDReportType*
            ClientIDReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ClientIDReportType*
            ClientIDReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ClientIDReportTypePluginSupport_destroy_key_ex(
                ClientIDReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ClientIDReportTypePluginSupport_destroy_key(
                ClientIDReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ClientIDReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ClientIDReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ClientIDReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ClientIDReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ClientIDReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ClientIDReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ClientIDReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ClientIDReportType *out,
                const ClientIDReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ClientIDReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ClientIDReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ClientIDReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ClientIDReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ClientIDReportTypePlugin_deserialize_from_cdr_buffer(
                ClientIDReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ClientIDReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ClientIDReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ClientIDReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ClientIDReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ClientIDReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ClientIDReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ClientIDReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ClientIDReportTypeKeyHolder *key, 
                const ClientIDReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ClientIDReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ClientIDReportType *instance, 
                const ClientIDReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ClientIDReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ClientIDReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ClientIDReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ControlSystemID  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ClientIDReportTypePlugin_309797481_h */
