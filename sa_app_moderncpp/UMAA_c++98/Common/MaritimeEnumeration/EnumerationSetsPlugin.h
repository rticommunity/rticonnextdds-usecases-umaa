

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EnumerationSetsPlugin_1089266797_h
#define EnumerationSetsPlugin_1089266797_h

#include "EnumerationSets.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "BasicTypes/QuaternionPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C"{

    #undef ERROR
    #undef VARIABLE_PITCH
    #undef DELETE
    #undef PLATFORM

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnalogSensorErrorCodeEnumType_AnalogSensorErrorCodeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnalogSensorErrorCodeEnumType_AnalogSensorErrorCodeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnalogSensorErrorCodeEnumType_AnalogSensorErrorCodeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_AnalogSensorErrorCodeEnumType_AnalogSensorErrorCodeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_AnalogSensorErrorCodeEnumType_AnalogSensorErrorCodeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorActionEnumType_AnchorActionEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorActionEnumType_AnchorActionEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorActionEnumType_AnchorActionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_AnchorActionEnumType_AnchorActionEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_AnchorActionEnumType_AnchorActionEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorKindEnumType_AnchorKindEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorKindEnumType_AnchorKindEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorKindEnumType_AnchorKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_AnchorKindEnumType_AnchorKindEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_AnchorKindEnumType_AnchorKindEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorLocationEnumType_AnchorLocationEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorLocationEnumType_AnchorLocationEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorLocationEnumType_AnchorLocationEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_AnchorLocationEnumType_AnchorLocationEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_AnchorLocationEnumType_AnchorLocationEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorStateEnumType_AnchorStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorStateEnumType_AnchorStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AnchorStateEnumType_AnchorStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_AnchorStateEnumType_AnchorStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_AnchorStateEnumType_AnchorStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AudioEncodingQualityEnumType_AudioEncodingQualityEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AudioEncodingQualityEnumType_AudioEncodingQualityEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_AudioEncodingQualityEnumType_AudioEncodingQualityEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_AudioEncodingQualityEnumType_AudioEncodingQualityEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_AudioEncodingQualityEnumType_AudioEncodingQualityEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BearingAngleEnumType_BearingAngleEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BearingAngleEnumType_BearingAngleEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BearingAngleEnumType_BearingAngleEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_BearingAngleEnumType_BearingAngleEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_BearingAngleEnumType_BearingAngleEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BilgeControlEnumType_BilgeControlEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BilgeControlEnumType_BilgeControlEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BilgeControlEnumType_BilgeControlEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_BilgeControlEnumType_BilgeControlEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_BilgeControlEnumType_BilgeControlEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BilgeStateEnumType_BilgeStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BilgeStateEnumType_BilgeStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BilgeStateEnumType_BilgeStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_BilgeStateEnumType_BilgeStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_BilgeStateEnumType_BilgeStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BitDepthEnumType_BitDepthEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BitDepthEnumType_BitDepthEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BitDepthEnumType_BitDepthEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_BitDepthEnumType_BitDepthEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_BitDepthEnumType_BitDepthEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BlastConditionEnumType_BlastConditionEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BlastConditionEnumType_BlastConditionEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BlastConditionEnumType_BlastConditionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_BlastConditionEnumType_BlastConditionEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_BlastConditionEnumType_BlastConditionEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BlastKindEnumType_BlastKindEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BlastKindEnumType_BlastKindEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_BlastKindEnumType_BlastKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_BlastKindEnumType_BlastKindEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_BlastKindEnumType_BlastKindEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStateEnumType_CollisionAvoidStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStateEnumType_CollisionAvoidStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStateEnumType_CollisionAvoidStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStateEnumType_CollisionAvoidStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_CollisionAvoidStateEnumType_CollisionAvoidStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStatusEnumType_CollisionAvoidStatusEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStatusEnumType_CollisionAvoidStatusEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStatusEnumType_CollisionAvoidStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_CollisionAvoidStatusEnumType_CollisionAvoidStatusEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_CollisionAvoidStatusEnumType_CollisionAvoidStatusEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumType_COLREGSClassificationEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumType_COLREGSClassificationEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumType_COLREGSClassificationEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumType_COLREGSClassificationEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_COLREGSClassificationEnumType_COLREGSClassificationEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumType_ContactManeuverInfluenceEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumType_ContactManeuverInfluenceEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumType_ContactManeuverInfluenceEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumType_ContactManeuverInfluenceEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ContactManeuverInfluenceEnumType_ContactManeuverInfluenceEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CoordinateSystemEnumType_CoordinateSystemEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CoordinateSystemEnumType_CoordinateSystemEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CoordinateSystemEnumType_CoordinateSystemEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_CoordinateSystemEnumType_CoordinateSystemEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_CoordinateSystemEnumType_CoordinateSystemEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CoreStateEnumType_CoreStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CoreStateEnumType_CoreStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CoreStateEnumType_CoreStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_CoreStateEnumType_CoreStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_CoreStateEnumType_CoreStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DigitalAudioFormatEnumType_DigitalAudioFormatEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DigitalAudioFormatEnumType_DigitalAudioFormatEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DigitalAudioFormatEnumType_DigitalAudioFormatEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_DigitalAudioFormatEnumType_DigitalAudioFormatEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_DigitalAudioFormatEnumType_DigitalAudioFormatEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DigitalSensorErrorCodeEnumType_DigitalSensorErrorCodeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DigitalSensorErrorCodeEnumType_DigitalSensorErrorCodeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DigitalSensorErrorCodeEnumType_DigitalSensorErrorCodeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_DigitalSensorErrorCodeEnumType_DigitalSensorErrorCodeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_DigitalSensorErrorCodeEnumType_DigitalSensorErrorCodeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DomainEnumType_DomainEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DomainEnumType_DomainEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DomainEnumType_DomainEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_DomainEnumType_DomainEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_DomainEnumType_DomainEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_EngineKindEnumType_EngineKindEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_EngineKindEnumType_EngineKindEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_EngineKindEnumType_EngineKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_EngineKindEnumType_EngineKindEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_EngineKindEnumType_EngineKindEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ErrorCodeEnumType_ErrorCodeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ErrorCodeEnumType_ErrorCodeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ErrorCodeEnumType_ErrorCodeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ErrorCodeEnumType_ErrorCodeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ErrorCodeEnumType_ErrorCodeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ErrorConditionEnumType_ErrorConditionEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ErrorConditionEnumType_ErrorConditionEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ErrorConditionEnumType_ErrorConditionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ErrorConditionEnumType_ErrorConditionEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ErrorConditionEnumType_ErrorConditionEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ExposureModeEnumType_ExposureModeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_FrameSizeEnumType_FrameSizeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_FrameSizeEnumType_FrameSizeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_FrameSizeEnumType_FrameSizeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_FrameSizeEnumType_FrameSizeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_FrameSizeEnumType_FrameSizeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_GPSConstellationEnumType_GPSConstellationEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GPSFixEnumType_GPSFixEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GPSFixEnumType_GPSFixEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GPSFixEnumType_GPSFixEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_GPSFixEnumType_GPSFixEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_GPSFixEnumType_GPSFixEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GPSNavigationSolutionEnumType_GPSNavigationSolutionEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GPSNavigationSolutionEnumType_GPSNavigationSolutionEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GPSNavigationSolutionEnumType_GPSNavigationSolutionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_GPSNavigationSolutionEnumType_GPSNavigationSolutionEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_GPSNavigationSolutionEnumType_GPSNavigationSolutionEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GuardedTeleoperationStatusEnumType_GuardedTeleoperationStatusEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GuardedTeleoperationStatusEnumType_GuardedTeleoperationStatusEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_GuardedTeleoperationStatusEnumType_GuardedTeleoperationStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_GuardedTeleoperationStatusEnumType_GuardedTeleoperationStatusEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_GuardedTeleoperationStatusEnumType_GuardedTeleoperationStatusEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_H264EncodingEnumType_H264EncodingEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_H264EncodingEnumType_H264EncodingEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_H264EncodingEnumType_H264EncodingEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_H264EncodingEnumType_H264EncodingEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_H264EncodingEnumType_H264EncodingEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_H264PresetEnumType_H264PresetEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_H264PresetEnumType_H264PresetEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_H264PresetEnumType_H264PresetEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_H264PresetEnumType_H264PresetEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_H264PresetEnumType_H264PresetEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HandoverResultEnumType_HandoverResultEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HandoverResultEnumType_HandoverResultEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HandoverResultEnumType_HandoverResultEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_HandoverResultEnumType_HandoverResultEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_HandoverResultEnumType_HandoverResultEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_HeadingReferenceEnumType_HeadingReferenceEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_HeightModeEnumType_HeightModeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_HoverKindEnumType_HoverKindEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_IgnitionStateEnumType_IgnitionStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ImageFormatEnumType_ImageFormatEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ImageFormatEnumType_ImageFormatEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ImageFormatEnumType_ImageFormatEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ImageFormatEnumType_ImageFormatEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ImageFormatEnumType_ImageFormatEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ImagingModeEnumType_ImagingModeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumType_InertialSensorOpStatusEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumType_InertialSensorOpStatusEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumType_InertialSensorOpStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumType_InertialSensorOpStatusEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_InertialSensorOpStatusEnumType_InertialSensorOpStatusEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_InertialSensorStateEnumType_InertialSensorStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_InertialSensorStateEnumType_InertialSensorStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_InertialSensorStateEnumType_InertialSensorStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_InertialSensorStateEnumType_InertialSensorStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_InertialSensorStateEnumType_InertialSensorStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_LightSensitivityEnumType_LightSensitivityEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_LostCommsStatusEnumType_LostCommsStatusEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_LostCommsStatusEnumType_LostCommsStatusEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_LostCommsStatusEnumType_LostCommsStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_LostCommsStatusEnumType_LostCommsStatusEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_LostCommsStatusEnumType_LostCommsStatusEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MastActionEnumType_MastActionEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MastActionEnumType_MastActionEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MastActionEnumType_MastActionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_MastActionEnumType_MastActionEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_MastActionEnumType_MastActionEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MastStateEnumType_MastStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MastStateEnumType_MastStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MastStateEnumType_MastStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_MastStateEnumType_MastStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_MastStateEnumType_MastStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DataEncodingEnumType_DataEncodingEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DataEncodingEnumType_DataEncodingEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_DataEncodingEnumType_DataEncodingEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_DataEncodingEnumType_DataEncodingEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_DataEncodingEnumType_DataEncodingEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_FeatureKindEnumType_FeatureKindEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_LoiterKindEnumType_LoiterKindEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_TransportEncodingEnumType_TransportEncodingEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_TransportEncodingEnumType_TransportEncodingEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_TransportEncodingEnumType_TransportEncodingEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_TransportEncodingEnumType_TransportEncodingEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_TransportEncodingEnumType_TransportEncodingEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_WaypointKindEnumType_WaypointKindEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_MeteringModeEnumType_MeteringModeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MountModeEnumType_MountModeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MountModeEnumType_MountModeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_MountModeEnumType_MountModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_MountModeEnumType_MountModeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_MountModeEnumType_MountModeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_NavigationSolutionEnumType_NavigationSolutionEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ObstacleAvoidanceEnumType_ObstacleAvoidanceEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ObstacleAvoidanceEnumType_ObstacleAvoidanceEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ObstacleAvoidanceEnumType_ObstacleAvoidanceEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ObstacleAvoidanceEnumType_ObstacleAvoidanceEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ObstacleAvoidanceEnumType_ObstacleAvoidanceEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_PathWayEnumType_PathWayEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PlatformModeEnumType_PlatformModeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PlatformModeEnumType_PlatformModeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PlatformModeEnumType_PlatformModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_PlatformModeEnumType_PlatformModeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_PlatformModeEnumType_PlatformModeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PlatformModeTransitionEnumType_PlatformModeTransitionEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PlatformModeTransitionEnumType_PlatformModeTransitionEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PlatformModeTransitionEnumType_PlatformModeTransitionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_PlatformModeTransitionEnumType_PlatformModeTransitionEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_PlatformModeTransitionEnumType_PlatformModeTransitionEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_PowerPlantStateEnumType_PowerPlantStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PumpStateEnumType_PumpStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PumpStateEnumType_PumpStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_PumpStateEnumType_PumpStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_PumpStateEnumType_PumpStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_PumpStateEnumType_PumpStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_RangeErrorCodeEnumType_RangeErrorCodeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_RangeErrorCodeEnumType_RangeErrorCodeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_RangeErrorCodeEnumType_RangeErrorCodeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_RangeErrorCodeEnumType_RangeErrorCodeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_RangeErrorCodeEnumType_RangeErrorCodeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_RenderUselessStateEnumType_RenderUselessStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_RenderUselessStateEnumType_RenderUselessStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_RenderUselessStateEnumType_RenderUselessStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_RenderUselessStateEnumType_RenderUselessStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_RenderUselessStateEnumType_RenderUselessStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_SourceIndicatorEnumType_SourceIndicatorEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_StillImageErrorCodeEnumType_StillImageErrorCodeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_StillImageErrorCodeEnumType_StillImageErrorCodeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_StillImageErrorCodeEnumType_StillImageErrorCodeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_StillImageErrorCodeEnumType_StillImageErrorCodeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_StillImageErrorCodeEnumType_StillImageErrorCodeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_StreamStateEnumType_StreamStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_StreamStateEnumType_StreamStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_StreamStateEnumType_StreamStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_StreamStateEnumType_StreamStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_StreamStateEnumType_StreamStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumType_TamperDetectionStateEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumType_TamperDetectionStateEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumType_TamperDetectionStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumType_TamperDetectionStateEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_TamperDetectionStateEnumType_TamperDetectionStateEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_VehicleSpeedModeEnumType_VehicleSpeedModeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VehicleSpeedReferenceEnumType_VehicleSpeedReferenceEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VehicleSpeedReferenceEnumType_VehicleSpeedReferenceEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VehicleSpeedReferenceEnumType_VehicleSpeedReferenceEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_VehicleSpeedReferenceEnumType_VehicleSpeedReferenceEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_VehicleSpeedReferenceEnumType_VehicleSpeedReferenceEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VelocityCommandTypeEnumType_VelocityCommandTypeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VelocityCommandTypeEnumType_VelocityCommandTypeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VelocityCommandTypeEnumType_VelocityCommandTypeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_VelocityCommandTypeEnumType_VelocityCommandTypeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_VelocityCommandTypeEnumType_VelocityCommandTypeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VideoFormatEnumType_VideoFormatEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VideoFormatEnumType_VideoFormatEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VideoFormatEnumType_VideoFormatEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_VideoFormatEnumType_VideoFormatEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_VideoFormatEnumType_VideoFormatEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VisualClassificationEnumType_VisualClassificationEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VisualClassificationEnumType_VisualClassificationEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_VisualClassificationEnumType_VisualClassificationEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_VisualClassificationEnumType_VisualClassificationEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_VisualClassificationEnumType_VisualClassificationEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_WaterTurnDirectionEnumType_WaterTurnDirectionEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_WhiteBalanceEnumType_WhiteBalanceEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ZoneKindEnumType_ZoneKindEnumType *sample,
        const char *desc,
        unsigned int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumTypePluginSupport_print_data(
        const UMAA_Common_MaritimeEnumeration_ZoomModeEnumType_ZoomModeEnumType *sample,
        const char *desc,
        unsigned int indent_level);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EnumerationSetsPlugin_1089266797_h */

