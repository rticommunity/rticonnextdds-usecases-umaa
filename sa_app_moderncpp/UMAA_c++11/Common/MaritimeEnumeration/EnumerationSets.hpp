

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EnumerationSets.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EnumerationSets_1089266797_hpp
#define EnumerationSets_1089266797_hpp

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

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "BasicTypes/Quaternion.hpp"
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
            namespace AnalogSensorErrorCodeEnumType {
                enum class AnalogSensorErrorCodeEnumType {
                    INVALID_FORMAT, 
                    UNKNOWN_ERROR_FAULT, 
                    UNKNOWN_SENSOR_ID
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AnalogSensorErrorCodeEnumType& sample);
            } // namespace AnalogSensorErrorCodeEnumType  
            namespace AnchorActionEnumType {
                enum class AnchorActionEnumType {
                    LOWER, 
                    RAISE, 
                    STOP
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AnchorActionEnumType& sample);
            } // namespace AnchorActionEnumType  
            namespace AnchorKindEnumType {
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
            } // namespace AnchorKindEnumType  
            namespace AnchorLocationEnumType {
                enum class AnchorLocationEnumType {
                    BOWER, 
                    KEEL, 
                    STERN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AnchorLocationEnumType& sample);
            } // namespace AnchorLocationEnumType  
            namespace AnchorStateEnumType {
                enum class AnchorStateEnumType {
                    DEPLOYED, 
                    LOWERING, 
                    STOPPED, 
                    RAISING, 
                    STOWED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AnchorStateEnumType& sample);
            } // namespace AnchorStateEnumType  
            namespace AudioEncodingQualityEnumType {
                enum class AudioEncodingQualityEnumType {
                    AVERAGE, 
                    BEST, 
                    BETTER, 
                    GOOD, 
                    LESS, 
                    POOR, 
                    WORST
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const AudioEncodingQualityEnumType& sample);
            } // namespace AudioEncodingQualityEnumType  
            namespace BearingAngleEnumType {
                enum class BearingAngleEnumType {
                    OWNSHIP, 
                    NORTH
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BearingAngleEnumType& sample);
            } // namespace BearingAngleEnumType  
            namespace BilgeControlEnumType {
                enum class BilgeControlEnumType {
                    AUTO, 
                    OFF, 
                    ON
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BilgeControlEnumType& sample);
            } // namespace BilgeControlEnumType  
            namespace BilgeStateEnumType {
                enum class BilgeStateEnumType {
                    FAULT, 
                    OFF, 
                    ON
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BilgeStateEnumType& sample);
            } // namespace BilgeStateEnumType  
            namespace BitDepthEnumType {
                enum class BitDepthEnumType {
                    TEN_BITS, 
                    TWELVE_BITS, 
                    FOURTEEN_BITS, 
                    SIXTEEN_BITS, 
                    TWENTY_BITS, 
                    TWENTY_FOUR_BITS, 
                    THIRTY_TWO_BITS, 
                    FOURTY_BITS, 
                    FOURTY_EIGHT_BITS, 
                    FIFTY_SIX_BITS, 
                    SIXTY_FOUR_BITS, 
                    EIGHT_BITS
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BitDepthEnumType& sample);
            } // namespace BitDepthEnumType  
            namespace BlastConditionEnumType {
                enum class BlastConditionEnumType {
                    BLASTING, 
                    RESTING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BlastConditionEnumType& sample);
            } // namespace BlastConditionEnumType  
            namespace BlastKindEnumType {
                enum class BlastKindEnumType {
                    LONG_BLAST, 
                    SHORT_BLAST
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BlastKindEnumType& sample);
            } // namespace BlastKindEnumType  
            namespace CollisionAvoidStateEnumType {
                enum class CollisionAvoidStateEnumType {
                    DEVIATE_FROM_PATH, 
                    DO_NOTHING, 
                    STOP_ON_PATH
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CollisionAvoidStateEnumType& sample);
            } // namespace CollisionAvoidStateEnumType  
            namespace CollisionAvoidStatusEnumType {
                enum class CollisionAvoidStatusEnumType {
                    ACTIVE_AVOID_OBSTACLE, 
                    ACTIVE_STOP_ON_OBSTACLE, 
                    DISABLED, 
                    ENABLED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CollisionAvoidStatusEnumType& sample);
            } // namespace CollisionAvoidStatusEnumType  
            namespace COLREGSClassificationEnumType {
                enum class COLREGSClassificationEnumType {
                    POWER_DRIVEN_UNDERWAY, 
                    SAILING, 
                    FISHING, 
                    NOT_UNDER_COMMAND, 
                    RESTRICTED_IN_ABILITY_TO_MANUEVER, 
                    ANCHORED, 
                    CONSTRAINED_BY_DRAUGHT, 
                    PUSHING, 
                    TOWING, 
                    NON_VESSEL
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const COLREGSClassificationEnumType& sample);
            } // namespace COLREGSClassificationEnumType  
            namespace CommandStatusReasonEnumType {
                enum class CommandStatusReasonEnumType {
                    CANCELED, 
                    VALIDATION_FAILED, 
                    OBJECTIVE_FAILED, 
                    SERVICE_FAILED, 
                    RESOURCE_FAILED, 
                    RESOURCE_REJECTED, 
                    INTERRUPTED, 
                    TIMEOUT, 
                    SUCCEEDED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CommandStatusReasonEnumType& sample);
            } // namespace CommandStatusReasonEnumType  
            namespace ContactManeuverInfluenceEnumType {
                enum class ContactManeuverInfluenceEnumType {
                    BEING_OVERTAKEN_COMPLIANT, 
                    BEING_OVERTAKEN_NONCOMPLIANT, 
                    CROSSING_LEFT_COMPLIANT, 
                    CROSSING_LEFT_NONCOMPLIANT, 
                    CROSSING_RIGHT_COMPLIANT, 
                    CROSSING_RIGHT_NONCOMPLIANT, 
                    HEAD_ON_COMPLIANT, 
                    HEAD_ON_NONCOMPLIANT, 
                    OVERTAKING_COMPLIANT, 
                    OVERTAKING_NONCOMPLIANT, 
                    GUIDE, 
                    IN_EXTREMIS, 
                    COLLISION_AVOIDANCE, 
                    PREEMPTIVE, 
                    OBSTACLE_AVOIDANCE, 
                    NONE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ContactManeuverInfluenceEnumType& sample);
            } // namespace ContactManeuverInfluenceEnumType  
            namespace ContingencyBehaviorEnumType {
                enum class ContingencyBehaviorEnumType {
                    CONTINUE, 
                    FINISH, 
                    LOITER, 
                    NONE, 
                    VEHICLE_SPECIFIC, 
                    _HOME
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ContingencyBehaviorEnumType& sample);
            } // namespace ContingencyBehaviorEnumType  
            namespace CoordinateSystemEnumType {
                enum class CoordinateSystemEnumType {
                    SENSOR_COORDINATE_SYSTEM, 
                    VEHICLE_COORDINATE_SYSTEM
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CoordinateSystemEnumType& sample);
            } // namespace CoordinateSystemEnumType  
            namespace CoreStateEnumType {
                enum class CoreStateEnumType {
                    EMERGENCY, 
                    FAILURE, 
                    INITIAL, 
                    READY, 
                    RESET, 
                    RESUME, 
                    SHUTDOWN, 
                    STANDBY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CoreStateEnumType& sample);
            } // namespace CoreStateEnumType  
            namespace DigitalAudioFormatEnumType {
                enum class DigitalAudioFormatEnumType {
                    AAC_MPEG2, 
                    AAC_MPEG4, 
                    AIFF, 
                    ALAC, 
                    DOLBY_DIGITAL, 
                    DTS, 
                    FLAC, 
                    LPCM_PCM, 
                    MP2, 
                    MP3, 
                    REAL_AUDIO, 
                    SPEEX, 
                    TRUE_AUDIO, 
                    ULAW, 
                    VORBIS, 
                    WAV, 
                    WMA, 
                    WMA9_LOSS_LESS
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DigitalAudioFormatEnumType& sample);
            } // namespace DigitalAudioFormatEnumType  
            namespace DigitalSensorErrorCodeEnumType {
                enum class DigitalSensorErrorCodeEnumType {
                    INVALID_FORMAT, 
                    INVALID_FRAME_SIZE, 
                    INVALID_MAX_BIT_RATE, 
                    INVALID_MAX_FRAME_RATE, 
                    INVALID_MIN_BIT_RATE, 
                    INVALID_MIN_FRAME_RATE, 
                    MULTIPLE_INVALID_PARAMETERS, 
                    UNKNOWN_ERROR_FAULT, 
                    UNKNOWN_SENSOR_ID
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DigitalSensorErrorCodeEnumType& sample);
            } // namespace DigitalSensorErrorCodeEnumType  
            namespace DomainEnumType {
                enum class DomainEnumType {
                    AIR, 
                    GROUND, 
                    SURFACE, 
                    UNDERSEA
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DomainEnumType& sample);
            } // namespace DomainEnumType  
            namespace EngineKindEnumType {
                enum class EngineKindEnumType {
                    DIESEL, 
                    GAS
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const EngineKindEnumType& sample);
            } // namespace EngineKindEnumType  
            namespace ErrorCodeEnumType {
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
            } // namespace ErrorCodeEnumType  
            namespace ErrorConditionEnumType {
                enum class ErrorConditionEnumType {
                    INFO, 
                    WARN, 
                    ERROR, 
                    FAIL, 
                    NONE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ErrorConditionEnumType& sample);
            } // namespace ErrorConditionEnumType  
            namespace ExposureModeEnumType {
                enum class ExposureModeEnumType {
                    AUTO_DEFAULT, 
                    MANUAL, 
                    APETURE_PRIORITY, 
                    SHUTTER_PRIORITY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ExposureModeEnumType& sample);
            } // namespace ExposureModeEnumType  
            namespace FrameSizeEnumType {
                enum class FrameSizeEnumType {
                    CGA_320x200, 
                    CIF_1408x1152, 
                    CIF_352x288, 
                    CIF_704x576, 
                    EGA_640x350, 
                    HD1080_1920x1080, 
                    HD480_852x480, 
                    HD720_1280x720, 
                    HSXGA_5120x4096, 
                    QCIF_176x144, 
                    QQVGA_160x120, 
                    QSXGA_2560x2048, 
                    QVGA_320x240, 
                    QXGA_2048x1536, 
                    SQCIF_128x96, 
                    SVGA_800x600, 
                    SXGA_1280x1024, 
                    UXGA_1600x1200, 
                    VGA_640x480, 
                    WHSXGA_6400x4096, 
                    WHUXGA_7680x4800, 
                    WOXGA_2560x1600, 
                    WQSXGA_3200x2048, 
                    WQUXGA_3840x2400, 
                    WSXGA_1600x1024, 
                    WUXGA_1920x1200, 
                    WVGA_852x480, 
                    WXGA_1366x768, 
                    XGA_1024x768
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const FrameSizeEnumType& sample);
            } // namespace FrameSizeEnumType  
            namespace GPSConstellationEnumType {
                enum class GPSConstellationEnumType {
                    UNKNOWN, 
                    BEIDOU, 
                    GALILEO, 
                    GLONASS, 
                    GPS, 
                    IRNSS, 
                    QZSS, 
                    SBAS
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GPSConstellationEnumType& sample);
            } // namespace GPSConstellationEnumType  
            namespace GPSFixEnumType {
                enum class GPSFixEnumType {
                    INITIATING, 
                    PERFORMING, 
                    STABLE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GPSFixEnumType& sample);
            } // namespace GPSFixEnumType  
            namespace GPSNavigationSolutionEnumType {
                enum class GPSNavigationSolutionEnumType {
                    GPS_1, 
                    GPS_2, 
                    GPS_2D, 
                    GPS_3, 
                    GPS_3D, 
                    GPS_4, 
                    GPS_DEAD_RECK, 
                    NO_NAV
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GPSNavigationSolutionEnumType& sample);
            } // namespace GPSNavigationSolutionEnumType  
            namespace GuardedTeleoperationStatusEnumType {
                enum class GuardedTeleoperationStatusEnumType {
                    DISABLED, 
                    ENABLED, 
                    ACTIVE_AVOID_OBSTACLE, 
                    PITCHOVER_LIMIT, 
                    ROLLOVER_LIMIT, 
                    ACTIVE_STOP_ON_OBSTACLE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GuardedTeleoperationStatusEnumType& sample);
            } // namespace GuardedTeleoperationStatusEnumType  
            namespace H264EncodingEnumType {
                enum class H264EncodingEnumType {
                    BASELINE, 
                    CAVLC444, 
                    CONSTRAINED_BASELINE, 
                    CONSTRAINED_HIGH, 
                    EXTENDED, 
                    HIGH, 
                    HIGH10, 
                    HIGH10_INTRA, 
                    HIGH422, 
                    HIGH422_INTRA, 
                    HIGH444_INTRA, 
                    HIGH444_PREDICTIVE, 
                    MAIN, 
                    MULTIVIEW_HIGH, 
                    PROGRESSIVE_HIGH, 
                    SCALABLE_BASELINE, 
                    SCALABLE_CONSTRAINED_BASELINE, 
                    SCALABLE_CONSTRAINED_HIGH, 
                    SCALABLE_HIGH, 
                    SCALABLE_HIGH_INTRA, 
                    STEREO_HIGH
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const H264EncodingEnumType& sample);
            } // namespace H264EncodingEnumType  
            namespace H264PresetEnumType {
                enum class H264PresetEnumType {
                    BEST_QUALITY, 
                    DRIVE_VISION, 
                    LOW_LATENCY, 
                    MANIPULATION, 
                    PERSISTENT_STARE, 
                    PROGRAM_SPECIFIC_1, 
                    PROGRAM_SPECIFIC_2, 
                    PROGRAM_SPECIFIC_3, 
                    PROGRAM_SPECIFIC_4, 
                    SLOW_COMMS
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const H264PresetEnumType& sample);
            } // namespace H264PresetEnumType  
            namespace HandoverResultEnumType {
                enum class HandoverResultEnumType {
                    DEFERRED, 
                    DENIED, 
                    GRANTED, 
                    TIMEOUT, 
                    INSUFFICIENT_AUTHORITY, 
                    NOT_AVAILABLE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HandoverResultEnumType& sample);
            } // namespace HandoverResultEnumType  
            namespace HeadingReferenceEnumType {
                enum class HeadingReferenceEnumType {
                    MAGNETIC_NORTH, 
                    TRUE_NORTH, 
                    WIND_DIRECTION
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HeadingReferenceEnumType& sample);
            } // namespace HeadingReferenceEnumType  
            namespace HeightModeEnumType {
                enum class HeightModeEnumType {
                    ALTITUDE, 
                    DEPTH
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HeightModeEnumType& sample);
            } // namespace HeightModeEnumType  
            namespace HoverKindEnumType {
                enum class HoverKindEnumType {
                    LAT_LON_PRIORITY, 
                    Z_PRIORITY
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HoverKindEnumType& sample);
            } // namespace HoverKindEnumType  
            namespace IgnitionStateEnumType {
                enum class IgnitionStateEnumType {
                    OFF, 
                    RUN, 
                    START
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const IgnitionStateEnumType& sample);
            } // namespace IgnitionStateEnumType  
            namespace ImageFormatEnumType {
                enum class ImageFormatEnumType {
                    BMP, 
                    CR2_RAW, 
                    DNG, 
                    GIF, 
                    JPEG, 
                    NEF, 
                    PGM, 
                    PNG, 
                    PNM, 
                    PPM, 
                    TIFF
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ImageFormatEnumType& sample);
            } // namespace ImageFormatEnumType  
            namespace ImagingModeEnumType {
                enum class ImagingModeEnumType {
                    COLOR, 
                    GREYSCALE, 
                    INFRARED, 
                    LOWLIGHT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ImagingModeEnumType& sample);
            } // namespace ImagingModeEnumType  
            namespace InertialSensorOpStatusEnumType {
                enum class InertialSensorOpStatusEnumType {
                    COURSE_GPS_ALIGNMENT, 
                    COURSE_STATIONARY_ALIGNMENT, 
                    FINE_GPS_ALIGNMENT_COMPLETE, 
                    FINE_GPS_ALIGNMENT_STARTED, 
                    FINE_STATIONARY_ALIGNMENT_COMPLETE, 
                    FINE_STATIONARY_ALIGNMENT_STARTED, 
                    INERTIAL_SENSOR_FAILURE, 
                    INIT, 
                    OPERATIONAL
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const InertialSensorOpStatusEnumType& sample);
            } // namespace InertialSensorOpStatusEnumType  
            namespace InertialSensorStateEnumType {
                enum class InertialSensorStateEnumType {
                    OFF, 
                    ON, 
                    RESTARTING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const InertialSensorStateEnumType& sample);
            } // namespace InertialSensorStateEnumType  
            namespace LightSensitivityEnumType {
                enum class LightSensitivityEnumType {
                    AUTO_DEFAULT, 
                    ISO_100, 
                    ISO_1600, 
                    ISO_200, 
                    ISO_3200, 
                    ISO_400, 
                    ISO_800
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LightSensitivityEnumType& sample);
            } // namespace LightSensitivityEnumType  
            namespace LostCommsStatusEnumType {
                enum class LostCommsStatusEnumType {
                    ACTIVE, 
                    DISABLED, 
                    ENABLED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LostCommsStatusEnumType& sample);
            } // namespace LostCommsStatusEnumType  
            namespace MastActionEnumType {
                enum class MastActionEnumType {
                    LOWER, 
                    RAISE, 
                    STOP
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MastActionEnumType& sample);
            } // namespace MastActionEnumType  
            namespace MastStateEnumType {
                enum class MastStateEnumType {
                    DOWN, 
                    MOVING_DOWN, 
                    MOVING_UP, 
                    UP
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MastStateEnumType& sample);
            } // namespace MastStateEnumType  
            namespace CommandStatusEnumType {
                enum class CommandStatusEnumType {
                    FAILED, 
                    COMPLETED, 
                    ISSUED, 
                    COMMANDED, 
                    EXECUTING, 
                    CANCELED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const CommandStatusEnumType& sample);
            } // namespace CommandStatusEnumType  
            namespace DataEncodingEnumType {
                enum class DataEncodingEnumType {
                    AVI, 
                    H_261, 
                    H_262, 
                    H_263, 
                    H_263PLUS, 
                    H_264, 
                    MJPEG, 
                    MPEG_1, 
                    MPEG_2, 
                    MPEG_4, 
                    NONE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DataEncodingEnumType& sample);
            } // namespace DataEncodingEnumType  
            namespace FeatureKindEnumType {
                enum class FeatureKindEnumType {
                    CONTACT, 
                    OTHER
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const FeatureKindEnumType& sample);
            } // namespace FeatureKindEnumType  
            namespace LoiterKindEnumType {
                enum class LoiterKindEnumType {
                    CIRCLE, 
                    RACETRACK
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LoiterKindEnumType& sample);
            } // namespace LoiterKindEnumType  
            namespace TaskStateEnumType {
                enum class TaskStateEnumType {
                    PLANNED_PENDING_APPROVAL, 
                    AWAITING_EXECUTION_APPROVAL, 
                    ALLOCATED, 
                    EXECUTION_APPROVED, 
                    CANCELED, 
                    COMPLETED, 
                    DROPPED, 
                    PLANNED, 
                    PROPOSED, 
                    QUEUED, 
                    EXECUTING, 
                    FAILED, 
                    UNALLOCATED, 
                    ALLOCATED_PENDING_APPROVAL, 
                    AWAITING_MISSION_PLAN, 
                    PAUSED, 
                    QUEUING, 
                    PLANNING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TaskStateEnumType& sample);
            } // namespace TaskStateEnumType  
            namespace TransportEncodingEnumType {
                enum class TransportEncodingEnumType {
                    MPEG_2, 
                    MP4, 
                    OTHER
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TransportEncodingEnumType& sample);
            } // namespace TransportEncodingEnumType  
            namespace WaypointKindEnumType {
                enum class WaypointKindEnumType {
                    APPROACH_FINAL_POINT, 
                    APPROACH_INITIAL_POINT, 
                    LAUNCH, 
                    LOITER, 
                    NAV_ONLY, 
                    NAV_TARGET, 
                    OTHER, 
                    RECOVERY, 
                    RENDEZVOUS
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WaypointKindEnumType& sample);
            } // namespace WaypointKindEnumType  
            namespace MeteringModeEnumType {
                enum class MeteringModeEnumType {
                    AUTO_DEFAULT, 
                    CENTER_WEIGHTED, 
                    SPOT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MeteringModeEnumType& sample);
            } // namespace MeteringModeEnumType  
            namespace MountModeEnumType {
                enum class MountModeEnumType {
                    _FIXED, 
                    FIXED_BOW_THRUSTER, 
                    FIXED_PORT_PROPULSOR, 
                    FIXED_STERN_THRUSTER, 
                    VARIABLE_BEARING, 
                    VARIABLE_PITCH, 
                    VARIABLE_PITCH_AND_BEARING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MountModeEnumType& sample);
            } // namespace MountModeEnumType  
            namespace NavigationSolutionEnumType {
                enum class NavigationSolutionEnumType {
                    ESTIMATED, 
                    GROUND_TRUTH, 
                    MEASURED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const NavigationSolutionEnumType& sample);
            } // namespace NavigationSolutionEnumType  
            namespace ObstacleAvoidanceEnumType {
                enum class ObstacleAvoidanceEnumType {
                    DEVIATE_FROM_PATH, 
                    DO_NOTHING, 
                    STOP_ON_PATH
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ObstacleAvoidanceEnumType& sample);
            } // namespace ObstacleAvoidanceEnumType  
            namespace PathWayEnumType {
                enum class PathWayEnumType {
                    HISTORIAL_GLOBAL, 
                    HISTORICAL_LOCAL, 
                    PLANNED_GLOBAL, 
                    PLANNED_LOCAL
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PathWayEnumType& sample);
            } // namespace PathWayEnumType  
            namespace PlatformModeEnumType {
                enum class PlatformModeEnumType {
                    MAINTENANCE, 
                    STANDARD_OPERATING, 
                    TRAINING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PlatformModeEnumType& sample);
            } // namespace PlatformModeEnumType  
            namespace PlatformModeTransitionEnumType {
                enum class PlatformModeTransitionEnumType {
                    ACTIVE, 
                    EXITING, 
                    INITIALIZING
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PlatformModeTransitionEnumType& sample);
            } // namespace PlatformModeTransitionEnumType  
            namespace PowerPlantStateEnumType {
                enum class PowerPlantStateEnumType {
                    FAULT, 
                    OFF, 
                    ON
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PowerPlantStateEnumType& sample);
            } // namespace PowerPlantStateEnumType  
            namespace PumpStateEnumType {
                enum class PumpStateEnumType {
                    FAULT, 
                    OFF, 
                    ON_FORWARD, 
                    ON_REVERSE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PumpStateEnumType& sample);
            } // namespace PumpStateEnumType  
            namespace RangeErrorCodeEnumType {
                enum class RangeErrorCodeEnumType {
                    INVALID_HORIZONTAL_FOV, 
                    INVALID_SENSOR_RANGE, 
                    INVALID_SENSOR_STATE, 
                    INVALID_UPDATE_RATE, 
                    INVALID_VERTICAL_FOV, 
                    MULTIPLE_INVALID_PARAMETERS, 
                    UNKNOWN_ERROR_FAULT, 
                    UNKNOWN_SENSOR_ID
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const RangeErrorCodeEnumType& sample);
            } // namespace RangeErrorCodeEnumType  
            namespace RenderUselessStateEnumType {
                enum class RenderUselessStateEnumType {
                    NORMAL, 
                    RENDERED_USELESS, 
                    RENDERED_USELESS_FAILED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const RenderUselessStateEnumType& sample);
            } // namespace RenderUselessStateEnumType  
            namespace SourceIndicatorEnumType {
                enum class SourceIndicatorEnumType {
                    ACTUAL, 
                    GROUND_TRUTH, 
                    SIMULATED, 
                    TENTATIVE
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SourceIndicatorEnumType& sample);
            } // namespace SourceIndicatorEnumType  
            namespace StillImageErrorCodeEnumType {
                enum class StillImageErrorCodeEnumType {
                    INVALID_FORMAT, 
                    INVALID_FRAME_SIZE, 
                    MULTIPLE_INVALID_PARAMETERS, 
                    UNKNOWN_ERROR_FAULT, 
                    UNKNOWN_SENSOR_ID
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const StillImageErrorCodeEnumType& sample);
            } // namespace StillImageErrorCodeEnumType  
            namespace StreamStateEnumType {
                enum class StreamStateEnumType {
                    PAUSE, 
                    PLAY, 
                    STOP
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const StreamStateEnumType& sample);
            } // namespace StreamStateEnumType  
            namespace TamperDetectionStateEnumType {
                enum class TamperDetectionStateEnumType {
                    ALWAYS_ENABLED_OR_CLEAR, 
                    DISABLED, 
                    ENABLED
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const TamperDetectionStateEnumType& sample);
            } // namespace TamperDetectionStateEnumType  
            namespace VehicleSpeedModeEnumType {
                enum class VehicleSpeedModeEnumType {
                    LRC, 
                    MEC, 
                    MRC, 
                    SLOW, 
                    VEHICLE_SPECIFIC
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const VehicleSpeedModeEnumType& sample);
            } // namespace VehicleSpeedModeEnumType  
            namespace VehicleSpeedReferenceEnumType {
                enum class VehicleSpeedReferenceEnumType {
                    SPEED_THROUGH_AIR, 
                    OTHER, 
                    RPM, 
                    SPEED_OVER_GROUND, 
                    SPEED_THROUGH_WATER
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const VehicleSpeedReferenceEnumType& sample);
            } // namespace VehicleSpeedReferenceEnumType  
            namespace VelocityCommandTypeEnumType {
                enum class VelocityCommandTypeEnumType {
                    CURRENT_COMMAND_SOG, 
                    CURRENT_COMMAND_SRM, 
                    DEFAULT_COMMAND_SOG, 
                    DEFAULT_COMMAND_SRM, 
                    MAX_ALLOWED_SOG, 
                    MAX_ALLOWED_SRM, 
                    MIN_ALLOWED_SOG, 
                    MIN_ALLOWED_SRM
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const VelocityCommandTypeEnumType& sample);
            } // namespace VelocityCommandTypeEnumType  
            namespace VideoFormatEnumType {
                enum class VideoFormatEnumType {
                    NTSCJ, 
                    NTSCM, 
                    PALM, 
                    PALN, 
                    SECAMBG, 
                    SECAML
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const VideoFormatEnumType& sample);
            } // namespace VideoFormatEnumType  
            namespace VisualClassificationEnumType {
                enum class VisualClassificationEnumType {
                    AID_TO_NAVIGATION_CHANNEL_MARKER, 
                    MEDIUM_VESSEL_FISHING, 
                    AID_TO_NAVIGATION_GENERAL, 
                    SMALL_VESSEL_JET_SKI, 
                    AID_TO_NAVIGATION_LARGE_BUOY, 
                    LARGE_VESSEL_CARGO, 
                    LARGE_GENERAL_OBSTACLE, 
                    LARGE_VESSEL_GENERAL, 
                    LARGE_VESSEL_MILITARY, 
                    LARGE_VESSEL_PASSENGER, 
                    LARGE_VESSEL_OTHER, 
                    AID_TO_NAVIGATION_LIGHTHOUSE, 
                    MEDIUM_VESSEL_GENERAL, 
                    MEDIUM_VESSEL_MILITARY, 
                    MEDIUM_VESSEL_OTHER, 
                    SMALL_VESSEL_POWER_BOAT, 
                    SAILBOAT, 
                    AID_TO_NAVIGATION_SMALL_BUOY, 
                    SMALL_GENERAL_OBSTACLE, 
                    SMALL_VESSEL_GENERAL, 
                    SMALL_VESSEL_MILITARY, 
                    SMALL_VESSEL_OTHER, 
                    MEDIUM_VESSEL_TUG, 
                    MEDIUM_VESSEL_TUG_IN_TOW, 
                    MEDIUM_VESSEL_YACHT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const VisualClassificationEnumType& sample);
            } // namespace VisualClassificationEnumType  
            namespace WaterTurnDirectionEnumType {
                enum class WaterTurnDirectionEnumType {
                    NO_VALID_TURN_DIRECTION, 
                    LEFT_TURN, 
                    RIGHT_TURN, 
                    VEHICLE_SPECIFIC, 
                    INTO_THE_CURRENT, 
                    INTO_THE_WIND
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WaterTurnDirectionEnumType& sample);
            } // namespace WaterTurnDirectionEnumType  
            namespace WhiteBalanceEnumType {
                enum class WhiteBalanceEnumType {
                    AUTO_DEFAULT, 
                    CLOUDY, 
                    DAYLIGHT, 
                    FLASH, 
                    FLUORESCENT, 
                    SHADE, 
                    TUNGSTEN
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const WhiteBalanceEnumType& sample);
            } // namespace WhiteBalanceEnumType  
            namespace ZoneKindEnumType {
                enum class ZoneKindEnumType {
                    KEEP_IN, 
                    KEEP_OUT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ZoneKindEnumType& sample);
            } // namespace ZoneKindEnumType  
            namespace ZoomModeEnumType {
                enum class ZoomModeEnumType {
                    ANALOG_ONLY, 
                    DIGITAL_ONLY, 
                    OFF, 
                    MIXED_DEFAULT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ZoomModeEnumType& sample);
            } // namespace ZoomModeEnumType  
        } // namespace MaritimeEnumeration  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumType::AnchorActionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumType::AnchorActionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumType::AnchorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumType::AnchorStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BilgeControlEnumType::BilgeControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BilgeControlEnumType::BilgeControlEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumType::BilgeStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumType::BilgeStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumType::ContactManeuverInfluenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumType::ContactManeuverInfluenceEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CoreStateEnumType::CoreStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CoreStateEnumType::CoreStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GuardedTeleoperationStatusEnumType::GuardedTeleoperationStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GuardedTeleoperationStatusEnumType::GuardedTeleoperationStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumType::InertialSensorOpStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumType::InertialSensorOpStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorStateEnumType::InertialSensorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InertialSensorStateEnumType::InertialSensorStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LostCommsStatusEnumType::LostCommsStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LostCommsStatusEnumType::LostCommsStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastActionEnumType::MastActionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MastActionEnumType::MastActionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastStateEnumType::MastStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MastStateEnumType::MastStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumType::NavigationSolutionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumType::NavigationSolutionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::StillImageErrorCodeEnumType::StillImageErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::StillImageErrorCodeEnumType::StillImageErrorCodeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::StreamStateEnumType::StreamStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::StreamStateEnumType::StreamStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType value;
        };
        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType value;
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
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnalogSensorErrorCodeEnumType::AnalogSensorErrorCodeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumType::AnchorActionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumType::AnchorActionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumType::AnchorActionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnchorActionEnumType::AnchorActionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumType::AnchorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumType::AnchorStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumType::AnchorStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AnchorStateEnumType::AnchorStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::AudioEncodingQualityEnumType::AudioEncodingQualityEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BilgeControlEnumType::BilgeControlEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BilgeControlEnumType::BilgeControlEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::BilgeControlEnumType::BilgeControlEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::BilgeControlEnumType::BilgeControlEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumType::BilgeStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumType::BilgeStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumType::BilgeStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::BilgeStateEnumType::BilgeStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::BitDepthEnumType::BitDepthEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::BlastKindEnumType::BlastKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CollisionAvoidStatusEnumType::CollisionAvoidStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::COLREGSClassificationEnumType::COLREGSClassificationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumType::ContactManeuverInfluenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumType::ContactManeuverInfluenceEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumType::ContactManeuverInfluenceEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ContactManeuverInfluenceEnumType::ContactManeuverInfluenceEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CoordinateSystemEnumType::CoordinateSystemEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CoreStateEnumType::CoreStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CoreStateEnumType::CoreStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CoreStateEnumType::CoreStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CoreStateEnumType::CoreStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::DigitalAudioFormatEnumType::DigitalAudioFormatEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::DomainEnumType::DomainEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::EngineKindEnumType::EngineKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ErrorCodeEnumType::ErrorCodeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ErrorConditionEnumType::ErrorConditionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ExposureModeEnumType::ExposureModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::GuardedTeleoperationStatusEnumType::GuardedTeleoperationStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::GuardedTeleoperationStatusEnumType::GuardedTeleoperationStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::GuardedTeleoperationStatusEnumType::GuardedTeleoperationStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::GuardedTeleoperationStatusEnumType::GuardedTeleoperationStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::H264EncodingEnumType::H264EncodingEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::H264PresetEnumType::H264PresetEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::HeadingReferenceEnumType::HeadingReferenceEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::HeightModeEnumType::HeightModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::HoverKindEnumType::HoverKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ImagingModeEnumType::ImagingModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumType::InertialSensorOpStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumType::InertialSensorOpStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumType::InertialSensorOpStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::InertialSensorOpStatusEnumType::InertialSensorOpStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::InertialSensorStateEnumType::InertialSensorStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::InertialSensorStateEnumType::InertialSensorStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::InertialSensorStateEnumType::InertialSensorStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::InertialSensorStateEnumType::InertialSensorStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::LightSensitivityEnumType::LightSensitivityEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LostCommsStatusEnumType::LostCommsStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LostCommsStatusEnumType::LostCommsStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::LostCommsStatusEnumType::LostCommsStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::LostCommsStatusEnumType::LostCommsStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastActionEnumType::MastActionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MastActionEnumType::MastActionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::MastActionEnumType::MastActionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::MastActionEnumType::MastActionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MastStateEnumType::MastStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MastStateEnumType::MastStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::MastStateEnumType::MastStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::MastStateEnumType::MastStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::DataEncodingEnumType::DataEncodingEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::LoiterKindEnumType::LoiterKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TransportEncodingEnumType::TransportEncodingEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::WaypointKindEnumType::WaypointKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::MeteringModeEnumType::MeteringModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::MountModeEnumType::MountModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumType::NavigationSolutionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumType::NavigationSolutionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumType::NavigationSolutionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumType::NavigationSolutionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ObstacleAvoidanceEnumType::ObstacleAvoidanceEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PathWayEnumType::PathWayEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::PumpStateEnumType::PumpStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::RangeErrorCodeEnumType::RangeErrorCodeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::StillImageErrorCodeEnumType::StillImageErrorCodeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::StillImageErrorCodeEnumType::StillImageErrorCodeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::StillImageErrorCodeEnumType::StillImageErrorCodeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::StillImageErrorCodeEnumType::StillImageErrorCodeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::StreamStateEnumType::StreamStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::StreamStateEnumType::StreamStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::StreamStateEnumType::StreamStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::StreamStateEnumType::StreamStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedReferenceEnumType::VehicleSpeedReferenceEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::VelocityCommandTypeEnumType::VelocityCommandTypeEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::VisualClassificationEnumType::VisualClassificationEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::WhiteBalanceEnumType::WhiteBalanceEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ZoneKindEnumType::ZoneKindEnumType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template <>
        struct default_enumerator< ::UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType>
        {
            static const ::UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::MaritimeEnumeration::ZoomModeEnumType::ZoomModeEnumType > {
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

#endif // EnumerationSets_1089266797_hpp

