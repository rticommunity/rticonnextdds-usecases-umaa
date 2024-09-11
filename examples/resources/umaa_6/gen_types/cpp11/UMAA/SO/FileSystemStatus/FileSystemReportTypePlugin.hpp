

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileSystemReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FileSystemReportTypePlugin_1395584072_h
#define FileSystemReportTypePlugin_1395584072_h

#include "FileSystemReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
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
        namespace FileSystemStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct FileSystemReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct FileSystemReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * FileSystemReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct FileSystemReportType.
            */
            typedef class FileSystemReportType FileSystemReportTypeKeyHolder;

            #define FileSystemReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define FileSystemReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define FileSystemReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define FileSystemReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define FileSystemReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define FileSystemReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define FileSystemReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern FileSystemReportType*
            FileSystemReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern FileSystemReportType*
            FileSystemReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FileSystemReportType*
            FileSystemReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            FileSystemReportTypePluginSupport_copy_data(
                FileSystemReportType *out,
                const FileSystemReportType *in);

            NDDSUSERDllExport extern void 
            FileSystemReportTypePluginSupport_destroy_data_w_params(
                FileSystemReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            FileSystemReportTypePluginSupport_destroy_data_ex(
                FileSystemReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FileSystemReportTypePluginSupport_destroy_data(
                FileSystemReportType *sample);

            NDDSUSERDllExport extern void 
            FileSystemReportTypePluginSupport_print_data(
                const FileSystemReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern FileSystemReportType*
            FileSystemReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern FileSystemReportType*
            FileSystemReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            FileSystemReportTypePluginSupport_destroy_key_ex(
                FileSystemReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            FileSystemReportTypePluginSupport_destroy_key(
                FileSystemReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            FileSystemReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            FileSystemReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            FileSystemReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            FileSystemReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            FileSystemReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                FileSystemReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            FileSystemReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                FileSystemReportType *out,
                const FileSystemReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            FileSystemReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const FileSystemReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            FileSystemReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                FileSystemReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            FileSystemReportTypePlugin_deserialize_from_cdr_buffer(
                FileSystemReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            FileSystemReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            FileSystemReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            FileSystemReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            FileSystemReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            FileSystemReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                FileSystemReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            FileSystemReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                FileSystemReportTypeKeyHolder *key, 
                const FileSystemReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            FileSystemReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                FileSystemReportType *instance, 
                const FileSystemReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            FileSystemReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            FileSystemReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            FileSystemReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace FileSystemStatus  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FileSystemReportTypePlugin_1395584072_h */

