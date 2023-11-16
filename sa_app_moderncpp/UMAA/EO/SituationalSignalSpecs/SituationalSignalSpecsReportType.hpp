

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SituationalSignalSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SituationalSignalSpecsReportType_39569432_hpp
#define SituationalSignalSpecsReportType_39569432_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

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
        namespace SituationalSignalSpecs {

            static const std::string SituationalSignalSpecsReport_TOPIC = "UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReport";

            class NDDSUSERDllExport SituationalSignalSpecsReportType {
              public:
                SituationalSignalSpecsReportType();

                SituationalSignalSpecsReportType(bool agreeToBeOvertaken,bool alteringCourseToPort,bool alteringCourseToStarboard,bool engagedInMineClearanceOperations,bool inDistressNeedAssistance,bool inSightCollisionWarning,bool maneuverabilityRestricted,bool operatingAsternPropulsion,bool outOfSightCollisionWarning,bool toOvertakeOnPortSide,bool toOvertakeOnstarboardSide,bool towingAndPushingAlongsideOrAhead,bool towingAndPushingBehind,bool vesselAground,bool vesselAnchored,bool vesselBeingPushed,bool vesselBeingTowedAlongside,bool vesselBeingTowedBehind,bool vesselConstrainedByHerDraft,bool vesselLeavingDock,bool vesselNotUnderControl,bool vesselStopped,bool vesselUnderWay,bool visibilityRestricted,bool visibilityRestrictedStopped,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                SituationalSignalSpecsReportType (SituationalSignalSpecsReportType&&) = default;
                SituationalSignalSpecsReportType& operator=(SituationalSignalSpecsReportType&&) = default;
                SituationalSignalSpecsReportType& operator=(const SituationalSignalSpecsReportType&) = default;
                SituationalSignalSpecsReportType(const SituationalSignalSpecsReportType&) = default;
                #else
                SituationalSignalSpecsReportType(SituationalSignalSpecsReportType&& other_) OMG_NOEXCEPT;  
                SituationalSignalSpecsReportType& operator=(SituationalSignalSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& agreeToBeOvertaken() OMG_NOEXCEPT {
                    return m_agreeToBeOvertaken_;
                }

                const bool& agreeToBeOvertaken() const OMG_NOEXCEPT {
                    return m_agreeToBeOvertaken_;
                }

                void agreeToBeOvertaken(bool value) {
                    m_agreeToBeOvertaken_ = value;
                }

                bool& alteringCourseToPort() OMG_NOEXCEPT {
                    return m_alteringCourseToPort_;
                }

                const bool& alteringCourseToPort() const OMG_NOEXCEPT {
                    return m_alteringCourseToPort_;
                }

                void alteringCourseToPort(bool value) {
                    m_alteringCourseToPort_ = value;
                }

                bool& alteringCourseToStarboard() OMG_NOEXCEPT {
                    return m_alteringCourseToStarboard_;
                }

                const bool& alteringCourseToStarboard() const OMG_NOEXCEPT {
                    return m_alteringCourseToStarboard_;
                }

                void alteringCourseToStarboard(bool value) {
                    m_alteringCourseToStarboard_ = value;
                }

                bool& engagedInMineClearanceOperations() OMG_NOEXCEPT {
                    return m_engagedInMineClearanceOperations_;
                }

                const bool& engagedInMineClearanceOperations() const OMG_NOEXCEPT {
                    return m_engagedInMineClearanceOperations_;
                }

                void engagedInMineClearanceOperations(bool value) {
                    m_engagedInMineClearanceOperations_ = value;
                }

                bool& inDistressNeedAssistance() OMG_NOEXCEPT {
                    return m_inDistressNeedAssistance_;
                }

                const bool& inDistressNeedAssistance() const OMG_NOEXCEPT {
                    return m_inDistressNeedAssistance_;
                }

                void inDistressNeedAssistance(bool value) {
                    m_inDistressNeedAssistance_ = value;
                }

                bool& inSightCollisionWarning() OMG_NOEXCEPT {
                    return m_inSightCollisionWarning_;
                }

                const bool& inSightCollisionWarning() const OMG_NOEXCEPT {
                    return m_inSightCollisionWarning_;
                }

                void inSightCollisionWarning(bool value) {
                    m_inSightCollisionWarning_ = value;
                }

                bool& maneuverabilityRestricted() OMG_NOEXCEPT {
                    return m_maneuverabilityRestricted_;
                }

                const bool& maneuverabilityRestricted() const OMG_NOEXCEPT {
                    return m_maneuverabilityRestricted_;
                }

                void maneuverabilityRestricted(bool value) {
                    m_maneuverabilityRestricted_ = value;
                }

                bool& operatingAsternPropulsion() OMG_NOEXCEPT {
                    return m_operatingAsternPropulsion_;
                }

                const bool& operatingAsternPropulsion() const OMG_NOEXCEPT {
                    return m_operatingAsternPropulsion_;
                }

                void operatingAsternPropulsion(bool value) {
                    m_operatingAsternPropulsion_ = value;
                }

                bool& outOfSightCollisionWarning() OMG_NOEXCEPT {
                    return m_outOfSightCollisionWarning_;
                }

                const bool& outOfSightCollisionWarning() const OMG_NOEXCEPT {
                    return m_outOfSightCollisionWarning_;
                }

                void outOfSightCollisionWarning(bool value) {
                    m_outOfSightCollisionWarning_ = value;
                }

                bool& toOvertakeOnPortSide() OMG_NOEXCEPT {
                    return m_toOvertakeOnPortSide_;
                }

                const bool& toOvertakeOnPortSide() const OMG_NOEXCEPT {
                    return m_toOvertakeOnPortSide_;
                }

                void toOvertakeOnPortSide(bool value) {
                    m_toOvertakeOnPortSide_ = value;
                }

                bool& toOvertakeOnstarboardSide() OMG_NOEXCEPT {
                    return m_toOvertakeOnstarboardSide_;
                }

                const bool& toOvertakeOnstarboardSide() const OMG_NOEXCEPT {
                    return m_toOvertakeOnstarboardSide_;
                }

                void toOvertakeOnstarboardSide(bool value) {
                    m_toOvertakeOnstarboardSide_ = value;
                }

                bool& towingAndPushingAlongsideOrAhead() OMG_NOEXCEPT {
                    return m_towingAndPushingAlongsideOrAhead_;
                }

                const bool& towingAndPushingAlongsideOrAhead() const OMG_NOEXCEPT {
                    return m_towingAndPushingAlongsideOrAhead_;
                }

                void towingAndPushingAlongsideOrAhead(bool value) {
                    m_towingAndPushingAlongsideOrAhead_ = value;
                }

                bool& towingAndPushingBehind() OMG_NOEXCEPT {
                    return m_towingAndPushingBehind_;
                }

                const bool& towingAndPushingBehind() const OMG_NOEXCEPT {
                    return m_towingAndPushingBehind_;
                }

                void towingAndPushingBehind(bool value) {
                    m_towingAndPushingBehind_ = value;
                }

                bool& vesselAground() OMG_NOEXCEPT {
                    return m_vesselAground_;
                }

                const bool& vesselAground() const OMG_NOEXCEPT {
                    return m_vesselAground_;
                }

                void vesselAground(bool value) {
                    m_vesselAground_ = value;
                }

                bool& vesselAnchored() OMG_NOEXCEPT {
                    return m_vesselAnchored_;
                }

                const bool& vesselAnchored() const OMG_NOEXCEPT {
                    return m_vesselAnchored_;
                }

                void vesselAnchored(bool value) {
                    m_vesselAnchored_ = value;
                }

                bool& vesselBeingPushed() OMG_NOEXCEPT {
                    return m_vesselBeingPushed_;
                }

                const bool& vesselBeingPushed() const OMG_NOEXCEPT {
                    return m_vesselBeingPushed_;
                }

                void vesselBeingPushed(bool value) {
                    m_vesselBeingPushed_ = value;
                }

                bool& vesselBeingTowedAlongside() OMG_NOEXCEPT {
                    return m_vesselBeingTowedAlongside_;
                }

                const bool& vesselBeingTowedAlongside() const OMG_NOEXCEPT {
                    return m_vesselBeingTowedAlongside_;
                }

                void vesselBeingTowedAlongside(bool value) {
                    m_vesselBeingTowedAlongside_ = value;
                }

                bool& vesselBeingTowedBehind() OMG_NOEXCEPT {
                    return m_vesselBeingTowedBehind_;
                }

                const bool& vesselBeingTowedBehind() const OMG_NOEXCEPT {
                    return m_vesselBeingTowedBehind_;
                }

                void vesselBeingTowedBehind(bool value) {
                    m_vesselBeingTowedBehind_ = value;
                }

                bool& vesselConstrainedByHerDraft() OMG_NOEXCEPT {
                    return m_vesselConstrainedByHerDraft_;
                }

                const bool& vesselConstrainedByHerDraft() const OMG_NOEXCEPT {
                    return m_vesselConstrainedByHerDraft_;
                }

                void vesselConstrainedByHerDraft(bool value) {
                    m_vesselConstrainedByHerDraft_ = value;
                }

                bool& vesselLeavingDock() OMG_NOEXCEPT {
                    return m_vesselLeavingDock_;
                }

                const bool& vesselLeavingDock() const OMG_NOEXCEPT {
                    return m_vesselLeavingDock_;
                }

                void vesselLeavingDock(bool value) {
                    m_vesselLeavingDock_ = value;
                }

                bool& vesselNotUnderControl() OMG_NOEXCEPT {
                    return m_vesselNotUnderControl_;
                }

                const bool& vesselNotUnderControl() const OMG_NOEXCEPT {
                    return m_vesselNotUnderControl_;
                }

                void vesselNotUnderControl(bool value) {
                    m_vesselNotUnderControl_ = value;
                }

                bool& vesselStopped() OMG_NOEXCEPT {
                    return m_vesselStopped_;
                }

                const bool& vesselStopped() const OMG_NOEXCEPT {
                    return m_vesselStopped_;
                }

                void vesselStopped(bool value) {
                    m_vesselStopped_ = value;
                }

                bool& vesselUnderWay() OMG_NOEXCEPT {
                    return m_vesselUnderWay_;
                }

                const bool& vesselUnderWay() const OMG_NOEXCEPT {
                    return m_vesselUnderWay_;
                }

                void vesselUnderWay(bool value) {
                    m_vesselUnderWay_ = value;
                }

                bool& visibilityRestricted() OMG_NOEXCEPT {
                    return m_visibilityRestricted_;
                }

                const bool& visibilityRestricted() const OMG_NOEXCEPT {
                    return m_visibilityRestricted_;
                }

                void visibilityRestricted(bool value) {
                    m_visibilityRestricted_ = value;
                }

                bool& visibilityRestrictedStopped() OMG_NOEXCEPT {
                    return m_visibilityRestrictedStopped_;
                }

                const bool& visibilityRestrictedStopped() const OMG_NOEXCEPT {
                    return m_visibilityRestrictedStopped_;
                }

                void visibilityRestrictedStopped(bool value) {
                    m_visibilityRestrictedStopped_ = value;
                }

                UMAA::Common::Measurement::NumericGUID& source() OMG_NOEXCEPT {
                    return m_source_;
                }

                const UMAA::Common::Measurement::NumericGUID& source() const OMG_NOEXCEPT {
                    return m_source_;
                }

                void source(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_source_ = value;
                }

                void source(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeStamp() OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                const UMAA::Common::Measurement::DateTime& timeStamp() const OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                void timeStamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStamp_ = value;
                }

                void timeStamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }

                bool operator == (const SituationalSignalSpecsReportType& other_) const;
                bool operator != (const SituationalSignalSpecsReportType& other_) const;

                void swap(SituationalSignalSpecsReportType& other_) OMG_NOEXCEPT ;

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
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(SituationalSignalSpecsReportType& a, SituationalSignalSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SituationalSignalSpecsReportType& sample);

        } // namespace SituationalSignalSpecs  
    } // namespace EO  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::SituationalSignalSpecs::SituationalSignalSpecsReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // SituationalSignalSpecsReportType_39569432_hpp

