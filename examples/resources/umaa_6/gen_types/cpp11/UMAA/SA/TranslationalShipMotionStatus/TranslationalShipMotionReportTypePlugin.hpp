

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TranslationalShipMotionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TranslationalShipMotionReportTypePlugin_1153455427_h
#define TranslationalShipMotionReportTypePlugin_1153455427_h

#include "TranslationalShipMotionReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MeasurementCoordinate/EngineeringCoordinateAxesPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace TranslationalShipMotionStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct TranslationalShipMotionReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct TranslationalShipMotionReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * TranslationalShipMotionReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct TranslationalShipMotionReportType.
            */
            typedef class TranslationalShipMotionReportType TranslationalShipMotionReportTypeKeyHolder;

            #define TranslationalShipMotionReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define TranslationalShipMotionReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define TranslationalShipMotionReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define TranslationalShipMotionReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define TranslationalShipMotionReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define TranslationalShipMotionReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define TranslationalShipMotionReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern TranslationalShipMotionReportType*
            TranslationalShipMotionReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern TranslationalShipMotionReportType*
            TranslationalShipMotionReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TranslationalShipMotionReportType*
            TranslationalShipMotionReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            TranslationalShipMotionReportTypePluginSupport_copy_data(
                TranslationalShipMotionReportType *out,
                const TranslationalShipMotionReportType *in);

            NDDSUSERDllExport extern void 
            TranslationalShipMotionReportTypePluginSupport_destroy_data_w_params(
                TranslationalShipMotionReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            TranslationalShipMotionReportTypePluginSupport_destroy_data_ex(
                TranslationalShipMotionReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TranslationalShipMotionReportTypePluginSupport_destroy_data(
                TranslationalShipMotionReportType *sample);

            NDDSUSERDllExport extern void 
            TranslationalShipMotionReportTypePluginSupport_print_data(
                const TranslationalShipMotionReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern TranslationalShipMotionReportType*
            TranslationalShipMotionReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern TranslationalShipMotionReportType*
            TranslationalShipMotionReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            TranslationalShipMotionReportTypePluginSupport_destroy_key_ex(
                TranslationalShipMotionReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            TranslationalShipMotionReportTypePluginSupport_destroy_key(
                TranslationalShipMotionReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            TranslationalShipMotionReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            TranslationalShipMotionReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            TranslationalShipMotionReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            TranslationalShipMotionReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            TranslationalShipMotionReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                TranslationalShipMotionReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            TranslationalShipMotionReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                TranslationalShipMotionReportType *out,
                const TranslationalShipMotionReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            TranslationalShipMotionReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const TranslationalShipMotionReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            TranslationalShipMotionReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                TranslationalShipMotionReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            TranslationalShipMotionReportTypePlugin_deserialize_from_cdr_buffer(
                TranslationalShipMotionReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            TranslationalShipMotionReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            TranslationalShipMotionReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            TranslationalShipMotionReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            TranslationalShipMotionReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            TranslationalShipMotionReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                TranslationalShipMotionReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            TranslationalShipMotionReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                TranslationalShipMotionReportTypeKeyHolder *key, 
                const TranslationalShipMotionReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            TranslationalShipMotionReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                TranslationalShipMotionReportType *instance, 
                const TranslationalShipMotionReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            TranslationalShipMotionReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            TranslationalShipMotionReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            TranslationalShipMotionReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace TranslationalShipMotionStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TranslationalShipMotionReportTypePlugin_1153455427_h */

