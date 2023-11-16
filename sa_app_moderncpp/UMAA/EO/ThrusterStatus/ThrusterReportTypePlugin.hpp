

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ThrusterReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ThrusterReportTypePlugin_1988500792_h
#define ThrusterReportTypePlugin_1988500792_h

#include "ThrusterReportType.hpp"

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
        namespace ThrusterStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ThrusterReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ThrusterReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ThrusterReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ThrusterReportType.
            */
            typedef  class ThrusterReportType ThrusterReportTypeKeyHolder;

            #define ThrusterReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ThrusterReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ThrusterReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ThrusterReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ThrusterReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ThrusterReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ThrusterReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ThrusterReportType*
            ThrusterReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ThrusterReportType*
            ThrusterReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ThrusterReportType*
            ThrusterReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ThrusterReportTypePluginSupport_copy_data(
                ThrusterReportType *out,
                const ThrusterReportType *in);

            NDDSUSERDllExport extern void 
            ThrusterReportTypePluginSupport_destroy_data_w_params(
                ThrusterReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ThrusterReportTypePluginSupport_destroy_data_ex(
                ThrusterReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ThrusterReportTypePluginSupport_destroy_data(
                ThrusterReportType *sample);

            NDDSUSERDllExport extern void 
            ThrusterReportTypePluginSupport_print_data(
                const ThrusterReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ThrusterReportType*
            ThrusterReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ThrusterReportType*
            ThrusterReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ThrusterReportTypePluginSupport_destroy_key_ex(
                ThrusterReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ThrusterReportTypePluginSupport_destroy_key(
                ThrusterReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ThrusterReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ThrusterReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ThrusterReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ThrusterReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ThrusterReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ThrusterReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterReportType *out,
                const ThrusterReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ThrusterReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ThrusterReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ThrusterReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ThrusterReportTypePlugin_deserialize_from_cdr_buffer(
                ThrusterReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ThrusterReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ThrusterReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ThrusterReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ThrusterReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ThrusterReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ThrusterReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterReportTypeKeyHolder *key, 
                const ThrusterReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ThrusterReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ThrusterReportType *instance, 
                const ThrusterReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ThrusterReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ThrusterReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ThrusterReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ThrusterStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ThrusterReportTypePlugin_1988500792_h */

