

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RequiredSpeedControl.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RequiredSpeedControlPlugin_1864756473_h
#define RequiredSpeedControlPlugin_1864756473_h

#include "RequiredSpeedControl.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Speed/SpeedControlTypePlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C"{

    #define UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_VariableSpeedControl_RequiredSpeedControl*
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_VariableSpeedControl_RequiredSpeedControl*
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_VariableSpeedControl_RequiredSpeedControl*
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPluginSupport_copy_data(
        UMAA_Common_VariableSpeedControl_RequiredSpeedControl *out,
        const UMAA_Common_VariableSpeedControl_RequiredSpeedControl *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPluginSupport_destroy_data_w_params(
        UMAA_Common_VariableSpeedControl_RequiredSpeedControl *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPluginSupport_destroy_data_ex(
        UMAA_Common_VariableSpeedControl_RequiredSpeedControl *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPluginSupport_destroy_data(
        UMAA_Common_VariableSpeedControl_RequiredSpeedControl *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPluginSupport_print_data(
        const UMAA_Common_VariableSpeedControl_RequiredSpeedControl *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_VariableSpeedControl_RequiredSpeedControl *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_VariableSpeedControl_RequiredSpeedControl *out,
        const UMAA_Common_VariableSpeedControl_RequiredSpeedControl *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UMAA_Common_VariableSpeedControl_RequiredSpeedControl *sample); 

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UMAA_Common_VariableSpeedControl_RequiredSpeedControl *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_deserialize_from_cdr_buffer(
        UMAA_Common_VariableSpeedControl_RequiredSpeedControl *sample,
        const char * buffer,
        unsigned int length);    
    #if !defined (NDDS_STANDALONE_TYPE)
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_data_to_string(
        const UMAA_Common_VariableSpeedControl_RequiredSpeedControl *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_VariableSpeedControl_RequiredSpeedControl ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_new(void);

    NDDSUSERDllExport extern void
    UMAA_Common_VariableSpeedControl_RequiredSpeedControlPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RequiredSpeedControlPlugin_1864756473_h */

