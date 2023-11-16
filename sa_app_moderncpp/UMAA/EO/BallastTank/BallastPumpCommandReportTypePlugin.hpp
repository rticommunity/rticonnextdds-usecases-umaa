

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpCommandReportTypePlugin_1243770163_h
#define BallastPumpCommandReportTypePlugin_1243770163_h

#include "BallastPumpCommandReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/BallastTank/BallastPumpFlowRateTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BallastTank {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BallastPumpCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BallastPumpCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BallastPumpCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BallastPumpCommandReportType.
            */
            typedef  class BallastPumpCommandReportType BallastPumpCommandReportTypeKeyHolder;

            #define BallastPumpCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastPumpCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastPumpCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastPumpCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BallastPumpCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BallastPumpCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastPumpCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastPumpCommandReportType*
            BallastPumpCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastPumpCommandReportType*
            BallastPumpCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastPumpCommandReportType*
            BallastPumpCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandReportTypePluginSupport_copy_data(
                BallastPumpCommandReportType *out,
                const BallastPumpCommandReportType *in);

            NDDSUSERDllExport extern void 
            BallastPumpCommandReportTypePluginSupport_destroy_data_w_params(
                BallastPumpCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastPumpCommandReportTypePluginSupport_destroy_data_ex(
                BallastPumpCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastPumpCommandReportTypePluginSupport_destroy_data(
                BallastPumpCommandReportType *sample);

            NDDSUSERDllExport extern void 
            BallastPumpCommandReportTypePluginSupport_print_data(
                const BallastPumpCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BallastPumpCommandReportType*
            BallastPumpCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastPumpCommandReportType*
            BallastPumpCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BallastPumpCommandReportTypePluginSupport_destroy_key_ex(
                BallastPumpCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastPumpCommandReportTypePluginSupport_destroy_key(
                BallastPumpCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BallastPumpCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BallastPumpCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BallastPumpCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BallastPumpCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BallastPumpCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandReportType *out,
                const BallastPumpCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastPumpCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastPumpCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastPumpCommandReportTypePlugin_deserialize_from_cdr_buffer(
                BallastPumpCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastPumpCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastPumpCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastPumpCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandReportTypeKeyHolder *key, 
                const BallastPumpCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BallastPumpCommandReportType *instance, 
                const BallastPumpCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BallastPumpCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BallastPumpCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BallastPumpCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BallastPumpCommandReportTypePlugin_1243770163_h */

