

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepObjectiveDetailedStatusType_1958563493_hpp
#define StationkeepObjectiveDetailedStatusType_1958563493_hpp

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
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.hpp"
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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {

            static const std::string StationkeepObjectiveDetailedStatusTypeTopic = "UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType";

            class NDDSUSERDllExport StationkeepObjectiveDetailedStatusType {
              public:

                StationkeepObjectiveDetailedStatusType();

                StationkeepObjectiveDetailedStatusType(const ::dds::core::optional< double >& bearingGuide_,const ::dds::core::optional< double >& bearingMagneticNorth_,const ::dds::core::optional< double >& bearingTrueNorth_,double closingSpeed_,double distanceFromTrack_,bool guideLost_,bool isAreaAchieved_,bool isInPattern_,const ::UMAA::Common::Measurement::DateTime& timePatternAchieved_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timePatternCompleted_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_);

                ::dds::core::optional< double >& bearingGuide() noexcept {
                    return m_bearingGuide_;
                }

                const ::dds::core::optional< double >& bearingGuide() const noexcept {
                    return m_bearingGuide_;
                }

                void bearingGuide(const ::dds::core::optional< double >& value) {

                    m_bearingGuide_ = value;
                }

                void bearingGuide(::dds::core::optional< double >&& value) {
                    m_bearingGuide_ = std::move(value);
                }
                ::dds::core::optional< double >& bearingMagneticNorth() noexcept {
                    return m_bearingMagneticNorth_;
                }

                const ::dds::core::optional< double >& bearingMagneticNorth() const noexcept {
                    return m_bearingMagneticNorth_;
                }

                void bearingMagneticNorth(const ::dds::core::optional< double >& value) {

                    m_bearingMagneticNorth_ = value;
                }

                void bearingMagneticNorth(::dds::core::optional< double >&& value) {
                    m_bearingMagneticNorth_ = std::move(value);
                }
                ::dds::core::optional< double >& bearingTrueNorth() noexcept {
                    return m_bearingTrueNorth_;
                }

                const ::dds::core::optional< double >& bearingTrueNorth() const noexcept {
                    return m_bearingTrueNorth_;
                }

                void bearingTrueNorth(const ::dds::core::optional< double >& value) {

                    m_bearingTrueNorth_ = value;
                }

                void bearingTrueNorth(::dds::core::optional< double >&& value) {
                    m_bearingTrueNorth_ = std::move(value);
                }
                double& closingSpeed() noexcept {
                    return m_closingSpeed_;
                }

                const double& closingSpeed() const noexcept {
                    return m_closingSpeed_;
                }

                void closingSpeed(double value) {

                    m_closingSpeed_ = value;
                }

                double& distanceFromTrack() noexcept {
                    return m_distanceFromTrack_;
                }

                const double& distanceFromTrack() const noexcept {
                    return m_distanceFromTrack_;
                }

                void distanceFromTrack(double value) {

                    m_distanceFromTrack_ = value;
                }

                bool& guideLost() noexcept {
                    return m_guideLost_;
                }

                const bool& guideLost() const noexcept {
                    return m_guideLost_;
                }

                void guideLost(bool value) {

                    m_guideLost_ = value;
                }

                bool& isAreaAchieved() noexcept {
                    return m_isAreaAchieved_;
                }

                const bool& isAreaAchieved() const noexcept {
                    return m_isAreaAchieved_;
                }

                void isAreaAchieved(bool value) {

                    m_isAreaAchieved_ = value;
                }

                bool& isInPattern() noexcept {
                    return m_isInPattern_;
                }

                const bool& isInPattern() const noexcept {
                    return m_isInPattern_;
                }

                void isInPattern(bool value) {

                    m_isInPattern_ = value;
                }

                ::UMAA::Common::Measurement::DateTime& timePatternAchieved() noexcept {
                    return m_timePatternAchieved_;
                }

                const ::UMAA::Common::Measurement::DateTime& timePatternAchieved() const noexcept {
                    return m_timePatternAchieved_;
                }

                void timePatternAchieved(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timePatternAchieved_ = value;
                }

                void timePatternAchieved(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timePatternAchieved_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timePatternCompleted() noexcept {
                    return m_timePatternCompleted_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timePatternCompleted() const noexcept {
                    return m_timePatternCompleted_;
                }

                void timePatternCompleted(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_timePatternCompleted_ = value;
                }

                void timePatternCompleted(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_timePatternCompleted_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() const noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                void specializationReferenceTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_specializationReferenceTimestamp_ = value;
                }

                void specializationReferenceTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_specializationReferenceTimestamp_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() noexcept {
                    return m_specializationReferenceID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() const noexcept {
                    return m_specializationReferenceID_;
                }

                void specializationReferenceID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_specializationReferenceID_ = value;
                }

                void specializationReferenceID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_specializationReferenceID_ = std::move(value);
                }
                bool operator == (const StationkeepObjectiveDetailedStatusType& other_) const;
                bool operator != (const StationkeepObjectiveDetailedStatusType& other_) const;

                void swap(StationkeepObjectiveDetailedStatusType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_bearingGuide_;
                ::dds::core::optional< double > m_bearingMagneticNorth_;
                ::dds::core::optional< double > m_bearingTrueNorth_;
                double m_closingSpeed_;
                double m_distanceFromTrack_;
                bool m_guideLost_;
                bool m_isAreaAchieved_;
                bool m_isInPattern_;
                ::UMAA::Common::Measurement::DateTime m_timePatternAchieved_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_timePatternCompleted_;
                ::UMAA::Common::Measurement::DateTime m_specializationReferenceTimestamp_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationReferenceID_ {};

            };

            inline void swap(StationkeepObjectiveDetailedStatusType& a, StationkeepObjectiveDetailedStatusType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const StationkeepObjectiveDetailedStatusType& sample);

        } // namespace BaseType  
    } // namespace MM  
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
        struct topic_type_name< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::StationkeepObjectiveDetailedStatusType > {
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

#endif // StationkeepObjectiveDetailedStatusType_1958563493_hpp

