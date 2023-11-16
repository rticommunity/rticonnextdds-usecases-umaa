

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeSpecsReportType_1677860349_hpp
#define RangeSpecsReportType_1677860349_hpp

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
    namespace SA {
        namespace RangeSpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string RangeSpecsReport_TOPIC = "UMAA::SA::RangeSpecs::RangeSpecsReport";

            class NDDSUSERDllExport RangeSpecsReportType {
              public:

                RangeSpecsReportType();

                RangeSpecsReportType(bool coordinateTransformation_,double maxHorizontalFOVStopAngle_,double maxRange_,double maxUpdateRate_,double maxVerticalFOVStopAngle_,double minHorizontalFOVStartAngle_,double minRange_,double minUpdateRate_,double minVerticalFOVStartAngle_,const std::string& name_,bool stateActive_,bool stateOff_,bool stateStandby_,bool supportedBzip2_,bool supportedDeflated_,bool supportedLZMA_,bool supportedNoCompression_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                bool& coordinateTransformation() noexcept {
                    return m_coordinateTransformation_;
                }

                const bool& coordinateTransformation() const noexcept {
                    return m_coordinateTransformation_;
                }

                void coordinateTransformation(bool value) {

                    m_coordinateTransformation_ = value;
                }

                double& maxHorizontalFOVStopAngle() noexcept {
                    return m_maxHorizontalFOVStopAngle_;
                }

                const double& maxHorizontalFOVStopAngle() const noexcept {
                    return m_maxHorizontalFOVStopAngle_;
                }

                void maxHorizontalFOVStopAngle(double value) {

                    m_maxHorizontalFOVStopAngle_ = value;
                }

                double& maxRange() noexcept {
                    return m_maxRange_;
                }

                const double& maxRange() const noexcept {
                    return m_maxRange_;
                }

                void maxRange(double value) {

                    m_maxRange_ = value;
                }

                double& maxUpdateRate() noexcept {
                    return m_maxUpdateRate_;
                }

                const double& maxUpdateRate() const noexcept {
                    return m_maxUpdateRate_;
                }

                void maxUpdateRate(double value) {

                    m_maxUpdateRate_ = value;
                }

                double& maxVerticalFOVStopAngle() noexcept {
                    return m_maxVerticalFOVStopAngle_;
                }

                const double& maxVerticalFOVStopAngle() const noexcept {
                    return m_maxVerticalFOVStopAngle_;
                }

                void maxVerticalFOVStopAngle(double value) {

                    m_maxVerticalFOVStopAngle_ = value;
                }

                double& minHorizontalFOVStartAngle() noexcept {
                    return m_minHorizontalFOVStartAngle_;
                }

                const double& minHorizontalFOVStartAngle() const noexcept {
                    return m_minHorizontalFOVStartAngle_;
                }

                void minHorizontalFOVStartAngle(double value) {

                    m_minHorizontalFOVStartAngle_ = value;
                }

                double& minRange() noexcept {
                    return m_minRange_;
                }

                const double& minRange() const noexcept {
                    return m_minRange_;
                }

                void minRange(double value) {

                    m_minRange_ = value;
                }

                double& minUpdateRate() noexcept {
                    return m_minUpdateRate_;
                }

                const double& minUpdateRate() const noexcept {
                    return m_minUpdateRate_;
                }

                void minUpdateRate(double value) {

                    m_minUpdateRate_ = value;
                }

                double& minVerticalFOVStartAngle() noexcept {
                    return m_minVerticalFOVStartAngle_;
                }

                const double& minVerticalFOVStartAngle() const noexcept {
                    return m_minVerticalFOVStartAngle_;
                }

                void minVerticalFOVStartAngle(double value) {

                    m_minVerticalFOVStartAngle_ = value;
                }

                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                bool& stateActive() noexcept {
                    return m_stateActive_;
                }

                const bool& stateActive() const noexcept {
                    return m_stateActive_;
                }

                void stateActive(bool value) {

                    m_stateActive_ = value;
                }

                bool& stateOff() noexcept {
                    return m_stateOff_;
                }

                const bool& stateOff() const noexcept {
                    return m_stateOff_;
                }

                void stateOff(bool value) {

                    m_stateOff_ = value;
                }

                bool& stateStandby() noexcept {
                    return m_stateStandby_;
                }

                const bool& stateStandby() const noexcept {
                    return m_stateStandby_;
                }

                void stateStandby(bool value) {

                    m_stateStandby_ = value;
                }

                bool& supportedBzip2() noexcept {
                    return m_supportedBzip2_;
                }

                const bool& supportedBzip2() const noexcept {
                    return m_supportedBzip2_;
                }

                void supportedBzip2(bool value) {

                    m_supportedBzip2_ = value;
                }

                bool& supportedDeflated() noexcept {
                    return m_supportedDeflated_;
                }

                const bool& supportedDeflated() const noexcept {
                    return m_supportedDeflated_;
                }

                void supportedDeflated(bool value) {

                    m_supportedDeflated_ = value;
                }

                bool& supportedLZMA() noexcept {
                    return m_supportedLZMA_;
                }

                const bool& supportedLZMA() const noexcept {
                    return m_supportedLZMA_;
                }

                void supportedLZMA(bool value) {

                    m_supportedLZMA_ = value;
                }

                bool& supportedNoCompression() noexcept {
                    return m_supportedNoCompression_;
                }

                const bool& supportedNoCompression() const noexcept {
                    return m_supportedNoCompression_;
                }

                void supportedNoCompression(bool value) {

                    m_supportedNoCompression_ = value;
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
                ::UMAA::Common::Measurement::DateTime& timeStamp() noexcept {
                    return m_timeStamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeStamp() const noexcept {
                    return m_timeStamp_;
                }

                void timeStamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeStamp_ = value;
                }

                void timeStamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }
                bool operator == (const RangeSpecsReportType& other_) const;
                bool operator != (const RangeSpecsReportType& other_) const;

                void swap(RangeSpecsReportType& other_) noexcept ;

              private:

                bool m_coordinateTransformation_;
                double m_maxHorizontalFOVStopAngle_;
                double m_maxRange_;
                double m_maxUpdateRate_;
                double m_maxVerticalFOVStopAngle_;
                double m_minHorizontalFOVStartAngle_;
                double m_minRange_;
                double m_minUpdateRate_;
                double m_minVerticalFOVStartAngle_;
                std::string m_name_;
                bool m_stateActive_;
                bool m_stateOff_;
                bool m_stateStandby_;
                bool m_supportedBzip2_;
                bool m_supportedDeflated_;
                bool m_supportedLZMA_;
                bool m_supportedNoCompression_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(RangeSpecsReportType& a, RangeSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RangeSpecsReportType& sample);

        } // namespace RangeSpecs  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::RangeSpecs::RangeSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::RangeSpecs::RangeSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::RangeSpecs::RangeSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::RangeSpecs::RangeSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::RangeSpecs::RangeSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::RangeSpecs::RangeSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::RangeSpecs::RangeSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::RangeSpecs::RangeSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::RangeSpecs::RangeSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::RangeSpecs::RangeSpecsReportType > {
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

#endif // RangeSpecsReportType_1677860349_hpp

