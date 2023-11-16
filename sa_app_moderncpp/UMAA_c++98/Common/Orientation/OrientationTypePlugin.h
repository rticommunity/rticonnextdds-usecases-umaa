

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationTypePlugin_1949645477_h
#define OrientationTypePlugin_1949645477_h

#include "OrientationType.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Orientation/AttitudeTypePlugin.h"
#include "UMAA/Common/Orientation/CourseTypePlugin.h"
#include "UMAA/Common/Orientation/DirectionTypePlugin.h"
#include "UMAA/Common/Orientation/HeadingCurrentDirectionTypePlugin.h"
#include "UMAA/Common/Orientation/HeadingMagneticNorthTypePlugin.h"
#include "UMAA/Common/Orientation/HeadingTrueNorthTypePlugin.h"
#include "UMAA/Common/Orientation/HeadingTypePlugin.h"
#include "UMAA/Common/Orientation/HeadingWindDirectionTypePlugin.h"

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
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_SelectorsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_SelectorsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_SelectorsPluginSupport_print_data(
        const UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Selectors *sample,
        const char *desc,
        unsigned int indent_level);

    #define UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union*
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union*
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union*
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPluginSupport_copy_data(
        UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *out,
        const UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPluginSupport_destroy_data_w_params(
        UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPluginSupport_destroy_data_ex(
        UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPluginSupport_destroy_data(
        UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPluginSupport_print_data(
        const UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *out,
        const UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *sample); 

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_deserialize_from_cdr_buffer(
        UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *sample,
        const char * buffer,
        unsigned int length);    
    #if !defined (NDDS_STANDALONE_TYPE)
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_data_to_string(
        const UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_Union ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_new(void);

    NDDSUSERDllExport extern void
    UMAA_Common_Orientation_OrientationType_Specializations_OrientationType_UnionPlugin_delete(struct PRESTypePlugin *);

    #define UMAA_Common_Orientation_OrientationTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_Common_Orientation_OrientationTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_Common_Orientation_OrientationTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_Common_Orientation_OrientationTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_Common_Orientation_OrientationTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_Common_Orientation_OrientationType*
    UMAA_Common_Orientation_OrientationTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_Common_Orientation_OrientationType*
    UMAA_Common_Orientation_OrientationTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_Common_Orientation_OrientationType*
    UMAA_Common_Orientation_OrientationTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_Orientation_OrientationTypePluginSupport_copy_data(
        UMAA_Common_Orientation_OrientationType *out,
        const UMAA_Common_Orientation_OrientationType *in);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationTypePluginSupport_destroy_data_w_params(
        UMAA_Common_Orientation_OrientationType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationTypePluginSupport_destroy_data_ex(
        UMAA_Common_Orientation_OrientationType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationTypePluginSupport_destroy_data(
        UMAA_Common_Orientation_OrientationType *sample);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationTypePluginSupport_print_data(
        const UMAA_Common_Orientation_OrientationType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UMAA_Common_Orientation_OrientationTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UMAA_Common_Orientation_OrientationTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UMAA_Common_Orientation_OrientationTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UMAA_Common_Orientation_OrientationTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_Orientation_OrientationType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_Orientation_OrientationTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_Orientation_OrientationType *out,
        const UMAA_Common_Orientation_OrientationType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_Orientation_OrientationTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UMAA_Common_Orientation_OrientationType *sample); 

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_Orientation_OrientationTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UMAA_Common_Orientation_OrientationType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    UMAA_Common_Orientation_OrientationTypePlugin_deserialize_from_cdr_buffer(
        UMAA_Common_Orientation_OrientationType *sample,
        const char * buffer,
        unsigned int length);    
    #if !defined (NDDS_STANDALONE_TYPE)
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UMAA_Common_Orientation_OrientationTypePlugin_data_to_string(
        const UMAA_Common_Orientation_OrientationType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_Orientation_OrientationTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_Common_Orientation_OrientationTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_Orientation_OrientationTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_Orientation_OrientationTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UMAA_Common_Orientation_OrientationTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_Common_Orientation_OrientationType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * UMAA_Common_Orientation_OrientationTypePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UMAA_Common_Orientation_OrientationTypePlugin_new(void);

    NDDSUSERDllExport extern void
    UMAA_Common_Orientation_OrientationTypePlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* OrientationTypePlugin_1949645477_h */

