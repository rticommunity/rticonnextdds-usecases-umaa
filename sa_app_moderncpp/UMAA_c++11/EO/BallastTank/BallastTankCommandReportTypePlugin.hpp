

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastTankCommandReportTypePlugin_1415146465_h
#define BallastTankCommandReportTypePlugin_1415146465_h

#include "BallastTankCommandReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/BallastTank/BallastFillTypePlugin.hpp"

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
            * By default, this type is struct BallastTankCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BallastTankCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BallastTankCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BallastTankCommandReportType.
            */
            typedef class BallastTankCommandReportType BallastTankCommandReportTypeKeyHolder;

            #define BallastTankCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastTankCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastTankCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastTankCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BallastTankCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BallastTankCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastTankCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastTankCommandReportType*
            BallastTankCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastTankCommandReportType*
            BallastTankCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastTankCommandReportType*
            BallastTankCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandReportTypePluginSupport_copy_data(
                BallastTankCommandReportType *out,
                const BallastTankCommandReportType *in);

            NDDSUSERDllExport extern void 
            BallastTankCommandReportTypePluginSupport_destroy_data_w_params(
                BallastTankCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastTankCommandReportTypePluginSupport_destroy_data_ex(
                BallastTankCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastTankCommandReportTypePluginSupport_destroy_data(
                BallastTankCommandReportType *sample);

            NDDSUSERDllExport extern void 
            BallastTankCommandReportTypePluginSupport_print_data(
                const BallastTankCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BallastTankCommandReportType*
            BallastTankCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastTankCommandReportType*
            BallastTankCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BallastTankCommandReportTypePluginSupport_destroy_key_ex(
                BallastTankCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastTankCommandReportTypePluginSupport_destroy_key(
                BallastTankCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BallastTankCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BallastTankCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BallastTankCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BallastTankCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BallastTankCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandReportType *out,
                const BallastTankCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastTankCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastTankCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastTankCommandReportTypePlugin_deserialize_from_cdr_buffer(
                BallastTankCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastTankCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastTankCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastTankCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastTankCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandReportTypeKeyHolder *key, 
                const BallastTankCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandReportType *instance, 
                const BallastTankCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BallastTankCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BallastTankCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BallastTankCommandReportTypePlugin_1415146465_h */

