

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastTankCommandAckReportTypePlugin_447620218_h
#define BallastTankCommandAckReportTypePlugin_447620218_h

#include "BallastTankCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/BallastTank/BallastTankCommandTypePlugin.hpp"

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
            * By default, this type is struct BallastTankCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BallastTankCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BallastTankCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BallastTankCommandAckReportType.
            */
            typedef class BallastTankCommandAckReportType BallastTankCommandAckReportTypeKeyHolder;

            #define BallastTankCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BallastTankCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BallastTankCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BallastTankCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BallastTankCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BallastTankCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BallastTankCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BallastTankCommandAckReportType*
            BallastTankCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BallastTankCommandAckReportType*
            BallastTankCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastTankCommandAckReportType*
            BallastTankCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandAckReportTypePluginSupport_copy_data(
                BallastTankCommandAckReportType *out,
                const BallastTankCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            BallastTankCommandAckReportTypePluginSupport_destroy_data_w_params(
                BallastTankCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BallastTankCommandAckReportTypePluginSupport_destroy_data_ex(
                BallastTankCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastTankCommandAckReportTypePluginSupport_destroy_data(
                BallastTankCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            BallastTankCommandAckReportTypePluginSupport_print_data(
                const BallastTankCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BallastTankCommandAckReportType*
            BallastTankCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BallastTankCommandAckReportType*
            BallastTankCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BallastTankCommandAckReportTypePluginSupport_destroy_key_ex(
                BallastTankCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BallastTankCommandAckReportTypePluginSupport_destroy_key(
                BallastTankCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BallastTankCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BallastTankCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BallastTankCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BallastTankCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BallastTankCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandAckReportType *out,
                const BallastTankCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BallastTankCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BallastTankCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BallastTankCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                BallastTankCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BallastTankCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BallastTankCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BallastTankCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BallastTankCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandAckReportTypeKeyHolder *key, 
                const BallastTankCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BallastTankCommandAckReportType *instance, 
                const BallastTankCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BallastTankCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BallastTankCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BallastTankCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BallastTank  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BallastTankCommandAckReportTypePlugin_447620218_h */

