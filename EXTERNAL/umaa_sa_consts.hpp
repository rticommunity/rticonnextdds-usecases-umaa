

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from umaa_sa_consts.idl
using RTI Code Generator (rtiddsgen) version 4.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef umaa_sa_consts_916604762_hpp
#define umaa_sa_consts_916604762_hpp

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
#include "dds/core/Optional.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/topic/TopicTraits.hpp"

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

static const std::string SA_XML_FILE = "UMAA_SA.xml";

static const std::string SA_PROVIDER = "UMAAParticipantLibrary::SAProvider";

static const std::string SA_USER = "UMAAParticipantLibrary::SAUser";

static const std::string ACCELLERATIONREPORTWRITER = "AccellerationReportPublisher::AccellerationReportWriter";

static const std::string COMPAUTMENTCONFIGREPORTWRITER = "CompartmentConfigReportPublisher::CompartmentConfigReportWriter";

static const std::string COMPARTMENTCONFIGWRITER = "CompartmentConfigPublisher::CompartmentConfigWriter";

static const std::string CONTACTCOLREGSCLASSIFICATIONSTATUSREPORTWRITER = "ContactCOLREGSClassificationStatusReportPublisher::ContactCOLREGSClassificationStatusReportWriter";

static const std::string CONTACTREMOVEDREPORTWRITER = "ContactRemovedReportPublisher::ContactRemovedReportWriter";

static const std::string CONTACTREPORTWRITER = "ContactReportPublisher::ContactReportWriter";

static const std::string CONTACTREPORT_CONTACTSSETWRITER = "ContactReport_ContactsSetPublisher::ContactReport_ContactsSetWriter";

static const std::string CONTACTVISUALCLASSIFICATIONSTATUSREPORTWRITER = "ContactVisualClassificationStatusReportPublisher::ContactVisualClassificationStatusReportWriter";

static const std::string CTDREPORTWRITER = "CTDReportPublisher::CTDReportWriter";

static const std::string DATETIMEREPORTWRITER = "DateTimeReportPublisher::DateTimeReportWriter";

static const std::string ECEFPOSEREPORTWRITER = "ECEFPoseReportPublisher::ECEFPoseReportWriter";

static const std::string FEATUREIMAGEREMOVEDREPORTWRITER = "FeatureImageRemovedReportPublisher::FeatureImageRemovedReportWriter";

static const std::string FEATUREIMAGEREPORTWRITER = "FeatureImageReportPublisher::FeatureImageReportWriter";

static const std::string GLOBALDEADRECKONINGCOMMANDREPORTWRITER = "GlobalDeadReckoningCommandReportPublisher::GlobalDeadReckoningCommandReportWriter";

static const std::string GLOBALDEADRECKONINGCOMMANDSTATUSWRITER = "GlobalDeadReckoningCommandStatusPublisher::GlobalDeadReckoningCommandStatusWriter";

static const std::string GLOBALPOSECONFIGREPORTWRITER = "GlobalPoseConfigReportPublisher::GlobalPoseConfigReportWriter";

static const std::string GLOBALPOSEREPORTWRITER = "GlobalPoseReportPublisher::GlobalPoseReportWriter";

static const std::string IMAGEREMOVEDREPORTWRITER = "ImageRemovedReportPublisher::ImageRemovedReportWriter";

static const std::string IMAGEREPORTWRITER = "ImageReportPublisher::ImageReportWriter";

static const std::string LOCALDEADRECKONINGCOMMANDREPORTWRITER = "LocalDeadReckoningCommandReportPublisher::LocalDeadReckoningCommandReportWriter";

static const std::string LOCALDEADRECKONINGCOMMANDSTATUSWRITER = "LocalDeadReckoningCommandStatusPublisher::LocalDeadReckoningCommandStatusWriter";

static const std::string LOCALPOSEREPORTWRITER = "LocalPoseReportPublisher::LocalPoseReportWriter";

static const std::string NEDVELOCITYREPORTWRITER = "NEDVelocityReportPublisher::NEDVelocityReportWriter";

static const std::string PATHREPORTERSPECSREPORTWRITER = "PathReporterSpecsReportPublisher::PathReporterSpecsReportWriter";

static const std::string PATHREPORTERREPORTWRITER = "PathReporterReportPublisher::PathReporterReportWriter";

static const std::string RANGECONFIGREPORTWRITER = "RangeConfigReportPublisher::RangeConfigReportWriter";

static const std::string RANGESPECSREPORTWRITER = "RangeSpecsReportPublisher::RangeSpecsReportWriter";

static const std::string RANGEREPORTWRITER = "RangeReportPublisher::RangeReportWriter";

static const std::string SEASTATUSREPORTWRITER = "SeaStatusReportPublisher::SeaStatusReportWriter";

static const std::string SPEEDREPORTWRITER = "SpeedReportPublisher::SpeedReportWriter";

static const std::string STILLIMAGECONFIGREPORTWRITER = "StillImageConfigReportPublisher::StillImageConfigReportWriter";

static const std::string STILLIMAGESPECSREPORTWRITER = "StillImageSpecsReportPublisher::StillImageSpecsReportWriter";

static const std::string STILLIMAGEREPORTWRITER = "StillImageReportPublisher::StillImageReportWriter";

static const std::string TRANSLATIONALSHIPMOTIONREPORTWRITER = "TranslationalShipMotionReportPublisher::TranslationalShipMotionReportWriter";

static const std::string VEHICLENAVIGATIONMODEREPORTWRITER = "VehicleNavigationModeReportPublisher::VehicleNavigationModeReportWriter";

static const std::string VELOCITYREPORTWRITER = "VelocityReportPublisher::VelocityReportWriter";

static const std::string WATERCURRENTSTATUSREPORTWRITER = "WaterCurrentStatusReportPublisher::WaterCurrentStatusReportWriter";

static const std::string WATERSPACEREPORTWRITER = "WaterspaceReportPublisher::WaterspaceReportWriter";

static const std::string WEATHERSTATUSREPORTWRITER = "WeatherStatusReportPublisher::WeatherStatusReportWriter";

static const std::string WINDSTATUSREPORTWRITER = "WindStatusReportPublisher::WindStatusReportWriter";

static const std::string LOCALDEADRECKONINGCOMMANDWRITER = "LocalDeadReckoningCommandPublisher::LocalDeadReckoningCommandWriter";

static const std::string GLOBALDEADRECKONINGCOMMANDWRITER = "GlobalDeadReckoningCommandPublisher::GlobalDeadReckoningCommandWriter";

static const std::string ACCELLERATIONREPORTREADER = "AccellerationReportSubscriber::AccellerationReportReader";

static const std::string COMPARTMENTCONFIGREPORTREADER = "CompartmentConfigReportSubscriber::CompartmentConfigReportReader";

static const std::string COMPARTMENTCONFIGREADER = "CompartmentConfigSubscriber::CompartmentConfigReader";

static const std::string CONTACTCOLREGSCLASSIFICATIONSTATUSREPORTREADER = "ContactCOLREGSClassificationStatusReportSubscriber::ContactCOLREGSClassificationStatusReportReader";

static const std::string CONTACTREMOVEDREPORTREADER = "ContactRemovedReportSubscriber::ContactRemovedReportReader";

static const std::string CONTACTREPORTREADER = "ContactReportSubscriber::ContactReportReader";

static const std::string CONTACTREPORT_CONTACTSSETREADER = "ContactReport_ContactsSetSubscriber::ContactReport_ContactsSetReader";

static const std::string CONTACTVISUALCLASSIFICATIONSTATUSREPORTREADER = "ContactVisualClassificationStatusReportSubscriber::ContactVisualClassificationStatusReportReader";

static const std::string CTDREPORTREADER = "CTDReportSubscriber::CTDReportReader";

static const std::string DATETIMEREPORTREADER = "DateTimeReportSubscriber::DateTimeReportReader";

static const std::string ECEFPOSEREPORTREADER = "ECEFPoseReportSubscriber::ECEFPoseReportReader";

static const std::string FEATUREIMAGEREMOVEDREPORTREADER = "FeatureImageRemovedReportSubscriber::FeatureImageRemovedReportReader";

static const std::string FEATUREIMAGEREPORTREADER = "FeatureImageReportSubscriber::FeatureImageReportReader";

static const std::string GLOBALDEADRECKONINGCOMMANDREPORTREADER = "GlobalDeadReckoningCommandReportSubscriber::GlobalDeadReckoningCommandReportReader";

static const std::string GLOBALDEADRECKONINGCOMMANDSTATUSREADER = "GlobalDeadReckoningCommandStatusSubscriber::GlobalDeadReckoningCommandStatusReader";

static const std::string GLOBALPOSECONFIGREPORTREADER = "GlobalPoseConfigReportSubscriber::GlobalPoseConfigReportReader";

static const std::string GLOBALPOSEREPORTREADER = "GlobalPoseReportSubscriber::GlobalPoseReportReader";

static const std::string IMAGEREMOVEDREPORTREADER = "ImageRemovedReportSubscriber::ImageRemovedReportReader";

static const std::string IMAGEREPORTREADER = "ImageReportSubscriber::ImageReportReader";

static const std::string LOCALDEADRECKONINGCOMMANDREPORTREADER = "LocalDeadReckoningCommandReportSubscriber::LocalDeadReckoningCommandReportReader";

static const std::string LOCALDEADRECKONINGCOMMANDSTATUSREADER = "LocalDeadReckoningCommandStatusSubscriber::LocalDeadReckoningCommandStatusReader";

static const std::string LOCALPOSEREPORTREADER = "LocalPoseReportSubscriber::LocalPoseReportReader";

static const std::string NEDVELOCITYREPORTREADER = "NEDVelocityReportSubscriber::NEDVelocityReportReader";

static const std::string PATHREPORTERSPECSREPORTREADER = "PathReporterSpecsReportSubscriber::PathReporterSpecsReportReader";

static const std::string PATHREPORTERREPORTREADER = "PathReporterReportSubscriber::PathReporterReportReader";

static const std::string RANGECONFIGREPORTREADER = "RangeConfigReportSubscriber::RangeConfigReportReader";

static const std::string RANGESPECSREPORTREADER = "RangeSpecsReportSubscriber::RangeSpecsReportReader";

static const std::string RANGEREPORTREADER = "RangeReportSubscriber::RangeReportReader";

static const std::string SEASTATUSREPORTREADER = "SeaStatusReportSubscriber::SeaStatusReportReader";

static const std::string SPEEDREPORTREADER = "SpeedReportSubscriber::SpeedReportReader";

static const std::string STILLIMAGECONFIGREPORTREADER = "StillImageConfigReportSubscriber::StillImageConfigReportReader";

static const std::string STILLIMAGESPECSREPORTREADER = "StillImageSpecsReportSubscriber::StillImageSpecsReportReader";

static const std::string STILLIMAGEREPORTREADER = "Subscriber::StillImageReportReader";

static const std::string TRANSLATIONALSHIPMOTIONREPORTREADER = "TranslationalShipMotionReportSubscriber::TranslationalShipMotionReportReader";

static const std::string VEHICLENAVIGATIONMODEREPORTREADER = "VehicleNavigationModeReportSubscriber::VehicleNavigationModeReportReader";

static const std::string VELOCITYREPORTREADER = "VelocityReportSubscriber::VelocityReportReader";

static const std::string WATERCURRENTSTATUSREPORTREADER = "WaterCurrentStatusReportSubscriber::WaterCurrentStatusReportReader";

static const std::string WATERSPACEREPORTREADER = "WaterspaceReportSubscriber::WaterspaceReportReader";

static const std::string WEATHERSTATUSREPORTREADER = "WeatherStatusReportSubscriber::WeatherStatusReportReader";

static const std::string WINDSTATUSREPORTREADER = "WindStatusReportSubscriber::WindStatusReportReader";

static const std::string LOCALDEADRECKONINGCOMMANDREADER = "Subscriber::LocalDeadReckoningCommandReader";

static const std::string GLOBALDEADRECKONINGCOMMANDREADER = "Subscriber::GlobalDeadReckoningCommandReader";

static const std::string ACCELERATIONREPORTTYPE = "UMAA::SA::AccelerationStatus::AccelerationReportType";

static const std::string COMPARTMENTCONFIGREPORTTYPE = "UMAA::SA::CompartmentConfig::CompartmentConfigReportType";

static const std::string COMPARTMENTREPORTTYPE = "UMAA::SA::CompartmentStatus::CompartmentReportType";

static const std::string CONTACTCOLREGSCLASSIFICATIONSTATUSREPORTTYPE = "UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType";

static const std::string CONTACTREMOVEDREPORTTYPE = "UMAA::SA::ContactStatus::ContactRemovedReportType";

static const std::string CONTACTREPORTTYPE = "UMAA::SA::ContactStatus::ContactReportType";

static const std::string CONTACTREPORTTYPE_CONTACTSSET = "UMAA::SA::ContactStatus::ContactReportType_ContactsSet";

static const std::string CONTACTVISUALCLASSIFICATIONSTATUSREPORTTYPE = "UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType";

static const std::string CTDREPORTTYPE = "UMAA::SA::CTDStatus::CTDReportType";

static const std::string DATETIMEREPORTTYPE = "UMAA::SA::DateTimeStatus::DateTimeReportType";

static const std::string ECEFPOSEREPORTTYPE = "UMAA::SA::ECEFPoseStatus::ECEFPoseReportType";

static const std::string FEATUREIMAGEREMOVEDREPORTTYPE = "UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType";

static const std::string FEATUREIMAGEREPORTTYPE = "UMAA::SA::FeatureImageStatus::FeatureImageReportType";

static const std::string GLOBALDEADRECKONINGCOMMANDREPORTTYPE = "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType";

static const std::string GLOBALDEADRECKONINGCOMMANDSTATUSTYPE = "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandStatusType";

static const std::string GLOBALDEADRECKONINGCOMMANDTYPE = "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandType";

static const std::string GLOBALPOSECONFIGREPORTTYPE = "UMAA::SA::GlobalPoseConfig::GlobalPoseConfigReportType";

static const std::string GLOBALPOSEREPORTTYPE = "UMAA::SA::GlobalPoseStatus::GlobalPoseReportType";

static const std::string IMAGEREMOVEDREPORTTYPE = "UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType";

static const std::string IMAGEREPORTTYPE = "UMAA::SA::ImageStatus::ImageReportType";

static const std::string LOCALDEADRECKONINGCOMMANDREPORTTYPE = "UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType";

static const std::string LOCALDEADRECKONINGCOMMANDSTATUSTYPE = "UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandStatusType";

static const std::string LOCALDEADRECKONINGCOMMANDTYPE = "UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandType";

static const std::string LOCALPOSEREPORTTYPE = "UMAA::SA::LocalPoseStatus::LocalPoseReportType";

static const std::string NEDVELOCITYREPORTTYPE = "UMAA::SA::NEDVelocityStatus::NEDVelocityReportType";

static const std::string PATHREPORTERSPECSREPORTTYPE = "UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType";

static const std::string PATHREPORTERREPORTTYPE = "UMAA::SA::PathReporterStatus::PathReporterReportType";

static const std::string RANGECONFIGREPORTTYPE = "UMAA::SA::RangeConfig::RangeConfigReportType";

static const std::string RANGESPECSREPORTTYPE = "UMAA::SA::RangeSpecs::RangeSpecsReportType";

static const std::string RANGEREPORTTYPE = "UMAA::SA::RangeStatus::RangeReportType";

static const std::string SEASTATUSREPORTTYPE = "UMAA::SA::SeaStatus::SeaStatusReportType";

static const std::string SPEEDREPORTTYPE = "UMAA::SA::SpeedStatus::SpeedReportType";

static const std::string STILLIMAGECONFIGREPORTTYPE = "UMAA::SA::StillImageConfig::StillImageConfigReportType";

static const std::string STILLIMAGESPECSREPORTTYPE = "UMAA::SA::StillImageSpecs::StillImageSpecsReportType";

static const std::string STILLIMAGEREPORTTYPE = "UMAA::SA::StillImageStatus::StillImageReportType";

static const std::string TRANSLATIONALSHIPMOTIONREPORTTYPE = "UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType";

static const std::string VEHICLENAVIGATIONMODEREPORTTYPE = "UMAA::SA::VehicleNavigationModeStatus::VehicleNavigationModeReportType";

static const std::string VELOCITYREPORTTYPE = "UMAA::SA::VelocityStatus::VelocityReportType";

static const std::string WATERCURRENTSTATUSREPORTTYPE = "UMAA::SA::WaterCurrentStatus::WaterCurrentStatusReportType";

static const std::string WATERSPACEREPORTTYPE = "UMAA::SA::WaterspaceStatus::WaterspaceReportType";

static const std::string WEATHERSTATUSREPORTTYPE = "UMAA::SA::WeatherStatus::WeatherStatusReportType";

static const std::string WINDSTATUSREPORTTYPE = "UMAA::SA::WindStatus::WindStatusReportType";

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
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

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // umaa_sa_consts_916604762_hpp

