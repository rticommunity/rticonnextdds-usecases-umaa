

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MaritimeEnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MaritimeEnumerationSets_1967259082_hpp
#define MaritimeEnumerationSets_1967259082_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
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
                enum class ActivationStateEnumType {
                    ACTIVE, 
                    ERROR, 
                    OFF, 
                    READY, 
                    STANDBY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ActivationStateEnumType& sample);
            } // namespace ActivationStateEnumModule  
            namespace ActivationStateTargetEnumModule {
                enum class ActivationStateTargetEnumType {
                    ACTIVE, 
                    OFF, 
                    READY, 
                    STANDBY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ActivationStateTargetEnumType& sample);
            } // namespace ActivationStateTargetEnumModule  
            namespace AnchorActionEnumModule {
                enum class AnchorActionEnumType {
                    LOWER, 
                    RAISE, 
                    STOP
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AnchorActionEnumType& sample);
            } // namespace AnchorActionEnumModule  
            namespace AnchorKindEnumModule {
                enum class AnchorKindEnumType {
                    COMMERCIAL_STOCKLESS, 
                    DANFORTH, 
                    FOUR_FLUKE, 
                    GENERAL, 
                    LIGHTWEIGHT, 
                    MARK_2_LWT, 
                    MARK_2_STOCKLESS, 
                    MUSHROOM, 
                    NAVY_TYPE_STOCK, 
                    NONMAGNETIC, 
                    STANDARD_NAVY_STOCKLESS, 
                    TWO_FLUKE_BALANCED_FLUKE, 
                    WEDGE_BLOCK_LWT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AnchorKindEnumType& sample);
            } // namespace AnchorKindEnumModule  
            namespace AnchorLocationEnumModule {
                enum class AnchorLocationEnumType {
                    BOWER, 
                    KEEL, 
                    STERN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AnchorLocationEnumType& sample);
            } // namespace AnchorLocationEnumModule  
            namespace AnchorRodeEnumModule {
                enum class AnchorRodeEnumType {
                    CHAIN, 
                    ROPE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AnchorRodeEnumType& sample);
            } // namespace AnchorRodeEnumModule  
            namespace AnchorStateEnumModule {
                enum class AnchorStateEnumType {
                    DEPLOYED, 
                    LOWERING, 
                    RAISING, 
                    STOPPED, 
                    STOWED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AnchorStateEnumType& sample);
            } // namespace AnchorStateEnumModule  
            namespace AutoOffModeEnumModule {
                enum class AutoOffModeEnumType {
                    DEACTIVATE, 
                    SHUTDOWN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AutoOffModeEnumType& sample);
            } // namespace AutoOffModeEnumModule  
            namespace BilgeStateEnumModule {
                enum class BilgeStateEnumType {
                    FAULT, 
                    OFF, 
                    ON
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BilgeStateEnumType& sample);
            } // namespace BilgeStateEnumModule  
            namespace BufferPurgeOptionEnumModule {
                enum class BufferPurgeOptionEnumType {
                    DROP_LOWEST_PRIORITY, 
                    DROP_MOST_RECENT, 
                    DROP_OLDEST
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BufferPurgeOptionEnumType& sample);
            } // namespace BufferPurgeOptionEnumModule  
            namespace COLREGSClassificationEnumModule {
                enum class COLREGSClassificationEnumType {
                    ANCHORED, 
                    CONSTRAINED_BY_DRAUGHT, 
                    FISHING, 
                    NON_VESSEL, 
                    NOT_UNDER_COMMAND, 
                    POWER_DRIVEN_UNDERWAY, 
                    PUSHING, 
                    RESTRICTED_IN_ABILITY_TO_MANUEVER, 
                    SAILING, 
                    TOWING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const COLREGSClassificationEnumType& sample);
            } // namespace COLREGSClassificationEnumModule  
            namespace CommandStatusReasonEnumModule {
                enum class CommandStatusReasonEnumType {
                    CANCELED, 
                    INTERRUPTED, 
                    OBJECTIVE_FAILED, 
                    RESOURCE_FAILED, 
                    RESOURCE_REJECTED, 
                    SERVICE_FAILED, 
                    SUCCEEDED, 
                    TIMEOUT, 
                    UPDATED, 
                    VALIDATION_FAILED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CommandStatusReasonEnumType& sample);
            } // namespace CommandStatusReasonEnumModule  
            namespace CommsChannelOperationalStatusEnumModule {
                enum class CommsChannelOperationalStatusEnumType {
                    OFF, 
                    ON, 
                    OPERATIONAL
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CommsChannelOperationalStatusEnumType& sample);
            } // namespace CommsChannelOperationalStatusEnumModule  
            namespace ConditionalOperatorEnumModule {
                enum class ConditionalOperatorEnumType {
                    GREATER_THAN, 
                    GREATER_THAN_OR_EQUAL_TO, 
                    LESS_THAN, 
                    LESS_THAN_OR_EQUAL_TO
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ConditionalOperatorEnumType& sample);
            } // namespace ConditionalOperatorEnumModule  
            namespace ContactManeuverInfluenceEnumModule {
                enum class ContactManeuverInfluenceEnumType {
                    COLLISION, 
                    COLLISION_AVOIDANCE, 
                    CROSSING_LEFT_COMPLIANT, 
                    CROSSING_LEFT_NONCOMPLIANT, 
                    CROSSING_RIGHT_COMPLIANT, 
                    CROSSING_RIGHT_NONCOMPLIANT, 
                    DYNAMIC_AVOIDANCE, 
                    GUIDE, 
                    HEAD_ON_COMPLIANT, 
                    HEAD_ON_NONCOMPLIANT, 
                    NONE, 
                    OVERTAKEN_COMPLIANT, 
                    OVERTAKEN_NONCOMPLIANT, 
                    OVERTAKING_COMPLIANT, 
                    OVERTAKING_NONCOMPLIANT, 
                    PREEMPTIVE, 
                    STATIC_AVOIDANCE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ContactManeuverInfluenceEnumType& sample);
            } // namespace ContactManeuverInfluenceEnumModule  
            namespace ContingencyBehaviorEnumModule {
                enum class ContingencyBehaviorEnumType {
                    CONTINUE, 
                    FINISH, 
                    _HOME, 
                    LOITER, 
                    NONE, 
                    VEHICLE_SPECIFIC
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ContingencyBehaviorEnumType& sample);
            } // namespace ContingencyBehaviorEnumModule  
            namespace ContinuousTestEnumModule {
                enum class ContinuousTestEnumType {
                    DISABLED_NO_TEST, 
                    FULL_TEST, 
                    NON_INTRUSIVE_TESTS_ONLY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ContinuousTestEnumType& sample);
            } // namespace ContinuousTestEnumModule  
            namespace CoordinationSituationalSignalEnumModule {
                enum class CoordinationSituationalSignalEnumType {
                    AGREE_TO_BE_OVERTAKEN, 
                    ALTERING_COURSE_TO_PORT, 
                    ALTERING_COURSE_TO_STARBOARD, 
                    BLIND_BEND_SIGNAL, 
                    DANGER_SIGNAL, 
                    IN_DISTRESS_NEED_ASSISTANCE, 
                    NONE, 
                    OPERATING_ASTERN_PROPULSION, 
                    TO_OVERTAKE_LEAVE_VESSEL_TO_PORT, 
                    TO_OVERTAKE_LEAVE_VESSEL_TO_STARBOARD, 
                    VESSEL_LEAVING_DOCK, 
                    VISIBILITY_RESTRICTED_VEHICLE_STOPPED, 
                    VISIBILITY_RESTRICTED_VEHICLE_UNDERWAY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CoordinationSituationalSignalEnumType& sample);
            } // namespace CoordinationSituationalSignalEnumModule  
            namespace DirectionModeEnumModule {
                enum class DirectionModeEnumType {
                    COURSE, 
                    HEADING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DirectionModeEnumType& sample);
            } // namespace DirectionModeEnumModule  
            namespace DomainEnumModule {
                enum class DomainEnumType {
                    AIR, 
                    GROUND, 
                    SURFACE, 
                    UNDERSEA
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DomainEnumType& sample);
            } // namespace DomainEnumModule  
            namespace EmitterStateEnumModule {
                enum class EmitterStateEnumType {
                    ALLOWED, 
                    SECURED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const EmitterStateEnumType& sample);
            } // namespace EmitterStateEnumModule  
            namespace EngineKindEnumModule {
                enum class EngineKindEnumType {
                    DIESEL, 
                    GAS
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const EngineKindEnumType& sample);
            } // namespace EngineKindEnumModule  
            namespace ErrorCodeEnumModule {
                enum class ErrorCodeEnumType {
                    ACTUATOR, 
                    FILESYS, 
                    NONE, 
                    POWER, 
                    PROCESSOR, 
                    RAM, 
                    ROM, 
                    SENSOR, 
                    SOFTWARE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ErrorCodeEnumType& sample);
            } // namespace ErrorCodeEnumModule  
            namespace ErrorConditionEnumModule {
                enum class ErrorConditionEnumType {
                    ERROR, 
                    FAIL, 
                    INFO, 
                    NONE, 
                    WARN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ErrorConditionEnumType& sample);
            } // namespace ErrorConditionEnumModule  
            namespace FLSBeamwidthEnumModule {
                enum class FLSBeamwidthEnumType {
                    MEDIUM, 
                    NARROW, 
                    WIDE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const FLSBeamwidthEnumType& sample);
            } // namespace FLSBeamwidthEnumModule  
            namespace FLSConfigModeEnumModule {
                enum class FLSConfigModeEnumType {
                    DEV_TEST, 
                    DIVE, 
                    PASSIVE_ONLY, 
                    SEARCH_BOTTOM, 
                    SEARCH_VOLUME, 
                    SURFACE, 
                    TEST, 
                    TRANSIT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const FLSConfigModeEnumType& sample);
            } // namespace FLSConfigModeEnumModule  
            namespace FLSWaveformLengthEnumModule {
                enum class FLSWaveformLengthEnumType {
                    _LONG, 
                    MEDIUM, 
                    _SHORT, 
                    XSHORT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const FLSWaveformLengthEnumType& sample);
            } // namespace FLSWaveformLengthEnumModule  
            namespace GPSConstellationEnumModule {
                enum class GPSConstellationEnumType {
                    BEIDOU, 
                    GALILEO, 
                    GLONASS, 
                    GPS, 
                    IRNSS, 
                    QZSS, 
                    SBAS, 
                    UNKNOWN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GPSConstellationEnumType& sample);
            } // namespace GPSConstellationEnumModule  
            namespace HandoverResultEnumModule {
                enum class HandoverResultEnumType {
                    DEFERRED, 
                    DENIED, 
                    GRANTED, 
                    INSUFFICIENT_AUTHORITY, 
                    NOT_AVAILABLE, 
                    TIMEOUT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HandoverResultEnumType& sample);
            } // namespace HandoverResultEnumModule  
            namespace HeadingSectorKindEnumModule {
                enum class HeadingSectorKindEnumType {
                    INSIDE, 
                    OUTSIDE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HeadingSectorKindEnumType& sample);
            } // namespace HeadingSectorKindEnumModule  
            namespace HoverKindEnumModule {
                enum class HoverKindEnumType {
                    LAT_LON_PRIORITY, 
                    Z_PRIORITY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HoverKindEnumType& sample);
            } // namespace HoverKindEnumModule  
            namespace IgnitionControlEnumModule {
                enum class IgnitionControlEnumType {
                    OFF, 
                    RUN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const IgnitionControlEnumType& sample);
            } // namespace IgnitionControlEnumModule  
            namespace IgnitionStateEnumModule {
                enum class IgnitionStateEnumType {
                    OFF, 
                    RUN, 
                    START
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const IgnitionStateEnumType& sample);
            } // namespace IgnitionStateEnumModule  
            namespace IlluminatorStateEnumModule {
                enum class IlluminatorStateEnumType {
                    FLASHING, 
                    OFF, 
                    ON
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const IlluminatorStateEnumType& sample);
            } // namespace IlluminatorStateEnumModule  
            namespace ImageFormatEnumModule {
                enum class ImageFormatEnumType {
                    ARW, 
                    BMP, 
                    CR2_RAW, 
                    DNG, 
                    GEOJPEG, 
                    GEOTIFF, 
                    GIF, 
                    GPR, 
                    JPEG, 
                    NEF, 
                    PGM, 
                    PNG, 
                    PNM, 
                    PPM, 
                    TIFF
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ImageFormatEnumType& sample);
            } // namespace ImageFormatEnumModule  
            namespace InertialSensorCmdEnumModule {
                enum class InertialSensorCmdEnumType {
                    BEST_ALIGN, 
                    GPS_ALIGN, 
                    INIT, 
                    SNAP_ALIGN, 
                    STATIONARY_ALIGN, 
                    TRANSFER_ALIGN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const InertialSensorCmdEnumType& sample);
            } // namespace InertialSensorCmdEnumModule  
            namespace InertialSensorOpStatusEnumModule {
                enum class InertialSensorOpStatusEnumType {
                    BEST_ALIGNMENT_FAILURE, 
                    COARSE_BEST_ALIGNMENT, 
                    COARSE_GPS_ALIGNMENT, 
                    COARSE_STATIONARY_ALIGNMENT, 
                    COARSE_TRANSFER_ALIGNMENT, 
                    FINE_BEST_ALIGNMENT_COMPLETE, 
                    FINE_BEST_ALIGNMENT_STARTED, 
                    FINE_GPS_ALIGNMENT_COMPLETE, 
                    FINE_GPS_ALIGNMENT_STARTED, 
                    FINE_STATIONARY_ALIGNMENT_COMPLETE, 
                    FINE_STATIONARY_ALIGNMENT_STARTED, 
                    FINE_TRANSFER_ALIGNMENT_COMPLETE, 
                    FINE_TRANSFER_ALIGNMENT_STARTED, 
                    GPS_ALIGNMENT_FAILURE, 
                    INERTIAL_SENSOR_FAILURE, 
                    INIT, 
                    SNAP_ALIGNMENT_COMPLETE, 
                    SNAP_ALIGNMENT_FAILURE, 
                    STATIONARY_ALIGNMENT_FAILURE, 
                    TRANSFER_ALIGNMENT_FAILURE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const InertialSensorOpStatusEnumType& sample);
            } // namespace InertialSensorOpStatusEnumModule  
            namespace InitiatedTestEnumModule {
                enum class InitiatedTestEnumType {
                    DESTRUCTIVE, 
                    NON_DESTRUCTIVE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const InitiatedTestEnumType& sample);
            } // namespace InitiatedTestEnumModule  
            namespace InterferenceEnumModule {
                enum class InterferenceEnumType {
                    ACOUSTIC, 
                    NONACOUSTIC, 
                    UNKNOWN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const InterferenceEnumType& sample);
            } // namespace InterferenceEnumModule  
            namespace LandmarkEnumModule {
                enum class LandmarkEnumType {
                    CLUSTER_OBJECT, 
                    LARGE_OBJECT, 
                    MARKED, 
                    TERRAIN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LandmarkEnumType& sample);
            } // namespace LandmarkEnumModule  
            namespace LogLevelEnumModule {
                enum class LogLevelEnumType {
                    ERROR, 
                    INFORMATION, 
                    WARNING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LogLevelEnumType& sample);
            } // namespace LogLevelEnumModule  
            namespace MastActionEnumModule {
                enum class MastActionEnumType {
                    LOWER, 
                    RAISE, 
                    STOP
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MastActionEnumType& sample);
            } // namespace MastActionEnumModule  
            namespace MastStateEnumModule {
                enum class MastStateEnumType {
                    DOWN, 
                    MOVING_DOWN, 
                    MOVING_UP, 
                    STOPPED, 
                    UP
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MastStateEnumType& sample);
            } // namespace MastStateEnumModule  
            namespace CommandStatusEnumModule {
                enum class CommandStatusEnumType {
                    CANCELED, 
                    COMMANDED, 
                    COMPLETED, 
                    EXECUTING, 
                    FAILED, 
                    ISSUED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CommandStatusEnumType& sample);
            } // namespace CommandStatusEnumModule  
            namespace TaskControlEnumModule {
                enum class TaskControlEnumType {
                    CANCEL, 
                    EXECUTION_APPROVED, 
                    EXECUTION_NOT_APPROVED, 
                    PAUSE, 
                    PLAN, 
                    QUEUE, 
                    RESTART, 
                    RESUME
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskControlEnumType& sample);
            } // namespace TaskControlEnumModule  
            namespace TaskStateEnumModule {
                enum class TaskStateEnumType {
                    AWAITING_EXECUTION_APPROVAL, 
                    CANCELED, 
                    CANCELING, 
                    COMPLETED, 
                    EXECUTING, 
                    EXECUTION_APPROVED, 
                    FAILED, 
                    NOT_PLANNED, 
                    NOT_QUEUED, 
                    PAUSED, 
                    PAUSING, 
                    PLANNED, 
                    PLANNING, 
                    QUEUED, 
                    QUEUING, 
                    RESTARTING, 
                    RESUMING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskStateEnumType& sample);
            } // namespace TaskStateEnumModule  
            namespace NavigationSolutionEnumModule {
                enum class NavigationSolutionEnumType {
                    ESTIMATED, 
                    GROUND_TRUTH, 
                    MEASURED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const NavigationSolutionEnumType& sample);
            } // namespace NavigationSolutionEnumModule  
            namespace ObjectiveExecutorControlEnumModule {
                enum class ObjectiveExecutorControlEnumType {
                    EXECUTE, 
                    PAUSE, 
                    RESUME
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ObjectiveExecutorControlEnumType& sample);
            } // namespace ObjectiveExecutorControlEnumModule  
            namespace ObjectiveExecutorStateEnumModule {
                enum class ObjectiveExecutorStateEnumType {
                    CANCELED, 
                    CANCELING, 
                    COMPLETED, 
                    EXECUTING, 
                    FAILED, 
                    MODIFYING, 
                    PAUSED, 
                    PAUSING, 
                    QUEUED, 
                    RESUMING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ObjectiveExecutorStateEnumType& sample);
            } // namespace ObjectiveExecutorStateEnumModule  
            namespace ObjectiveExecutorStateReasonEnumModule {
                enum class ObjectiveExecutorStateReasonEnumType {
                    BUS_MSG_DISPOSE, 
                    BUS_MSG_UPDATE, 
                    CANNOT_PERFORM_UNDER_CONSTRAINTS, 
                    COMMAND_VALIDATION_FAILED, 
                    COMMANDED, 
                    INTERNAL_FAILURE, 
                    LOWER_SERVICE_FAILED, 
                    LOWER_SERVICE_INTERRUPTED, 
                    LOWER_SERVICE_REJECTED, 
                    LOWER_SERVICE_TIMEOUT, 
                    OBJECTIVE_REPLACED, 
                    SUCCEEDED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ObjectiveExecutorStateReasonEnumType& sample);
            } // namespace ObjectiveExecutorStateReasonEnumModule  
            namespace OperationalModeControlEnumModule {
                enum class OperationalModeControlEnumType {
                    AUTONOMOUS, 
                    REMOTE, 
                    STANDBY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const OperationalModeControlEnumType& sample);
            } // namespace OperationalModeControlEnumModule  
            namespace OperationalModeEnumModule {
                enum class OperationalModeEnumType {
                    AUTONOMOUS, 
                    MANUAL, 
                    REMOTE, 
                    STANDBY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const OperationalModeEnumType& sample);
            } // namespace OperationalModeEnumModule  
            namespace PassiveContactFeatureEnumModule {
                enum class PassiveContactFeatureEnumType {
                    BROADBAND, 
                    NARROWBAND, 
                    TRANSIENT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PassiveContactFeatureEnumType& sample);
            } // namespace PassiveContactFeatureEnumModule  
            namespace PathWayEnumModule {
                enum class PathWayEnumType {
                    HISTORICAL_GLOBAL, 
                    HISTORICAL_LOCAL, 
                    PLANNED_GLOBAL, 
                    PLANNED_LOCAL
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PathWayEnumType& sample);
            } // namespace PathWayEnumModule  
            namespace PowerOnTestEnumModule {
                enum class PowerOnTestEnumType {
                    DISABLED_NO_TEST, 
                    FULL_TEST, 
                    QUICK_TEST
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PowerOnTestEnumType& sample);
            } // namespace PowerOnTestEnumModule  
            namespace PowerPlantStateEnumModule {
                enum class PowerPlantStateEnumType {
                    FAULT, 
                    OFF, 
                    ON
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PowerPlantStateEnumType& sample);
            } // namespace PowerPlantStateEnumModule  
            namespace PowerStateEnumModule {
                enum class PowerStateEnumType {
                    EMERGENCY_POWER, 
                    POWER_OFF, 
                    POWER_ON, 
                    POWER_STANDBY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PowerStateEnumType& sample);
            } // namespace PowerStateEnumModule  
            namespace ProcessingUnitEnumModule {
                enum class ProcessingUnitEnumType {
                    CPU, 
                    DSP, 
                    FPGA, 
                    GPU, 
                    NPU, 
                    PhPU, 
                    PPU, 
                    QPU, 
                    SPU, 
                    TPU, 
                    VPU
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ProcessingUnitEnumType& sample);
            } // namespace ProcessingUnitEnumModule  
            namespace PumpStateEnumModule {
                enum class PumpStateEnumType {
                    FAULT, 
                    OFF, 
                    ON_FORWARD, 
                    ON_REVERSE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PumpStateEnumType& sample);
            } // namespace PumpStateEnumModule  
            namespace ReferenceFrameOriginEnumModule {
                enum class ReferenceFrameOriginEnumType {
                    BOW_WATERLINE_INTERSECTION, 
                    CENTER_OF_BUOYANCY, 
                    CENTER_OF_GRAVITY, 
                    INS_LOCATION, 
                    KEEL_TRANSOM_INTERSECTION
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ReferenceFrameOriginEnumType& sample);
            } // namespace ReferenceFrameOriginEnumModule  
            namespace SourceIndicatorEnumModule {
                enum class SourceIndicatorEnumType {
                    ACTUAL, 
                    GROUND_TRUTH, 
                    SIMULATED, 
                    TENTATIVE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SourceIndicatorEnumType& sample);
            } // namespace SourceIndicatorEnumModule  
            namespace SpecialManeuverIndicatorEnumModule {
                enum class SpecialManeuverIndicatorEnumType {
                    ENGAGED, 
                    NOT_AVAILABLE, 
                    NOT_ENGAGED, 
                    NOT_PROVIDED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SpecialManeuverIndicatorEnumType& sample);
            } // namespace SpecialManeuverIndicatorEnumModule  
            namespace TamperDetectionStateEnumModule {
                enum class TamperDetectionStateEnumType {
                    ALWAYS_ENABLED_OR_CLEAR, 
                    DISABLED, 
                    ENABLED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TamperDetectionStateEnumType& sample);
            } // namespace TamperDetectionStateEnumModule  
            namespace TFOMEnumModule {
                enum class TFOMEnumType {
                    TFOM_1, 
                    TFOM_2, 
                    TFOM_3, 
                    TFOM_4, 
                    TFOM_5, 
                    TFOM_6, 
                    TFOM_7, 
                    TFOM_8, 
                    TFOM_9
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TFOMEnumType& sample);
            } // namespace TFOMEnumModule  
            namespace TrackCategoryEnumModule {
                enum class TrackCategoryEnumType {
                    ADS_B_DIRECTIONAL_AIR, 
                    ADS_B_DIRECTIONAL_SURFACE, 
                    ADS_B_NONDIRECTIONAL_AIR, 
                    ADS_B_NONDIRECTIONAL_SURFACE, 
                    AIR, 
                    ASW, 
                    EMERGENCY, 
                    EW, 
                    LAND_POINT, 
                    LAND_TRACK, 
                    MP_AREA, 
                    MP_LINE, 
                    NA, 
                    NO_STATEMENT, 
                    POINTER, 
                    REF_POINT, 
                    SP_AREA, 
                    SPACE, 
                    SUB_SURFACE, 
                    SURFACE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TrackCategoryEnumType& sample);
            } // namespace TrackCategoryEnumModule  
            namespace TrackIdentityEnumModule {
                enum class TrackIdentityEnumType {
                    ASSUMED_FRIEND, 
                    FAKER, 
                    FRIEND, 
                    HOSTILE, 
                    JOKER, 
                    NEUTRAL, 
                    PENDING, 
                    SUSPECT, 
                    UNKNOWN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TrackIdentityEnumType& sample);
            } // namespace TrackIdentityEnumModule  
            namespace TriggerStateEnumModule {
                enum class TriggerStateEnumType {
                    CANCEL, 
                    PAUSE, 
                    PLAN, 
                    QUEUE, 
                    RESTART, 
                    RESUME
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TriggerStateEnumType& sample);
            } // namespace TriggerStateEnumModule  
            namespace VehicleSpeedModeEnumModule {
                enum class VehicleSpeedModeEnumType {
                    LRC, 
                    MEC, 
                    MRC, 
                    SLOW, 
                    VEHICLE_SPECIFIC
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const VehicleSpeedModeEnumType& sample);
            } // namespace VehicleSpeedModeEnumModule  
            namespace VisualClassificationEnumModule {
                enum class VisualClassificationEnumType {
                    AID_TO_NAVIGATION_CHANNEL_MARKER, 
                    AID_TO_NAVIGATION_GENERAL, 
                    AID_TO_NAVIGATION_LARGE_BUOY, 
                    AID_TO_NAVIGATION_LIGHTHOUSE, 
                    AID_TO_NAVIGATION_SMALL_BUOY, 
                    LARGE_GENERAL_OBSTACLE, 
                    LARGE_VESSEL_CARGO, 
                    LARGE_VESSEL_GENERAL, 
                    LARGE_VESSEL_MILITARY, 
                    LARGE_VESSEL_OTHER, 
                    LARGE_VESSEL_PASSENGER, 
                    MEDIUM_VESSEL_FISHING, 
                    MEDIUM_VESSEL_GENERAL, 
                    MEDIUM_VESSEL_MILITARY, 
                    MEDIUM_VESSEL_OTHER, 
                    MEDIUM_VESSEL_TUG, 
                    MEDIUM_VESSEL_TUG_IN_TOW, 
                    MEDIUM_VESSEL_YACHT, 
                    SAILBOAT, 
                    SMALL_GENERAL_OBSTACLE, 
                    SMALL_VESSEL_GENERAL, 
                    SMALL_VESSEL_JET_SKI, 
                    SMALL_VESSEL_MILITARY, 
                    SMALL_VESSEL_OTHER, 
                    SMALL_VESSEL_POWER_BOAT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const VisualClassificationEnumType& sample);
            } // namespace VisualClassificationEnumModule  
            namespace WaterTurnDirectionEnumModule {
                enum class WaterTurnDirectionEnumType {
                    LEFT_TURN, 
                    RIGHT_TURN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WaterTurnDirectionEnumType& sample);
            } // namespace WaterTurnDirectionEnumModule  
            namespace WaterZoneKindEnumModule {
                enum class WaterZoneKindEnumType {
                    INSIDE, 
                    OUTSIDE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WaterZoneKindEnumType& sample);
            } // namespace WaterZoneKindEnumModule  
            namespace WaypointStateEnumModule {
                enum class WaypointStateEnumType {
                    ACHIEVED, 
                    COMPLETED, 
                    EXECUTING, 
                    FAILED, 
                    QUEUED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WaypointStateEnumType& sample);
            } // namespace WaypointStateEnumModule  
        } // namespace MaritimeEnumeration  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType value;
        };
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ActivationStateEnumModule::ActivationStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ActivationStateTargetEnumModule::ActivationStateTargetEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumModule::AnchorActionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumModule::AnchorKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumModule::AnchorLocationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnchorRodeEnumModule::AnchorRodeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumModule::AnchorStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AutoOffModeEnumModule::AutoOffModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumModule::BilgeStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::BufferPurgeOptionEnumModule::BufferPurgeOptionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumModule::COLREGSClassificationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumModule::CommandStatusReasonEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CommsChannelOperationalStatusEnumModule::CommsChannelOperationalStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ConditionalOperatorEnumModule::ConditionalOperatorEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumModule::ContactManeuverInfluenceEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumModule::ContingencyBehaviorEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ContinuousTestEnumModule::ContinuousTestEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CoordinationSituationalSignalEnumModule::CoordinationSituationalSignalEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::DirectionModeEnumModule::DirectionModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::DomainEnumModule::DomainEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::EmitterStateEnumModule::EmitterStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumModule::EngineKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumModule::ErrorCodeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumModule::ErrorConditionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::FLSConfigModeEnumModule::FLSConfigModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumModule::HandoverResultEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumModule::HoverKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::IgnitionControlEnumModule::IgnitionControlEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumModule::IgnitionStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::IlluminatorStateEnumModule::IlluminatorStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumModule::ImageFormatEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::InertialSensorCmdEnumModule::InertialSensorCmdEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumModule::InertialSensorOpStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::InitiatedTestEnumModule::InitiatedTestEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::InterferenceEnumModule::InterferenceEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::LandmarkEnumModule::LandmarkEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::LogLevelEnumModule::LogLevelEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::MastActionEnumModule::MastActionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::MastStateEnumModule::MastStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumModule::TaskStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorControlEnumModule::ObjectiveExecutorControlEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateEnumModule::ObjectiveExecutorStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ObjectiveExecutorStateReasonEnumModule::ObjectiveExecutorStateReasonEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::OperationalModeControlEnumModule::OperationalModeControlEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::OperationalModeEnumModule::OperationalModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PowerOnTestEnumModule::PowerOnTestEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumModule::PowerPlantStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PowerStateEnumModule::PowerStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ProcessingUnitEnumModule::ProcessingUnitEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumModule::PumpStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ReferenceFrameOriginEnumModule::ReferenceFrameOriginEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumModule::SourceIndicatorEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::SpecialManeuverIndicatorEnumModule::SpecialManeuverIndicatorEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumModule::TamperDetectionStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TrackCategoryEnumModule::TrackCategoryEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TriggerStateEnumModule::TriggerStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumModule::VisualClassificationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumModule::WaterTurnDirectionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::WaterZoneKindEnumModule::WaterZoneKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::WaypointStateEnumModule::WaypointStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // MaritimeEnumerationSets_1967259082_hpp

