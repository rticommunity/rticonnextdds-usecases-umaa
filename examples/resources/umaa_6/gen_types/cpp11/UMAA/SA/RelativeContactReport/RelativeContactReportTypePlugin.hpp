

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RelativeContactReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RelativeContactReportTypePlugin_1975184473_h
#define RelativeContactReportTypePlugin_1975184473_h

#include "RelativeContactReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace RelativeContactReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RelativeContactReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RelativeContactReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RelativeContactReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RelativeContactReportType.
            */
            typedef class RelativeContactReportType RelativeContactReportTypeKeyHolder;

            #define RelativeContactReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RelativeContactReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RelativeContactReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RelativeContactReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RelativeContactReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RelativeContactReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RelativeContactReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RelativeContactReportType*
            RelativeContactReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RelativeContactReportType*
            RelativeContactReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RelativeContactReportType*
            RelativeContactReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RelativeContactReportTypePluginSupport_copy_data(
                RelativeContactReportType *out,
                const RelativeContactReportType *in);

            NDDSUSERDllExport extern void 
            RelativeContactReportTypePluginSupport_destroy_data_w_params(
                RelativeContactReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RelativeContactReportTypePluginSupport_destroy_data_ex(
                RelativeContactReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RelativeContactReportTypePluginSupport_destroy_data(
                RelativeContactReportType *sample);

            NDDSUSERDllExport extern void 
            RelativeContactReportTypePluginSupport_print_data(
                const RelativeContactReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RelativeContactReportType*
            RelativeContactReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RelativeContactReportType*
            RelativeContactReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RelativeContactReportTypePluginSupport_destroy_key_ex(
                RelativeContactReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RelativeContactReportTypePluginSupport_destroy_key(
                RelativeContactReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RelativeContactReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RelativeContactReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RelativeContactReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RelativeContactReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RelativeContactReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RelativeContactReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RelativeContactReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RelativeContactReportType *out,
                const RelativeContactReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RelativeContactReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RelativeContactReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RelativeContactReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RelativeContactReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RelativeContactReportTypePlugin_deserialize_from_cdr_buffer(
                RelativeContactReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RelativeContactReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RelativeContactReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RelativeContactReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RelativeContactReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RelativeContactReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RelativeContactReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RelativeContactReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RelativeContactReportTypeKeyHolder *key, 
                const RelativeContactReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            RelativeContactReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RelativeContactReportType *instance, 
                const RelativeContactReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RelativeContactReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RelativeContactReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RelativeContactReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RelativeContactReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RelativeContactReportTypePlugin_1975184473_h */

