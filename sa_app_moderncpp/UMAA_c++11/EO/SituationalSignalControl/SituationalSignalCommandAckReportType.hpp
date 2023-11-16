

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SituationalSignalCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SituationalSignalCommandAckReportType_2138419042_hpp
#define SituationalSignalCommandAckReportType_2138419042_hpp

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
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace SituationalSignalControl {

            RTI_CONSTEXPR_OR_CONST_STRING std::string SituationalSignalCommandAckReport_TOPIC = "UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReport";

            class NDDSUSERDllExport SituationalSignalCommandAckReportType {
              public:

                SituationalSignalCommandAckReportType();

                SituationalSignalCommandAckReportType(bool agreeToBeOvertaken_,bool alteringCourseToPort_,bool alteringCourseToStarboard_,bool engagedInMineClearanceOperations_,bool inDistressNeedAssistance_,bool inSightCollisionWarning_,bool maneuverabilityRestricted_,bool operatingAsternPropulsion_,bool outOfSightCollisionWarning_,bool toOvertakeOnPortSide_,bool toOvertakeOnstarboardSide_,bool towingAndPushingAlongsideOrAhead_,bool towingAndPushingBehind_,bool vesselAground_,bool vesselAnchored_,bool vesselBeingPushed_,bool vesselBeingTowedAlongside_,bool vesselBeingTowedBehind_,bool vesselConstrainedByHerDraft_,bool vesselLeavingDock_,bool vesselNotUnderControl_,bool vesselStopped_,bool vesselUnderWay_,bool visibilityRestricted_,bool visibilityRestrictedStopped_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_);

                bool& agreeToBeOvertaken() noexcept {
                    return m_agreeToBeOvertaken_;
                }

                const bool& agreeToBeOvertaken() const noexcept {
                    return m_agreeToBeOvertaken_;
                }

                void agreeToBeOvertaken(bool value) {

                    m_agreeToBeOvertaken_ = value;
                }

                bool& alteringCourseToPort() noexcept {
                    return m_alteringCourseToPort_;
                }

                const bool& alteringCourseToPort() const noexcept {
                    return m_alteringCourseToPort_;
                }

                void alteringCourseToPort(bool value) {

                    m_alteringCourseToPort_ = value;
                }

                bool& alteringCourseToStarboard() noexcept {
                    return m_alteringCourseToStarboard_;
                }

                const bool& alteringCourseToStarboard() const noexcept {
                    return m_alteringCourseToStarboard_;
                }

                void alteringCourseToStarboard(bool value) {

                    m_alteringCourseToStarboard_ = value;
                }

                bool& engagedInMineClearanceOperations() noexcept {
                    return m_engagedInMineClearanceOperations_;
                }

                const bool& engagedInMineClearanceOperations() const noexcept {
                    return m_engagedInMineClearanceOperations_;
                }

                void engagedInMineClearanceOperations(bool value) {

                    m_engagedInMineClearanceOperations_ = value;
                }

                bool& inDistressNeedAssistance() noexcept {
                    return m_inDistressNeedAssistance_;
                }

                const bool& inDistressNeedAssistance() const noexcept {
                    return m_inDistressNeedAssistance_;
                }

                void inDistressNeedAssistance(bool value) {

                    m_inDistressNeedAssistance_ = value;
                }

                bool& inSightCollisionWarning() noexcept {
                    return m_inSightCollisionWarning_;
                }

                const bool& inSightCollisionWarning() const noexcept {
                    return m_inSightCollisionWarning_;
                }

                void inSightCollisionWarning(bool value) {

                    m_inSightCollisionWarning_ = value;
                }

                bool& maneuverabilityRestricted() noexcept {
                    return m_maneuverabilityRestricted_;
                }

                const bool& maneuverabilityRestricted() const noexcept {
                    return m_maneuverabilityRestricted_;
                }

                void maneuverabilityRestricted(bool value) {

                    m_maneuverabilityRestricted_ = value;
                }

                bool& operatingAsternPropulsion() noexcept {
                    return m_operatingAsternPropulsion_;
                }

                const bool& operatingAsternPropulsion() const noexcept {
                    return m_operatingAsternPropulsion_;
                }

                void operatingAsternPropulsion(bool value) {

                    m_operatingAsternPropulsion_ = value;
                }

                bool& outOfSightCollisionWarning() noexcept {
                    return m_outOfSightCollisionWarning_;
                }

                const bool& outOfSightCollisionWarning() const noexcept {
                    return m_outOfSightCollisionWarning_;
                }

                void outOfSightCollisionWarning(bool value) {

                    m_outOfSightCollisionWarning_ = value;
                }

                bool& toOvertakeOnPortSide() noexcept {
                    return m_toOvertakeOnPortSide_;
                }

                const bool& toOvertakeOnPortSide() const noexcept {
                    return m_toOvertakeOnPortSide_;
                }

                void toOvertakeOnPortSide(bool value) {

                    m_toOvertakeOnPortSide_ = value;
                }

                bool& toOvertakeOnstarboardSide() noexcept {
                    return m_toOvertakeOnstarboardSide_;
                }

                const bool& toOvertakeOnstarboardSide() const noexcept {
                    return m_toOvertakeOnstarboardSide_;
                }

                void toOvertakeOnstarboardSide(bool value) {

                    m_toOvertakeOnstarboardSide_ = value;
                }

                bool& towingAndPushingAlongsideOrAhead() noexcept {
                    return m_towingAndPushingAlongsideOrAhead_;
                }

                const bool& towingAndPushingAlongsideOrAhead() const noexcept {
                    return m_towingAndPushingAlongsideOrAhead_;
                }

                void towingAndPushingAlongsideOrAhead(bool value) {

                    m_towingAndPushingAlongsideOrAhead_ = value;
                }

                bool& towingAndPushingBehind() noexcept {
                    return m_towingAndPushingBehind_;
                }

                const bool& towingAndPushingBehind() const noexcept {
                    return m_towingAndPushingBehind_;
                }

                void towingAndPushingBehind(bool value) {

                    m_towingAndPushingBehind_ = value;
                }

                bool& vesselAground() noexcept {
                    return m_vesselAground_;
                }

                const bool& vesselAground() const noexcept {
                    return m_vesselAground_;
                }

                void vesselAground(bool value) {

                    m_vesselAground_ = value;
                }

                bool& vesselAnchored() noexcept {
                    return m_vesselAnchored_;
                }

                const bool& vesselAnchored() const noexcept {
                    return m_vesselAnchored_;
                }

                void vesselAnchored(bool value) {

                    m_vesselAnchored_ = value;
                }

                bool& vesselBeingPushed() noexcept {
                    return m_vesselBeingPushed_;
                }

                const bool& vesselBeingPushed() const noexcept {
                    return m_vesselBeingPushed_;
                }

                void vesselBeingPushed(bool value) {

                    m_vesselBeingPushed_ = value;
                }

                bool& vesselBeingTowedAlongside() noexcept {
                    return m_vesselBeingTowedAlongside_;
                }

                const bool& vesselBeingTowedAlongside() const noexcept {
                    return m_vesselBeingTowedAlongside_;
                }

                void vesselBeingTowedAlongside(bool value) {

                    m_vesselBeingTowedAlongside_ = value;
                }

                bool& vesselBeingTowedBehind() noexcept {
                    return m_vesselBeingTowedBehind_;
                }

                const bool& vesselBeingTowedBehind() const noexcept {
                    return m_vesselBeingTowedBehind_;
                }

                void vesselBeingTowedBehind(bool value) {

                    m_vesselBeingTowedBehind_ = value;
                }

                bool& vesselConstrainedByHerDraft() noexcept {
                    return m_vesselConstrainedByHerDraft_;
                }

                const bool& vesselConstrainedByHerDraft() const noexcept {
                    return m_vesselConstrainedByHerDraft_;
                }

                void vesselConstrainedByHerDraft(bool value) {

                    m_vesselConstrainedByHerDraft_ = value;
                }

                bool& vesselLeavingDock() noexcept {
                    return m_vesselLeavingDock_;
                }

                const bool& vesselLeavingDock() const noexcept {
                    return m_vesselLeavingDock_;
                }

                void vesselLeavingDock(bool value) {

                    m_vesselLeavingDock_ = value;
                }

                bool& vesselNotUnderControl() noexcept {
                    return m_vesselNotUnderControl_;
                }

                const bool& vesselNotUnderControl() const noexcept {
                    return m_vesselNotUnderControl_;
                }

                void vesselNotUnderControl(bool value) {

                    m_vesselNotUnderControl_ = value;
                }

                bool& vesselStopped() noexcept {
                    return m_vesselStopped_;
                }

                const bool& vesselStopped() const noexcept {
                    return m_vesselStopped_;
                }

                void vesselStopped(bool value) {

                    m_vesselStopped_ = value;
                }

                bool& vesselUnderWay() noexcept {
                    return m_vesselUnderWay_;
                }

                const bool& vesselUnderWay() const noexcept {
                    return m_vesselUnderWay_;
                }

                void vesselUnderWay(bool value) {

                    m_vesselUnderWay_ = value;
                }

                bool& visibilityRestricted() noexcept {
                    return m_visibilityRestricted_;
                }

                const bool& visibilityRestricted() const noexcept {
                    return m_visibilityRestricted_;
                }

                void visibilityRestricted(bool value) {

                    m_visibilityRestricted_ = value;
                }

                bool& visibilityRestrictedStopped() noexcept {
                    return m_visibilityRestrictedStopped_;
                }

                const bool& visibilityRestrictedStopped() const noexcept {
                    return m_visibilityRestrictedStopped_;
                }

                void visibilityRestrictedStopped(bool value) {

                    m_visibilityRestrictedStopped_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& sessionID() noexcept {
                    return m_sessionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& sessionID() const noexcept {
                    return m_sessionID_;
                }

                void sessionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_sessionID_ = value;
                }

                void sessionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }
                bool operator == (const SituationalSignalCommandAckReportType& other_) const;
                bool operator != (const SituationalSignalCommandAckReportType& other_) const;

                void swap(SituationalSignalCommandAckReportType& other_) noexcept ;

              private:

                bool m_agreeToBeOvertaken_;
                bool m_alteringCourseToPort_;
                bool m_alteringCourseToStarboard_;
                bool m_engagedInMineClearanceOperations_;
                bool m_inDistressNeedAssistance_;
                bool m_inSightCollisionWarning_;
                bool m_maneuverabilityRestricted_;
                bool m_operatingAsternPropulsion_;
                bool m_outOfSightCollisionWarning_;
                bool m_toOvertakeOnPortSide_;
                bool m_toOvertakeOnstarboardSide_;
                bool m_towingAndPushingAlongsideOrAhead_;
                bool m_towingAndPushingBehind_;
                bool m_vesselAground_;
                bool m_vesselAnchored_;
                bool m_vesselBeingPushed_;
                bool m_vesselBeingTowedAlongside_;
                bool m_vesselBeingTowedBehind_;
                bool m_vesselConstrainedByHerDraft_;
                bool m_vesselLeavingDock_;
                bool m_vesselNotUnderControl_;
                bool m_vesselStopped_;
                bool m_vesselUnderWay_;
                bool m_visibilityRestricted_;
                bool m_visibilityRestrictedStopped_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};

            };

            inline void swap(SituationalSignalCommandAckReportType& a, SituationalSignalCommandAckReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SituationalSignalCommandAckReportType& sample);

        } // namespace SituationalSignalControl  
    } // namespace EO  
} // namespace UMAA  

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

        template<>
        struct topic_type_name< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::SituationalSignalControl::SituationalSignalCommandAckReportType > {
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

#endif // SituationalSignalCommandAckReportType_2138419042_hpp

