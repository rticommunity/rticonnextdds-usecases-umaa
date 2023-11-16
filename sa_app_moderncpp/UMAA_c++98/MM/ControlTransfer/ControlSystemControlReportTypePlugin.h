

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemControlReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemControlReportTypePlugin_226879613_h
#define ControlSystemControlReportTypePlugin_226879613_h

#include "ControlSystemControlReportType.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.h"
#include "UMAA/Common/Measurement/MeasurementsPlugin.h"

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
    * By default, this type is struct ControlSystemControlReportType
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ControlSystemControlReportType)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ControlSystemControlReportType must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ControlSystemControlReportType.
    */
    typedef  class UMAA_MM_ControlTransfer_ControlSystemControlReportType UMAA_MM_ControlTransfer_ControlSystemControlReportTypeKeyHolder;

    #define UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_MM_ControlTransfer_ControlSystemControlReportType*
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_MM_ControlTransfer_ControlSystemControlReportType*
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_MM_ControlTransfer_ControlSystemControlReportType*
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_copy_data(
        UMAA_MM_ControlTransfer_ControlSystemControlReportType *out,
        const UMAA_MM_ControlTransfer_ControlSystemControlReportType *in);

    NDDSUSERDllExport extern void 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_destroy_data_w_params(
        UMAA_MM_ControlTransfer_ControlSystemControlReportType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_destroy_data_ex(
        UMAA_MM_ControlTransfer_ControlSystemControlReportType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_destroy_data(
        UMAA_MM_ControlTransfer_ControlSystemControlReportType *sample);

    NDDSUSERDllExport extern void 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_print_data(
        const UMAA_MM_ControlTransfer_ControlSystemControlReportType *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern UMAA_MM_ControlTransfer_ControlSystemControlReportType*
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_MM_ControlTransfer_ControlSystemControlReportType*
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_destroy_key_ex(
        UMAA_MM_ControlTransfer_ControlSystemControlReportTypeKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePluginSupport_destroy_key(
        UMAA_MM_ControlTransfer_ControlSystemControlReportTypeKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_MM_ControlTransfer_ControlSystemControlReportType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_MM_ControlTransfer_ControlSystemControlReportType *out,
        const UMAA_MM_ControlTransfer_ControlSystemControlReportType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UMAA_MM_ControlTransfer_ControlSystemControlReportType *sample); 

    NDDSUSERDllExport extern RTIBool
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UMAA_MM_ControlTransfer_ControlSystemControlReportType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_deserialize_from_cdr_buffer(
        UMAA_MM_ControlTransfer_ControlSystemControlReportType *sample,
        const char * buffer,
        unsigned int length);    
    #if !defined (NDDS_STANDALONE_TYPE)
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_data_to_string(
        const UMAA_MM_ControlTransfer_ControlSystemControlReportType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_MM_ControlTransfer_ControlSystemControlReportType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_MM_ControlTransfer_ControlSystemControlReportTypeKeyHolder *key, 
        const UMAA_MM_ControlTransfer_ControlSystemControlReportType *instance);

    NDDSUSERDllExport extern RTIBool 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_MM_ControlTransfer_ControlSystemControlReportType *instance, 
        const UMAA_MM_ControlTransfer_ControlSystemControlReportTypeKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_new(void);

    NDDSUSERDllExport extern void
    UMAA_MM_ControlTransfer_ControlSystemControlReportTypePlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ControlSystemControlReportTypePlugin_226879613_h */

