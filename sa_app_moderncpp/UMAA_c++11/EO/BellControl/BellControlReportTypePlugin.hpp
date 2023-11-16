

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BellControlReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BellControlReportTypePlugin_1875897010_h
#define BellControlReportTypePlugin_1875897010_h

#include "BellControlReportType.hpp"

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
        namespace BellControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BellControlReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BellControlReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BellControlReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BellControlReportType.
            */
            typedef class BellControlReportType BellControlReportTypeKeyHolder;

            #define BellControlReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BellControlReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BellControlReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BellControlReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BellControlReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BellControlReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BellControlReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BellControlReportType*
            BellControlReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BellControlReportType*
            BellControlReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BellControlReportType*
            BellControlReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BellControlReportTypePluginSupport_copy_data(
                BellControlReportType *out,
                const BellControlReportType *in);

            NDDSUSERDllExport extern void 
            BellControlReportTypePluginSupport_destroy_data_w_params(
                BellControlReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BellControlReportTypePluginSupport_destroy_data_ex(
                BellControlReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BellControlReportTypePluginSupport_destroy_data(
                BellControlReportType *sample);

            NDDSUSERDllExport extern void 
            BellControlReportTypePluginSupport_print_data(
                const BellControlReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BellControlReportType*
            BellControlReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BellControlReportType*
            BellControlReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BellControlReportTypePluginSupport_destroy_key_ex(
                BellControlReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BellControlReportTypePluginSupport_destroy_key(
                BellControlReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BellControlReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BellControlReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BellControlReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BellControlReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BellControlReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BellControlReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BellControlReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BellControlReportType *out,
                const BellControlReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BellControlReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BellControlReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BellControlReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BellControlReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BellControlReportTypePlugin_deserialize_from_cdr_buffer(
                BellControlReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BellControlReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BellControlReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BellControlReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BellControlReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BellControlReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BellControlReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BellControlReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BellControlReportTypeKeyHolder *key, 
                const BellControlReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BellControlReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BellControlReportType *instance, 
                const BellControlReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BellControlReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BellControlReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BellControlReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BellControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BellControlReportTypePlugin_1875897010_h */

