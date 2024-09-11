

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MaritimeEnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#include "rti/topic/cdr/Serialization.hpp"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "MaritimeEnumerationSetsPlugin.hpp"

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

                unsigned int 
                ActivationStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ActivationStateEnumTypePluginSupport_print_data(
                    const ActivationStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ActivationStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ActivationStateEnumModule  */
            namespace ActivationStateTargetEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ActivationStateTargetEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ActivationStateTargetEnumTypePluginSupport_print_data(
                    const ActivationStateTargetEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ActivationStateTargetEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ActivationStateTargetEnumModule  */
            namespace AnchorActionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                AnchorActionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void AnchorActionEnumTypePluginSupport_print_data(
                    const AnchorActionEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "AnchorActionEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace AnchorActionEnumModule  */
            namespace AnchorKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                AnchorKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void AnchorKindEnumTypePluginSupport_print_data(
                    const AnchorKindEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "AnchorKindEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace AnchorKindEnumModule  */
            namespace AnchorLocationEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                AnchorLocationEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void AnchorLocationEnumTypePluginSupport_print_data(
                    const AnchorLocationEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "AnchorLocationEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace AnchorLocationEnumModule  */
            namespace AnchorRodeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                AnchorRodeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void AnchorRodeEnumTypePluginSupport_print_data(
                    const AnchorRodeEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "AnchorRodeEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace AnchorRodeEnumModule  */
            namespace AnchorStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                AnchorStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void AnchorStateEnumTypePluginSupport_print_data(
                    const AnchorStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "AnchorStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace AnchorStateEnumModule  */
            namespace AutoOffModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                AutoOffModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void AutoOffModeEnumTypePluginSupport_print_data(
                    const AutoOffModeEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "AutoOffModeEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace AutoOffModeEnumModule  */
            namespace BilgeStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                BilgeStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void BilgeStateEnumTypePluginSupport_print_data(
                    const BilgeStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "BilgeStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace BilgeStateEnumModule  */
            namespace BufferPurgeOptionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                BufferPurgeOptionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void BufferPurgeOptionEnumTypePluginSupport_print_data(
                    const BufferPurgeOptionEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "BufferPurgeOptionEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace BufferPurgeOptionEnumModule  */
            namespace COLREGSClassificationEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                COLREGSClassificationEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void COLREGSClassificationEnumTypePluginSupport_print_data(
                    const COLREGSClassificationEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "COLREGSClassificationEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace COLREGSClassificationEnumModule  */
            namespace CommandStatusReasonEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                CommandStatusReasonEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void CommandStatusReasonEnumTypePluginSupport_print_data(
                    const CommandStatusReasonEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "CommandStatusReasonEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace CommandStatusReasonEnumModule  */
            namespace CommsChannelOperationalStatusEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                CommsChannelOperationalStatusEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void CommsChannelOperationalStatusEnumTypePluginSupport_print_data(
                    const CommsChannelOperationalStatusEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "CommsChannelOperationalStatusEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace CommsChannelOperationalStatusEnumModule  */
            namespace ConditionalOperatorEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ConditionalOperatorEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ConditionalOperatorEnumTypePluginSupport_print_data(
                    const ConditionalOperatorEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ConditionalOperatorEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ConditionalOperatorEnumModule  */
            namespace ContactManeuverInfluenceEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ContactManeuverInfluenceEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ContactManeuverInfluenceEnumTypePluginSupport_print_data(
                    const ContactManeuverInfluenceEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ContactManeuverInfluenceEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ContactManeuverInfluenceEnumModule  */
            namespace ContingencyBehaviorEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ContingencyBehaviorEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ContingencyBehaviorEnumTypePluginSupport_print_data(
                    const ContingencyBehaviorEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ContingencyBehaviorEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ContingencyBehaviorEnumModule  */
            namespace ContinuousTestEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ContinuousTestEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ContinuousTestEnumTypePluginSupport_print_data(
                    const ContinuousTestEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ContinuousTestEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ContinuousTestEnumModule  */
            namespace CoordinationSituationalSignalEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                CoordinationSituationalSignalEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void CoordinationSituationalSignalEnumTypePluginSupport_print_data(
                    const CoordinationSituationalSignalEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "CoordinationSituationalSignalEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace CoordinationSituationalSignalEnumModule  */
            namespace DirectionModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                DirectionModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void DirectionModeEnumTypePluginSupport_print_data(
                    const DirectionModeEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "DirectionModeEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace DirectionModeEnumModule  */
            namespace DomainEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                DomainEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void DomainEnumTypePluginSupport_print_data(
                    const DomainEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "DomainEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace DomainEnumModule  */
            namespace EmitterStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                EmitterStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void EmitterStateEnumTypePluginSupport_print_data(
                    const EmitterStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "EmitterStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace EmitterStateEnumModule  */
            namespace EngineKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                EngineKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void EngineKindEnumTypePluginSupport_print_data(
                    const EngineKindEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "EngineKindEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace EngineKindEnumModule  */
            namespace ErrorCodeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ErrorCodeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ErrorCodeEnumTypePluginSupport_print_data(
                    const ErrorCodeEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ErrorCodeEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ErrorCodeEnumModule  */
            namespace ErrorConditionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ErrorConditionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ErrorConditionEnumTypePluginSupport_print_data(
                    const ErrorConditionEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ErrorConditionEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ErrorConditionEnumModule  */
            namespace FLSBeamwidthEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                FLSBeamwidthEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void FLSBeamwidthEnumTypePluginSupport_print_data(
                    const FLSBeamwidthEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "FLSBeamwidthEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace FLSBeamwidthEnumModule  */
            namespace FLSConfigModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                FLSConfigModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void FLSConfigModeEnumTypePluginSupport_print_data(
                    const FLSConfigModeEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "FLSConfigModeEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace FLSConfigModeEnumModule  */
            namespace FLSWaveformLengthEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                FLSWaveformLengthEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void FLSWaveformLengthEnumTypePluginSupport_print_data(
                    const FLSWaveformLengthEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "FLSWaveformLengthEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace FLSWaveformLengthEnumModule  */
            namespace GPSConstellationEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                GPSConstellationEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void GPSConstellationEnumTypePluginSupport_print_data(
                    const GPSConstellationEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "GPSConstellationEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace GPSConstellationEnumModule  */
            namespace HandoverResultEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                HandoverResultEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void HandoverResultEnumTypePluginSupport_print_data(
                    const HandoverResultEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "HandoverResultEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace HandoverResultEnumModule  */
            namespace HeadingSectorKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                HeadingSectorKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void HeadingSectorKindEnumTypePluginSupport_print_data(
                    const HeadingSectorKindEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "HeadingSectorKindEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace HeadingSectorKindEnumModule  */
            namespace HoverKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                HoverKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void HoverKindEnumTypePluginSupport_print_data(
                    const HoverKindEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "HoverKindEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace HoverKindEnumModule  */
            namespace IgnitionControlEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                IgnitionControlEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void IgnitionControlEnumTypePluginSupport_print_data(
                    const IgnitionControlEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "IgnitionControlEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace IgnitionControlEnumModule  */
            namespace IgnitionStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                IgnitionStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void IgnitionStateEnumTypePluginSupport_print_data(
                    const IgnitionStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "IgnitionStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace IgnitionStateEnumModule  */
            namespace IlluminatorStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                IlluminatorStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void IlluminatorStateEnumTypePluginSupport_print_data(
                    const IlluminatorStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "IlluminatorStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace IlluminatorStateEnumModule  */
            namespace ImageFormatEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ImageFormatEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ImageFormatEnumTypePluginSupport_print_data(
                    const ImageFormatEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ImageFormatEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ImageFormatEnumModule  */
            namespace InertialSensorCmdEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                InertialSensorCmdEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void InertialSensorCmdEnumTypePluginSupport_print_data(
                    const InertialSensorCmdEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "InertialSensorCmdEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace InertialSensorCmdEnumModule  */
            namespace InertialSensorOpStatusEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                InertialSensorOpStatusEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void InertialSensorOpStatusEnumTypePluginSupport_print_data(
                    const InertialSensorOpStatusEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "InertialSensorOpStatusEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace InertialSensorOpStatusEnumModule  */
            namespace InitiatedTestEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                InitiatedTestEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void InitiatedTestEnumTypePluginSupport_print_data(
                    const InitiatedTestEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "InitiatedTestEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace InitiatedTestEnumModule  */
            namespace InterferenceEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                InterferenceEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void InterferenceEnumTypePluginSupport_print_data(
                    const InterferenceEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "InterferenceEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace InterferenceEnumModule  */
            namespace LandmarkEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                LandmarkEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void LandmarkEnumTypePluginSupport_print_data(
                    const LandmarkEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "LandmarkEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace LandmarkEnumModule  */
            namespace LogLevelEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                LogLevelEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void LogLevelEnumTypePluginSupport_print_data(
                    const LogLevelEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "LogLevelEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace LogLevelEnumModule  */
            namespace MastActionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                MastActionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void MastActionEnumTypePluginSupport_print_data(
                    const MastActionEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "MastActionEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace MastActionEnumModule  */
            namespace MastStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                MastStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void MastStateEnumTypePluginSupport_print_data(
                    const MastStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "MastStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace MastStateEnumModule  */
            namespace CommandStatusEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                CommandStatusEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void CommandStatusEnumTypePluginSupport_print_data(
                    const CommandStatusEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "CommandStatusEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace CommandStatusEnumModule  */
            namespace TaskControlEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                TaskControlEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void TaskControlEnumTypePluginSupport_print_data(
                    const TaskControlEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "TaskControlEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace TaskControlEnumModule  */
            namespace TaskStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                TaskStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void TaskStateEnumTypePluginSupport_print_data(
                    const TaskStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "TaskStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace TaskStateEnumModule  */
            namespace NavigationSolutionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                NavigationSolutionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void NavigationSolutionEnumTypePluginSupport_print_data(
                    const NavigationSolutionEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "NavigationSolutionEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace NavigationSolutionEnumModule  */
            namespace ObjectiveExecutorControlEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ObjectiveExecutorControlEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ObjectiveExecutorControlEnumTypePluginSupport_print_data(
                    const ObjectiveExecutorControlEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ObjectiveExecutorControlEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ObjectiveExecutorControlEnumModule  */
            namespace ObjectiveExecutorStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ObjectiveExecutorStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ObjectiveExecutorStateEnumTypePluginSupport_print_data(
                    const ObjectiveExecutorStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ObjectiveExecutorStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ObjectiveExecutorStateEnumModule  */
            namespace ObjectiveExecutorStateReasonEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ObjectiveExecutorStateReasonEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ObjectiveExecutorStateReasonEnumTypePluginSupport_print_data(
                    const ObjectiveExecutorStateReasonEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ObjectiveExecutorStateReasonEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ObjectiveExecutorStateReasonEnumModule  */
            namespace OperationalModeControlEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                OperationalModeControlEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void OperationalModeControlEnumTypePluginSupport_print_data(
                    const OperationalModeControlEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "OperationalModeControlEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace OperationalModeControlEnumModule  */
            namespace OperationalModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                OperationalModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void OperationalModeEnumTypePluginSupport_print_data(
                    const OperationalModeEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "OperationalModeEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace OperationalModeEnumModule  */
            namespace PassiveContactFeatureEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                PassiveContactFeatureEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void PassiveContactFeatureEnumTypePluginSupport_print_data(
                    const PassiveContactFeatureEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "PassiveContactFeatureEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace PassiveContactFeatureEnumModule  */
            namespace PathWayEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                PathWayEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void PathWayEnumTypePluginSupport_print_data(
                    const PathWayEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "PathWayEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace PathWayEnumModule  */
            namespace PowerOnTestEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                PowerOnTestEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void PowerOnTestEnumTypePluginSupport_print_data(
                    const PowerOnTestEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "PowerOnTestEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace PowerOnTestEnumModule  */
            namespace PowerPlantStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                PowerPlantStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void PowerPlantStateEnumTypePluginSupport_print_data(
                    const PowerPlantStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "PowerPlantStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace PowerPlantStateEnumModule  */
            namespace PowerStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                PowerStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void PowerStateEnumTypePluginSupport_print_data(
                    const PowerStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "PowerStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace PowerStateEnumModule  */
            namespace ProcessingUnitEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ProcessingUnitEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ProcessingUnitEnumTypePluginSupport_print_data(
                    const ProcessingUnitEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ProcessingUnitEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ProcessingUnitEnumModule  */
            namespace PumpStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                PumpStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void PumpStateEnumTypePluginSupport_print_data(
                    const PumpStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "PumpStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace PumpStateEnumModule  */
            namespace ReferenceFrameOriginEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                ReferenceFrameOriginEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void ReferenceFrameOriginEnumTypePluginSupport_print_data(
                    const ReferenceFrameOriginEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "ReferenceFrameOriginEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace ReferenceFrameOriginEnumModule  */
            namespace SourceIndicatorEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                SourceIndicatorEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void SourceIndicatorEnumTypePluginSupport_print_data(
                    const SourceIndicatorEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "SourceIndicatorEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace SourceIndicatorEnumModule  */
            namespace SpecialManeuverIndicatorEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                SpecialManeuverIndicatorEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void SpecialManeuverIndicatorEnumTypePluginSupport_print_data(
                    const SpecialManeuverIndicatorEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "SpecialManeuverIndicatorEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace SpecialManeuverIndicatorEnumModule  */
            namespace TamperDetectionStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                TamperDetectionStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void TamperDetectionStateEnumTypePluginSupport_print_data(
                    const TamperDetectionStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "TamperDetectionStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace TamperDetectionStateEnumModule  */
            namespace TFOMEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                TFOMEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void TFOMEnumTypePluginSupport_print_data(
                    const TFOMEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "TFOMEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace TFOMEnumModule  */
            namespace TrackCategoryEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                TrackCategoryEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void TrackCategoryEnumTypePluginSupport_print_data(
                    const TrackCategoryEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "TrackCategoryEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace TrackCategoryEnumModule  */
            namespace TrackIdentityEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                TrackIdentityEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void TrackIdentityEnumTypePluginSupport_print_data(
                    const TrackIdentityEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "TrackIdentityEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace TrackIdentityEnumModule  */
            namespace TriggerStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                TriggerStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void TriggerStateEnumTypePluginSupport_print_data(
                    const TriggerStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "TriggerStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace TriggerStateEnumModule  */
            namespace VehicleSpeedModeEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                VehicleSpeedModeEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void VehicleSpeedModeEnumTypePluginSupport_print_data(
                    const VehicleSpeedModeEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "VehicleSpeedModeEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace VehicleSpeedModeEnumModule  */
            namespace VisualClassificationEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                VisualClassificationEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void VisualClassificationEnumTypePluginSupport_print_data(
                    const VisualClassificationEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "VisualClassificationEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace VisualClassificationEnumModule  */
            namespace WaterTurnDirectionEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                WaterTurnDirectionEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void WaterTurnDirectionEnumTypePluginSupport_print_data(
                    const WaterTurnDirectionEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "WaterTurnDirectionEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace WaterTurnDirectionEnumModule  */
            namespace WaterZoneKindEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                WaterZoneKindEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void WaterZoneKindEnumTypePluginSupport_print_data(
                    const WaterZoneKindEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "WaterZoneKindEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace WaterZoneKindEnumModule  */
            namespace WaypointStateEnumModule {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                unsigned int 
                WaypointStateEnumTypePlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment)
                {
                    try {
                        unsigned int initial_alignment = current_alignment;

                        current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                            endpoint_data,
                            NULL,
                            include_encapsulation,
                            encapsulation_id, current_alignment);

                        return current_alignment - initial_alignment;
                    } catch (...) {
                        return 0;
                    }    
                }

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                void WaypointStateEnumTypePluginSupport_print_data(
                    const WaypointStateEnumType *sample,
                    const char *description,
                    unsigned int indent_level)
                {
                    if (description != NULL) {
                        RTICdrType_printIndent(indent_level);
                        RTILogParamString_printPlain("%s:\n", description);
                    }

                    if (sample == NULL) {
                        RTICdrType_printIndent(indent_level+1);
                        RTILogParamString_printPlain("NULL\n");
                        return;
                    }

                    RTICdrType_printEnum((RTICdrEnum *)sample, "WaypointStateEnumType", indent_level + 1);
                }

                /* ------------------------------------------------------------------------
                * Plug-in Installation Methods
                * ------------------------------------------------------------------------ */
            } /* namespace WaypointStateEnumModule  */
        } /* namespace MaritimeEnumeration  */
    } /* namespace Common  */
} /* namespace UMAA  */
#undef RTI_CDR_CURRENT_SUBMODULE 
