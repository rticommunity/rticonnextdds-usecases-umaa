

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepExecutionStatusReportType_1627794735_hpp
#define StationkeepExecutionStatusReportType_1627794735_hpp

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MO/StationkeepState/StationkeepStateType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace StationkeepControl {

            static const std::string StationkeepExecutionStatusReport_TOPIC = "UMAA::MO::StationkeepControl::StationkeepExecutionStatusReport";

            class NDDSUSERDllExport StationkeepExecutionStatusReportType {
              public:
                StationkeepExecutionStatusReportType();

                StationkeepExecutionStatusReportType(const UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& angleType,double bearing,double bearingTolerance,double closingSpeed,bool contactLost,const UMAA::Common::Measurement::NumericGUID& contactTrackID,double range,double rangeTolerance,const UMAA::MO::StationkeepState::StationkeepStateType& stationkeepState,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeStationkeepCompleted,const UMAA::Common::Measurement::DateTime& timeStationskeepAchieved,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                StationkeepExecutionStatusReportType (StationkeepExecutionStatusReportType&&) = default;
                StationkeepExecutionStatusReportType& operator=(StationkeepExecutionStatusReportType&&) = default;
                StationkeepExecutionStatusReportType& operator=(const StationkeepExecutionStatusReportType&) = default;
                StationkeepExecutionStatusReportType(const StationkeepExecutionStatusReportType&) = default;
                #else
                StationkeepExecutionStatusReportType(StationkeepExecutionStatusReportType&& other_) OMG_NOEXCEPT;  
                StationkeepExecutionStatusReportType& operator=(StationkeepExecutionStatusReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& angleType() OMG_NOEXCEPT {
                    return m_angleType_;
                }

                const UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& angleType() const OMG_NOEXCEPT {
                    return m_angleType_;
                }

                void angleType(const UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType& value) {
                    m_angleType_ = value;
                }

                void angleType(UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType&& value) {
                    m_angleType_ = std::move(value);
                }
                double& bearing() OMG_NOEXCEPT {
                    return m_bearing_;
                }

                const double& bearing() const OMG_NOEXCEPT {
                    return m_bearing_;
                }

                void bearing(double value) {
                    m_bearing_ = value;
                }

                double& bearingTolerance() OMG_NOEXCEPT {
                    return m_bearingTolerance_;
                }

                const double& bearingTolerance() const OMG_NOEXCEPT {
                    return m_bearingTolerance_;
                }

                void bearingTolerance(double value) {
                    m_bearingTolerance_ = value;
                }

                double& closingSpeed() OMG_NOEXCEPT {
                    return m_closingSpeed_;
                }

                const double& closingSpeed() const OMG_NOEXCEPT {
                    return m_closingSpeed_;
                }

                void closingSpeed(double value) {
                    m_closingSpeed_ = value;
                }

                bool& contactLost() OMG_NOEXCEPT {
                    return m_contactLost_;
                }

                const bool& contactLost() const OMG_NOEXCEPT {
                    return m_contactLost_;
                }

                void contactLost(bool value) {
                    m_contactLost_ = value;
                }

                UMAA::Common::Measurement::NumericGUID& contactTrackID() OMG_NOEXCEPT {
                    return m_contactTrackID_;
                }

                const UMAA::Common::Measurement::NumericGUID& contactTrackID() const OMG_NOEXCEPT {
                    return m_contactTrackID_;
                }

                void contactTrackID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_contactTrackID_ = value;
                }

                void contactTrackID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_contactTrackID_ = std::move(value);
                }
                double& range() OMG_NOEXCEPT {
                    return m_range_;
                }

                const double& range() const OMG_NOEXCEPT {
                    return m_range_;
                }

                void range(double value) {
                    m_range_ = value;
                }

                double& rangeTolerance() OMG_NOEXCEPT {
                    return m_rangeTolerance_;
                }

                const double& rangeTolerance() const OMG_NOEXCEPT {
                    return m_rangeTolerance_;
                }

                void rangeTolerance(double value) {
                    m_rangeTolerance_ = value;
                }

                UMAA::MO::StationkeepState::StationkeepStateType& stationkeepState() OMG_NOEXCEPT {
                    return m_stationkeepState_;
                }

                const UMAA::MO::StationkeepState::StationkeepStateType& stationkeepState() const OMG_NOEXCEPT {
                    return m_stationkeepState_;
                }

                void stationkeepState(const UMAA::MO::StationkeepState::StationkeepStateType& value) {
                    m_stationkeepState_ = value;
                }

                void stationkeepState(UMAA::MO::StationkeepState::StationkeepStateType&& value) {
                    m_stationkeepState_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeStationkeepCompleted() OMG_NOEXCEPT {
                    return m_timeStationkeepCompleted_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeStationkeepCompleted() const OMG_NOEXCEPT {
                    return m_timeStationkeepCompleted_;
                }

                void timeStationkeepCompleted(const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& value) {
                    m_timeStationkeepCompleted_ = value;
                }

                void timeStationkeepCompleted(::dds::core::optional< UMAA::Common::Measurement::DateTime >&& value) {
                    m_timeStationkeepCompleted_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeStationskeepAchieved() OMG_NOEXCEPT {
                    return m_timeStationskeepAchieved_;
                }

                const UMAA::Common::Measurement::DateTime& timeStationskeepAchieved() const OMG_NOEXCEPT {
                    return m_timeStationskeepAchieved_;
                }

                void timeStationskeepAchieved(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStationskeepAchieved_ = value;
                }

                void timeStationskeepAchieved(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStationskeepAchieved_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& sessionID() OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& sessionID() const OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                void sessionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_sessionID_ = value;
                }

                void sessionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }

                bool operator == (const StationkeepExecutionStatusReportType& other_) const;
                bool operator != (const StationkeepExecutionStatusReportType& other_) const;

                void swap(StationkeepExecutionStatusReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::BearingAngleEnumType::BearingAngleEnumType m_angleType_;
                double m_bearing_;
                double m_bearingTolerance_;
                double m_closingSpeed_;
                bool m_contactLost_;
                UMAA::Common::Measurement::NumericGUID m_contactTrackID_;
                double m_range_;
                double m_rangeTolerance_;
                UMAA::MO::StationkeepState::StationkeepStateType m_stationkeepState_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime > m_timeStationkeepCompleted_;
                UMAA::Common::Measurement::DateTime m_timeStationskeepAchieved_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(StationkeepExecutionStatusReportType& a, StationkeepExecutionStatusReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const StationkeepExecutionStatusReportType& sample);

        } // namespace StationkeepControl  
    } // namespace MO  
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
        struct topic_type_name< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::StationkeepControl::StationkeepExecutionStatusReportType > {
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

#endif // StationkeepExecutionStatusReportType_1627794735_hpp

