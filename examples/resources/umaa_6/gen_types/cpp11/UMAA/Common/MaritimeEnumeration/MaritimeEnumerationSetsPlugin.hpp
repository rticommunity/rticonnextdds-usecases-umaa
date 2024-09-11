

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MaritimeEnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MaritimeEnumerationSetsPlugin_1967259082_h
#define MaritimeEnumerationSetsPlugin_1967259082_h

#include "MaritimeEnumerationSets.hpp"

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

#undef ERROR
#undef VARIABLE_PITCH
#undef DELETE
#undef PLATFORM
namespace UMAA {
    namespace Common {
        namespace MaritimeEnumeration {
            namespace ActivationStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ActivationStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ActivationStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ActivationStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ActivationStateEnumTypePluginSupport_print_data(
                    const ActivationStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ActivationStateEnumModule  */
            namespace ActivationStateTargetEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ActivationStateTargetEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ActivationStateTargetEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ActivationStateTargetEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ActivationStateTargetEnumTypePluginSupport_print_data(
                    const ActivationStateTargetEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ActivationStateTargetEnumModule  */
            namespace AnchorActionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorActionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorActionEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                AnchorActionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                AnchorActionEnumTypePluginSupport_print_data(
                    const AnchorActionEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace AnchorActionEnumModule  */
            namespace AnchorKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorKindEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                AnchorKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                AnchorKindEnumTypePluginSupport_print_data(
                    const AnchorKindEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace AnchorKindEnumModule  */
            namespace AnchorLocationEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorLocationEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorLocationEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                AnchorLocationEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                AnchorLocationEnumTypePluginSupport_print_data(
                    const AnchorLocationEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace AnchorLocationEnumModule  */
            namespace AnchorRodeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorRodeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorRodeEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                AnchorRodeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                AnchorRodeEnumTypePluginSupport_print_data(
                    const AnchorRodeEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace AnchorRodeEnumModule  */
            namespace AnchorStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AnchorStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                AnchorStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                AnchorStateEnumTypePluginSupport_print_data(
                    const AnchorStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace AnchorStateEnumModule  */
            namespace AutoOffModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AutoOffModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                AutoOffModeEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                AutoOffModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                AutoOffModeEnumTypePluginSupport_print_data(
                    const AutoOffModeEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace AutoOffModeEnumModule  */
            namespace BilgeStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                BilgeStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                BilgeStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                BilgeStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                BilgeStateEnumTypePluginSupport_print_data(
                    const BilgeStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace BilgeStateEnumModule  */
            namespace BufferPurgeOptionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                BufferPurgeOptionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                BufferPurgeOptionEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                BufferPurgeOptionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                BufferPurgeOptionEnumTypePluginSupport_print_data(
                    const BufferPurgeOptionEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace BufferPurgeOptionEnumModule  */
            namespace COLREGSClassificationEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                COLREGSClassificationEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                COLREGSClassificationEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                COLREGSClassificationEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                COLREGSClassificationEnumTypePluginSupport_print_data(
                    const COLREGSClassificationEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace COLREGSClassificationEnumModule  */
            namespace CommandStatusReasonEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                CommandStatusReasonEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                CommandStatusReasonEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                CommandStatusReasonEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                CommandStatusReasonEnumTypePluginSupport_print_data(
                    const CommandStatusReasonEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace CommandStatusReasonEnumModule  */
            namespace CommsChannelOperationalStatusEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                CommsChannelOperationalStatusEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                CommsChannelOperationalStatusEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                CommsChannelOperationalStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                CommsChannelOperationalStatusEnumTypePluginSupport_print_data(
                    const CommsChannelOperationalStatusEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace CommsChannelOperationalStatusEnumModule  */
            namespace ConditionalOperatorEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ConditionalOperatorEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ConditionalOperatorEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ConditionalOperatorEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ConditionalOperatorEnumTypePluginSupport_print_data(
                    const ConditionalOperatorEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ConditionalOperatorEnumModule  */
            namespace ContactManeuverInfluenceEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ContactManeuverInfluenceEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ContactManeuverInfluenceEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ContactManeuverInfluenceEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ContactManeuverInfluenceEnumTypePluginSupport_print_data(
                    const ContactManeuverInfluenceEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ContactManeuverInfluenceEnumModule  */
            namespace ContingencyBehaviorEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ContingencyBehaviorEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ContingencyBehaviorEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ContingencyBehaviorEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ContingencyBehaviorEnumTypePluginSupport_print_data(
                    const ContingencyBehaviorEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ContingencyBehaviorEnumModule  */
            namespace ContinuousTestEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ContinuousTestEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ContinuousTestEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ContinuousTestEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ContinuousTestEnumTypePluginSupport_print_data(
                    const ContinuousTestEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ContinuousTestEnumModule  */
            namespace CoordinationSituationalSignalEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                CoordinationSituationalSignalEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                CoordinationSituationalSignalEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                CoordinationSituationalSignalEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                CoordinationSituationalSignalEnumTypePluginSupport_print_data(
                    const CoordinationSituationalSignalEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace CoordinationSituationalSignalEnumModule  */
            namespace DirectionModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                DirectionModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                DirectionModeEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                DirectionModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                DirectionModeEnumTypePluginSupport_print_data(
                    const DirectionModeEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace DirectionModeEnumModule  */
            namespace DomainEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                DomainEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                DomainEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                DomainEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                DomainEnumTypePluginSupport_print_data(
                    const DomainEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace DomainEnumModule  */
            namespace EmitterStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                EmitterStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                EmitterStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                EmitterStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                EmitterStateEnumTypePluginSupport_print_data(
                    const EmitterStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace EmitterStateEnumModule  */
            namespace EngineKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                EngineKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                EngineKindEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                EngineKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                EngineKindEnumTypePluginSupport_print_data(
                    const EngineKindEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace EngineKindEnumModule  */
            namespace ErrorCodeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ErrorCodeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ErrorCodeEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ErrorCodeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ErrorCodeEnumTypePluginSupport_print_data(
                    const ErrorCodeEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ErrorCodeEnumModule  */
            namespace ErrorConditionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ErrorConditionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ErrorConditionEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ErrorConditionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ErrorConditionEnumTypePluginSupport_print_data(
                    const ErrorConditionEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ErrorConditionEnumModule  */
            namespace FLSBeamwidthEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                FLSBeamwidthEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                FLSBeamwidthEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                FLSBeamwidthEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                FLSBeamwidthEnumTypePluginSupport_print_data(
                    const FLSBeamwidthEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace FLSBeamwidthEnumModule  */
            namespace FLSConfigModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                FLSConfigModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                FLSConfigModeEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                FLSConfigModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                FLSConfigModeEnumTypePluginSupport_print_data(
                    const FLSConfigModeEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace FLSConfigModeEnumModule  */
            namespace FLSWaveformLengthEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                FLSWaveformLengthEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                FLSWaveformLengthEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                FLSWaveformLengthEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                FLSWaveformLengthEnumTypePluginSupport_print_data(
                    const FLSWaveformLengthEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace FLSWaveformLengthEnumModule  */
            namespace GPSConstellationEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GPSConstellationEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                GPSConstellationEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                GPSConstellationEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                GPSConstellationEnumTypePluginSupport_print_data(
                    const GPSConstellationEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace GPSConstellationEnumModule  */
            namespace HandoverResultEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                HandoverResultEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                HandoverResultEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                HandoverResultEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                HandoverResultEnumTypePluginSupport_print_data(
                    const HandoverResultEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace HandoverResultEnumModule  */
            namespace HeadingSectorKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                HeadingSectorKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                HeadingSectorKindEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                HeadingSectorKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                HeadingSectorKindEnumTypePluginSupport_print_data(
                    const HeadingSectorKindEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace HeadingSectorKindEnumModule  */
            namespace HoverKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                HoverKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                HoverKindEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                HoverKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                HoverKindEnumTypePluginSupport_print_data(
                    const HoverKindEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace HoverKindEnumModule  */
            namespace IgnitionControlEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                IgnitionControlEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                IgnitionControlEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                IgnitionControlEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                IgnitionControlEnumTypePluginSupport_print_data(
                    const IgnitionControlEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace IgnitionControlEnumModule  */
            namespace IgnitionStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                IgnitionStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                IgnitionStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                IgnitionStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                IgnitionStateEnumTypePluginSupport_print_data(
                    const IgnitionStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace IgnitionStateEnumModule  */
            namespace IlluminatorStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                IlluminatorStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                IlluminatorStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                IlluminatorStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                IlluminatorStateEnumTypePluginSupport_print_data(
                    const IlluminatorStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace IlluminatorStateEnumModule  */
            namespace ImageFormatEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ImageFormatEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ImageFormatEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ImageFormatEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ImageFormatEnumTypePluginSupport_print_data(
                    const ImageFormatEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ImageFormatEnumModule  */
            namespace InertialSensorCmdEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                InertialSensorCmdEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                InertialSensorCmdEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                InertialSensorCmdEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                InertialSensorCmdEnumTypePluginSupport_print_data(
                    const InertialSensorCmdEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace InertialSensorCmdEnumModule  */
            namespace InertialSensorOpStatusEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                InertialSensorOpStatusEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                InertialSensorOpStatusEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                InertialSensorOpStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                InertialSensorOpStatusEnumTypePluginSupport_print_data(
                    const InertialSensorOpStatusEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace InertialSensorOpStatusEnumModule  */
            namespace InitiatedTestEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                InitiatedTestEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                InitiatedTestEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                InitiatedTestEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                InitiatedTestEnumTypePluginSupport_print_data(
                    const InitiatedTestEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace InitiatedTestEnumModule  */
            namespace InterferenceEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                InterferenceEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                InterferenceEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                InterferenceEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                InterferenceEnumTypePluginSupport_print_data(
                    const InterferenceEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace InterferenceEnumModule  */
            namespace LandmarkEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LandmarkEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LandmarkEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LandmarkEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                LandmarkEnumTypePluginSupport_print_data(
                    const LandmarkEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace LandmarkEnumModule  */
            namespace LogLevelEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LogLevelEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LogLevelEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LogLevelEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                LogLevelEnumTypePluginSupport_print_data(
                    const LogLevelEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace LogLevelEnumModule  */
            namespace MastActionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                MastActionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                MastActionEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                MastActionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                MastActionEnumTypePluginSupport_print_data(
                    const MastActionEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace MastActionEnumModule  */
            namespace MastStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                MastStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                MastStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                MastStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                MastStateEnumTypePluginSupport_print_data(
                    const MastStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace MastStateEnumModule  */
            namespace CommandStatusEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                CommandStatusEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                CommandStatusEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                CommandStatusEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                CommandStatusEnumTypePluginSupport_print_data(
                    const CommandStatusEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace CommandStatusEnumModule  */
            namespace TaskControlEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TaskControlEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TaskControlEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                TaskControlEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                TaskControlEnumTypePluginSupport_print_data(
                    const TaskControlEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace TaskControlEnumModule  */
            namespace TaskStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TaskStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TaskStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                TaskStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                TaskStateEnumTypePluginSupport_print_data(
                    const TaskStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace TaskStateEnumModule  */
            namespace NavigationSolutionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                NavigationSolutionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                NavigationSolutionEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                NavigationSolutionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                NavigationSolutionEnumTypePluginSupport_print_data(
                    const NavigationSolutionEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace NavigationSolutionEnumModule  */
            namespace ObjectiveExecutorControlEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ObjectiveExecutorControlEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ObjectiveExecutorControlEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ObjectiveExecutorControlEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ObjectiveExecutorControlEnumTypePluginSupport_print_data(
                    const ObjectiveExecutorControlEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ObjectiveExecutorControlEnumModule  */
            namespace ObjectiveExecutorStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ObjectiveExecutorStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ObjectiveExecutorStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ObjectiveExecutorStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ObjectiveExecutorStateEnumTypePluginSupport_print_data(
                    const ObjectiveExecutorStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ObjectiveExecutorStateEnumModule  */
            namespace ObjectiveExecutorStateReasonEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ObjectiveExecutorStateReasonEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ObjectiveExecutorStateReasonEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ObjectiveExecutorStateReasonEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ObjectiveExecutorStateReasonEnumTypePluginSupport_print_data(
                    const ObjectiveExecutorStateReasonEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ObjectiveExecutorStateReasonEnumModule  */
            namespace OperationalModeControlEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                OperationalModeControlEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                OperationalModeControlEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                OperationalModeControlEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                OperationalModeControlEnumTypePluginSupport_print_data(
                    const OperationalModeControlEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace OperationalModeControlEnumModule  */
            namespace OperationalModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                OperationalModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                OperationalModeEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                OperationalModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                OperationalModeEnumTypePluginSupport_print_data(
                    const OperationalModeEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace OperationalModeEnumModule  */
            namespace PassiveContactFeatureEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PassiveContactFeatureEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PassiveContactFeatureEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PassiveContactFeatureEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                PassiveContactFeatureEnumTypePluginSupport_print_data(
                    const PassiveContactFeatureEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace PassiveContactFeatureEnumModule  */
            namespace PathWayEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PathWayEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PathWayEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PathWayEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                PathWayEnumTypePluginSupport_print_data(
                    const PathWayEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace PathWayEnumModule  */
            namespace PowerOnTestEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PowerOnTestEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PowerOnTestEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PowerOnTestEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                PowerOnTestEnumTypePluginSupport_print_data(
                    const PowerOnTestEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace PowerOnTestEnumModule  */
            namespace PowerPlantStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PowerPlantStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PowerPlantStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PowerPlantStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                PowerPlantStateEnumTypePluginSupport_print_data(
                    const PowerPlantStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace PowerPlantStateEnumModule  */
            namespace PowerStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PowerStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PowerStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PowerStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                PowerStateEnumTypePluginSupport_print_data(
                    const PowerStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace PowerStateEnumModule  */
            namespace ProcessingUnitEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ProcessingUnitEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ProcessingUnitEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ProcessingUnitEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ProcessingUnitEnumTypePluginSupport_print_data(
                    const ProcessingUnitEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ProcessingUnitEnumModule  */
            namespace PumpStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PumpStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                PumpStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                PumpStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                PumpStateEnumTypePluginSupport_print_data(
                    const PumpStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace PumpStateEnumModule  */
            namespace ReferenceFrameOriginEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ReferenceFrameOriginEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                ReferenceFrameOriginEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                ReferenceFrameOriginEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                ReferenceFrameOriginEnumTypePluginSupport_print_data(
                    const ReferenceFrameOriginEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace ReferenceFrameOriginEnumModule  */
            namespace SourceIndicatorEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                SourceIndicatorEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                SourceIndicatorEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                SourceIndicatorEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                SourceIndicatorEnumTypePluginSupport_print_data(
                    const SourceIndicatorEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace SourceIndicatorEnumModule  */
            namespace SpecialManeuverIndicatorEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                SpecialManeuverIndicatorEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                SpecialManeuverIndicatorEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                SpecialManeuverIndicatorEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                SpecialManeuverIndicatorEnumTypePluginSupport_print_data(
                    const SpecialManeuverIndicatorEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace SpecialManeuverIndicatorEnumModule  */
            namespace TamperDetectionStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TamperDetectionStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TamperDetectionStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                TamperDetectionStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                TamperDetectionStateEnumTypePluginSupport_print_data(
                    const TamperDetectionStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace TamperDetectionStateEnumModule  */
            namespace TFOMEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TFOMEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TFOMEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                TFOMEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                TFOMEnumTypePluginSupport_print_data(
                    const TFOMEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace TFOMEnumModule  */
            namespace TrackCategoryEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TrackCategoryEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TrackCategoryEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                TrackCategoryEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                TrackCategoryEnumTypePluginSupport_print_data(
                    const TrackCategoryEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace TrackCategoryEnumModule  */
            namespace TrackIdentityEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TrackIdentityEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TrackIdentityEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                TrackIdentityEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                TrackIdentityEnumTypePluginSupport_print_data(
                    const TrackIdentityEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace TrackIdentityEnumModule  */
            namespace TriggerStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TriggerStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                TriggerStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                TriggerStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                TriggerStateEnumTypePluginSupport_print_data(
                    const TriggerStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace TriggerStateEnumModule  */
            namespace VehicleSpeedModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                VehicleSpeedModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                VehicleSpeedModeEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                VehicleSpeedModeEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                VehicleSpeedModeEnumTypePluginSupport_print_data(
                    const VehicleSpeedModeEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace VehicleSpeedModeEnumModule  */
            namespace VisualClassificationEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                VisualClassificationEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                VisualClassificationEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                VisualClassificationEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                VisualClassificationEnumTypePluginSupport_print_data(
                    const VisualClassificationEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace VisualClassificationEnumModule  */
            namespace WaterTurnDirectionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                WaterTurnDirectionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                WaterTurnDirectionEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                WaterTurnDirectionEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                WaterTurnDirectionEnumTypePluginSupport_print_data(
                    const WaterTurnDirectionEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace WaterTurnDirectionEnumModule  */
            namespace WaterZoneKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                WaterZoneKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                WaterZoneKindEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                WaterZoneKindEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                WaterZoneKindEnumTypePluginSupport_print_data(
                    const WaterZoneKindEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace WaterZoneKindEnumModule  */
            namespace WaypointStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                WaypointStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                WaypointStateEnumTypePlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                WaypointStateEnumTypePlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                WaypointStateEnumTypePluginSupport_print_data(
                    const WaypointStateEnumType *sample,
                    const char *desc,
                    unsigned int indent_level);

            } /* namespace WaypointStateEnumModule  */
        } /* namespace MaritimeEnumeration  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MaritimeEnumerationSetsPlugin_1967259082_h */

