

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from umaa_sa_consts.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
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

RTI_CONSTEXPR_OR_CONST_STRING std::string SA_XML_FILE = "../sa_xml/umaa_sa_entities.xml";

RTI_CONSTEXPR_OR_CONST_STRING std::string SA_PROVIDER = "UMAAParticipantLibrary::SAProvider";

RTI_CONSTEXPR_OR_CONST_STRING std::string SA_USER = "UMAAParticipantLibrary::SAUser";

RTI_CONSTEXPR_OR_CONST_STRING std::string ACCELLERATIONREPORTWRITER = "AccellerationReportPublisher::AccellerationReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string COMPAUTMENTCONFIGREPORTWRITER = "CompartmentConfigReportPublisher::CompartmentConfigReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string COMPARTMENTCONFIGWRITER = "CompartmentConfigPublisher::CompartmentConfigWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTCOLREGSCLASSIFICATIONSTATUSREPORTWRITER = "ContactCOLREGSClassificationStatusReportPublisher::ContactCOLREGSClassificationStatusReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTREMOVEDREPORTWRITER = "ContactRemovedReportPublisher::ContactRemovedReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTREPORTWRITER = "ContactReportPublisher::ContactReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTREPORT_CONTACTSSETWRITER = "ContactReport_ContactsSetPublisher::ContactReport_ContactsSetWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTVISUALCLASSIFICATIONSTATUSREPORTWRITER = "ContactVisualClassificationStatusReportPublisher::ContactVisualClassificationStatusReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string CTDREPORTWRITER = "CTDReportPublisher::CTDReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string DATETIMEREPORTWRITER = "DateTimeReportPublisher::DateTimeReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string ECEFPOSEREPORTWRITER = "ECEFPoseReportPublisher::ECEFPoseReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string FEATUREIMAGEREMOVEDREPORTWRITER = "FeatureImageRemovedReportPublisher::FeatureImageRemovedReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string FEATUREIMAGEREPORTWRITER = "FeatureImageReportPublisher::FeatureImageReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALDEADRECKONINGCOMMANDREPORTWRITER = "GlobalDeadReckoningCommandReportPublisher::GlobalDeadReckoningCommandReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALDEADRECKONINGCOMMANDSTATUSWRITER = "GlobalDeadReckoningCommandStatusPublisher::GlobalDeadReckoningCommandStatusWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALPOSECONFIGREPORTWRITER = "GlobalPoseConfigReportPublisher::GlobalPoseConfigReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALPOSEREPORTWRITER = "GlobalPoseReportPublisher::GlobalPoseReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string IMAGEREMOVEDREPORTWRITER = "ImageRemovedReportPublisher::ImageRemovedReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string IMAGEREPORTWRITER = "ImageReportPublisher::ImageReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALDEADRECKONINGCOMMANDREPORTWRITER = "LocalDeadReckoningCommandReportPublisher::LocalDeadReckoningCommandReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALDEADRECKONINGCOMMANDSTATUSWRITER = "LocalDeadReckoningCommandStatusPublisher::LocalDeadReckoningCommandStatusWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALPOSEREPORTWRITER = "LocalPoseReportPublisher::LocalPoseReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string NEDVELOCITYREPORTWRITER = "NEDVelocityReportPublisher::NEDVelocityReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string PATHREPORTERSPECSREPORTWRITER = "PathReporterSpecsReportPublisher::PathReporterSpecsReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string PATHREPORTERREPORTWRITER = "PathReporterReportPublisher::PathReporterReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string RANGECONFIGREPORTWRITER = "RangeConfigReportPublisher::RangeConfigReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string RANGESPECSREPORTWRITER = "RangeSpecsReportPublisher::RangeSpecsReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string RANGEREPORTWRITER = "RangeReportPublisher::RangeReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string SEASTATUSREPORTWRITER = "SeaStatusReportPublisher::SeaStatusReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string SPEEDREPORTWRITER = "SpeedReportPublisher::SpeedReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string STILLIMAGECONFIGREPORTWRITER = "StillImageConfigReportPublisher::StillImageConfigReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string STILLIMAGESPECSREPORTWRITER = "StillImageSpecsReportPublisher::StillImageSpecsReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string STILLIMAGEREPORTWRITER = "StillImageReportPublisher::StillImageReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string TRANSLATIONALSHIPMOTIONREPORTWRITER = "TranslationalShipMotionReportPublisher::TranslationalShipMotionReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string VEHICLENAVIGATIONMODEREPORTWRITER = "VehicleNavigationModeReportPublisher::VehicleNavigationModeReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string VELOCITYREPORTWRITER = "VelocityReportPublisher::VelocityReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string WATERCURRENTSTATUSREPORTWRITER = "WaterCurrentStatusReportPublisher::WaterCurrentStatusReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string WATERSPACEREPORTWRITER = "WaterspaceReportPublisher::WaterspaceReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string WEATHERSTATUSREPORTWRITER = "WeatherStatusReportPublisher::WeatherStatusReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string WINDSTATUSREPORTWRITER = "WindStatusReportPublisher::WindStatusReportWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALDEADRECKONINGCOMMANDWRITER = "LocalDeadReckoningCommandPublisher::LocalDeadReckoningCommandWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALDEADRECKONINGCOMMANDWRITER = "GlobalDeadReckoningCommandPublisher::GlobalDeadReckoningCommandWriter";

RTI_CONSTEXPR_OR_CONST_STRING std::string ACCELLERATIONREPORTREADER = "AccellerationReportSubscriber::AccellerationReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string COMPARTMENTCONFIGREPORTREADER = "CompartmentConfigReportSubscriber::CompartmentConfigReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string COMPARTMENTCONFIGREADER = "CompartmentConfigSubscriber::CompartmentConfigReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTCOLREGSCLASSIFICATIONSTATUSREPORTREADER = "ContactCOLREGSClassificationStatusReportSubscriber::ContactCOLREGSClassificationStatusReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTREMOVEDREPORTREADER = "ContactRemovedReportSubscriber::ContactRemovedReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTREPORTREADER = "ContactReportSubscriber::ContactReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTREPORT_CONTACTSSETREADER = "ContactReport_ContactsSetSubscriber::ContactReport_ContactsSetReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTVISUALCLASSIFICATIONSTATUSREPORTREADER = "ContactVisualClassificationStatusReportSubscriber::ContactVisualClassificationStatusReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string CTDREPORTREADER = "CTDReportSubscriber::CTDReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string DATETIMEREPORTREADER = "DateTimeReportSubscriber::DateTimeReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string ECEFPOSEREPORTREADER = "ECEFPoseReportSubscriber::ECEFPoseReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string FEATUREIMAGEREMOVEDREPORTREADER = "FeatureImageRemovedReportSubscriber::FeatureImageRemovedReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string FEATUREIMAGEREPORTREADER = "FeatureImageReportSubscriber::FeatureImageReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALDEADRECKONINGCOMMANDREPORTREADER = "GlobalDeadReckoningCommandReportSubscriber::GlobalDeadReckoningCommandReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALDEADRECKONINGCOMMANDSTATUSREADER = "GlobalDeadReckoningCommandStatusSubscriber::GlobalDeadReckoningCommandStatusReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALPOSECONFIGREPORTREADER = "GlobalPoseConfigReportSubscriber::GlobalPoseConfigReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALPOSEREPORTREADER = "GlobalPoseReportSubscriber::GlobalPoseReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string IMAGEREMOVEDREPORTREADER = "ImageRemovedReportSubscriber::ImageRemovedReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string IMAGEREPORTREADER = "ImageReportSubscriber::ImageReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALDEADRECKONINGCOMMANDREPORTREADER = "LocalDeadReckoningCommandReportSubscriber::LocalDeadReckoningCommandReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALDEADRECKONINGCOMMANDSTATUSREADER = "LocalDeadReckoningCommandStatusSubscriber::LocalDeadReckoningCommandStatusReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALPOSEREPORTREADER = "LocalPoseReportSubscriber::LocalPoseReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string NEDVELOCITYREPORTREADER = "NEDVelocityReportSubscriber::NEDVelocityReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string PATHREPORTERSPECSREPORTREADER = "PathReporterSpecsReportSubscriber::PathReporterSpecsReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string PATHREPORTERREPORTREADER = "PathReporterReportSubscriber::PathReporterReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string RANGECONFIGREPORTREADER = "RangeConfigReportSubscriber::RangeConfigReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string RANGESPECSREPORTREADER = "RangeSpecsReportSubscriber::RangeSpecsReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string RANGEREPORTREADER = "RangeReportSubscriber::RangeReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string SEASTATUSREPORTREADER = "SeaStatusReportSubscriber::SeaStatusReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string SPEEDREPORTREADER = "SpeedReportSubscriber::SpeedReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string STILLIMAGECONFIGREPORTREADER = "StillImageConfigReportSubscriber::StillImageConfigReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string STILLIMAGESPECSREPORTREADER = "StillImageSpecsReportSubscriber::StillImageSpecsReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string STILLIMAGEREPORTREADER = "Subscriber::StillImageReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string TRANSLATIONALSHIPMOTIONREPORTREADER = "TranslationalShipMotionReportSubscriber::TranslationalShipMotionReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string VEHICLENAVIGATIONMODEREPORTREADER = "VehicleNavigationModeReportSubscriber::VehicleNavigationModeReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string VELOCITYREPORTREADER = "VelocityReportSubscriber::VelocityReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string WATERCURRENTSTATUSREPORTREADER = "WaterCurrentStatusReportSubscriber::WaterCurrentStatusReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string WATERSPACEREPORTREADER = "WaterspaceReportSubscriber::WaterspaceReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string WEATHERSTATUSREPORTREADER = "WeatherStatusReportSubscriber::WeatherStatusReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string WINDSTATUSREPORTREADER = "WindStatusReportSubscriber::WindStatusReportReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALDEADRECKONINGCOMMANDREADER = "Subscriber::LocalDeadReckoningCommandReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALDEADRECKONINGCOMMANDREADER = "Subscriber::GlobalDeadReckoningCommandReader";

RTI_CONSTEXPR_OR_CONST_STRING std::string ACCELERATIONREPORTTYPE = "UMAA::SA::AccelerationStatus::AccelerationReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string COMPARTMENTCONFIGREPORTTYPE = "UMAA::SA::CompartmentConfig::CompartmentConfigReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string COMPARTMENTREPORTTYPE = "UMAA::SA::CompartmentStatus::CompartmentReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTCOLREGSCLASSIFICATIONSTATUSREPORTTYPE = "UMAA::SA::ContactCOLREGSClassificationStatus::ContactCOLREGSClassificationStatusReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTREMOVEDREPORTTYPE = "UMAA::SA::ContactStatus::ContactRemovedReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTREPORTTYPE = "UMAA::SA::ContactStatus::ContactReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTREPORTTYPE_CONTACTSSET = "UMAA::SA::ContactStatus::ContactReportType_ContactsSet";

RTI_CONSTEXPR_OR_CONST_STRING std::string CONTACTVISUALCLASSIFICATIONSTATUSREPORTTYPE = "UMAA::SA::ContactVisualClassificationStatus::ContactVisualClassificationStatusReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string CTDREPORTTYPE = "UMAA::SA::CTDStatus::CTDReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string DATETIMEREPORTTYPE = "UMAA::SA::DateTimeStatus::DateTimeReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string ECEFPOSEREPORTTYPE = "UMAA::SA::ECEFPoseStatus::ECEFPoseReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string FEATUREIMAGEREMOVEDREPORTTYPE = "UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string FEATUREIMAGEREPORTTYPE = "UMAA::SA::FeatureImageStatus::FeatureImageReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALDEADRECKONINGCOMMANDREPORTTYPE = "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALDEADRECKONINGCOMMANDSTATUSTYPE = "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandStatusType";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALDEADRECKONINGCOMMANDTYPE = "UMAA::SA::GlobalDeadReckoning::GlobalDeadReckoningCommandType";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALPOSECONFIGREPORTTYPE = "UMAA::SA::GlobalPoseConfig::GlobalPoseConfigReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string GLOBALPOSEREPORTTYPE = "UMAA::SA::GlobalPoseStatus::GlobalPoseReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string IMAGEREMOVEDREPORTTYPE = "UMAA::SA::FeatureImageStatus::FeatureImageRemovedReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string IMAGEREPORTTYPE = "UMAA::SA::ImageStatus::ImageReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALDEADRECKONINGCOMMANDREPORTTYPE = "UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALDEADRECKONINGCOMMANDSTATUSTYPE = "UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandStatusType";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALDEADRECKONINGCOMMANDTYPE = "UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandType";

RTI_CONSTEXPR_OR_CONST_STRING std::string LOCALPOSEREPORTTYPE = "UMAA::SA::LocalPoseStatus::LocalPoseReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string NEDVELOCITYREPORTTYPE = "UMAA::SA::NEDVelocityStatus::NEDVelocityReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string PATHREPORTERSPECSREPORTTYPE = "UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string PATHREPORTERREPORTTYPE = "UMAA::SA::PathReporterStatus::PathReporterReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string RANGECONFIGREPORTTYPE = "UMAA::SA::RangeConfig::RangeConfigReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string RANGESPECSREPORTTYPE = "UMAA::SA::RangeSpecs::RangeSpecsReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string RANGEREPORTTYPE = "UMAA::SA::RangeStatus::RangeReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string SEASTATUSREPORTTYPE = "UMAA::SA::SeaStatus::SeaStatusReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string SPEEDREPORTTYPE = "UMAA::SA::SpeedStatus::SpeedReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string STILLIMAGECONFIGREPORTTYPE = "UMAA::SA::StillImageConfig::StillImageConfigReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string STILLIMAGESPECSREPORTTYPE = "UMAA::SA::StillImageSpecs::StillImageSpecsReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string STILLIMAGEREPORTTYPE = "UMAA::SA::StillImageStatus::StillImageReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string TRANSLATIONALSHIPMOTIONREPORTTYPE = "UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string VEHICLENAVIGATIONMODEREPORTTYPE = "UMAA::SA::VehicleNavigationModeStatus::VehicleNavigationModeReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string VELOCITYREPORTTYPE = "UMAA::SA::VelocityStatus::VelocityReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string WATERCURRENTSTATUSREPORTTYPE = "UMAA::SA::WaterCurrentStatus::WaterCurrentStatusReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string WATERSPACEREPORTTYPE = "UMAA::SA::WaterspaceStatus::WaterspaceReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string WEATHERSTATUSREPORTTYPE = "UMAA::SA::WeatherStatus::WeatherStatusReportType";

RTI_CONSTEXPR_OR_CONST_STRING std::string WINDSTATUSREPORTTYPE = "UMAA::SA::WindStatus::WindStatusReportType";

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

