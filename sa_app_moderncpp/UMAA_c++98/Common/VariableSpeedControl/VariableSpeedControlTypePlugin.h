

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VariableSpeedControlType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VariableSpeedControlTypePlugin_455525219_h
#define VariableSpeedControlTypePlugin_455525219_h

#include "VariableSpeedControlType.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/VariableSpeedControl/RecommendedSpeedControlPlugin.h"
#include "UMAA/Common/VariableSpeedControl/RequiredSpeedControlPlugin.h"
#include "UMAA/Common/VariableSpeedControl/TimeWithSpeedPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C"{

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_SelectorsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_SelectorsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_SelectorsPluginSupport_print_data(
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Selectors *sample,
        const char *desc,
        unsigned int indent_level);

    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union*
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union*
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union*
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPluginSupport_copy_data(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *out,
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPluginSupport_destroy_data_w_params(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPluginSupport_destroy_data_ex(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPluginSupport_destroy_data(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPluginSupport_print_data(
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *out,
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *sample); 

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_deserialize_from_cdr_buffer(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *sample,
        const char * buffer,
        unsigned int length);    
    #if !defined (NDDS_STANDALONE_TYPE)
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_data_to_string(
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_Union ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_new(void);

    NDDSUSERDllExport extern void
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType_Specializations_VariableSpeedControlType_UnionPlugin_delete(struct PRESTypePlugin *);

    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_VariableSpeedControl_VariableSpeedControlType*
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_VariableSpeedControl_VariableSpeedControlType*
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_VariableSpeedControl_VariableSpeedControlType*
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePluginSupport_copy_data(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType *out,
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePluginSupport_destroy_data_w_params(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePluginSupport_destroy_data_ex(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePluginSupport_destroy_data(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePluginSupport_print_data(
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType *out,
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType *sample); 

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_deserialize_from_cdr_buffer(
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType *sample,
        const char * buffer,
        unsigned int length);    
    #if !defined (NDDS_STANDALONE_TYPE)
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_data_to_string(
        const UMAA_Common_VariableSpeedControl_VariableSpeedControlType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_VariableSpeedControl_VariableSpeedControlType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_new(void);

    NDDSUSERDllExport extern void
    UMAA_Common_VariableSpeedControl_VariableSpeedControlTypePlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VariableSpeedControlTypePlugin_455525219_h */

