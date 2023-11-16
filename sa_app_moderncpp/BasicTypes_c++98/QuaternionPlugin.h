

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Quaternion.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef QuaternionPlugin_1529911878_h
#define QuaternionPlugin_1529911878_h

#include "Quaternion.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C"{

    #define BasicTypes_QuaternionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define BasicTypes_QuaternionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define BasicTypes_QuaternionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define BasicTypes_QuaternionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define BasicTypes_QuaternionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern BasicTypes_Quaternion*
    BasicTypes_QuaternionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern BasicTypes_Quaternion*
    BasicTypes_QuaternionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern BasicTypes_Quaternion*
    BasicTypes_QuaternionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    BasicTypes_QuaternionPluginSupport_copy_data(
        BasicTypes_Quaternion *out,
        const BasicTypes_Quaternion *in);

    NDDSUSERDllExport extern void 
    BasicTypes_QuaternionPluginSupport_destroy_data_w_params(
        BasicTypes_Quaternion *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    BasicTypes_QuaternionPluginSupport_destroy_data_ex(
        BasicTypes_Quaternion *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    BasicTypes_QuaternionPluginSupport_destroy_data(
        BasicTypes_Quaternion *sample);

    NDDSUSERDllExport extern void 
    BasicTypes_QuaternionPluginSupport_print_data(
        const BasicTypes_Quaternion *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    BasicTypes_QuaternionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    BasicTypes_QuaternionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    BasicTypes_QuaternionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    BasicTypes_QuaternionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    BasicTypes_QuaternionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        BasicTypes_Quaternion *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    BasicTypes_QuaternionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        BasicTypes_Quaternion *out,
        const BasicTypes_Quaternion *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    BasicTypes_QuaternionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const BasicTypes_Quaternion *sample); 

    NDDSUSERDllExport extern RTIBool
    BasicTypes_QuaternionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const BasicTypes_Quaternion *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    BasicTypes_QuaternionPlugin_deserialize_from_cdr_buffer(
        BasicTypes_Quaternion *sample,
        const char * buffer,
        unsigned int length);    
    #if !defined (NDDS_STANDALONE_TYPE)
    NDDSUSERDllExport extern DDS_ReturnCode_t
    BasicTypes_QuaternionPlugin_data_to_string(
        const BasicTypes_Quaternion *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    BasicTypes_QuaternionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    BasicTypes_QuaternionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    BasicTypes_QuaternionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    BasicTypes_QuaternionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    BasicTypes_QuaternionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        BasicTypes_Quaternion ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * BasicTypes_QuaternionPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    BasicTypes_QuaternionPlugin_new(void);

    NDDSUSERDllExport extern void
    BasicTypes_QuaternionPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* QuaternionPlugin_1529911878_h */

