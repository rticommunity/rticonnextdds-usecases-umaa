

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LandmarkReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LandmarkReportTypePlugin_179523790_h
#define LandmarkReportTypePlugin_179523790_h

#include "LandmarkReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
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
        namespace LandmarkReport {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LandmarkReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LandmarkReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LandmarkReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LandmarkReportType.
            */
            typedef class LandmarkReportType LandmarkReportTypeKeyHolder;

            #define LandmarkReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LandmarkReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LandmarkReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LandmarkReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LandmarkReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LandmarkReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LandmarkReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LandmarkReportType*
            LandmarkReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LandmarkReportType*
            LandmarkReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LandmarkReportType*
            LandmarkReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LandmarkReportTypePluginSupport_copy_data(
                LandmarkReportType *out,
                const LandmarkReportType *in);

            NDDSUSERDllExport extern void 
            LandmarkReportTypePluginSupport_destroy_data_w_params(
                LandmarkReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LandmarkReportTypePluginSupport_destroy_data_ex(
                LandmarkReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LandmarkReportTypePluginSupport_destroy_data(
                LandmarkReportType *sample);

            NDDSUSERDllExport extern void 
            LandmarkReportTypePluginSupport_print_data(
                const LandmarkReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LandmarkReportType*
            LandmarkReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LandmarkReportType*
            LandmarkReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LandmarkReportTypePluginSupport_destroy_key_ex(
                LandmarkReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LandmarkReportTypePluginSupport_destroy_key(
                LandmarkReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LandmarkReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LandmarkReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LandmarkReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LandmarkReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LandmarkReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LandmarkReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LandmarkReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LandmarkReportType *out,
                const LandmarkReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LandmarkReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LandmarkReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LandmarkReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LandmarkReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LandmarkReportTypePlugin_deserialize_from_cdr_buffer(
                LandmarkReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LandmarkReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LandmarkReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LandmarkReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LandmarkReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LandmarkReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LandmarkReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LandmarkReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LandmarkReportTypeKeyHolder *key, 
                const LandmarkReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            LandmarkReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LandmarkReportType *instance, 
                const LandmarkReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LandmarkReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LandmarkReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LandmarkReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LandmarkReport  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LandmarkReportTypePlugin_179523790_h */

