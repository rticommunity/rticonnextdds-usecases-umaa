

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BellControlCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BellControlCommandReportTypePlugin_1845699049_h
#define BellControlCommandReportTypePlugin_1845699049_h

#include "BellControlCommandReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Propulsion/BlastPropertiesTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BellControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BellControlCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BellControlCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BellControlCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BellControlCommandReportType.
            */
            typedef  class BellControlCommandReportType BellControlCommandReportTypeKeyHolder;

            #define BellControlCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BellControlCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BellControlCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BellControlCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BellControlCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BellControlCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BellControlCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BellControlCommandReportType*
            BellControlCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BellControlCommandReportType*
            BellControlCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BellControlCommandReportType*
            BellControlCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandReportTypePluginSupport_copy_data(
                BellControlCommandReportType *out,
                const BellControlCommandReportType *in);

            NDDSUSERDllExport extern void 
            BellControlCommandReportTypePluginSupport_destroy_data_w_params(
                BellControlCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BellControlCommandReportTypePluginSupport_destroy_data_ex(
                BellControlCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BellControlCommandReportTypePluginSupport_destroy_data(
                BellControlCommandReportType *sample);

            NDDSUSERDllExport extern void 
            BellControlCommandReportTypePluginSupport_print_data(
                const BellControlCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BellControlCommandReportType*
            BellControlCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BellControlCommandReportType*
            BellControlCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BellControlCommandReportTypePluginSupport_destroy_key_ex(
                BellControlCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BellControlCommandReportTypePluginSupport_destroy_key(
                BellControlCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BellControlCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BellControlCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BellControlCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BellControlCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BellControlCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandReportType *out,
                const BellControlCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BellControlCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BellControlCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BellControlCommandReportTypePlugin_deserialize_from_cdr_buffer(
                BellControlCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BellControlCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BellControlCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BellControlCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BellControlCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandReportTypeKeyHolder *key, 
                const BellControlCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BellControlCommandReportType *instance, 
                const BellControlCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BellControlCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BellControlCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BellControlCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BellControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BellControlCommandReportTypePlugin_1845699049_h */

