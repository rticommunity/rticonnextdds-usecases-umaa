

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SoftwareVersionReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SoftwareVersionReportTypePlugin_1126667748_h
#define SoftwareVersionReportTypePlugin_1126667748_h

#include "SoftwareVersionReportType.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.h"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C"{

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct SoftwareVersionReportType
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct SoftwareVersionReportType)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * SoftwareVersionReportType must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct SoftwareVersionReportType.
    */
    typedef  class UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeKeyHolder;

    #define UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType*
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType*
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType*
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_copy_data(
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *out,
        const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *in);

    NDDSUSERDllExport extern void 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_destroy_data_w_params(
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_destroy_data_ex(
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_destroy_data(
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *sample);

    NDDSUSERDllExport extern void 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_print_data(
        const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType*
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType*
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_destroy_key_ex(
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePluginSupport_destroy_key(
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *out,
        const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *sample); 

    NDDSUSERDllExport extern RTIBool
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_deserialize_from_cdr_buffer(
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *sample,
        const char * buffer,
        unsigned int length);    
    #if !defined (NDDS_STANDALONE_TYPE)
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_data_to_string(
        const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeKeyHolder *key, 
        const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *instance);

    NDDSUSERDllExport extern RTIBool 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportType *instance, 
        const UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypeKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_new(void);

    NDDSUSERDllExport extern void
    UMAA_SO_SoftwareVersionStatus_SoftwareVersionReportTypePlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SoftwareVersionReportTypePlugin_1126667748_h */

