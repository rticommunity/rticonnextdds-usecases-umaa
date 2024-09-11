

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MaritimeEnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "MaritimeEnumerationSetsPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "MaritimeEnumerationSets.hpp"

#include <rti/util/ostream_operators.hpp>

#undef ERROR

#undef VARIABLE_PITCH

#undef DELETE

#undef PLATFORM

namespace UMAA {

    namespace Common {

        namespace MaritimeEnumeration {

            namespace ActivationStateEnumModule {

                std::ostream& operator << (std::ostream& o,const ActivationStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ActivationStateEnumType::ACTIVE:
                        o << "ActivationStateEnumType::ACTIVE" << " ";
                        break;
                        case ActivationStateEnumType::ERROR:
                        o << "ActivationStateEnumType::ERROR" << " ";
                        break;
                        case ActivationStateEnumType::OFF:
                        o << "ActivationStateEnumType::OFF" << " ";
                        break;
                        case ActivationStateEnumType::READY:
                        o << "ActivationStateEnumType::READY" << " ";
                        break;
                        case ActivationStateEnumType::STANDBY:
                        o << "ActivationStateEnumType::STANDBY" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ActivationStateEnumModule  

            namespace ActivationStateTargetEnumModule {

                std::ostream& operator << (std::ostream& o,const ActivationStateTargetEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ActivationStateTargetEnumType::ACTIVE:
                        o << "ActivationStateTargetEnumType::ACTIVE" << " ";
                        break;
                        case ActivationStateTargetEnumType::OFF:
                        o << "ActivationStateTargetEnumType::OFF" << " ";
                        break;
                        case ActivationStateTargetEnumType::READY:
                        o << "ActivationStateTargetEnumType::READY" << " ";
                        break;
                        case ActivationStateTargetEnumType::STANDBY:
                        o << "ActivationStateTargetEnumType::STANDBY" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ActivationStateTargetEnumModule  

            namespace AnchorActionEnumModule {

                std::ostream& operator << (std::ostream& o,const AnchorActionEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case AnchorActionEnumType::LOWER:
                        o << "AnchorActionEnumType::LOWER" << " ";
                        break;
                        case AnchorActionEnumType::RAISE:
                        o << "AnchorActionEnumType::RAISE" << " ";
                        break;
                        case AnchorActionEnumType::STOP:
                        o << "AnchorActionEnumType::STOP" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace AnchorActionEnumModule  

            namespace AnchorKindEnumModule {

                std::ostream& operator << (std::ostream& o,const AnchorKindEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case AnchorKindEnumType::COMMERCIAL_STOCKLESS:
                        o << "AnchorKindEnumType::COMMERCIAL_STOCKLESS" << " ";
                        break;
                        case AnchorKindEnumType::DANFORTH:
                        o << "AnchorKindEnumType::DANFORTH" << " ";
                        break;
                        case AnchorKindEnumType::FOUR_FLUKE:
                        o << "AnchorKindEnumType::FOUR_FLUKE" << " ";
                        break;
                        case AnchorKindEnumType::GENERAL:
                        o << "AnchorKindEnumType::GENERAL" << " ";
                        break;
                        case AnchorKindEnumType::LIGHTWEIGHT:
                        o << "AnchorKindEnumType::LIGHTWEIGHT" << " ";
                        break;
                        case AnchorKindEnumType::MARK_2_LWT:
                        o << "AnchorKindEnumType::MARK_2_LWT" << " ";
                        break;
                        case AnchorKindEnumType::MARK_2_STOCKLESS:
                        o << "AnchorKindEnumType::MARK_2_STOCKLESS" << " ";
                        break;
                        case AnchorKindEnumType::MUSHROOM:
                        o << "AnchorKindEnumType::MUSHROOM" << " ";
                        break;
                        case AnchorKindEnumType::NAVY_TYPE_STOCK:
                        o << "AnchorKindEnumType::NAVY_TYPE_STOCK" << " ";
                        break;
                        case AnchorKindEnumType::NONMAGNETIC:
                        o << "AnchorKindEnumType::NONMAGNETIC" << " ";
                        break;
                        case AnchorKindEnumType::STANDARD_NAVY_STOCKLESS:
                        o << "AnchorKindEnumType::STANDARD_NAVY_STOCKLESS" << " ";
                        break;
                        case AnchorKindEnumType::TWO_FLUKE_BALANCED_FLUKE:
                        o << "AnchorKindEnumType::TWO_FLUKE_BALANCED_FLUKE" << " ";
                        break;
                        case AnchorKindEnumType::WEDGE_BLOCK_LWT:
                        o << "AnchorKindEnumType::WEDGE_BLOCK_LWT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace AnchorKindEnumModule  

            namespace AnchorLocationEnumModule {

                std::ostream& operator << (std::ostream& o,const AnchorLocationEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case AnchorLocationEnumType::BOWER:
                        o << "AnchorLocationEnumType::BOWER" << " ";
                        break;
                        case AnchorLocationEnumType::KEEL:
                        o << "AnchorLocationEnumType::KEEL" << " ";
                        break;
                        case AnchorLocationEnumType::STERN:
                        o << "AnchorLocationEnumType::STERN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace AnchorLocationEnumModule  

            namespace AnchorRodeEnumModule {

                std::ostream& operator << (std::ostream& o,const AnchorRodeEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case AnchorRodeEnumType::CHAIN:
                        o << "AnchorRodeEnumType::CHAIN" << " ";
                        break;
                        case AnchorRodeEnumType::ROPE:
                        o << "AnchorRodeEnumType::ROPE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace AnchorRodeEnumModule  

            namespace AnchorStateEnumModule {

                std::ostream& operator << (std::ostream& o,const AnchorStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case AnchorStateEnumType::DEPLOYED:
                        o << "AnchorStateEnumType::DEPLOYED" << " ";
                        break;
                        case AnchorStateEnumType::LOWERING:
                        o << "AnchorStateEnumType::LOWERING" << " ";
                        break;
                        case AnchorStateEnumType::RAISING:
                        o << "AnchorStateEnumType::RAISING" << " ";
                        break;
                        case AnchorStateEnumType::STOPPED:
                        o << "AnchorStateEnumType::STOPPED" << " ";
                        break;
                        case AnchorStateEnumType::STOWED:
                        o << "AnchorStateEnumType::STOWED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace AnchorStateEnumModule  

            namespace AutoOffModeEnumModule {

                std::ostream& operator << (std::ostream& o,const AutoOffModeEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case AutoOffModeEnumType::DEACTIVATE:
                        o << "AutoOffModeEnumType::DEACTIVATE" << " ";
                        break;
                        case AutoOffModeEnumType::SHUTDOWN:
                        o << "AutoOffModeEnumType::SHUTDOWN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace AutoOffModeEnumModule  

            namespace BilgeStateEnumModule {

                std::ostream& operator << (std::ostream& o,const BilgeStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case BilgeStateEnumType::FAULT:
                        o << "BilgeStateEnumType::FAULT" << " ";
                        break;
                        case BilgeStateEnumType::OFF:
                        o << "BilgeStateEnumType::OFF" << " ";
                        break;
                        case BilgeStateEnumType::ON:
                        o << "BilgeStateEnumType::ON" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace BilgeStateEnumModule  

            namespace BufferPurgeOptionEnumModule {

                std::ostream& operator << (std::ostream& o,const BufferPurgeOptionEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case BufferPurgeOptionEnumType::DROP_LOWEST_PRIORITY:
                        o << "BufferPurgeOptionEnumType::DROP_LOWEST_PRIORITY" << " ";
                        break;
                        case BufferPurgeOptionEnumType::DROP_MOST_RECENT:
                        o << "BufferPurgeOptionEnumType::DROP_MOST_RECENT" << " ";
                        break;
                        case BufferPurgeOptionEnumType::DROP_OLDEST:
                        o << "BufferPurgeOptionEnumType::DROP_OLDEST" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace BufferPurgeOptionEnumModule  

            namespace COLREGSClassificationEnumModule {

                std::ostream& operator << (std::ostream& o,const COLREGSClassificationEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case COLREGSClassificationEnumType::ANCHORED:
                        o << "COLREGSClassificationEnumType::ANCHORED" << " ";
                        break;
                        case COLREGSClassificationEnumType::CONSTRAINED_BY_DRAUGHT:
                        o << "COLREGSClassificationEnumType::CONSTRAINED_BY_DRAUGHT" << " ";
                        break;
                        case COLREGSClassificationEnumType::FISHING:
                        o << "COLREGSClassificationEnumType::FISHING" << " ";
                        break;
                        case COLREGSClassificationEnumType::NON_VESSEL:
                        o << "COLREGSClassificationEnumType::NON_VESSEL" << " ";
                        break;
                        case COLREGSClassificationEnumType::NOT_UNDER_COMMAND:
                        o << "COLREGSClassificationEnumType::NOT_UNDER_COMMAND" << " ";
                        break;
                        case COLREGSClassificationEnumType::POWER_DRIVEN_UNDERWAY:
                        o << "COLREGSClassificationEnumType::POWER_DRIVEN_UNDERWAY" << " ";
                        break;
                        case COLREGSClassificationEnumType::PUSHING:
                        o << "COLREGSClassificationEnumType::PUSHING" << " ";
                        break;
                        case COLREGSClassificationEnumType::RESTRICTED_IN_ABILITY_TO_MANUEVER:
                        o << "COLREGSClassificationEnumType::RESTRICTED_IN_ABILITY_TO_MANUEVER" << " ";
                        break;
                        case COLREGSClassificationEnumType::SAILING:
                        o << "COLREGSClassificationEnumType::SAILING" << " ";
                        break;
                        case COLREGSClassificationEnumType::TOWING:
                        o << "COLREGSClassificationEnumType::TOWING" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace COLREGSClassificationEnumModule  

            namespace CommandStatusReasonEnumModule {

                std::ostream& operator << (std::ostream& o,const CommandStatusReasonEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case CommandStatusReasonEnumType::CANCELED:
                        o << "CommandStatusReasonEnumType::CANCELED" << " ";
                        break;
                        case CommandStatusReasonEnumType::INTERRUPTED:
                        o << "CommandStatusReasonEnumType::INTERRUPTED" << " ";
                        break;
                        case CommandStatusReasonEnumType::OBJECTIVE_FAILED:
                        o << "CommandStatusReasonEnumType::OBJECTIVE_FAILED" << " ";
                        break;
                        case CommandStatusReasonEnumType::RESOURCE_FAILED:
                        o << "CommandStatusReasonEnumType::RESOURCE_FAILED" << " ";
                        break;
                        case CommandStatusReasonEnumType::RESOURCE_REJECTED:
                        o << "CommandStatusReasonEnumType::RESOURCE_REJECTED" << " ";
                        break;
                        case CommandStatusReasonEnumType::SERVICE_FAILED:
                        o << "CommandStatusReasonEnumType::SERVICE_FAILED" << " ";
                        break;
                        case CommandStatusReasonEnumType::SUCCEEDED:
                        o << "CommandStatusReasonEnumType::SUCCEEDED" << " ";
                        break;
                        case CommandStatusReasonEnumType::TIMEOUT:
                        o << "CommandStatusReasonEnumType::TIMEOUT" << " ";
                        break;
                        case CommandStatusReasonEnumType::UPDATED:
                        o << "CommandStatusReasonEnumType::UPDATED" << " ";
                        break;
                        case CommandStatusReasonEnumType::VALIDATION_FAILED:
                        o << "CommandStatusReasonEnumType::VALIDATION_FAILED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace CommandStatusReasonEnumModule  

            namespace CommsChannelOperationalStatusEnumModule {

                std::ostream& operator << (std::ostream& o,const CommsChannelOperationalStatusEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case CommsChannelOperationalStatusEnumType::OFF:
                        o << "CommsChannelOperationalStatusEnumType::OFF" << " ";
                        break;
                        case CommsChannelOperationalStatusEnumType::ON:
                        o << "CommsChannelOperationalStatusEnumType::ON" << " ";
                        break;
                        case CommsChannelOperationalStatusEnumType::OPERATIONAL:
                        o << "CommsChannelOperationalStatusEnumType::OPERATIONAL" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace CommsChannelOperationalStatusEnumModule  

            namespace ConditionalOperatorEnumModule {

                std::ostream& operator << (std::ostream& o,const ConditionalOperatorEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ConditionalOperatorEnumType::GREATER_THAN:
                        o << "ConditionalOperatorEnumType::GREATER_THAN" << " ";
                        break;
                        case ConditionalOperatorEnumType::GREATER_THAN_OR_EQUAL_TO:
                        o << "ConditionalOperatorEnumType::GREATER_THAN_OR_EQUAL_TO" << " ";
                        break;
                        case ConditionalOperatorEnumType::LESS_THAN:
                        o << "ConditionalOperatorEnumType::LESS_THAN" << " ";
                        break;
                        case ConditionalOperatorEnumType::LESS_THAN_OR_EQUAL_TO:
                        o << "ConditionalOperatorEnumType::LESS_THAN_OR_EQUAL_TO" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ConditionalOperatorEnumModule  

            namespace ContactManeuverInfluenceEnumModule {

                std::ostream& operator << (std::ostream& o,const ContactManeuverInfluenceEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ContactManeuverInfluenceEnumType::COLLISION:
                        o << "ContactManeuverInfluenceEnumType::COLLISION" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::COLLISION_AVOIDANCE:
                        o << "ContactManeuverInfluenceEnumType::COLLISION_AVOIDANCE" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::CROSSING_LEFT_COMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::CROSSING_LEFT_COMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::CROSSING_LEFT_NONCOMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::CROSSING_LEFT_NONCOMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::CROSSING_RIGHT_COMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::CROSSING_RIGHT_COMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::CROSSING_RIGHT_NONCOMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::CROSSING_RIGHT_NONCOMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::DYNAMIC_AVOIDANCE:
                        o << "ContactManeuverInfluenceEnumType::DYNAMIC_AVOIDANCE" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::GUIDE:
                        o << "ContactManeuverInfluenceEnumType::GUIDE" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::HEAD_ON_COMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::HEAD_ON_COMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::HEAD_ON_NONCOMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::HEAD_ON_NONCOMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::NONE:
                        o << "ContactManeuverInfluenceEnumType::NONE" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::OVERTAKEN_COMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::OVERTAKEN_COMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::OVERTAKEN_NONCOMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::OVERTAKEN_NONCOMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::OVERTAKING_COMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::OVERTAKING_COMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::OVERTAKING_NONCOMPLIANT:
                        o << "ContactManeuverInfluenceEnumType::OVERTAKING_NONCOMPLIANT" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::PREEMPTIVE:
                        o << "ContactManeuverInfluenceEnumType::PREEMPTIVE" << " ";
                        break;
                        case ContactManeuverInfluenceEnumType::STATIC_AVOIDANCE:
                        o << "ContactManeuverInfluenceEnumType::STATIC_AVOIDANCE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ContactManeuverInfluenceEnumModule  

            namespace ContingencyBehaviorEnumModule {

                std::ostream& operator << (std::ostream& o,const ContingencyBehaviorEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ContingencyBehaviorEnumType::CONTINUE:
                        o << "ContingencyBehaviorEnumType::CONTINUE" << " ";
                        break;
                        case ContingencyBehaviorEnumType::FINISH:
                        o << "ContingencyBehaviorEnumType::FINISH" << " ";
                        break;
                        case ContingencyBehaviorEnumType::_HOME:
                        o << "ContingencyBehaviorEnumType::_HOME" << " ";
                        break;
                        case ContingencyBehaviorEnumType::LOITER:
                        o << "ContingencyBehaviorEnumType::LOITER" << " ";
                        break;
                        case ContingencyBehaviorEnumType::NONE:
                        o << "ContingencyBehaviorEnumType::NONE" << " ";
                        break;
                        case ContingencyBehaviorEnumType::VEHICLE_SPECIFIC:
                        o << "ContingencyBehaviorEnumType::VEHICLE_SPECIFIC" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ContingencyBehaviorEnumModule  

            namespace ContinuousTestEnumModule {

                std::ostream& operator << (std::ostream& o,const ContinuousTestEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ContinuousTestEnumType::DISABLED_NO_TEST:
                        o << "ContinuousTestEnumType::DISABLED_NO_TEST" << " ";
                        break;
                        case ContinuousTestEnumType::FULL_TEST:
                        o << "ContinuousTestEnumType::FULL_TEST" << " ";
                        break;
                        case ContinuousTestEnumType::NON_INTRUSIVE_TESTS_ONLY:
                        o << "ContinuousTestEnumType::NON_INTRUSIVE_TESTS_ONLY" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ContinuousTestEnumModule  

            namespace CoordinationSituationalSignalEnumModule {

                std::ostream& operator << (std::ostream& o,const CoordinationSituationalSignalEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case CoordinationSituationalSignalEnumType::AGREE_TO_BE_OVERTAKEN:
                        o << "CoordinationSituationalSignalEnumType::AGREE_TO_BE_OVERTAKEN" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::ALTERING_COURSE_TO_PORT:
                        o << "CoordinationSituationalSignalEnumType::ALTERING_COURSE_TO_PORT" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::ALTERING_COURSE_TO_STARBOARD:
                        o << "CoordinationSituationalSignalEnumType::ALTERING_COURSE_TO_STARBOARD" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::BLIND_BEND_SIGNAL:
                        o << "CoordinationSituationalSignalEnumType::BLIND_BEND_SIGNAL" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::DANGER_SIGNAL:
                        o << "CoordinationSituationalSignalEnumType::DANGER_SIGNAL" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::IN_DISTRESS_NEED_ASSISTANCE:
                        o << "CoordinationSituationalSignalEnumType::IN_DISTRESS_NEED_ASSISTANCE" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::NONE:
                        o << "CoordinationSituationalSignalEnumType::NONE" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::OPERATING_ASTERN_PROPULSION:
                        o << "CoordinationSituationalSignalEnumType::OPERATING_ASTERN_PROPULSION" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::TO_OVERTAKE_LEAVE_VESSEL_TO_PORT:
                        o << "CoordinationSituationalSignalEnumType::TO_OVERTAKE_LEAVE_VESSEL_TO_PORT" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::TO_OVERTAKE_LEAVE_VESSEL_TO_STARBOARD:
                        o << "CoordinationSituationalSignalEnumType::TO_OVERTAKE_LEAVE_VESSEL_TO_STARBOARD" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::VESSEL_LEAVING_DOCK:
                        o << "CoordinationSituationalSignalEnumType::VESSEL_LEAVING_DOCK" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::VISIBILITY_RESTRICTED_VEHICLE_STOPPED:
                        o << "CoordinationSituationalSignalEnumType::VISIBILITY_RESTRICTED_VEHICLE_STOPPED" << " ";
                        break;
                        case CoordinationSituationalSignalEnumType::VISIBILITY_RESTRICTED_VEHICLE_UNDERWAY:
                        o << "CoordinationSituationalSignalEnumType::VISIBILITY_RESTRICTED_VEHICLE_UNDERWAY" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace CoordinationSituationalSignalEnumModule  

            namespace DirectionModeEnumModule {

                std::ostream& operator << (std::ostream& o,const DirectionModeEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case DirectionModeEnumType::COURSE:
                        o << "DirectionModeEnumType::COURSE" << " ";
                        break;
                        case DirectionModeEnumType::HEADING:
                        o << "DirectionModeEnumType::HEADING" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace DirectionModeEnumModule  

            namespace DomainEnumModule {

                std::ostream& operator << (std::ostream& o,const DomainEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case DomainEnumType::AIR:
                        o << "DomainEnumType::AIR" << " ";
                        break;
                        case DomainEnumType::GROUND:
                        o << "DomainEnumType::GROUND" << " ";
                        break;
                        case DomainEnumType::SURFACE:
                        o << "DomainEnumType::SURFACE" << " ";
                        break;
                        case DomainEnumType::UNDERSEA:
                        o << "DomainEnumType::UNDERSEA" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace DomainEnumModule  

            namespace EmitterStateEnumModule {

                std::ostream& operator << (std::ostream& o,const EmitterStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case EmitterStateEnumType::ALLOWED:
                        o << "EmitterStateEnumType::ALLOWED" << " ";
                        break;
                        case EmitterStateEnumType::SECURED:
                        o << "EmitterStateEnumType::SECURED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace EmitterStateEnumModule  

            namespace EngineKindEnumModule {

                std::ostream& operator << (std::ostream& o,const EngineKindEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case EngineKindEnumType::DIESEL:
                        o << "EngineKindEnumType::DIESEL" << " ";
                        break;
                        case EngineKindEnumType::GAS:
                        o << "EngineKindEnumType::GAS" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace EngineKindEnumModule  

            namespace ErrorCodeEnumModule {

                std::ostream& operator << (std::ostream& o,const ErrorCodeEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ErrorCodeEnumType::ACTUATOR:
                        o << "ErrorCodeEnumType::ACTUATOR" << " ";
                        break;
                        case ErrorCodeEnumType::FILESYS:
                        o << "ErrorCodeEnumType::FILESYS" << " ";
                        break;
                        case ErrorCodeEnumType::NONE:
                        o << "ErrorCodeEnumType::NONE" << " ";
                        break;
                        case ErrorCodeEnumType::POWER:
                        o << "ErrorCodeEnumType::POWER" << " ";
                        break;
                        case ErrorCodeEnumType::PROCESSOR:
                        o << "ErrorCodeEnumType::PROCESSOR" << " ";
                        break;
                        case ErrorCodeEnumType::RAM:
                        o << "ErrorCodeEnumType::RAM" << " ";
                        break;
                        case ErrorCodeEnumType::ROM:
                        o << "ErrorCodeEnumType::ROM" << " ";
                        break;
                        case ErrorCodeEnumType::SENSOR:
                        o << "ErrorCodeEnumType::SENSOR" << " ";
                        break;
                        case ErrorCodeEnumType::SOFTWARE:
                        o << "ErrorCodeEnumType::SOFTWARE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ErrorCodeEnumModule  

            namespace ErrorConditionEnumModule {

                std::ostream& operator << (std::ostream& o,const ErrorConditionEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ErrorConditionEnumType::ERROR:
                        o << "ErrorConditionEnumType::ERROR" << " ";
                        break;
                        case ErrorConditionEnumType::FAIL:
                        o << "ErrorConditionEnumType::FAIL" << " ";
                        break;
                        case ErrorConditionEnumType::INFO:
                        o << "ErrorConditionEnumType::INFO" << " ";
                        break;
                        case ErrorConditionEnumType::NONE:
                        o << "ErrorConditionEnumType::NONE" << " ";
                        break;
                        case ErrorConditionEnumType::WARN:
                        o << "ErrorConditionEnumType::WARN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ErrorConditionEnumModule  

            namespace FLSBeamwidthEnumModule {

                std::ostream& operator << (std::ostream& o,const FLSBeamwidthEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case FLSBeamwidthEnumType::MEDIUM:
                        o << "FLSBeamwidthEnumType::MEDIUM" << " ";
                        break;
                        case FLSBeamwidthEnumType::NARROW:
                        o << "FLSBeamwidthEnumType::NARROW" << " ";
                        break;
                        case FLSBeamwidthEnumType::WIDE:
                        o << "FLSBeamwidthEnumType::WIDE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace FLSBeamwidthEnumModule  

            namespace FLSConfigModeEnumModule {

                std::ostream& operator << (std::ostream& o,const FLSConfigModeEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case FLSConfigModeEnumType::DEV_TEST:
                        o << "FLSConfigModeEnumType::DEV_TEST" << " ";
                        break;
                        case FLSConfigModeEnumType::DIVE:
                        o << "FLSConfigModeEnumType::DIVE" << " ";
                        break;
                        case FLSConfigModeEnumType::PASSIVE_ONLY:
                        o << "FLSConfigModeEnumType::PASSIVE_ONLY" << " ";
                        break;
                        case FLSConfigModeEnumType::SEARCH_BOTTOM:
                        o << "FLSConfigModeEnumType::SEARCH_BOTTOM" << " ";
                        break;
                        case FLSConfigModeEnumType::SEARCH_VOLUME:
                        o << "FLSConfigModeEnumType::SEARCH_VOLUME" << " ";
                        break;
                        case FLSConfigModeEnumType::SURFACE:
                        o << "FLSConfigModeEnumType::SURFACE" << " ";
                        break;
                        case FLSConfigModeEnumType::TEST:
                        o << "FLSConfigModeEnumType::TEST" << " ";
                        break;
                        case FLSConfigModeEnumType::TRANSIT:
                        o << "FLSConfigModeEnumType::TRANSIT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace FLSConfigModeEnumModule  

            namespace FLSWaveformLengthEnumModule {

                std::ostream& operator << (std::ostream& o,const FLSWaveformLengthEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case FLSWaveformLengthEnumType::_LONG:
                        o << "FLSWaveformLengthEnumType::_LONG" << " ";
                        break;
                        case FLSWaveformLengthEnumType::MEDIUM:
                        o << "FLSWaveformLengthEnumType::MEDIUM" << " ";
                        break;
                        case FLSWaveformLengthEnumType::_SHORT:
                        o << "FLSWaveformLengthEnumType::_SHORT" << " ";
                        break;
                        case FLSWaveformLengthEnumType::XSHORT:
                        o << "FLSWaveformLengthEnumType::XSHORT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace FLSWaveformLengthEnumModule  

            namespace GPSConstellationEnumModule {

                std::ostream& operator << (std::ostream& o,const GPSConstellationEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case GPSConstellationEnumType::BEIDOU:
                        o << "GPSConstellationEnumType::BEIDOU" << " ";
                        break;
                        case GPSConstellationEnumType::GALILEO:
                        o << "GPSConstellationEnumType::GALILEO" << " ";
                        break;
                        case GPSConstellationEnumType::GLONASS:
                        o << "GPSConstellationEnumType::GLONASS" << " ";
                        break;
                        case GPSConstellationEnumType::GPS:
                        o << "GPSConstellationEnumType::GPS" << " ";
                        break;
                        case GPSConstellationEnumType::IRNSS:
                        o << "GPSConstellationEnumType::IRNSS" << " ";
                        break;
                        case GPSConstellationEnumType::QZSS:
                        o << "GPSConstellationEnumType::QZSS" << " ";
                        break;
                        case GPSConstellationEnumType::SBAS:
                        o << "GPSConstellationEnumType::SBAS" << " ";
                        break;
                        case GPSConstellationEnumType::UNKNOWN:
                        o << "GPSConstellationEnumType::UNKNOWN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace GPSConstellationEnumModule  

            namespace HandoverResultEnumModule {

                std::ostream& operator << (std::ostream& o,const HandoverResultEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case HandoverResultEnumType::DEFERRED:
                        o << "HandoverResultEnumType::DEFERRED" << " ";
                        break;
                        case HandoverResultEnumType::DENIED:
                        o << "HandoverResultEnumType::DENIED" << " ";
                        break;
                        case HandoverResultEnumType::GRANTED:
                        o << "HandoverResultEnumType::GRANTED" << " ";
                        break;
                        case HandoverResultEnumType::INSUFFICIENT_AUTHORITY:
                        o << "HandoverResultEnumType::INSUFFICIENT_AUTHORITY" << " ";
                        break;
                        case HandoverResultEnumType::NOT_AVAILABLE:
                        o << "HandoverResultEnumType::NOT_AVAILABLE" << " ";
                        break;
                        case HandoverResultEnumType::TIMEOUT:
                        o << "HandoverResultEnumType::TIMEOUT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace HandoverResultEnumModule  

            namespace HeadingSectorKindEnumModule {

                std::ostream& operator << (std::ostream& o,const HeadingSectorKindEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case HeadingSectorKindEnumType::INSIDE:
                        o << "HeadingSectorKindEnumType::INSIDE" << " ";
                        break;
                        case HeadingSectorKindEnumType::OUTSIDE:
                        o << "HeadingSectorKindEnumType::OUTSIDE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace HeadingSectorKindEnumModule  

            namespace HoverKindEnumModule {

                std::ostream& operator << (std::ostream& o,const HoverKindEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case HoverKindEnumType::LAT_LON_PRIORITY:
                        o << "HoverKindEnumType::LAT_LON_PRIORITY" << " ";
                        break;
                        case HoverKindEnumType::Z_PRIORITY:
                        o << "HoverKindEnumType::Z_PRIORITY" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace HoverKindEnumModule  

            namespace IgnitionControlEnumModule {

                std::ostream& operator << (std::ostream& o,const IgnitionControlEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case IgnitionControlEnumType::OFF:
                        o << "IgnitionControlEnumType::OFF" << " ";
                        break;
                        case IgnitionControlEnumType::RUN:
                        o << "IgnitionControlEnumType::RUN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace IgnitionControlEnumModule  

            namespace IgnitionStateEnumModule {

                std::ostream& operator << (std::ostream& o,const IgnitionStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case IgnitionStateEnumType::OFF:
                        o << "IgnitionStateEnumType::OFF" << " ";
                        break;
                        case IgnitionStateEnumType::RUN:
                        o << "IgnitionStateEnumType::RUN" << " ";
                        break;
                        case IgnitionStateEnumType::START:
                        o << "IgnitionStateEnumType::START" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace IgnitionStateEnumModule  

            namespace IlluminatorStateEnumModule {

                std::ostream& operator << (std::ostream& o,const IlluminatorStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case IlluminatorStateEnumType::FLASHING:
                        o << "IlluminatorStateEnumType::FLASHING" << " ";
                        break;
                        case IlluminatorStateEnumType::OFF:
                        o << "IlluminatorStateEnumType::OFF" << " ";
                        break;
                        case IlluminatorStateEnumType::ON:
                        o << "IlluminatorStateEnumType::ON" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace IlluminatorStateEnumModule  

            namespace ImageFormatEnumModule {

                std::ostream& operator << (std::ostream& o,const ImageFormatEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ImageFormatEnumType::ARW:
                        o << "ImageFormatEnumType::ARW" << " ";
                        break;
                        case ImageFormatEnumType::BMP:
                        o << "ImageFormatEnumType::BMP" << " ";
                        break;
                        case ImageFormatEnumType::CR2_RAW:
                        o << "ImageFormatEnumType::CR2_RAW" << " ";
                        break;
                        case ImageFormatEnumType::DNG:
                        o << "ImageFormatEnumType::DNG" << " ";
                        break;
                        case ImageFormatEnumType::GEOJPEG:
                        o << "ImageFormatEnumType::GEOJPEG" << " ";
                        break;
                        case ImageFormatEnumType::GEOTIFF:
                        o << "ImageFormatEnumType::GEOTIFF" << " ";
                        break;
                        case ImageFormatEnumType::GIF:
                        o << "ImageFormatEnumType::GIF" << " ";
                        break;
                        case ImageFormatEnumType::GPR:
                        o << "ImageFormatEnumType::GPR" << " ";
                        break;
                        case ImageFormatEnumType::JPEG:
                        o << "ImageFormatEnumType::JPEG" << " ";
                        break;
                        case ImageFormatEnumType::NEF:
                        o << "ImageFormatEnumType::NEF" << " ";
                        break;
                        case ImageFormatEnumType::PGM:
                        o << "ImageFormatEnumType::PGM" << " ";
                        break;
                        case ImageFormatEnumType::PNG:
                        o << "ImageFormatEnumType::PNG" << " ";
                        break;
                        case ImageFormatEnumType::PNM:
                        o << "ImageFormatEnumType::PNM" << " ";
                        break;
                        case ImageFormatEnumType::PPM:
                        o << "ImageFormatEnumType::PPM" << " ";
                        break;
                        case ImageFormatEnumType::TIFF:
                        o << "ImageFormatEnumType::TIFF" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ImageFormatEnumModule  

            namespace InertialSensorCmdEnumModule {

                std::ostream& operator << (std::ostream& o,const InertialSensorCmdEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case InertialSensorCmdEnumType::BEST_ALIGN:
                        o << "InertialSensorCmdEnumType::BEST_ALIGN" << " ";
                        break;
                        case InertialSensorCmdEnumType::GPS_ALIGN:
                        o << "InertialSensorCmdEnumType::GPS_ALIGN" << " ";
                        break;
                        case InertialSensorCmdEnumType::INIT:
                        o << "InertialSensorCmdEnumType::INIT" << " ";
                        break;
                        case InertialSensorCmdEnumType::SNAP_ALIGN:
                        o << "InertialSensorCmdEnumType::SNAP_ALIGN" << " ";
                        break;
                        case InertialSensorCmdEnumType::STATIONARY_ALIGN:
                        o << "InertialSensorCmdEnumType::STATIONARY_ALIGN" << " ";
                        break;
                        case InertialSensorCmdEnumType::TRANSFER_ALIGN:
                        o << "InertialSensorCmdEnumType::TRANSFER_ALIGN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace InertialSensorCmdEnumModule  

            namespace InertialSensorOpStatusEnumModule {

                std::ostream& operator << (std::ostream& o,const InertialSensorOpStatusEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case InertialSensorOpStatusEnumType::BEST_ALIGNMENT_FAILURE:
                        o << "InertialSensorOpStatusEnumType::BEST_ALIGNMENT_FAILURE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::COARSE_BEST_ALIGNMENT:
                        o << "InertialSensorOpStatusEnumType::COARSE_BEST_ALIGNMENT" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::COARSE_GPS_ALIGNMENT:
                        o << "InertialSensorOpStatusEnumType::COARSE_GPS_ALIGNMENT" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::COARSE_STATIONARY_ALIGNMENT:
                        o << "InertialSensorOpStatusEnumType::COARSE_STATIONARY_ALIGNMENT" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::COARSE_TRANSFER_ALIGNMENT:
                        o << "InertialSensorOpStatusEnumType::COARSE_TRANSFER_ALIGNMENT" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::FINE_BEST_ALIGNMENT_COMPLETE:
                        o << "InertialSensorOpStatusEnumType::FINE_BEST_ALIGNMENT_COMPLETE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::FINE_BEST_ALIGNMENT_STARTED:
                        o << "InertialSensorOpStatusEnumType::FINE_BEST_ALIGNMENT_STARTED" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::FINE_GPS_ALIGNMENT_COMPLETE:
                        o << "InertialSensorOpStatusEnumType::FINE_GPS_ALIGNMENT_COMPLETE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::FINE_GPS_ALIGNMENT_STARTED:
                        o << "InertialSensorOpStatusEnumType::FINE_GPS_ALIGNMENT_STARTED" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::FINE_STATIONARY_ALIGNMENT_COMPLETE:
                        o << "InertialSensorOpStatusEnumType::FINE_STATIONARY_ALIGNMENT_COMPLETE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::FINE_STATIONARY_ALIGNMENT_STARTED:
                        o << "InertialSensorOpStatusEnumType::FINE_STATIONARY_ALIGNMENT_STARTED" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::FINE_TRANSFER_ALIGNMENT_COMPLETE:
                        o << "InertialSensorOpStatusEnumType::FINE_TRANSFER_ALIGNMENT_COMPLETE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::FINE_TRANSFER_ALIGNMENT_STARTED:
                        o << "InertialSensorOpStatusEnumType::FINE_TRANSFER_ALIGNMENT_STARTED" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::GPS_ALIGNMENT_FAILURE:
                        o << "InertialSensorOpStatusEnumType::GPS_ALIGNMENT_FAILURE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::INERTIAL_SENSOR_FAILURE:
                        o << "InertialSensorOpStatusEnumType::INERTIAL_SENSOR_FAILURE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::INIT:
                        o << "InertialSensorOpStatusEnumType::INIT" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::SNAP_ALIGNMENT_COMPLETE:
                        o << "InertialSensorOpStatusEnumType::SNAP_ALIGNMENT_COMPLETE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::SNAP_ALIGNMENT_FAILURE:
                        o << "InertialSensorOpStatusEnumType::SNAP_ALIGNMENT_FAILURE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::STATIONARY_ALIGNMENT_FAILURE:
                        o << "InertialSensorOpStatusEnumType::STATIONARY_ALIGNMENT_FAILURE" << " ";
                        break;
                        case InertialSensorOpStatusEnumType::TRANSFER_ALIGNMENT_FAILURE:
                        o << "InertialSensorOpStatusEnumType::TRANSFER_ALIGNMENT_FAILURE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace InertialSensorOpStatusEnumModule  

            namespace InitiatedTestEnumModule {

                std::ostream& operator << (std::ostream& o,const InitiatedTestEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case InitiatedTestEnumType::DESTRUCTIVE:
                        o << "InitiatedTestEnumType::DESTRUCTIVE" << " ";
                        break;
                        case InitiatedTestEnumType::NON_DESTRUCTIVE:
                        o << "InitiatedTestEnumType::NON_DESTRUCTIVE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace InitiatedTestEnumModule  

            namespace InterferenceEnumModule {

                std::ostream& operator << (std::ostream& o,const InterferenceEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case InterferenceEnumType::ACOUSTIC:
                        o << "InterferenceEnumType::ACOUSTIC" << " ";
                        break;
                        case InterferenceEnumType::NONACOUSTIC:
                        o << "InterferenceEnumType::NONACOUSTIC" << " ";
                        break;
                        case InterferenceEnumType::UNKNOWN:
                        o << "InterferenceEnumType::UNKNOWN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace InterferenceEnumModule  

            namespace LandmarkEnumModule {

                std::ostream& operator << (std::ostream& o,const LandmarkEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case LandmarkEnumType::CLUSTER_OBJECT:
                        o << "LandmarkEnumType::CLUSTER_OBJECT" << " ";
                        break;
                        case LandmarkEnumType::LARGE_OBJECT:
                        o << "LandmarkEnumType::LARGE_OBJECT" << " ";
                        break;
                        case LandmarkEnumType::MARKED:
                        o << "LandmarkEnumType::MARKED" << " ";
                        break;
                        case LandmarkEnumType::TERRAIN:
                        o << "LandmarkEnumType::TERRAIN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace LandmarkEnumModule  

            namespace LogLevelEnumModule {

                std::ostream& operator << (std::ostream& o,const LogLevelEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case LogLevelEnumType::ERROR:
                        o << "LogLevelEnumType::ERROR" << " ";
                        break;
                        case LogLevelEnumType::INFORMATION:
                        o << "LogLevelEnumType::INFORMATION" << " ";
                        break;
                        case LogLevelEnumType::WARNING:
                        o << "LogLevelEnumType::WARNING" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace LogLevelEnumModule  

            namespace MastActionEnumModule {

                std::ostream& operator << (std::ostream& o,const MastActionEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case MastActionEnumType::LOWER:
                        o << "MastActionEnumType::LOWER" << " ";
                        break;
                        case MastActionEnumType::RAISE:
                        o << "MastActionEnumType::RAISE" << " ";
                        break;
                        case MastActionEnumType::STOP:
                        o << "MastActionEnumType::STOP" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace MastActionEnumModule  

            namespace MastStateEnumModule {

                std::ostream& operator << (std::ostream& o,const MastStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case MastStateEnumType::DOWN:
                        o << "MastStateEnumType::DOWN" << " ";
                        break;
                        case MastStateEnumType::MOVING_DOWN:
                        o << "MastStateEnumType::MOVING_DOWN" << " ";
                        break;
                        case MastStateEnumType::MOVING_UP:
                        o << "MastStateEnumType::MOVING_UP" << " ";
                        break;
                        case MastStateEnumType::STOPPED:
                        o << "MastStateEnumType::STOPPED" << " ";
                        break;
                        case MastStateEnumType::UP:
                        o << "MastStateEnumType::UP" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace MastStateEnumModule  

            namespace CommandStatusEnumModule {

                std::ostream& operator << (std::ostream& o,const CommandStatusEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case CommandStatusEnumType::CANCELED:
                        o << "CommandStatusEnumType::CANCELED" << " ";
                        break;
                        case CommandStatusEnumType::COMMANDED:
                        o << "CommandStatusEnumType::COMMANDED" << " ";
                        break;
                        case CommandStatusEnumType::COMPLETED:
                        o << "CommandStatusEnumType::COMPLETED" << " ";
                        break;
                        case CommandStatusEnumType::EXECUTING:
                        o << "CommandStatusEnumType::EXECUTING" << " ";
                        break;
                        case CommandStatusEnumType::FAILED:
                        o << "CommandStatusEnumType::FAILED" << " ";
                        break;
                        case CommandStatusEnumType::ISSUED:
                        o << "CommandStatusEnumType::ISSUED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace CommandStatusEnumModule  

            namespace TaskControlEnumModule {

                std::ostream& operator << (std::ostream& o,const TaskControlEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case TaskControlEnumType::CANCEL:
                        o << "TaskControlEnumType::CANCEL" << " ";
                        break;
                        case TaskControlEnumType::EXECUTION_APPROVED:
                        o << "TaskControlEnumType::EXECUTION_APPROVED" << " ";
                        break;
                        case TaskControlEnumType::EXECUTION_NOT_APPROVED:
                        o << "TaskControlEnumType::EXECUTION_NOT_APPROVED" << " ";
                        break;
                        case TaskControlEnumType::PAUSE:
                        o << "TaskControlEnumType::PAUSE" << " ";
                        break;
                        case TaskControlEnumType::PLAN:
                        o << "TaskControlEnumType::PLAN" << " ";
                        break;
                        case TaskControlEnumType::QUEUE:
                        o << "TaskControlEnumType::QUEUE" << " ";
                        break;
                        case TaskControlEnumType::RESTART:
                        o << "TaskControlEnumType::RESTART" << " ";
                        break;
                        case TaskControlEnumType::RESUME:
                        o << "TaskControlEnumType::RESUME" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace TaskControlEnumModule  

            namespace TaskStateEnumModule {

                std::ostream& operator << (std::ostream& o,const TaskStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case TaskStateEnumType::AWAITING_EXECUTION_APPROVAL:
                        o << "TaskStateEnumType::AWAITING_EXECUTION_APPROVAL" << " ";
                        break;
                        case TaskStateEnumType::CANCELED:
                        o << "TaskStateEnumType::CANCELED" << " ";
                        break;
                        case TaskStateEnumType::CANCELING:
                        o << "TaskStateEnumType::CANCELING" << " ";
                        break;
                        case TaskStateEnumType::COMPLETED:
                        o << "TaskStateEnumType::COMPLETED" << " ";
                        break;
                        case TaskStateEnumType::EXECUTING:
                        o << "TaskStateEnumType::EXECUTING" << " ";
                        break;
                        case TaskStateEnumType::EXECUTION_APPROVED:
                        o << "TaskStateEnumType::EXECUTION_APPROVED" << " ";
                        break;
                        case TaskStateEnumType::FAILED:
                        o << "TaskStateEnumType::FAILED" << " ";
                        break;
                        case TaskStateEnumType::NOT_PLANNED:
                        o << "TaskStateEnumType::NOT_PLANNED" << " ";
                        break;
                        case TaskStateEnumType::NOT_QUEUED:
                        o << "TaskStateEnumType::NOT_QUEUED" << " ";
                        break;
                        case TaskStateEnumType::PAUSED:
                        o << "TaskStateEnumType::PAUSED" << " ";
                        break;
                        case TaskStateEnumType::PAUSING:
                        o << "TaskStateEnumType::PAUSING" << " ";
                        break;
                        case TaskStateEnumType::PLANNED:
                        o << "TaskStateEnumType::PLANNED" << " ";
                        break;
                        case TaskStateEnumType::PLANNING:
                        o << "TaskStateEnumType::PLANNING" << " ";
                        break;
                        case TaskStateEnumType::QUEUED:
                        o << "TaskStateEnumType::QUEUED" << " ";
                        break;
                        case TaskStateEnumType::QUEUING:
                        o << "TaskStateEnumType::QUEUING" << " ";
                        break;
                        case TaskStateEnumType::RESTARTING:
                        o << "TaskStateEnumType::RESTARTING" << " ";
                        break;
                        case TaskStateEnumType::RESUMING:
                        o << "TaskStateEnumType::RESUMING" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace TaskStateEnumModule  

            namespace NavigationSolutionEnumModule {

                std::ostream& operator << (std::ostream& o,const NavigationSolutionEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case NavigationSolutionEnumType::ESTIMATED:
                        o << "NavigationSolutionEnumType::ESTIMATED" << " ";
                        break;
                        case NavigationSolutionEnumType::GROUND_TRUTH:
                        o << "NavigationSolutionEnumType::GROUND_TRUTH" << " ";
                        break;
                        case NavigationSolutionEnumType::MEASURED:
                        o << "NavigationSolutionEnumType::MEASURED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace NavigationSolutionEnumModule  

            namespace ObjectiveExecutorControlEnumModule {

                std::ostream& operator << (std::ostream& o,const ObjectiveExecutorControlEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ObjectiveExecutorControlEnumType::EXECUTE:
                        o << "ObjectiveExecutorControlEnumType::EXECUTE" << " ";
                        break;
                        case ObjectiveExecutorControlEnumType::PAUSE:
                        o << "ObjectiveExecutorControlEnumType::PAUSE" << " ";
                        break;
                        case ObjectiveExecutorControlEnumType::RESUME:
                        o << "ObjectiveExecutorControlEnumType::RESUME" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ObjectiveExecutorControlEnumModule  

            namespace ObjectiveExecutorStateEnumModule {

                std::ostream& operator << (std::ostream& o,const ObjectiveExecutorStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ObjectiveExecutorStateEnumType::CANCELED:
                        o << "ObjectiveExecutorStateEnumType::CANCELED" << " ";
                        break;
                        case ObjectiveExecutorStateEnumType::CANCELING:
                        o << "ObjectiveExecutorStateEnumType::CANCELING" << " ";
                        break;
                        case ObjectiveExecutorStateEnumType::COMPLETED:
                        o << "ObjectiveExecutorStateEnumType::COMPLETED" << " ";
                        break;
                        case ObjectiveExecutorStateEnumType::EXECUTING:
                        o << "ObjectiveExecutorStateEnumType::EXECUTING" << " ";
                        break;
                        case ObjectiveExecutorStateEnumType::FAILED:
                        o << "ObjectiveExecutorStateEnumType::FAILED" << " ";
                        break;
                        case ObjectiveExecutorStateEnumType::MODIFYING:
                        o << "ObjectiveExecutorStateEnumType::MODIFYING" << " ";
                        break;
                        case ObjectiveExecutorStateEnumType::PAUSED:
                        o << "ObjectiveExecutorStateEnumType::PAUSED" << " ";
                        break;
                        case ObjectiveExecutorStateEnumType::PAUSING:
                        o << "ObjectiveExecutorStateEnumType::PAUSING" << " ";
                        break;
                        case ObjectiveExecutorStateEnumType::QUEUED:
                        o << "ObjectiveExecutorStateEnumType::QUEUED" << " ";
                        break;
                        case ObjectiveExecutorStateEnumType::RESUMING:
                        o << "ObjectiveExecutorStateEnumType::RESUMING" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ObjectiveExecutorStateEnumModule  

            namespace ObjectiveExecutorStateReasonEnumModule {

                std::ostream& operator << (std::ostream& o,const ObjectiveExecutorStateReasonEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ObjectiveExecutorStateReasonEnumType::BUS_MSG_DISPOSE:
                        o << "ObjectiveExecutorStateReasonEnumType::BUS_MSG_DISPOSE" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::BUS_MSG_UPDATE:
                        o << "ObjectiveExecutorStateReasonEnumType::BUS_MSG_UPDATE" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::CANNOT_PERFORM_UNDER_CONSTRAINTS:
                        o << "ObjectiveExecutorStateReasonEnumType::CANNOT_PERFORM_UNDER_CONSTRAINTS" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::COMMAND_VALIDATION_FAILED:
                        o << "ObjectiveExecutorStateReasonEnumType::COMMAND_VALIDATION_FAILED" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::COMMANDED:
                        o << "ObjectiveExecutorStateReasonEnumType::COMMANDED" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::INTERNAL_FAILURE:
                        o << "ObjectiveExecutorStateReasonEnumType::INTERNAL_FAILURE" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_FAILED:
                        o << "ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_FAILED" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_INTERRUPTED:
                        o << "ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_INTERRUPTED" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_REJECTED:
                        o << "ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_REJECTED" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_TIMEOUT:
                        o << "ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_TIMEOUT" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::OBJECTIVE_REPLACED:
                        o << "ObjectiveExecutorStateReasonEnumType::OBJECTIVE_REPLACED" << " ";
                        break;
                        case ObjectiveExecutorStateReasonEnumType::SUCCEEDED:
                        o << "ObjectiveExecutorStateReasonEnumType::SUCCEEDED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ObjectiveExecutorStateReasonEnumModule  

            namespace OperationalModeControlEnumModule {

                std::ostream& operator << (std::ostream& o,const OperationalModeControlEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case OperationalModeControlEnumType::AUTONOMOUS:
                        o << "OperationalModeControlEnumType::AUTONOMOUS" << " ";
                        break;
                        case OperationalModeControlEnumType::REMOTE:
                        o << "OperationalModeControlEnumType::REMOTE" << " ";
                        break;
                        case OperationalModeControlEnumType::STANDBY:
                        o << "OperationalModeControlEnumType::STANDBY" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace OperationalModeControlEnumModule  

            namespace OperationalModeEnumModule {

                std::ostream& operator << (std::ostream& o,const OperationalModeEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case OperationalModeEnumType::AUTONOMOUS:
                        o << "OperationalModeEnumType::AUTONOMOUS" << " ";
                        break;
                        case OperationalModeEnumType::MANUAL:
                        o << "OperationalModeEnumType::MANUAL" << " ";
                        break;
                        case OperationalModeEnumType::REMOTE:
                        o << "OperationalModeEnumType::REMOTE" << " ";
                        break;
                        case OperationalModeEnumType::STANDBY:
                        o << "OperationalModeEnumType::STANDBY" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace OperationalModeEnumModule  

            namespace PassiveContactFeatureEnumModule {

                std::ostream& operator << (std::ostream& o,const PassiveContactFeatureEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PassiveContactFeatureEnumType::BROADBAND:
                        o << "PassiveContactFeatureEnumType::BROADBAND" << " ";
                        break;
                        case PassiveContactFeatureEnumType::NARROWBAND:
                        o << "PassiveContactFeatureEnumType::NARROWBAND" << " ";
                        break;
                        case PassiveContactFeatureEnumType::TRANSIENT:
                        o << "PassiveContactFeatureEnumType::TRANSIENT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PassiveContactFeatureEnumModule  

            namespace PathWayEnumModule {

                std::ostream& operator << (std::ostream& o,const PathWayEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PathWayEnumType::HISTORICAL_GLOBAL:
                        o << "PathWayEnumType::HISTORICAL_GLOBAL" << " ";
                        break;
                        case PathWayEnumType::HISTORICAL_LOCAL:
                        o << "PathWayEnumType::HISTORICAL_LOCAL" << " ";
                        break;
                        case PathWayEnumType::PLANNED_GLOBAL:
                        o << "PathWayEnumType::PLANNED_GLOBAL" << " ";
                        break;
                        case PathWayEnumType::PLANNED_LOCAL:
                        o << "PathWayEnumType::PLANNED_LOCAL" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PathWayEnumModule  

            namespace PowerOnTestEnumModule {

                std::ostream& operator << (std::ostream& o,const PowerOnTestEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PowerOnTestEnumType::DISABLED_NO_TEST:
                        o << "PowerOnTestEnumType::DISABLED_NO_TEST" << " ";
                        break;
                        case PowerOnTestEnumType::FULL_TEST:
                        o << "PowerOnTestEnumType::FULL_TEST" << " ";
                        break;
                        case PowerOnTestEnumType::QUICK_TEST:
                        o << "PowerOnTestEnumType::QUICK_TEST" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PowerOnTestEnumModule  

            namespace PowerPlantStateEnumModule {

                std::ostream& operator << (std::ostream& o,const PowerPlantStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PowerPlantStateEnumType::FAULT:
                        o << "PowerPlantStateEnumType::FAULT" << " ";
                        break;
                        case PowerPlantStateEnumType::OFF:
                        o << "PowerPlantStateEnumType::OFF" << " ";
                        break;
                        case PowerPlantStateEnumType::ON:
                        o << "PowerPlantStateEnumType::ON" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PowerPlantStateEnumModule  

            namespace PowerStateEnumModule {

                std::ostream& operator << (std::ostream& o,const PowerStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PowerStateEnumType::EMERGENCY_POWER:
                        o << "PowerStateEnumType::EMERGENCY_POWER" << " ";
                        break;
                        case PowerStateEnumType::POWER_OFF:
                        o << "PowerStateEnumType::POWER_OFF" << " ";
                        break;
                        case PowerStateEnumType::POWER_ON:
                        o << "PowerStateEnumType::POWER_ON" << " ";
                        break;
                        case PowerStateEnumType::POWER_STANDBY:
                        o << "PowerStateEnumType::POWER_STANDBY" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PowerStateEnumModule  

            namespace ProcessingUnitEnumModule {

                std::ostream& operator << (std::ostream& o,const ProcessingUnitEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ProcessingUnitEnumType::CPU:
                        o << "ProcessingUnitEnumType::CPU" << " ";
                        break;
                        case ProcessingUnitEnumType::DSP:
                        o << "ProcessingUnitEnumType::DSP" << " ";
                        break;
                        case ProcessingUnitEnumType::FPGA:
                        o << "ProcessingUnitEnumType::FPGA" << " ";
                        break;
                        case ProcessingUnitEnumType::GPU:
                        o << "ProcessingUnitEnumType::GPU" << " ";
                        break;
                        case ProcessingUnitEnumType::NPU:
                        o << "ProcessingUnitEnumType::NPU" << " ";
                        break;
                        case ProcessingUnitEnumType::PhPU:
                        o << "ProcessingUnitEnumType::PhPU" << " ";
                        break;
                        case ProcessingUnitEnumType::PPU:
                        o << "ProcessingUnitEnumType::PPU" << " ";
                        break;
                        case ProcessingUnitEnumType::QPU:
                        o << "ProcessingUnitEnumType::QPU" << " ";
                        break;
                        case ProcessingUnitEnumType::SPU:
                        o << "ProcessingUnitEnumType::SPU" << " ";
                        break;
                        case ProcessingUnitEnumType::TPU:
                        o << "ProcessingUnitEnumType::TPU" << " ";
                        break;
                        case ProcessingUnitEnumType::VPU:
                        o << "ProcessingUnitEnumType::VPU" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ProcessingUnitEnumModule  

            namespace PumpStateEnumModule {

                std::ostream& operator << (std::ostream& o,const PumpStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case PumpStateEnumType::FAULT:
                        o << "PumpStateEnumType::FAULT" << " ";
                        break;
                        case PumpStateEnumType::OFF:
                        o << "PumpStateEnumType::OFF" << " ";
                        break;
                        case PumpStateEnumType::ON_FORWARD:
                        o << "PumpStateEnumType::ON_FORWARD" << " ";
                        break;
                        case PumpStateEnumType::ON_REVERSE:
                        o << "PumpStateEnumType::ON_REVERSE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace PumpStateEnumModule  

            namespace ReferenceFrameOriginEnumModule {

                std::ostream& operator << (std::ostream& o,const ReferenceFrameOriginEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ReferenceFrameOriginEnumType::BOW_WATERLINE_INTERSECTION:
                        o << "ReferenceFrameOriginEnumType::BOW_WATERLINE_INTERSECTION" << " ";
                        break;
                        case ReferenceFrameOriginEnumType::CENTER_OF_BUOYANCY:
                        o << "ReferenceFrameOriginEnumType::CENTER_OF_BUOYANCY" << " ";
                        break;
                        case ReferenceFrameOriginEnumType::CENTER_OF_GRAVITY:
                        o << "ReferenceFrameOriginEnumType::CENTER_OF_GRAVITY" << " ";
                        break;
                        case ReferenceFrameOriginEnumType::INS_LOCATION:
                        o << "ReferenceFrameOriginEnumType::INS_LOCATION" << " ";
                        break;
                        case ReferenceFrameOriginEnumType::KEEL_TRANSOM_INTERSECTION:
                        o << "ReferenceFrameOriginEnumType::KEEL_TRANSOM_INTERSECTION" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace ReferenceFrameOriginEnumModule  

            namespace SourceIndicatorEnumModule {

                std::ostream& operator << (std::ostream& o,const SourceIndicatorEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case SourceIndicatorEnumType::ACTUAL:
                        o << "SourceIndicatorEnumType::ACTUAL" << " ";
                        break;
                        case SourceIndicatorEnumType::GROUND_TRUTH:
                        o << "SourceIndicatorEnumType::GROUND_TRUTH" << " ";
                        break;
                        case SourceIndicatorEnumType::SIMULATED:
                        o << "SourceIndicatorEnumType::SIMULATED" << " ";
                        break;
                        case SourceIndicatorEnumType::TENTATIVE:
                        o << "SourceIndicatorEnumType::TENTATIVE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace SourceIndicatorEnumModule  

            namespace SpecialManeuverIndicatorEnumModule {

                std::ostream& operator << (std::ostream& o,const SpecialManeuverIndicatorEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case SpecialManeuverIndicatorEnumType::ENGAGED:
                        o << "SpecialManeuverIndicatorEnumType::ENGAGED" << " ";
                        break;
                        case SpecialManeuverIndicatorEnumType::NOT_AVAILABLE:
                        o << "SpecialManeuverIndicatorEnumType::NOT_AVAILABLE" << " ";
                        break;
                        case SpecialManeuverIndicatorEnumType::NOT_ENGAGED:
                        o << "SpecialManeuverIndicatorEnumType::NOT_ENGAGED" << " ";
                        break;
                        case SpecialManeuverIndicatorEnumType::NOT_PROVIDED:
                        o << "SpecialManeuverIndicatorEnumType::NOT_PROVIDED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace SpecialManeuverIndicatorEnumModule  

            namespace TamperDetectionStateEnumModule {

                std::ostream& operator << (std::ostream& o,const TamperDetectionStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case TamperDetectionStateEnumType::ALWAYS_ENABLED_OR_CLEAR:
                        o << "TamperDetectionStateEnumType::ALWAYS_ENABLED_OR_CLEAR" << " ";
                        break;
                        case TamperDetectionStateEnumType::DISABLED:
                        o << "TamperDetectionStateEnumType::DISABLED" << " ";
                        break;
                        case TamperDetectionStateEnumType::ENABLED:
                        o << "TamperDetectionStateEnumType::ENABLED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace TamperDetectionStateEnumModule  

            namespace TFOMEnumModule {

                std::ostream& operator << (std::ostream& o,const TFOMEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case TFOMEnumType::TFOM_1:
                        o << "TFOMEnumType::TFOM_1" << " ";
                        break;
                        case TFOMEnumType::TFOM_2:
                        o << "TFOMEnumType::TFOM_2" << " ";
                        break;
                        case TFOMEnumType::TFOM_3:
                        o << "TFOMEnumType::TFOM_3" << " ";
                        break;
                        case TFOMEnumType::TFOM_4:
                        o << "TFOMEnumType::TFOM_4" << " ";
                        break;
                        case TFOMEnumType::TFOM_5:
                        o << "TFOMEnumType::TFOM_5" << " ";
                        break;
                        case TFOMEnumType::TFOM_6:
                        o << "TFOMEnumType::TFOM_6" << " ";
                        break;
                        case TFOMEnumType::TFOM_7:
                        o << "TFOMEnumType::TFOM_7" << " ";
                        break;
                        case TFOMEnumType::TFOM_8:
                        o << "TFOMEnumType::TFOM_8" << " ";
                        break;
                        case TFOMEnumType::TFOM_9:
                        o << "TFOMEnumType::TFOM_9" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace TFOMEnumModule  

            namespace TrackCategoryEnumModule {

                std::ostream& operator << (std::ostream& o,const TrackCategoryEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case TrackCategoryEnumType::ADS_B_DIRECTIONAL_AIR:
                        o << "TrackCategoryEnumType::ADS_B_DIRECTIONAL_AIR" << " ";
                        break;
                        case TrackCategoryEnumType::ADS_B_DIRECTIONAL_SURFACE:
                        o << "TrackCategoryEnumType::ADS_B_DIRECTIONAL_SURFACE" << " ";
                        break;
                        case TrackCategoryEnumType::ADS_B_NONDIRECTIONAL_AIR:
                        o << "TrackCategoryEnumType::ADS_B_NONDIRECTIONAL_AIR" << " ";
                        break;
                        case TrackCategoryEnumType::ADS_B_NONDIRECTIONAL_SURFACE:
                        o << "TrackCategoryEnumType::ADS_B_NONDIRECTIONAL_SURFACE" << " ";
                        break;
                        case TrackCategoryEnumType::AIR:
                        o << "TrackCategoryEnumType::AIR" << " ";
                        break;
                        case TrackCategoryEnumType::ASW:
                        o << "TrackCategoryEnumType::ASW" << " ";
                        break;
                        case TrackCategoryEnumType::EMERGENCY:
                        o << "TrackCategoryEnumType::EMERGENCY" << " ";
                        break;
                        case TrackCategoryEnumType::EW:
                        o << "TrackCategoryEnumType::EW" << " ";
                        break;
                        case TrackCategoryEnumType::LAND_POINT:
                        o << "TrackCategoryEnumType::LAND_POINT" << " ";
                        break;
                        case TrackCategoryEnumType::LAND_TRACK:
                        o << "TrackCategoryEnumType::LAND_TRACK" << " ";
                        break;
                        case TrackCategoryEnumType::MP_AREA:
                        o << "TrackCategoryEnumType::MP_AREA" << " ";
                        break;
                        case TrackCategoryEnumType::MP_LINE:
                        o << "TrackCategoryEnumType::MP_LINE" << " ";
                        break;
                        case TrackCategoryEnumType::NA:
                        o << "TrackCategoryEnumType::NA" << " ";
                        break;
                        case TrackCategoryEnumType::NO_STATEMENT:
                        o << "TrackCategoryEnumType::NO_STATEMENT" << " ";
                        break;
                        case TrackCategoryEnumType::POINTER:
                        o << "TrackCategoryEnumType::POINTER" << " ";
                        break;
                        case TrackCategoryEnumType::REF_POINT:
                        o << "TrackCategoryEnumType::REF_POINT" << " ";
                        break;
                        case TrackCategoryEnumType::SP_AREA:
                        o << "TrackCategoryEnumType::SP_AREA" << " ";
                        break;
                        case TrackCategoryEnumType::SPACE:
                        o << "TrackCategoryEnumType::SPACE" << " ";
                        break;
                        case TrackCategoryEnumType::SUB_SURFACE:
                        o << "TrackCategoryEnumType::SUB_SURFACE" << " ";
                        break;
                        case TrackCategoryEnumType::SURFACE:
                        o << "TrackCategoryEnumType::SURFACE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace TrackCategoryEnumModule  

            namespace TrackIdentityEnumModule {

                std::ostream& operator << (std::ostream& o,const TrackIdentityEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case TrackIdentityEnumType::ASSUMED_FRIEND:
                        o << "TrackIdentityEnumType::ASSUMED_FRIEND" << " ";
                        break;
                        case TrackIdentityEnumType::FAKER:
                        o << "TrackIdentityEnumType::FAKER" << " ";
                        break;
                        case TrackIdentityEnumType::FRIEND:
                        o << "TrackIdentityEnumType::FRIEND" << " ";
                        break;
                        case TrackIdentityEnumType::HOSTILE:
                        o << "TrackIdentityEnumType::HOSTILE" << " ";
                        break;
                        case TrackIdentityEnumType::JOKER:
                        o << "TrackIdentityEnumType::JOKER" << " ";
                        break;
                        case TrackIdentityEnumType::NEUTRAL:
                        o << "TrackIdentityEnumType::NEUTRAL" << " ";
                        break;
                        case TrackIdentityEnumType::PENDING:
                        o << "TrackIdentityEnumType::PENDING" << " ";
                        break;
                        case TrackIdentityEnumType::SUSPECT:
                        o << "TrackIdentityEnumType::SUSPECT" << " ";
                        break;
                        case TrackIdentityEnumType::UNKNOWN:
                        o << "TrackIdentityEnumType::UNKNOWN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace TrackIdentityEnumModule  

            namespace TriggerStateEnumModule {

                std::ostream& operator << (std::ostream& o,const TriggerStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case TriggerStateEnumType::CANCEL:
                        o << "TriggerStateEnumType::CANCEL" << " ";
                        break;
                        case TriggerStateEnumType::PAUSE:
                        o << "TriggerStateEnumType::PAUSE" << " ";
                        break;
                        case TriggerStateEnumType::PLAN:
                        o << "TriggerStateEnumType::PLAN" << " ";
                        break;
                        case TriggerStateEnumType::QUEUE:
                        o << "TriggerStateEnumType::QUEUE" << " ";
                        break;
                        case TriggerStateEnumType::RESTART:
                        o << "TriggerStateEnumType::RESTART" << " ";
                        break;
                        case TriggerStateEnumType::RESUME:
                        o << "TriggerStateEnumType::RESUME" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace TriggerStateEnumModule  

            namespace VehicleSpeedModeEnumModule {

                std::ostream& operator << (std::ostream& o,const VehicleSpeedModeEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case VehicleSpeedModeEnumType::LRC:
                        o << "VehicleSpeedModeEnumType::LRC" << " ";
                        break;
                        case VehicleSpeedModeEnumType::MEC:
                        o << "VehicleSpeedModeEnumType::MEC" << " ";
                        break;
                        case VehicleSpeedModeEnumType::MRC:
                        o << "VehicleSpeedModeEnumType::MRC" << " ";
                        break;
                        case VehicleSpeedModeEnumType::SLOW:
                        o << "VehicleSpeedModeEnumType::SLOW" << " ";
                        break;
                        case VehicleSpeedModeEnumType::VEHICLE_SPECIFIC:
                        o << "VehicleSpeedModeEnumType::VEHICLE_SPECIFIC" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace VehicleSpeedModeEnumModule  

            namespace VisualClassificationEnumModule {

                std::ostream& operator << (std::ostream& o,const VisualClassificationEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case VisualClassificationEnumType::AID_TO_NAVIGATION_CHANNEL_MARKER:
                        o << "VisualClassificationEnumType::AID_TO_NAVIGATION_CHANNEL_MARKER" << " ";
                        break;
                        case VisualClassificationEnumType::AID_TO_NAVIGATION_GENERAL:
                        o << "VisualClassificationEnumType::AID_TO_NAVIGATION_GENERAL" << " ";
                        break;
                        case VisualClassificationEnumType::AID_TO_NAVIGATION_LARGE_BUOY:
                        o << "VisualClassificationEnumType::AID_TO_NAVIGATION_LARGE_BUOY" << " ";
                        break;
                        case VisualClassificationEnumType::AID_TO_NAVIGATION_LIGHTHOUSE:
                        o << "VisualClassificationEnumType::AID_TO_NAVIGATION_LIGHTHOUSE" << " ";
                        break;
                        case VisualClassificationEnumType::AID_TO_NAVIGATION_SMALL_BUOY:
                        o << "VisualClassificationEnumType::AID_TO_NAVIGATION_SMALL_BUOY" << " ";
                        break;
                        case VisualClassificationEnumType::LARGE_GENERAL_OBSTACLE:
                        o << "VisualClassificationEnumType::LARGE_GENERAL_OBSTACLE" << " ";
                        break;
                        case VisualClassificationEnumType::LARGE_VESSEL_CARGO:
                        o << "VisualClassificationEnumType::LARGE_VESSEL_CARGO" << " ";
                        break;
                        case VisualClassificationEnumType::LARGE_VESSEL_GENERAL:
                        o << "VisualClassificationEnumType::LARGE_VESSEL_GENERAL" << " ";
                        break;
                        case VisualClassificationEnumType::LARGE_VESSEL_MILITARY:
                        o << "VisualClassificationEnumType::LARGE_VESSEL_MILITARY" << " ";
                        break;
                        case VisualClassificationEnumType::LARGE_VESSEL_OTHER:
                        o << "VisualClassificationEnumType::LARGE_VESSEL_OTHER" << " ";
                        break;
                        case VisualClassificationEnumType::LARGE_VESSEL_PASSENGER:
                        o << "VisualClassificationEnumType::LARGE_VESSEL_PASSENGER" << " ";
                        break;
                        case VisualClassificationEnumType::MEDIUM_VESSEL_FISHING:
                        o << "VisualClassificationEnumType::MEDIUM_VESSEL_FISHING" << " ";
                        break;
                        case VisualClassificationEnumType::MEDIUM_VESSEL_GENERAL:
                        o << "VisualClassificationEnumType::MEDIUM_VESSEL_GENERAL" << " ";
                        break;
                        case VisualClassificationEnumType::MEDIUM_VESSEL_MILITARY:
                        o << "VisualClassificationEnumType::MEDIUM_VESSEL_MILITARY" << " ";
                        break;
                        case VisualClassificationEnumType::MEDIUM_VESSEL_OTHER:
                        o << "VisualClassificationEnumType::MEDIUM_VESSEL_OTHER" << " ";
                        break;
                        case VisualClassificationEnumType::MEDIUM_VESSEL_TUG:
                        o << "VisualClassificationEnumType::MEDIUM_VESSEL_TUG" << " ";
                        break;
                        case VisualClassificationEnumType::MEDIUM_VESSEL_TUG_IN_TOW:
                        o << "VisualClassificationEnumType::MEDIUM_VESSEL_TUG_IN_TOW" << " ";
                        break;
                        case VisualClassificationEnumType::MEDIUM_VESSEL_YACHT:
                        o << "VisualClassificationEnumType::MEDIUM_VESSEL_YACHT" << " ";
                        break;
                        case VisualClassificationEnumType::SAILBOAT:
                        o << "VisualClassificationEnumType::SAILBOAT" << " ";
                        break;
                        case VisualClassificationEnumType::SMALL_GENERAL_OBSTACLE:
                        o << "VisualClassificationEnumType::SMALL_GENERAL_OBSTACLE" << " ";
                        break;
                        case VisualClassificationEnumType::SMALL_VESSEL_GENERAL:
                        o << "VisualClassificationEnumType::SMALL_VESSEL_GENERAL" << " ";
                        break;
                        case VisualClassificationEnumType::SMALL_VESSEL_JET_SKI:
                        o << "VisualClassificationEnumType::SMALL_VESSEL_JET_SKI" << " ";
                        break;
                        case VisualClassificationEnumType::SMALL_VESSEL_MILITARY:
                        o << "VisualClassificationEnumType::SMALL_VESSEL_MILITARY" << " ";
                        break;
                        case VisualClassificationEnumType::SMALL_VESSEL_OTHER:
                        o << "VisualClassificationEnumType::SMALL_VESSEL_OTHER" << " ";
                        break;
                        case VisualClassificationEnumType::SMALL_VESSEL_POWER_BOAT:
                        o << "VisualClassificationEnumType::SMALL_VESSEL_POWER_BOAT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace VisualClassificationEnumModule  

            namespace WaterTurnDirectionEnumModule {

                std::ostream& operator << (std::ostream& o,const WaterTurnDirectionEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case WaterTurnDirectionEnumType::LEFT_TURN:
                        o << "WaterTurnDirectionEnumType::LEFT_TURN" << " ";
                        break;
                        case WaterTurnDirectionEnumType::RIGHT_TURN:
                        o << "WaterTurnDirectionEnumType::RIGHT_TURN" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace WaterTurnDirectionEnumModule  

            namespace WaterZoneKindEnumModule {

                std::ostream& operator << (std::ostream& o,const WaterZoneKindEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case WaterZoneKindEnumType::INSIDE:
                        o << "WaterZoneKindEnumType::INSIDE" << " ";
                        break;
                        case WaterZoneKindEnumType::OUTSIDE:
                        o << "WaterZoneKindEnumType::OUTSIDE" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace WaterZoneKindEnumModule  

            namespace WaypointStateEnumModule {

                std::ostream& operator << (std::ostream& o,const WaypointStateEnumType& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case WaypointStateEnumType::ACHIEVED:
                        o << "WaypointStateEnumType::ACHIEVED" << " ";
                        break;
                        case WaypointStateEnumType::COMPLETED:
                        o << "WaypointStateEnumType::COMPLETED" << " ";
                        break;
                        case WaypointStateEnumType::EXECUTING:
                        o << "WaypointStateEnumType::EXECUTING" << " ";
                        break;
                        case WaypointStateEnumType::FAILED:
                        o << "WaypointStateEnumType::FAILED" << " ";
                        break;
                        case WaypointStateEnumType::QUEUED:
                        o << "WaypointStateEnumType::QUEUED" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

            } // namespace WaypointStateEnumModule  

        } // namespace MaritimeEnumeration  

    } // namespace Common  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType::ACTIVE;
        const ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType::ACTIVE;
        const ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType::LOWER;
        const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::COMMERCIAL_STOCKLESS;
        const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType::BOWER;
        const ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType::CHAIN;
        const ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType::DEPLOYED;
        const ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType::DEACTIVATE;
        const ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType::FAULT;
        const ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType::DROP_LOWEST_PRIORITY;
        const ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType>::value = ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::ANCHORED;
        const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType>::value = ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::CANCELED;
        const ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType>::value = ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType::OFF;
        const ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType::GREATER_THAN;
        const ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::COLLISION;
        const ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType::CONTINUE;
        const ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType::DISABLED_NO_TEST;
        const ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType>::value = ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::AGREE_TO_BE_OVERTAKEN;
        const ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType::COURSE;
        const ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType>::value = ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType::AIR;
        const ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType::ALLOWED;
        const ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType::DIESEL;
        const ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::ACTUATOR;
        const ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType::ERROR;
        const ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType>::value = ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType::MEDIUM;
        const ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::DEV_TEST;
        const ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType>::value = ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType::_LONG;
        const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType>::value = ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::BEIDOU;
        const ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType>::value = ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::DEFERRED;
        const ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType::INSIDE;
        const ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType::LAT_LON_PRIORITY;
        const ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType>::value = ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType::OFF;
        const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType::OFF;
        const ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType::FLASHING;
        const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::ARW;
        const ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType>::value = ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType::BEST_ALIGN;
        const ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType>::value = ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::BEST_ALIGNMENT_FAILURE;
        const ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType>::value = ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType::DESTRUCTIVE;
        const ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType>::value = ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType::ACOUSTIC;
        const ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType>::value = ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType::CLUSTER_OBJECT;
        const ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType>::value = ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType::ERROR;
        const ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType::LOWER;
        const ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType::DOWN;
        const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType>::value = ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::CANCELED;
        const ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::CANCEL;
        const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::AWAITING_EXECUTION_APPROVAL;
        const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType::ESTIMATED;
        const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType::EXECUTE;
        const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::CANCELED;
        const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::BUS_MSG_DISPOSE;
        const ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType>::value = ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType::AUTONOMOUS;
        const ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType::AUTONOMOUS;
        const ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType::BROADBAND;
        const ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType::HISTORICAL_GLOBAL;
        const ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType::DISABLED_NO_TEST;
        const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType::FAULT;
        const ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType::EMERGENCY_POWER;
        const ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::CPU;
        const ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType::FAULT;
        const ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType::BOW_WATERLINE_INTERSECTION;
        const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType>::value = ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType::ACTUAL;
        const ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType>::value = ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType::ENGAGED;
        const ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType::ALWAYS_ENABLED_OR_CLEAR;
        const ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_1;
        const ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::ADS_B_DIRECTIONAL_AIR;
        const ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::ASSUMED_FRIEND;
        const ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::CANCEL;
        const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType::LRC;
        const ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType>::value = ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::AID_TO_NAVIGATION_CHANNEL_MARKER;
        const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType::LEFT_TURN;
        const ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType::INSIDE;
        const ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType::ACHIEVED;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType::ACTIVE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ActivationStateEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"ACTIVE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType::ACTIVE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ERROR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType::ERROR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"READY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType::READY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STANDBY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType::STANDBY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ActivationStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ActivationStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ActivationStateEnumType*/

                if (is_initialized) {
                    return &ActivationStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ActivationStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ActivationStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ActivationStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ActivationStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ActivationStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ActivationStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ActivationStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ActivationStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ActivationStateEnumType_g_sampleAccessInfo;
                }

                ActivationStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ActivationStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ActivationStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ActivationStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ActivationStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ActivationStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ActivationStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType >;

                ActivationStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ActivationStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ActivationStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ActivationStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType::ACTIVE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ActivationStateTargetEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"ACTIVE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType::ACTIVE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"READY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType::READY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STANDBY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType::STANDBY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ActivationStateTargetEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ActivationStateTargetEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ActivationStateTargetEnumType*/

                if (is_initialized) {
                    return &ActivationStateTargetEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ActivationStateTargetEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ActivationStateTargetEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ActivationStateTargetEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ActivationStateTargetEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ActivationStateTargetEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ActivationStateTargetEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ActivationStateTargetEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ActivationStateTargetEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ActivationStateTargetEnumType_g_sampleAccessInfo;
                }

                ActivationStateTargetEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ActivationStateTargetEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ActivationStateTargetEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ActivationStateTargetEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ActivationStateTargetEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ActivationStateTargetEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ActivationStateTargetEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType >;

                ActivationStateTargetEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ActivationStateTargetEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ActivationStateTargetEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ActivationStateTargetEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType::LOWER;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AnchorActionEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"LOWER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType::LOWER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RAISE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType::RAISE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STOP",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType::STOP), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode AnchorActionEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        AnchorActionEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AnchorActionEnumType*/

                if (is_initialized) {
                    return &AnchorActionEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AnchorActionEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                AnchorActionEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AnchorActionEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                AnchorActionEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                AnchorActionEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &AnchorActionEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AnchorActionEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AnchorActionEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AnchorActionEnumType_g_sampleAccessInfo;
                }

                AnchorActionEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AnchorActionEnumType_g_sampleAccessInfo.memberAccessInfos = 
                AnchorActionEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AnchorActionEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AnchorActionEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AnchorActionEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AnchorActionEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType >;

                AnchorActionEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AnchorActionEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AnchorActionEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &AnchorActionEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::COMMERCIAL_STOCKLESS;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AnchorKindEnumType_g_tc_members[13]=
                {

                    {
                        (char *)"COMMERCIAL_STOCKLESS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::COMMERCIAL_STOCKLESS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DANFORTH",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::DANFORTH), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FOUR_FLUKE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::FOUR_FLUKE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GENERAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::GENERAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LIGHTWEIGHT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::LIGHTWEIGHT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MARK_2_LWT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::MARK_2_LWT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MARK_2_STOCKLESS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::MARK_2_STOCKLESS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MUSHROOM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::MUSHROOM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NAVY_TYPE_STOCK",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::NAVY_TYPE_STOCK), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NONMAGNETIC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::NONMAGNETIC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STANDARD_NAVY_STOCKLESS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::STANDARD_NAVY_STOCKLESS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TWO_FLUKE_BALANCED_FLUKE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::TWO_FLUKE_BALANCED_FLUKE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"WEDGE_BLOCK_LWT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType::WEDGE_BLOCK_LWT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode AnchorKindEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        13, /* Number of members */
                        AnchorKindEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AnchorKindEnumType*/

                if (is_initialized) {
                    return &AnchorKindEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AnchorKindEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                AnchorKindEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AnchorKindEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                AnchorKindEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                AnchorKindEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &AnchorKindEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AnchorKindEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AnchorKindEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AnchorKindEnumType_g_sampleAccessInfo;
                }

                AnchorKindEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AnchorKindEnumType_g_sampleAccessInfo.memberAccessInfos = 
                AnchorKindEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AnchorKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AnchorKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AnchorKindEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AnchorKindEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType >;

                AnchorKindEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AnchorKindEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AnchorKindEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &AnchorKindEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType::BOWER;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AnchorLocationEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"BOWER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType::BOWER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"KEEL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType::KEEL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STERN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType::STERN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode AnchorLocationEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        AnchorLocationEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AnchorLocationEnumType*/

                if (is_initialized) {
                    return &AnchorLocationEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AnchorLocationEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                AnchorLocationEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AnchorLocationEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                AnchorLocationEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                AnchorLocationEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &AnchorLocationEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AnchorLocationEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AnchorLocationEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AnchorLocationEnumType_g_sampleAccessInfo;
                }

                AnchorLocationEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AnchorLocationEnumType_g_sampleAccessInfo.memberAccessInfos = 
                AnchorLocationEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AnchorLocationEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AnchorLocationEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AnchorLocationEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AnchorLocationEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType >;

                AnchorLocationEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AnchorLocationEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AnchorLocationEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &AnchorLocationEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType::CHAIN;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AnchorRodeEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"CHAIN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType::CHAIN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ROPE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType::ROPE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode AnchorRodeEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        AnchorRodeEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AnchorRodeEnumType*/

                if (is_initialized) {
                    return &AnchorRodeEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AnchorRodeEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                AnchorRodeEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AnchorRodeEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                AnchorRodeEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                AnchorRodeEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &AnchorRodeEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AnchorRodeEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AnchorRodeEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AnchorRodeEnumType_g_sampleAccessInfo;
                }

                AnchorRodeEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AnchorRodeEnumType_g_sampleAccessInfo.memberAccessInfos = 
                AnchorRodeEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AnchorRodeEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AnchorRodeEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AnchorRodeEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AnchorRodeEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType >;

                AnchorRodeEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AnchorRodeEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AnchorRodeEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &AnchorRodeEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType::DEPLOYED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AnchorStateEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"DEPLOYED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType::DEPLOYED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOWERING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType::LOWERING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RAISING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType::RAISING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STOPPED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType::STOPPED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STOWED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType::STOWED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode AnchorStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        AnchorStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AnchorStateEnumType*/

                if (is_initialized) {
                    return &AnchorStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AnchorStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                AnchorStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AnchorStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                AnchorStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                AnchorStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &AnchorStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AnchorStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AnchorStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AnchorStateEnumType_g_sampleAccessInfo;
                }

                AnchorStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AnchorStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                AnchorStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AnchorStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AnchorStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AnchorStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AnchorStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType >;

                AnchorStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AnchorStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AnchorStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &AnchorStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType::DEACTIVATE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AutoOffModeEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"DEACTIVATE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType::DEACTIVATE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SHUTDOWN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType::SHUTDOWN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode AutoOffModeEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        AutoOffModeEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for AutoOffModeEnumType*/

                if (is_initialized) {
                    return &AutoOffModeEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                AutoOffModeEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                AutoOffModeEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                AutoOffModeEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                AutoOffModeEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                AutoOffModeEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &AutoOffModeEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo AutoOffModeEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo AutoOffModeEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &AutoOffModeEnumType_g_sampleAccessInfo;
                }

                AutoOffModeEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                AutoOffModeEnumType_g_sampleAccessInfo.memberAccessInfos = 
                AutoOffModeEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        AutoOffModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        AutoOffModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                AutoOffModeEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                AutoOffModeEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType >;

                AutoOffModeEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &AutoOffModeEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin AutoOffModeEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &AutoOffModeEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType::FAULT;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BilgeStateEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"FAULT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType::FAULT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ON",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType::ON), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BilgeStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        BilgeStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BilgeStateEnumType*/

                if (is_initialized) {
                    return &BilgeStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BilgeStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                BilgeStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BilgeStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                BilgeStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                BilgeStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &BilgeStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BilgeStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BilgeStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BilgeStateEnumType_g_sampleAccessInfo;
                }

                BilgeStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BilgeStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                BilgeStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BilgeStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BilgeStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BilgeStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BilgeStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType >;

                BilgeStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BilgeStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BilgeStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &BilgeStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType::DROP_LOWEST_PRIORITY;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BufferPurgeOptionEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"DROP_LOWEST_PRIORITY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType::DROP_LOWEST_PRIORITY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DROP_MOST_RECENT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType::DROP_MOST_RECENT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DROP_OLDEST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType::DROP_OLDEST), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BufferPurgeOptionEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        BufferPurgeOptionEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BufferPurgeOptionEnumType*/

                if (is_initialized) {
                    return &BufferPurgeOptionEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BufferPurgeOptionEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                BufferPurgeOptionEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BufferPurgeOptionEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                BufferPurgeOptionEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                BufferPurgeOptionEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &BufferPurgeOptionEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo BufferPurgeOptionEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BufferPurgeOptionEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BufferPurgeOptionEnumType_g_sampleAccessInfo;
                }

                BufferPurgeOptionEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                BufferPurgeOptionEnumType_g_sampleAccessInfo.memberAccessInfos = 
                BufferPurgeOptionEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BufferPurgeOptionEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BufferPurgeOptionEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BufferPurgeOptionEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BufferPurgeOptionEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType >;

                BufferPurgeOptionEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BufferPurgeOptionEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BufferPurgeOptionEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &BufferPurgeOptionEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType>::value = ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::ANCHORED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member COLREGSClassificationEnumType_g_tc_members[10]=
                {

                    {
                        (char *)"ANCHORED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::ANCHORED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CONSTRAINED_BY_DRAUGHT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::CONSTRAINED_BY_DRAUGHT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FISHING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::FISHING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NON_VESSEL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::NON_VESSEL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NOT_UNDER_COMMAND",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::NOT_UNDER_COMMAND), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"POWER_DRIVEN_UNDERWAY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::POWER_DRIVEN_UNDERWAY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PUSHING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::PUSHING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESTRICTED_IN_ABILITY_TO_MANUEVER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::RESTRICTED_IN_ABILITY_TO_MANUEVER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SAILING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::SAILING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TOWING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType::TOWING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode COLREGSClassificationEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        COLREGSClassificationEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for COLREGSClassificationEnumType*/

                if (is_initialized) {
                    return &COLREGSClassificationEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                COLREGSClassificationEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                COLREGSClassificationEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                COLREGSClassificationEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                COLREGSClassificationEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                COLREGSClassificationEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &COLREGSClassificationEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo COLREGSClassificationEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo COLREGSClassificationEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &COLREGSClassificationEnumType_g_sampleAccessInfo;
                }

                COLREGSClassificationEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                COLREGSClassificationEnumType_g_sampleAccessInfo.memberAccessInfos = 
                COLREGSClassificationEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        COLREGSClassificationEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        COLREGSClassificationEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                COLREGSClassificationEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                COLREGSClassificationEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType >;

                COLREGSClassificationEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &COLREGSClassificationEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin COLREGSClassificationEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &COLREGSClassificationEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType>::value = ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::CANCELED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommandStatusReasonEnumType_g_tc_members[10]=
                {

                    {
                        (char *)"CANCELED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::CANCELED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"INTERRUPTED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::INTERRUPTED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OBJECTIVE_FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::OBJECTIVE_FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESOURCE_FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::RESOURCE_FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESOURCE_REJECTED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::RESOURCE_REJECTED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SERVICE_FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::SERVICE_FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SUCCEEDED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::SUCCEEDED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TIMEOUT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::TIMEOUT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UPDATED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::UPDATED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VALIDATION_FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType::VALIDATION_FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CommandStatusReasonEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        CommandStatusReasonEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommandStatusReasonEnumType*/

                if (is_initialized) {
                    return &CommandStatusReasonEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommandStatusReasonEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                CommandStatusReasonEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CommandStatusReasonEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                CommandStatusReasonEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommandStatusReasonEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommandStatusReasonEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CommandStatusReasonEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommandStatusReasonEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommandStatusReasonEnumType_g_sampleAccessInfo;
                }

                CommandStatusReasonEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CommandStatusReasonEnumType_g_sampleAccessInfo.memberAccessInfos = 
                CommandStatusReasonEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommandStatusReasonEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommandStatusReasonEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommandStatusReasonEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommandStatusReasonEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType >;

                CommandStatusReasonEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommandStatusReasonEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommandStatusReasonEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CommandStatusReasonEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType>::value = ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType::OFF;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsChannelOperationalStatusEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ON",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType::ON), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OPERATIONAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType::OPERATIONAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CommsChannelOperationalStatusEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        CommsChannelOperationalStatusEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelOperationalStatusEnumType*/

                if (is_initialized) {
                    return &CommsChannelOperationalStatusEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelOperationalStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                CommsChannelOperationalStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CommsChannelOperationalStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                CommsChannelOperationalStatusEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelOperationalStatusEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelOperationalStatusEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CommsChannelOperationalStatusEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelOperationalStatusEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelOperationalStatusEnumType_g_sampleAccessInfo;
                }

                CommsChannelOperationalStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CommsChannelOperationalStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelOperationalStatusEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelOperationalStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelOperationalStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelOperationalStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelOperationalStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType >;

                CommsChannelOperationalStatusEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelOperationalStatusEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelOperationalStatusEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CommsChannelOperationalStatusEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType::GREATER_THAN;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ConditionalOperatorEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"GREATER_THAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType::GREATER_THAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GREATER_THAN_OR_EQUAL_TO",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType::GREATER_THAN_OR_EQUAL_TO), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LESS_THAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType::LESS_THAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LESS_THAN_OR_EQUAL_TO",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType::LESS_THAN_OR_EQUAL_TO), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ConditionalOperatorEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ConditionalOperatorEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ConditionalOperatorEnumType*/

                if (is_initialized) {
                    return &ConditionalOperatorEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ConditionalOperatorEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ConditionalOperatorEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ConditionalOperatorEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ConditionalOperatorEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ConditionalOperatorEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ConditionalOperatorEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ConditionalOperatorEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ConditionalOperatorEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ConditionalOperatorEnumType_g_sampleAccessInfo;
                }

                ConditionalOperatorEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ConditionalOperatorEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ConditionalOperatorEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ConditionalOperatorEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ConditionalOperatorEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ConditionalOperatorEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ConditionalOperatorEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType >;

                ConditionalOperatorEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ConditionalOperatorEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ConditionalOperatorEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ConditionalOperatorEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::COLLISION;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContactManeuverInfluenceEnumType_g_tc_members[17]=
                {

                    {
                        (char *)"COLLISION",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::COLLISION), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COLLISION_AVOIDANCE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::COLLISION_AVOIDANCE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CROSSING_LEFT_COMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::CROSSING_LEFT_COMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CROSSING_LEFT_NONCOMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::CROSSING_LEFT_NONCOMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CROSSING_RIGHT_COMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::CROSSING_RIGHT_COMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CROSSING_RIGHT_NONCOMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::CROSSING_RIGHT_NONCOMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DYNAMIC_AVOIDANCE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::DYNAMIC_AVOIDANCE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GUIDE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::GUIDE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HEAD_ON_COMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::HEAD_ON_COMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HEAD_ON_NONCOMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::HEAD_ON_NONCOMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NONE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::NONE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OVERTAKEN_COMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::OVERTAKEN_COMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OVERTAKEN_NONCOMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::OVERTAKEN_NONCOMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OVERTAKING_COMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::OVERTAKING_COMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OVERTAKING_NONCOMPLIANT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::OVERTAKING_NONCOMPLIANT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PREEMPTIVE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::PREEMPTIVE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STATIC_AVOIDANCE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType::STATIC_AVOIDANCE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ContactManeuverInfluenceEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        17, /* Number of members */
                        ContactManeuverInfluenceEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContactManeuverInfluenceEnumType*/

                if (is_initialized) {
                    return &ContactManeuverInfluenceEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContactManeuverInfluenceEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ContactManeuverInfluenceEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContactManeuverInfluenceEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ContactManeuverInfluenceEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContactManeuverInfluenceEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContactManeuverInfluenceEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ContactManeuverInfluenceEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContactManeuverInfluenceEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContactManeuverInfluenceEnumType_g_sampleAccessInfo;
                }

                ContactManeuverInfluenceEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ContactManeuverInfluenceEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ContactManeuverInfluenceEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContactManeuverInfluenceEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContactManeuverInfluenceEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContactManeuverInfluenceEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContactManeuverInfluenceEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType >;

                ContactManeuverInfluenceEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContactManeuverInfluenceEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContactManeuverInfluenceEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ContactManeuverInfluenceEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType::CONTINUE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContingencyBehaviorEnumType_g_tc_members[6]=
                {

                    {
                        (char *)"CONTINUE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType::CONTINUE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FINISH",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType::FINISH), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"_HOME",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType::_HOME), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOITER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType::LOITER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NONE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType::NONE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VEHICLE_SPECIFIC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType::VEHICLE_SPECIFIC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ContingencyBehaviorEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        ContingencyBehaviorEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContingencyBehaviorEnumType*/

                if (is_initialized) {
                    return &ContingencyBehaviorEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContingencyBehaviorEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ContingencyBehaviorEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContingencyBehaviorEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ContingencyBehaviorEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContingencyBehaviorEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContingencyBehaviorEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ContingencyBehaviorEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContingencyBehaviorEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContingencyBehaviorEnumType_g_sampleAccessInfo;
                }

                ContingencyBehaviorEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ContingencyBehaviorEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ContingencyBehaviorEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContingencyBehaviorEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContingencyBehaviorEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContingencyBehaviorEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContingencyBehaviorEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType >;

                ContingencyBehaviorEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContingencyBehaviorEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContingencyBehaviorEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ContingencyBehaviorEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType::DISABLED_NO_TEST;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContinuousTestEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"DISABLED_NO_TEST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType::DISABLED_NO_TEST), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FULL_TEST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType::FULL_TEST), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NON_INTRUSIVE_TESTS_ONLY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType::NON_INTRUSIVE_TESTS_ONLY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ContinuousTestEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ContinuousTestEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContinuousTestEnumType*/

                if (is_initialized) {
                    return &ContinuousTestEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContinuousTestEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ContinuousTestEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContinuousTestEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ContinuousTestEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContinuousTestEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContinuousTestEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ContinuousTestEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContinuousTestEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContinuousTestEnumType_g_sampleAccessInfo;
                }

                ContinuousTestEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ContinuousTestEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ContinuousTestEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContinuousTestEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContinuousTestEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContinuousTestEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContinuousTestEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType >;

                ContinuousTestEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContinuousTestEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContinuousTestEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ContinuousTestEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType>::value = ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::AGREE_TO_BE_OVERTAKEN;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CoordinationSituationalSignalEnumType_g_tc_members[13]=
                {

                    {
                        (char *)"AGREE_TO_BE_OVERTAKEN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::AGREE_TO_BE_OVERTAKEN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ALTERING_COURSE_TO_PORT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::ALTERING_COURSE_TO_PORT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ALTERING_COURSE_TO_STARBOARD",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::ALTERING_COURSE_TO_STARBOARD), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BLIND_BEND_SIGNAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::BLIND_BEND_SIGNAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DANGER_SIGNAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::DANGER_SIGNAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"IN_DISTRESS_NEED_ASSISTANCE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::IN_DISTRESS_NEED_ASSISTANCE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NONE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::NONE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OPERATING_ASTERN_PROPULSION",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::OPERATING_ASTERN_PROPULSION), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TO_OVERTAKE_LEAVE_VESSEL_TO_PORT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::TO_OVERTAKE_LEAVE_VESSEL_TO_PORT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TO_OVERTAKE_LEAVE_VESSEL_TO_STARBOARD",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::TO_OVERTAKE_LEAVE_VESSEL_TO_STARBOARD), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VESSEL_LEAVING_DOCK",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::VESSEL_LEAVING_DOCK), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VISIBILITY_RESTRICTED_VEHICLE_STOPPED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::VISIBILITY_RESTRICTED_VEHICLE_STOPPED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VISIBILITY_RESTRICTED_VEHICLE_UNDERWAY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType::VISIBILITY_RESTRICTED_VEHICLE_UNDERWAY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CoordinationSituationalSignalEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        13, /* Number of members */
                        CoordinationSituationalSignalEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CoordinationSituationalSignalEnumType*/

                if (is_initialized) {
                    return &CoordinationSituationalSignalEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CoordinationSituationalSignalEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                CoordinationSituationalSignalEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CoordinationSituationalSignalEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                CoordinationSituationalSignalEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                CoordinationSituationalSignalEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &CoordinationSituationalSignalEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CoordinationSituationalSignalEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CoordinationSituationalSignalEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CoordinationSituationalSignalEnumType_g_sampleAccessInfo;
                }

                CoordinationSituationalSignalEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CoordinationSituationalSignalEnumType_g_sampleAccessInfo.memberAccessInfos = 
                CoordinationSituationalSignalEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CoordinationSituationalSignalEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CoordinationSituationalSignalEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CoordinationSituationalSignalEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CoordinationSituationalSignalEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType >;

                CoordinationSituationalSignalEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CoordinationSituationalSignalEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CoordinationSituationalSignalEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CoordinationSituationalSignalEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType::COURSE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DirectionModeEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"COURSE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType::COURSE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HEADING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType::HEADING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DirectionModeEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DirectionModeEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DirectionModeEnumType*/

                if (is_initialized) {
                    return &DirectionModeEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DirectionModeEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DirectionModeEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DirectionModeEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DirectionModeEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                DirectionModeEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &DirectionModeEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DirectionModeEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DirectionModeEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DirectionModeEnumType_g_sampleAccessInfo;
                }

                DirectionModeEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DirectionModeEnumType_g_sampleAccessInfo.memberAccessInfos = 
                DirectionModeEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DirectionModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DirectionModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DirectionModeEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DirectionModeEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType >;

                DirectionModeEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DirectionModeEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DirectionModeEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DirectionModeEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType>::value = ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType::AIR;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DomainEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"AIR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType::AIR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GROUND",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType::GROUND), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SURFACE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType::SURFACE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UNDERSEA",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType::UNDERSEA), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DomainEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DomainEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DomainEnumType*/

                if (is_initialized) {
                    return &DomainEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DomainEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DomainEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DomainEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DomainEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                DomainEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &DomainEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DomainEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DomainEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DomainEnumType_g_sampleAccessInfo;
                }

                DomainEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DomainEnumType_g_sampleAccessInfo.memberAccessInfos = 
                DomainEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DomainEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DomainEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DomainEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DomainEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType >;

                DomainEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DomainEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DomainEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DomainEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType::ALLOWED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member EmitterStateEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"ALLOWED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType::ALLOWED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SECURED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType::SECURED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode EmitterStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        EmitterStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EmitterStateEnumType*/

                if (is_initialized) {
                    return &EmitterStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                EmitterStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                EmitterStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                EmitterStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                EmitterStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                EmitterStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &EmitterStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo EmitterStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EmitterStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EmitterStateEnumType_g_sampleAccessInfo;
                }

                EmitterStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                EmitterStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                EmitterStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EmitterStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EmitterStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EmitterStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EmitterStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType >;

                EmitterStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EmitterStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EmitterStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &EmitterStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType::DIESEL;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member EngineKindEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"DIESEL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType::DIESEL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GAS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType::GAS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode EngineKindEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        EngineKindEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EngineKindEnumType*/

                if (is_initialized) {
                    return &EngineKindEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                EngineKindEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                EngineKindEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                EngineKindEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                EngineKindEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                EngineKindEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &EngineKindEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo EngineKindEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EngineKindEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EngineKindEnumType_g_sampleAccessInfo;
                }

                EngineKindEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                EngineKindEnumType_g_sampleAccessInfo.memberAccessInfos = 
                EngineKindEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EngineKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EngineKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EngineKindEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EngineKindEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType >;

                EngineKindEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EngineKindEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EngineKindEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &EngineKindEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::ACTUATOR;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ErrorCodeEnumType_g_tc_members[9]=
                {

                    {
                        (char *)"ACTUATOR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::ACTUATOR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FILESYS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::FILESYS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NONE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::NONE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"POWER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::POWER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PROCESSOR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::PROCESSOR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RAM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::RAM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ROM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::ROM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SENSOR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::SENSOR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SOFTWARE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType::SOFTWARE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ErrorCodeEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        ErrorCodeEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ErrorCodeEnumType*/

                if (is_initialized) {
                    return &ErrorCodeEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ErrorCodeEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ErrorCodeEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ErrorCodeEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ErrorCodeEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ErrorCodeEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ErrorCodeEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ErrorCodeEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ErrorCodeEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ErrorCodeEnumType_g_sampleAccessInfo;
                }

                ErrorCodeEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ErrorCodeEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ErrorCodeEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ErrorCodeEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ErrorCodeEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ErrorCodeEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ErrorCodeEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType >;

                ErrorCodeEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ErrorCodeEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ErrorCodeEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ErrorCodeEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType::ERROR;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ErrorConditionEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"ERROR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType::ERROR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FAIL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType::FAIL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"INFO",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType::INFO), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NONE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType::NONE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"WARN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType::WARN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ErrorConditionEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ErrorConditionEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ErrorConditionEnumType*/

                if (is_initialized) {
                    return &ErrorConditionEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ErrorConditionEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ErrorConditionEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ErrorConditionEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ErrorConditionEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ErrorConditionEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ErrorConditionEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ErrorConditionEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ErrorConditionEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ErrorConditionEnumType_g_sampleAccessInfo;
                }

                ErrorConditionEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ErrorConditionEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ErrorConditionEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ErrorConditionEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ErrorConditionEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ErrorConditionEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ErrorConditionEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType >;

                ErrorConditionEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ErrorConditionEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ErrorConditionEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ErrorConditionEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType>::value = ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType::MEDIUM;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FLSBeamwidthEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"MEDIUM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType::MEDIUM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NARROW",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType::NARROW), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"WIDE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType::WIDE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode FLSBeamwidthEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        FLSBeamwidthEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FLSBeamwidthEnumType*/

                if (is_initialized) {
                    return &FLSBeamwidthEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FLSBeamwidthEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                FLSBeamwidthEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                FLSBeamwidthEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                FLSBeamwidthEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                FLSBeamwidthEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &FLSBeamwidthEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo FLSBeamwidthEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FLSBeamwidthEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FLSBeamwidthEnumType_g_sampleAccessInfo;
                }

                FLSBeamwidthEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                FLSBeamwidthEnumType_g_sampleAccessInfo.memberAccessInfos = 
                FLSBeamwidthEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FLSBeamwidthEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FLSBeamwidthEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FLSBeamwidthEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FLSBeamwidthEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType >;

                FLSBeamwidthEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FLSBeamwidthEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FLSBeamwidthEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &FLSBeamwidthEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::DEV_TEST;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FLSConfigModeEnumType_g_tc_members[8]=
                {

                    {
                        (char *)"DEV_TEST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::DEV_TEST), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DIVE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::DIVE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PASSIVE_ONLY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::PASSIVE_ONLY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SEARCH_BOTTOM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::SEARCH_BOTTOM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SEARCH_VOLUME",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::SEARCH_VOLUME), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SURFACE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::SURFACE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TEST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::TEST), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TRANSIT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType::TRANSIT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode FLSConfigModeEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        FLSConfigModeEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FLSConfigModeEnumType*/

                if (is_initialized) {
                    return &FLSConfigModeEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FLSConfigModeEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                FLSConfigModeEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                FLSConfigModeEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                FLSConfigModeEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                FLSConfigModeEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &FLSConfigModeEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo FLSConfigModeEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FLSConfigModeEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FLSConfigModeEnumType_g_sampleAccessInfo;
                }

                FLSConfigModeEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                FLSConfigModeEnumType_g_sampleAccessInfo.memberAccessInfos = 
                FLSConfigModeEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FLSConfigModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FLSConfigModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FLSConfigModeEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FLSConfigModeEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType >;

                FLSConfigModeEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FLSConfigModeEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FLSConfigModeEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &FLSConfigModeEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType>::value = ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType::_LONG;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FLSWaveformLengthEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"_LONG",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType::_LONG), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEDIUM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType::MEDIUM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"_SHORT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType::_SHORT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"XSHORT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType::XSHORT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode FLSWaveformLengthEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        FLSWaveformLengthEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for FLSWaveformLengthEnumType*/

                if (is_initialized) {
                    return &FLSWaveformLengthEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                FLSWaveformLengthEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                FLSWaveformLengthEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                FLSWaveformLengthEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                FLSWaveformLengthEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                FLSWaveformLengthEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &FLSWaveformLengthEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo FLSWaveformLengthEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo FLSWaveformLengthEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &FLSWaveformLengthEnumType_g_sampleAccessInfo;
                }

                FLSWaveformLengthEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                FLSWaveformLengthEnumType_g_sampleAccessInfo.memberAccessInfos = 
                FLSWaveformLengthEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        FLSWaveformLengthEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        FLSWaveformLengthEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                FLSWaveformLengthEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                FLSWaveformLengthEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType >;

                FLSWaveformLengthEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &FLSWaveformLengthEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin FLSWaveformLengthEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &FLSWaveformLengthEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType>::value = ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::BEIDOU;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GPSConstellationEnumType_g_tc_members[8]=
                {

                    {
                        (char *)"BEIDOU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::BEIDOU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GALILEO",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::GALILEO), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GLONASS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::GLONASS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GPS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::GPS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"IRNSS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::IRNSS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"QZSS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::QZSS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SBAS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::SBAS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UNKNOWN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType::UNKNOWN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GPSConstellationEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        GPSConstellationEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GPSConstellationEnumType*/

                if (is_initialized) {
                    return &GPSConstellationEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GPSConstellationEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                GPSConstellationEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GPSConstellationEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                GPSConstellationEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                GPSConstellationEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &GPSConstellationEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GPSConstellationEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GPSConstellationEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GPSConstellationEnumType_g_sampleAccessInfo;
                }

                GPSConstellationEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GPSConstellationEnumType_g_sampleAccessInfo.memberAccessInfos = 
                GPSConstellationEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GPSConstellationEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GPSConstellationEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GPSConstellationEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GPSConstellationEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType >;

                GPSConstellationEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GPSConstellationEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GPSConstellationEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &GPSConstellationEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType>::value = ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::DEFERRED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HandoverResultEnumType_g_tc_members[6]=
                {

                    {
                        (char *)"DEFERRED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::DEFERRED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DENIED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::DENIED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GRANTED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::GRANTED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"INSUFFICIENT_AUTHORITY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::INSUFFICIENT_AUTHORITY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NOT_AVAILABLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::NOT_AVAILABLE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TIMEOUT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType::TIMEOUT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode HandoverResultEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        HandoverResultEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HandoverResultEnumType*/

                if (is_initialized) {
                    return &HandoverResultEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                HandoverResultEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                HandoverResultEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                HandoverResultEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                HandoverResultEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                HandoverResultEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &HandoverResultEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo HandoverResultEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HandoverResultEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HandoverResultEnumType_g_sampleAccessInfo;
                }

                HandoverResultEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                HandoverResultEnumType_g_sampleAccessInfo.memberAccessInfos = 
                HandoverResultEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HandoverResultEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HandoverResultEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HandoverResultEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HandoverResultEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType >;

                HandoverResultEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HandoverResultEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HandoverResultEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &HandoverResultEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType::INSIDE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HeadingSectorKindEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"INSIDE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType::INSIDE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OUTSIDE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType::OUTSIDE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode HeadingSectorKindEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HeadingSectorKindEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HeadingSectorKindEnumType*/

                if (is_initialized) {
                    return &HeadingSectorKindEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeadingSectorKindEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                HeadingSectorKindEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                HeadingSectorKindEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                HeadingSectorKindEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                HeadingSectorKindEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &HeadingSectorKindEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo HeadingSectorKindEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeadingSectorKindEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeadingSectorKindEnumType_g_sampleAccessInfo;
                }

                HeadingSectorKindEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                HeadingSectorKindEnumType_g_sampleAccessInfo.memberAccessInfos = 
                HeadingSectorKindEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeadingSectorKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeadingSectorKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeadingSectorKindEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeadingSectorKindEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType >;

                HeadingSectorKindEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeadingSectorKindEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeadingSectorKindEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &HeadingSectorKindEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType::LAT_LON_PRIORITY;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HoverKindEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"LAT_LON_PRIORITY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType::LAT_LON_PRIORITY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Z_PRIORITY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType::Z_PRIORITY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode HoverKindEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HoverKindEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HoverKindEnumType*/

                if (is_initialized) {
                    return &HoverKindEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                HoverKindEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                HoverKindEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                HoverKindEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                HoverKindEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                HoverKindEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &HoverKindEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo HoverKindEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HoverKindEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HoverKindEnumType_g_sampleAccessInfo;
                }

                HoverKindEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                HoverKindEnumType_g_sampleAccessInfo.memberAccessInfos = 
                HoverKindEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HoverKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HoverKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HoverKindEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HoverKindEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType >;

                HoverKindEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HoverKindEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HoverKindEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &HoverKindEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType>::value = ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType::OFF;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member IgnitionControlEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RUN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType::RUN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode IgnitionControlEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        IgnitionControlEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for IgnitionControlEnumType*/

                if (is_initialized) {
                    return &IgnitionControlEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                IgnitionControlEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                IgnitionControlEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                IgnitionControlEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                IgnitionControlEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                IgnitionControlEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &IgnitionControlEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo IgnitionControlEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IgnitionControlEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IgnitionControlEnumType_g_sampleAccessInfo;
                }

                IgnitionControlEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                IgnitionControlEnumType_g_sampleAccessInfo.memberAccessInfos = 
                IgnitionControlEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IgnitionControlEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IgnitionControlEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IgnitionControlEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IgnitionControlEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType >;

                IgnitionControlEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IgnitionControlEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IgnitionControlEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &IgnitionControlEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType::OFF;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member IgnitionStateEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RUN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType::RUN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"START",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType::START), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode IgnitionStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        IgnitionStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for IgnitionStateEnumType*/

                if (is_initialized) {
                    return &IgnitionStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                IgnitionStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                IgnitionStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                IgnitionStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                IgnitionStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                IgnitionStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &IgnitionStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo IgnitionStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IgnitionStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IgnitionStateEnumType_g_sampleAccessInfo;
                }

                IgnitionStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                IgnitionStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                IgnitionStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IgnitionStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IgnitionStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IgnitionStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IgnitionStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType >;

                IgnitionStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IgnitionStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IgnitionStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &IgnitionStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType::FLASHING;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member IlluminatorStateEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"FLASHING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType::FLASHING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ON",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType::ON), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode IlluminatorStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        IlluminatorStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for IlluminatorStateEnumType*/

                if (is_initialized) {
                    return &IlluminatorStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                IlluminatorStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                IlluminatorStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                IlluminatorStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                IlluminatorStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                IlluminatorStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &IlluminatorStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo IlluminatorStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IlluminatorStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IlluminatorStateEnumType_g_sampleAccessInfo;
                }

                IlluminatorStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                IlluminatorStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                IlluminatorStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IlluminatorStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IlluminatorStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IlluminatorStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IlluminatorStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType >;

                IlluminatorStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IlluminatorStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IlluminatorStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &IlluminatorStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::ARW;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ImageFormatEnumType_g_tc_members[15]=
                {

                    {
                        (char *)"ARW",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::ARW), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BMP",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::BMP), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CR2_RAW",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::CR2_RAW), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DNG",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::DNG), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GEOJPEG",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::GEOJPEG), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GEOTIFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::GEOTIFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GIF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::GIF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GPR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::GPR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"JPEG",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::JPEG), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NEF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::NEF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PGM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::PGM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PNG",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::PNG), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PNM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::PNM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PPM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::PPM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TIFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType::TIFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ImageFormatEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        15, /* Number of members */
                        ImageFormatEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ImageFormatEnumType*/

                if (is_initialized) {
                    return &ImageFormatEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ImageFormatEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ImageFormatEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ImageFormatEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ImageFormatEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ImageFormatEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ImageFormatEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ImageFormatEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ImageFormatEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ImageFormatEnumType_g_sampleAccessInfo;
                }

                ImageFormatEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ImageFormatEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ImageFormatEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ImageFormatEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ImageFormatEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ImageFormatEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ImageFormatEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType >;

                ImageFormatEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ImageFormatEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ImageFormatEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ImageFormatEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType>::value = ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType::BEST_ALIGN;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member InertialSensorCmdEnumType_g_tc_members[6]=
                {

                    {
                        (char *)"BEST_ALIGN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType::BEST_ALIGN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GPS_ALIGN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType::GPS_ALIGN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"INIT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType::INIT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SNAP_ALIGN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType::SNAP_ALIGN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STATIONARY_ALIGN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType::STATIONARY_ALIGN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TRANSFER_ALIGN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType::TRANSFER_ALIGN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode InertialSensorCmdEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        InertialSensorCmdEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for InertialSensorCmdEnumType*/

                if (is_initialized) {
                    return &InertialSensorCmdEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                InertialSensorCmdEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                InertialSensorCmdEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                InertialSensorCmdEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                InertialSensorCmdEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                InertialSensorCmdEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &InertialSensorCmdEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo InertialSensorCmdEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo InertialSensorCmdEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &InertialSensorCmdEnumType_g_sampleAccessInfo;
                }

                InertialSensorCmdEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                InertialSensorCmdEnumType_g_sampleAccessInfo.memberAccessInfos = 
                InertialSensorCmdEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        InertialSensorCmdEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        InertialSensorCmdEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                InertialSensorCmdEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                InertialSensorCmdEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType >;

                InertialSensorCmdEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &InertialSensorCmdEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin InertialSensorCmdEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &InertialSensorCmdEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType>::value = ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::BEST_ALIGNMENT_FAILURE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member InertialSensorOpStatusEnumType_g_tc_members[20]=
                {

                    {
                        (char *)"BEST_ALIGNMENT_FAILURE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::BEST_ALIGNMENT_FAILURE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COARSE_BEST_ALIGNMENT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::COARSE_BEST_ALIGNMENT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COARSE_GPS_ALIGNMENT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::COARSE_GPS_ALIGNMENT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COARSE_STATIONARY_ALIGNMENT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::COARSE_STATIONARY_ALIGNMENT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COARSE_TRANSFER_ALIGNMENT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::COARSE_TRANSFER_ALIGNMENT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FINE_BEST_ALIGNMENT_COMPLETE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::FINE_BEST_ALIGNMENT_COMPLETE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FINE_BEST_ALIGNMENT_STARTED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::FINE_BEST_ALIGNMENT_STARTED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FINE_GPS_ALIGNMENT_COMPLETE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::FINE_GPS_ALIGNMENT_COMPLETE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FINE_GPS_ALIGNMENT_STARTED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::FINE_GPS_ALIGNMENT_STARTED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FINE_STATIONARY_ALIGNMENT_COMPLETE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::FINE_STATIONARY_ALIGNMENT_COMPLETE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FINE_STATIONARY_ALIGNMENT_STARTED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::FINE_STATIONARY_ALIGNMENT_STARTED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FINE_TRANSFER_ALIGNMENT_COMPLETE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::FINE_TRANSFER_ALIGNMENT_COMPLETE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FINE_TRANSFER_ALIGNMENT_STARTED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::FINE_TRANSFER_ALIGNMENT_STARTED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GPS_ALIGNMENT_FAILURE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::GPS_ALIGNMENT_FAILURE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"INERTIAL_SENSOR_FAILURE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::INERTIAL_SENSOR_FAILURE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"INIT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::INIT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SNAP_ALIGNMENT_COMPLETE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::SNAP_ALIGNMENT_COMPLETE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SNAP_ALIGNMENT_FAILURE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::SNAP_ALIGNMENT_FAILURE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STATIONARY_ALIGNMENT_FAILURE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::STATIONARY_ALIGNMENT_FAILURE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TRANSFER_ALIGNMENT_FAILURE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType::TRANSFER_ALIGNMENT_FAILURE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode InertialSensorOpStatusEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        20, /* Number of members */
                        InertialSensorOpStatusEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for InertialSensorOpStatusEnumType*/

                if (is_initialized) {
                    return &InertialSensorOpStatusEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                InertialSensorOpStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                InertialSensorOpStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                InertialSensorOpStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                InertialSensorOpStatusEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                InertialSensorOpStatusEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &InertialSensorOpStatusEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo InertialSensorOpStatusEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo InertialSensorOpStatusEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &InertialSensorOpStatusEnumType_g_sampleAccessInfo;
                }

                InertialSensorOpStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                InertialSensorOpStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
                InertialSensorOpStatusEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        InertialSensorOpStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        InertialSensorOpStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                InertialSensorOpStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                InertialSensorOpStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType >;

                InertialSensorOpStatusEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &InertialSensorOpStatusEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin InertialSensorOpStatusEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &InertialSensorOpStatusEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType>::value = ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType::DESTRUCTIVE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member InitiatedTestEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"DESTRUCTIVE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType::DESTRUCTIVE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NON_DESTRUCTIVE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType::NON_DESTRUCTIVE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode InitiatedTestEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        InitiatedTestEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for InitiatedTestEnumType*/

                if (is_initialized) {
                    return &InitiatedTestEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                InitiatedTestEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                InitiatedTestEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                InitiatedTestEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                InitiatedTestEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                InitiatedTestEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &InitiatedTestEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo InitiatedTestEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo InitiatedTestEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &InitiatedTestEnumType_g_sampleAccessInfo;
                }

                InitiatedTestEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                InitiatedTestEnumType_g_sampleAccessInfo.memberAccessInfos = 
                InitiatedTestEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        InitiatedTestEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        InitiatedTestEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                InitiatedTestEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                InitiatedTestEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType >;

                InitiatedTestEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &InitiatedTestEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin InitiatedTestEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &InitiatedTestEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType>::value = ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType::ACOUSTIC;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member InterferenceEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"ACOUSTIC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType::ACOUSTIC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NONACOUSTIC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType::NONACOUSTIC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UNKNOWN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType::UNKNOWN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode InterferenceEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        InterferenceEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for InterferenceEnumType*/

                if (is_initialized) {
                    return &InterferenceEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                InterferenceEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                InterferenceEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                InterferenceEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                InterferenceEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                InterferenceEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &InterferenceEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo InterferenceEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo InterferenceEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &InterferenceEnumType_g_sampleAccessInfo;
                }

                InterferenceEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                InterferenceEnumType_g_sampleAccessInfo.memberAccessInfos = 
                InterferenceEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        InterferenceEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        InterferenceEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                InterferenceEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                InterferenceEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType >;

                InterferenceEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &InterferenceEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin InterferenceEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &InterferenceEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType>::value = ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType::CLUSTER_OBJECT;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LandmarkEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"CLUSTER_OBJECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType::CLUSTER_OBJECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LARGE_OBJECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType::LARGE_OBJECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MARKED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType::MARKED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TERRAIN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType::TERRAIN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LandmarkEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        LandmarkEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LandmarkEnumType*/

                if (is_initialized) {
                    return &LandmarkEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LandmarkEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                LandmarkEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LandmarkEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                LandmarkEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                LandmarkEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &LandmarkEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo LandmarkEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LandmarkEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LandmarkEnumType_g_sampleAccessInfo;
                }

                LandmarkEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                LandmarkEnumType_g_sampleAccessInfo.memberAccessInfos = 
                LandmarkEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LandmarkEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LandmarkEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LandmarkEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LandmarkEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType >;

                LandmarkEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LandmarkEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LandmarkEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &LandmarkEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType>::value = ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType::ERROR;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LogLevelEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"ERROR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType::ERROR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"INFORMATION",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType::INFORMATION), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"WARNING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType::WARNING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LogLevelEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        LogLevelEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LogLevelEnumType*/

                if (is_initialized) {
                    return &LogLevelEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LogLevelEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                LogLevelEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LogLevelEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                LogLevelEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                LogLevelEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &LogLevelEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo LogLevelEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LogLevelEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LogLevelEnumType_g_sampleAccessInfo;
                }

                LogLevelEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                LogLevelEnumType_g_sampleAccessInfo.memberAccessInfos = 
                LogLevelEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LogLevelEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LogLevelEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LogLevelEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LogLevelEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType >;

                LogLevelEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LogLevelEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LogLevelEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &LogLevelEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType::LOWER;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MastActionEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"LOWER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType::LOWER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RAISE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType::RAISE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STOP",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType::STOP), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode MastActionEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        MastActionEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MastActionEnumType*/

                if (is_initialized) {
                    return &MastActionEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MastActionEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                MastActionEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MastActionEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                MastActionEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                MastActionEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &MastActionEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MastActionEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MastActionEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MastActionEnumType_g_sampleAccessInfo;
                }

                MastActionEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MastActionEnumType_g_sampleAccessInfo.memberAccessInfos = 
                MastActionEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MastActionEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MastActionEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MastActionEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MastActionEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType >;

                MastActionEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MastActionEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MastActionEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &MastActionEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType::DOWN;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MastStateEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"DOWN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType::DOWN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MOVING_DOWN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType::MOVING_DOWN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MOVING_UP",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType::MOVING_UP), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STOPPED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType::STOPPED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UP",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType::UP), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode MastStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        MastStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MastStateEnumType*/

                if (is_initialized) {
                    return &MastStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MastStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                MastStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MastStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                MastStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                MastStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &MastStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MastStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MastStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MastStateEnumType_g_sampleAccessInfo;
                }

                MastStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MastStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                MastStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MastStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MastStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MastStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MastStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType >;

                MastStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MastStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MastStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &MastStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType>::value = ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::CANCELED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommandStatusEnumType_g_tc_members[6]=
                {

                    {
                        (char *)"CANCELED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::CANCELED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COMMANDED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::COMMANDED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COMPLETED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::COMPLETED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EXECUTING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::EXECUTING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ISSUED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::ISSUED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CommandStatusEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        CommandStatusEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommandStatusEnumType*/

                if (is_initialized) {
                    return &CommandStatusEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommandStatusEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                CommandStatusEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                CommandStatusEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                CommandStatusEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommandStatusEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommandStatusEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo CommandStatusEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommandStatusEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommandStatusEnumType_g_sampleAccessInfo;
                }

                CommandStatusEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                CommandStatusEnumType_g_sampleAccessInfo.memberAccessInfos = 
                CommandStatusEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommandStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommandStatusEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommandStatusEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommandStatusEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType >;

                CommandStatusEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommandStatusEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommandStatusEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CommandStatusEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::CANCEL;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TaskControlEnumType_g_tc_members[8]=
                {

                    {
                        (char *)"CANCEL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::CANCEL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EXECUTION_APPROVED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::EXECUTION_APPROVED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EXECUTION_NOT_APPROVED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::EXECUTION_NOT_APPROVED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PAUSE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::PAUSE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PLAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::PLAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"QUEUE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::QUEUE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESTART",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::RESTART), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESUME",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::RESUME), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode TaskControlEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        TaskControlEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TaskControlEnumType*/

                if (is_initialized) {
                    return &TaskControlEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TaskControlEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                TaskControlEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TaskControlEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                TaskControlEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                TaskControlEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &TaskControlEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo TaskControlEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TaskControlEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TaskControlEnumType_g_sampleAccessInfo;
                }

                TaskControlEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                TaskControlEnumType_g_sampleAccessInfo.memberAccessInfos = 
                TaskControlEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TaskControlEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TaskControlEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TaskControlEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TaskControlEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType >;

                TaskControlEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TaskControlEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TaskControlEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TaskControlEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::AWAITING_EXECUTION_APPROVAL;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TaskStateEnumType_g_tc_members[17]=
                {

                    {
                        (char *)"AWAITING_EXECUTION_APPROVAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::AWAITING_EXECUTION_APPROVAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CANCELED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::CANCELED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CANCELING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::CANCELING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COMPLETED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::COMPLETED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EXECUTING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::EXECUTING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EXECUTION_APPROVED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::EXECUTION_APPROVED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NOT_PLANNED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::NOT_PLANNED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NOT_QUEUED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::NOT_QUEUED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PAUSED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::PAUSED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PAUSING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::PAUSING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PLANNED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::PLANNED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PLANNING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::PLANNING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"QUEUED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::QUEUED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"QUEUING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::QUEUING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESTARTING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::RESTARTING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESUMING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType::RESUMING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode TaskStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        17, /* Number of members */
                        TaskStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TaskStateEnumType*/

                if (is_initialized) {
                    return &TaskStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TaskStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                TaskStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TaskStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                TaskStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                TaskStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &TaskStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo TaskStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TaskStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TaskStateEnumType_g_sampleAccessInfo;
                }

                TaskStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                TaskStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                TaskStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TaskStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TaskStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TaskStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TaskStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType >;

                TaskStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TaskStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TaskStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TaskStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType::ESTIMATED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NavigationSolutionEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"ESTIMATED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType::ESTIMATED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GROUND_TRUTH",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType::GROUND_TRUTH), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEASURED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType::MEASURED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode NavigationSolutionEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        NavigationSolutionEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for NavigationSolutionEnumType*/

                if (is_initialized) {
                    return &NavigationSolutionEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                NavigationSolutionEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                NavigationSolutionEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                NavigationSolutionEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                NavigationSolutionEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                NavigationSolutionEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &NavigationSolutionEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo NavigationSolutionEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo NavigationSolutionEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &NavigationSolutionEnumType_g_sampleAccessInfo;
                }

                NavigationSolutionEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                NavigationSolutionEnumType_g_sampleAccessInfo.memberAccessInfos = 
                NavigationSolutionEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        NavigationSolutionEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        NavigationSolutionEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                NavigationSolutionEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                NavigationSolutionEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType >;

                NavigationSolutionEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &NavigationSolutionEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin NavigationSolutionEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &NavigationSolutionEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType::EXECUTE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ObjectiveExecutorControlEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"EXECUTE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType::EXECUTE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PAUSE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType::PAUSE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESUME",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType::RESUME), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ObjectiveExecutorControlEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ObjectiveExecutorControlEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectiveExecutorControlEnumType*/

                if (is_initialized) {
                    return &ObjectiveExecutorControlEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ObjectiveExecutorControlEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ObjectiveExecutorControlEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ObjectiveExecutorControlEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ObjectiveExecutorControlEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectiveExecutorControlEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ObjectiveExecutorControlEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ObjectiveExecutorControlEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectiveExecutorControlEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectiveExecutorControlEnumType_g_sampleAccessInfo;
                }

                ObjectiveExecutorControlEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ObjectiveExecutorControlEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ObjectiveExecutorControlEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectiveExecutorControlEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectiveExecutorControlEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectiveExecutorControlEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectiveExecutorControlEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType >;

                ObjectiveExecutorControlEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectiveExecutorControlEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectiveExecutorControlEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ObjectiveExecutorControlEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::CANCELED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ObjectiveExecutorStateEnumType_g_tc_members[10]=
                {

                    {
                        (char *)"CANCELED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::CANCELED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CANCELING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::CANCELING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COMPLETED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::COMPLETED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EXECUTING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::EXECUTING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MODIFYING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::MODIFYING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PAUSED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::PAUSED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PAUSING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::PAUSING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"QUEUED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::QUEUED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESUMING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType::RESUMING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ObjectiveExecutorStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        ObjectiveExecutorStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectiveExecutorStateEnumType*/

                if (is_initialized) {
                    return &ObjectiveExecutorStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ObjectiveExecutorStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ObjectiveExecutorStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ObjectiveExecutorStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ObjectiveExecutorStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectiveExecutorStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ObjectiveExecutorStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ObjectiveExecutorStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectiveExecutorStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectiveExecutorStateEnumType_g_sampleAccessInfo;
                }

                ObjectiveExecutorStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ObjectiveExecutorStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ObjectiveExecutorStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectiveExecutorStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectiveExecutorStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectiveExecutorStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectiveExecutorStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType >;

                ObjectiveExecutorStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectiveExecutorStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectiveExecutorStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ObjectiveExecutorStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::BUS_MSG_DISPOSE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ObjectiveExecutorStateReasonEnumType_g_tc_members[12]=
                {

                    {
                        (char *)"BUS_MSG_DISPOSE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::BUS_MSG_DISPOSE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BUS_MSG_UPDATE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::BUS_MSG_UPDATE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CANNOT_PERFORM_UNDER_CONSTRAINTS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::CANNOT_PERFORM_UNDER_CONSTRAINTS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COMMAND_VALIDATION_FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::COMMAND_VALIDATION_FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COMMANDED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::COMMANDED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"INTERNAL_FAILURE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::INTERNAL_FAILURE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOWER_SERVICE_FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOWER_SERVICE_INTERRUPTED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_INTERRUPTED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOWER_SERVICE_REJECTED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_REJECTED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOWER_SERVICE_TIMEOUT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::LOWER_SERVICE_TIMEOUT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OBJECTIVE_REPLACED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::OBJECTIVE_REPLACED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SUCCEEDED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType::SUCCEEDED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ObjectiveExecutorStateReasonEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        ObjectiveExecutorStateReasonEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectiveExecutorStateReasonEnumType*/

                if (is_initialized) {
                    return &ObjectiveExecutorStateReasonEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ObjectiveExecutorStateReasonEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ObjectiveExecutorStateReasonEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ObjectiveExecutorStateReasonEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ObjectiveExecutorStateReasonEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectiveExecutorStateReasonEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ObjectiveExecutorStateReasonEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ObjectiveExecutorStateReasonEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectiveExecutorStateReasonEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectiveExecutorStateReasonEnumType_g_sampleAccessInfo;
                }

                ObjectiveExecutorStateReasonEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ObjectiveExecutorStateReasonEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ObjectiveExecutorStateReasonEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectiveExecutorStateReasonEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectiveExecutorStateReasonEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectiveExecutorStateReasonEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectiveExecutorStateReasonEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType >;

                ObjectiveExecutorStateReasonEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectiveExecutorStateReasonEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectiveExecutorStateReasonEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ObjectiveExecutorStateReasonEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType>::value = ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType::AUTONOMOUS;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OperationalModeControlEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"AUTONOMOUS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType::AUTONOMOUS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"REMOTE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType::REMOTE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STANDBY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType::STANDBY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode OperationalModeControlEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        OperationalModeControlEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OperationalModeControlEnumType*/

                if (is_initialized) {
                    return &OperationalModeControlEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                OperationalModeControlEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                OperationalModeControlEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                OperationalModeControlEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                OperationalModeControlEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                OperationalModeControlEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &OperationalModeControlEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo OperationalModeControlEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OperationalModeControlEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OperationalModeControlEnumType_g_sampleAccessInfo;
                }

                OperationalModeControlEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                OperationalModeControlEnumType_g_sampleAccessInfo.memberAccessInfos = 
                OperationalModeControlEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OperationalModeControlEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OperationalModeControlEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OperationalModeControlEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OperationalModeControlEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType >;

                OperationalModeControlEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OperationalModeControlEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OperationalModeControlEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &OperationalModeControlEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType::AUTONOMOUS;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member OperationalModeEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"AUTONOMOUS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType::AUTONOMOUS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MANUAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType::MANUAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"REMOTE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType::REMOTE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STANDBY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType::STANDBY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode OperationalModeEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        OperationalModeEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for OperationalModeEnumType*/

                if (is_initialized) {
                    return &OperationalModeEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                OperationalModeEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                OperationalModeEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                OperationalModeEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                OperationalModeEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                OperationalModeEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &OperationalModeEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo OperationalModeEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo OperationalModeEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &OperationalModeEnumType_g_sampleAccessInfo;
                }

                OperationalModeEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                OperationalModeEnumType_g_sampleAccessInfo.memberAccessInfos = 
                OperationalModeEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        OperationalModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        OperationalModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                OperationalModeEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                OperationalModeEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType >;

                OperationalModeEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &OperationalModeEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin OperationalModeEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &OperationalModeEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType::BROADBAND;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PassiveContactFeatureEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"BROADBAND",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType::BROADBAND), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NARROWBAND",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType::NARROWBAND), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TRANSIENT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType::TRANSIENT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PassiveContactFeatureEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PassiveContactFeatureEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PassiveContactFeatureEnumType*/

                if (is_initialized) {
                    return &PassiveContactFeatureEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PassiveContactFeatureEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PassiveContactFeatureEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PassiveContactFeatureEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PassiveContactFeatureEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                PassiveContactFeatureEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &PassiveContactFeatureEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PassiveContactFeatureEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PassiveContactFeatureEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PassiveContactFeatureEnumType_g_sampleAccessInfo;
                }

                PassiveContactFeatureEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PassiveContactFeatureEnumType_g_sampleAccessInfo.memberAccessInfos = 
                PassiveContactFeatureEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PassiveContactFeatureEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PassiveContactFeatureEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PassiveContactFeatureEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PassiveContactFeatureEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType >;

                PassiveContactFeatureEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PassiveContactFeatureEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PassiveContactFeatureEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PassiveContactFeatureEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType::HISTORICAL_GLOBAL;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PathWayEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"HISTORICAL_GLOBAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType::HISTORICAL_GLOBAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HISTORICAL_LOCAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType::HISTORICAL_LOCAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PLANNED_GLOBAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType::PLANNED_GLOBAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PLANNED_LOCAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType::PLANNED_LOCAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PathWayEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PathWayEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PathWayEnumType*/

                if (is_initialized) {
                    return &PathWayEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PathWayEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PathWayEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PathWayEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PathWayEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                PathWayEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &PathWayEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PathWayEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PathWayEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PathWayEnumType_g_sampleAccessInfo;
                }

                PathWayEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PathWayEnumType_g_sampleAccessInfo.memberAccessInfos = 
                PathWayEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PathWayEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PathWayEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PathWayEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PathWayEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType >;

                PathWayEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PathWayEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PathWayEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PathWayEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType::DISABLED_NO_TEST;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PowerOnTestEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"DISABLED_NO_TEST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType::DISABLED_NO_TEST), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FULL_TEST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType::FULL_TEST), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"QUICK_TEST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType::QUICK_TEST), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PowerOnTestEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PowerOnTestEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PowerOnTestEnumType*/

                if (is_initialized) {
                    return &PowerOnTestEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PowerOnTestEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PowerOnTestEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PowerOnTestEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PowerOnTestEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                PowerOnTestEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &PowerOnTestEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PowerOnTestEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PowerOnTestEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PowerOnTestEnumType_g_sampleAccessInfo;
                }

                PowerOnTestEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PowerOnTestEnumType_g_sampleAccessInfo.memberAccessInfos = 
                PowerOnTestEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PowerOnTestEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PowerOnTestEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PowerOnTestEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PowerOnTestEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType >;

                PowerOnTestEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PowerOnTestEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PowerOnTestEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PowerOnTestEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType::FAULT;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PowerPlantStateEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"FAULT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType::FAULT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ON",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType::ON), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PowerPlantStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PowerPlantStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PowerPlantStateEnumType*/

                if (is_initialized) {
                    return &PowerPlantStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PowerPlantStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PowerPlantStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PowerPlantStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PowerPlantStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                PowerPlantStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &PowerPlantStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PowerPlantStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PowerPlantStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PowerPlantStateEnumType_g_sampleAccessInfo;
                }

                PowerPlantStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PowerPlantStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                PowerPlantStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PowerPlantStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PowerPlantStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PowerPlantStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PowerPlantStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType >;

                PowerPlantStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PowerPlantStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PowerPlantStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PowerPlantStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType::EMERGENCY_POWER;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PowerStateEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"EMERGENCY_POWER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType::EMERGENCY_POWER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"POWER_OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType::POWER_OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"POWER_ON",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType::POWER_ON), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"POWER_STANDBY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType::POWER_STANDBY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PowerStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PowerStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PowerStateEnumType*/

                if (is_initialized) {
                    return &PowerStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PowerStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PowerStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PowerStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PowerStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                PowerStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &PowerStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PowerStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PowerStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PowerStateEnumType_g_sampleAccessInfo;
                }

                PowerStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PowerStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                PowerStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PowerStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PowerStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PowerStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PowerStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType >;

                PowerStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PowerStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PowerStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PowerStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::CPU;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ProcessingUnitEnumType_g_tc_members[11]=
                {

                    {
                        (char *)"CPU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::CPU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DSP",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::DSP), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FPGA",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::FPGA), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GPU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::GPU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NPU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::NPU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PhPU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::PhPU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PPU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::PPU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"QPU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::QPU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SPU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::SPU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TPU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::TPU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VPU",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType::VPU), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ProcessingUnitEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        ProcessingUnitEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ProcessingUnitEnumType*/

                if (is_initialized) {
                    return &ProcessingUnitEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ProcessingUnitEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ProcessingUnitEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ProcessingUnitEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ProcessingUnitEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ProcessingUnitEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ProcessingUnitEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ProcessingUnitEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ProcessingUnitEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ProcessingUnitEnumType_g_sampleAccessInfo;
                }

                ProcessingUnitEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ProcessingUnitEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ProcessingUnitEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ProcessingUnitEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ProcessingUnitEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ProcessingUnitEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ProcessingUnitEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType >;

                ProcessingUnitEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ProcessingUnitEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ProcessingUnitEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ProcessingUnitEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType::FAULT;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PumpStateEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"FAULT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType::FAULT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OFF",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType::OFF), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ON_FORWARD",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType::ON_FORWARD), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ON_REVERSE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType::ON_REVERSE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode PumpStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PumpStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PumpStateEnumType*/

                if (is_initialized) {
                    return &PumpStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                PumpStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                PumpStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                PumpStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                PumpStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                PumpStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &PumpStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo PumpStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PumpStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PumpStateEnumType_g_sampleAccessInfo;
                }

                PumpStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                PumpStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                PumpStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PumpStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PumpStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PumpStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PumpStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType >;

                PumpStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PumpStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PumpStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &PumpStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType>::value = ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType::BOW_WATERLINE_INTERSECTION;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ReferenceFrameOriginEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"BOW_WATERLINE_INTERSECTION",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType::BOW_WATERLINE_INTERSECTION), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CENTER_OF_BUOYANCY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType::CENTER_OF_BUOYANCY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CENTER_OF_GRAVITY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType::CENTER_OF_GRAVITY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"INS_LOCATION",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType::INS_LOCATION), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"KEEL_TRANSOM_INTERSECTION",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType::KEEL_TRANSOM_INTERSECTION), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ReferenceFrameOriginEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ReferenceFrameOriginEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ReferenceFrameOriginEnumType*/

                if (is_initialized) {
                    return &ReferenceFrameOriginEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ReferenceFrameOriginEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ReferenceFrameOriginEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ReferenceFrameOriginEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ReferenceFrameOriginEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                ReferenceFrameOriginEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &ReferenceFrameOriginEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ReferenceFrameOriginEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ReferenceFrameOriginEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ReferenceFrameOriginEnumType_g_sampleAccessInfo;
                }

                ReferenceFrameOriginEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ReferenceFrameOriginEnumType_g_sampleAccessInfo.memberAccessInfos = 
                ReferenceFrameOriginEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ReferenceFrameOriginEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ReferenceFrameOriginEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ReferenceFrameOriginEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ReferenceFrameOriginEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType >;

                ReferenceFrameOriginEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ReferenceFrameOriginEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ReferenceFrameOriginEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &ReferenceFrameOriginEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType>::value = ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType::ACTUAL;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SourceIndicatorEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"ACTUAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType::ACTUAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GROUND_TRUTH",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType::GROUND_TRUTH), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SIMULATED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType::SIMULATED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TENTATIVE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType::TENTATIVE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SourceIndicatorEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        SourceIndicatorEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SourceIndicatorEnumType*/

                if (is_initialized) {
                    return &SourceIndicatorEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SourceIndicatorEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                SourceIndicatorEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SourceIndicatorEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                SourceIndicatorEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                SourceIndicatorEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &SourceIndicatorEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SourceIndicatorEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SourceIndicatorEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SourceIndicatorEnumType_g_sampleAccessInfo;
                }

                SourceIndicatorEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SourceIndicatorEnumType_g_sampleAccessInfo.memberAccessInfos = 
                SourceIndicatorEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SourceIndicatorEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SourceIndicatorEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SourceIndicatorEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SourceIndicatorEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType >;

                SourceIndicatorEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SourceIndicatorEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SourceIndicatorEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &SourceIndicatorEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType>::value = ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType::ENGAGED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpecialManeuverIndicatorEnumType_g_tc_members[4]=
                {

                    {
                        (char *)"ENGAGED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType::ENGAGED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NOT_AVAILABLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType::NOT_AVAILABLE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NOT_ENGAGED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType::NOT_ENGAGED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NOT_PROVIDED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType::NOT_PROVIDED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode SpecialManeuverIndicatorEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        SpecialManeuverIndicatorEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpecialManeuverIndicatorEnumType*/

                if (is_initialized) {
                    return &SpecialManeuverIndicatorEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpecialManeuverIndicatorEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                SpecialManeuverIndicatorEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SpecialManeuverIndicatorEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                SpecialManeuverIndicatorEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                SpecialManeuverIndicatorEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &SpecialManeuverIndicatorEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo SpecialManeuverIndicatorEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpecialManeuverIndicatorEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpecialManeuverIndicatorEnumType_g_sampleAccessInfo;
                }

                SpecialManeuverIndicatorEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                SpecialManeuverIndicatorEnumType_g_sampleAccessInfo.memberAccessInfos = 
                SpecialManeuverIndicatorEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpecialManeuverIndicatorEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpecialManeuverIndicatorEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpecialManeuverIndicatorEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpecialManeuverIndicatorEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType >;

                SpecialManeuverIndicatorEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpecialManeuverIndicatorEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpecialManeuverIndicatorEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &SpecialManeuverIndicatorEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType::ALWAYS_ENABLED_OR_CLEAR;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TamperDetectionStateEnumType_g_tc_members[3]=
                {

                    {
                        (char *)"ALWAYS_ENABLED_OR_CLEAR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType::ALWAYS_ENABLED_OR_CLEAR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DISABLED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType::DISABLED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ENABLED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType::ENABLED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode TamperDetectionStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        TamperDetectionStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TamperDetectionStateEnumType*/

                if (is_initialized) {
                    return &TamperDetectionStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TamperDetectionStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                TamperDetectionStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TamperDetectionStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                TamperDetectionStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                TamperDetectionStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &TamperDetectionStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo TamperDetectionStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TamperDetectionStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TamperDetectionStateEnumType_g_sampleAccessInfo;
                }

                TamperDetectionStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                TamperDetectionStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                TamperDetectionStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TamperDetectionStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TamperDetectionStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TamperDetectionStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TamperDetectionStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType >;

                TamperDetectionStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TamperDetectionStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TamperDetectionStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TamperDetectionStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_1;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TFOMEnumType_g_tc_members[9]=
                {

                    {
                        (char *)"TFOM_1",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_1), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TFOM_2",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_2), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TFOM_3",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_3), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TFOM_4",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_4), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TFOM_5",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_5), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TFOM_6",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_6), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TFOM_7",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_7), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TFOM_8",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_8), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"TFOM_9",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType::TFOM_9), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode TFOMEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        TFOMEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TFOMEnumType*/

                if (is_initialized) {
                    return &TFOMEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TFOMEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                TFOMEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TFOMEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                TFOMEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                TFOMEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &TFOMEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo TFOMEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TFOMEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TFOMEnumType_g_sampleAccessInfo;
                }

                TFOMEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                TFOMEnumType_g_sampleAccessInfo.memberAccessInfos = 
                TFOMEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TFOMEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TFOMEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TFOMEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TFOMEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType >;

                TFOMEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TFOMEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TFOMEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TFOMEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::ADS_B_DIRECTIONAL_AIR;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TrackCategoryEnumType_g_tc_members[20]=
                {

                    {
                        (char *)"ADS_B_DIRECTIONAL_AIR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::ADS_B_DIRECTIONAL_AIR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ADS_B_DIRECTIONAL_SURFACE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::ADS_B_DIRECTIONAL_SURFACE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ADS_B_NONDIRECTIONAL_AIR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::ADS_B_NONDIRECTIONAL_AIR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ADS_B_NONDIRECTIONAL_SURFACE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::ADS_B_NONDIRECTIONAL_SURFACE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AIR",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::AIR), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ASW",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::ASW), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EMERGENCY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::EMERGENCY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EW",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::EW), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LAND_POINT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::LAND_POINT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LAND_TRACK",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::LAND_TRACK), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MP_AREA",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::MP_AREA), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MP_LINE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::MP_LINE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NA",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::NA), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NO_STATEMENT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::NO_STATEMENT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"POINTER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::POINTER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"REF_POINT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::REF_POINT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SP_AREA",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::SP_AREA), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SPACE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::SPACE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SUB_SURFACE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::SUB_SURFACE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SURFACE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType::SURFACE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode TrackCategoryEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        20, /* Number of members */
                        TrackCategoryEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TrackCategoryEnumType*/

                if (is_initialized) {
                    return &TrackCategoryEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TrackCategoryEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                TrackCategoryEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TrackCategoryEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                TrackCategoryEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                TrackCategoryEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &TrackCategoryEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo TrackCategoryEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TrackCategoryEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TrackCategoryEnumType_g_sampleAccessInfo;
                }

                TrackCategoryEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                TrackCategoryEnumType_g_sampleAccessInfo.memberAccessInfos = 
                TrackCategoryEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TrackCategoryEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TrackCategoryEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TrackCategoryEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TrackCategoryEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType >;

                TrackCategoryEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TrackCategoryEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TrackCategoryEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TrackCategoryEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::ASSUMED_FRIEND;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TrackIdentityEnumType_g_tc_members[9]=
                {

                    {
                        (char *)"ASSUMED_FRIEND",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::ASSUMED_FRIEND), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FAKER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::FAKER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FRIEND",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::FRIEND), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"HOSTILE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::HOSTILE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"JOKER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::JOKER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"NEUTRAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::NEUTRAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PENDING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::PENDING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SUSPECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::SUSPECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"UNKNOWN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType::UNKNOWN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode TrackIdentityEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        TrackIdentityEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TrackIdentityEnumType*/

                if (is_initialized) {
                    return &TrackIdentityEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TrackIdentityEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                TrackIdentityEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TrackIdentityEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                TrackIdentityEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                TrackIdentityEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &TrackIdentityEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo TrackIdentityEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TrackIdentityEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TrackIdentityEnumType_g_sampleAccessInfo;
                }

                TrackIdentityEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                TrackIdentityEnumType_g_sampleAccessInfo.memberAccessInfos = 
                TrackIdentityEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TrackIdentityEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TrackIdentityEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TrackIdentityEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TrackIdentityEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType >;

                TrackIdentityEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TrackIdentityEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TrackIdentityEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TrackIdentityEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::CANCEL;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member TriggerStateEnumType_g_tc_members[6]=
                {

                    {
                        (char *)"CANCEL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::CANCEL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PAUSE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::PAUSE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PLAN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::PLAN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"QUEUE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::QUEUE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESTART",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::RESTART), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RESUME",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType::RESUME), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode TriggerStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        TriggerStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TriggerStateEnumType*/

                if (is_initialized) {
                    return &TriggerStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                TriggerStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                TriggerStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                TriggerStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                TriggerStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                TriggerStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &TriggerStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo TriggerStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo TriggerStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &TriggerStateEnumType_g_sampleAccessInfo;
                }

                TriggerStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                TriggerStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                TriggerStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        TriggerStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        TriggerStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                TriggerStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                TriggerStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType >;

                TriggerStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &TriggerStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin TriggerStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &TriggerStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType>::value = ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType::LRC;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VehicleSpeedModeEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"LRC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType::LRC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType::MEC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MRC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType::MRC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SLOW",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType::SLOW), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"VEHICLE_SPECIFIC",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType::VEHICLE_SPECIFIC), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode VehicleSpeedModeEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        VehicleSpeedModeEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VehicleSpeedModeEnumType*/

                if (is_initialized) {
                    return &VehicleSpeedModeEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                VehicleSpeedModeEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                VehicleSpeedModeEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                VehicleSpeedModeEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                VehicleSpeedModeEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                VehicleSpeedModeEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &VehicleSpeedModeEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo VehicleSpeedModeEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VehicleSpeedModeEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VehicleSpeedModeEnumType_g_sampleAccessInfo;
                }

                VehicleSpeedModeEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                VehicleSpeedModeEnumType_g_sampleAccessInfo.memberAccessInfos = 
                VehicleSpeedModeEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VehicleSpeedModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VehicleSpeedModeEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VehicleSpeedModeEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VehicleSpeedModeEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType >;

                VehicleSpeedModeEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VehicleSpeedModeEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VehicleSpeedModeEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &VehicleSpeedModeEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType>::value = ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::AID_TO_NAVIGATION_CHANNEL_MARKER;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VisualClassificationEnumType_g_tc_members[25]=
                {

                    {
                        (char *)"AID_TO_NAVIGATION_CHANNEL_MARKER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::AID_TO_NAVIGATION_CHANNEL_MARKER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AID_TO_NAVIGATION_GENERAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::AID_TO_NAVIGATION_GENERAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AID_TO_NAVIGATION_LARGE_BUOY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::AID_TO_NAVIGATION_LARGE_BUOY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AID_TO_NAVIGATION_LIGHTHOUSE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::AID_TO_NAVIGATION_LIGHTHOUSE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"AID_TO_NAVIGATION_SMALL_BUOY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::AID_TO_NAVIGATION_SMALL_BUOY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LARGE_GENERAL_OBSTACLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::LARGE_GENERAL_OBSTACLE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LARGE_VESSEL_CARGO",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::LARGE_VESSEL_CARGO), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LARGE_VESSEL_GENERAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::LARGE_VESSEL_GENERAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LARGE_VESSEL_MILITARY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::LARGE_VESSEL_MILITARY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LARGE_VESSEL_OTHER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::LARGE_VESSEL_OTHER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LARGE_VESSEL_PASSENGER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::LARGE_VESSEL_PASSENGER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEDIUM_VESSEL_FISHING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::MEDIUM_VESSEL_FISHING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEDIUM_VESSEL_GENERAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::MEDIUM_VESSEL_GENERAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEDIUM_VESSEL_MILITARY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::MEDIUM_VESSEL_MILITARY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEDIUM_VESSEL_OTHER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::MEDIUM_VESSEL_OTHER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEDIUM_VESSEL_TUG",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::MEDIUM_VESSEL_TUG), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEDIUM_VESSEL_TUG_IN_TOW",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::MEDIUM_VESSEL_TUG_IN_TOW), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MEDIUM_VESSEL_YACHT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::MEDIUM_VESSEL_YACHT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SAILBOAT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::SAILBOAT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SMALL_GENERAL_OBSTACLE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::SMALL_GENERAL_OBSTACLE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SMALL_VESSEL_GENERAL",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::SMALL_VESSEL_GENERAL), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SMALL_VESSEL_JET_SKI",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::SMALL_VESSEL_JET_SKI), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SMALL_VESSEL_MILITARY",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::SMALL_VESSEL_MILITARY), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SMALL_VESSEL_OTHER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::SMALL_VESSEL_OTHER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"SMALL_VESSEL_POWER_BOAT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType::SMALL_VESSEL_POWER_BOAT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode VisualClassificationEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        25, /* Number of members */
                        VisualClassificationEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VisualClassificationEnumType*/

                if (is_initialized) {
                    return &VisualClassificationEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                VisualClassificationEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                VisualClassificationEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                VisualClassificationEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                VisualClassificationEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                VisualClassificationEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &VisualClassificationEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo VisualClassificationEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VisualClassificationEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VisualClassificationEnumType_g_sampleAccessInfo;
                }

                VisualClassificationEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                VisualClassificationEnumType_g_sampleAccessInfo.memberAccessInfos = 
                VisualClassificationEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VisualClassificationEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VisualClassificationEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VisualClassificationEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VisualClassificationEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType >;

                VisualClassificationEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VisualClassificationEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VisualClassificationEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &VisualClassificationEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType>::value = ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType::LEFT_TURN;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WaterTurnDirectionEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"LEFT_TURN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType::LEFT_TURN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RIGHT_TURN",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType::RIGHT_TURN), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode WaterTurnDirectionEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WaterTurnDirectionEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WaterTurnDirectionEnumType*/

                if (is_initialized) {
                    return &WaterTurnDirectionEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WaterTurnDirectionEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WaterTurnDirectionEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WaterTurnDirectionEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WaterTurnDirectionEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                WaterTurnDirectionEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &WaterTurnDirectionEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WaterTurnDirectionEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WaterTurnDirectionEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WaterTurnDirectionEnumType_g_sampleAccessInfo;
                }

                WaterTurnDirectionEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WaterTurnDirectionEnumType_g_sampleAccessInfo.memberAccessInfos = 
                WaterTurnDirectionEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WaterTurnDirectionEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WaterTurnDirectionEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WaterTurnDirectionEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WaterTurnDirectionEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType >;

                WaterTurnDirectionEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WaterTurnDirectionEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WaterTurnDirectionEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &WaterTurnDirectionEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType>::value = ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType::INSIDE;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WaterZoneKindEnumType_g_tc_members[2]=
                {

                    {
                        (char *)"INSIDE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType::INSIDE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"OUTSIDE",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType::OUTSIDE), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode WaterZoneKindEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WaterZoneKindEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WaterZoneKindEnumType*/

                if (is_initialized) {
                    return &WaterZoneKindEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WaterZoneKindEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WaterZoneKindEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WaterZoneKindEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WaterZoneKindEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                WaterZoneKindEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &WaterZoneKindEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WaterZoneKindEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WaterZoneKindEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WaterZoneKindEnumType_g_sampleAccessInfo;
                }

                WaterZoneKindEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WaterZoneKindEnumType_g_sampleAccessInfo.memberAccessInfos = 
                WaterZoneKindEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WaterZoneKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WaterZoneKindEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WaterZoneKindEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WaterZoneKindEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType >;

                WaterZoneKindEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WaterZoneKindEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WaterZoneKindEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &WaterZoneKindEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType >::get())));
        }

        const ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType>::value = ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType::ACHIEVED;
        template<>
        struct native_type_code< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WaypointStateEnumType_g_tc_members[5]=
                {

                    {
                        (char *)"ACHIEVED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType::ACHIEVED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COMPLETED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType::COMPLETED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"EXECUTING",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType::EXECUTING), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FAILED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType::FAILED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"QUEUED",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType::QUEUED), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode WaypointStateEnumType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        WaypointStateEnumType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WaypointStateEnumType*/

                if (is_initialized) {
                    return &WaypointStateEnumType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WaypointStateEnumType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                WaypointStateEnumType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WaypointStateEnumType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                WaypointStateEnumType_g_tc._data._sampleAccessInfo = sample_access_info();
                WaypointStateEnumType_g_tc._data._typePlugin = type_plugin_info();    

                return &WaypointStateEnumType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo WaypointStateEnumType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WaypointStateEnumType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WaypointStateEnumType_g_sampleAccessInfo;
                }

                WaypointStateEnumType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                WaypointStateEnumType_g_sampleAccessInfo.memberAccessInfos = 
                WaypointStateEnumType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WaypointStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WaypointStateEnumType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WaypointStateEnumType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WaypointStateEnumType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType >;

                WaypointStateEnumType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WaypointStateEnumType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WaypointStateEnumType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &WaypointStateEnumType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
    }
}  

#endif // NDDS_STANDALONE_TYPE
