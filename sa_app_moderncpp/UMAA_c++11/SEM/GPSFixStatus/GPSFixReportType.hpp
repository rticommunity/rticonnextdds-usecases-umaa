

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixReportType_593219773_hpp
#define GPSFixReportType_593219773_hpp

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
#include "UMAA/Common/Measurement/Altitude_MSL.hpp"
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
#include "UMAA/Common/Measurement/Position2DTime.hpp"
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
#include "UMAA/Common/Measurement/Velocity3D_PlatformNED.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace GPSFixStatus {

            RTI_CONSTEXPR_OR_CONST_STRING std::string GPSFixReport_TOPIC = "UMAA::SEM::GPSFixStatus::GPSFixReport";

            class NDDSUSERDllExport GPSFixReportType {
              public:

                GPSFixReportType();

                GPSFixReportType(const ::UMAA::Common::Measurement::Altitude_MSL& altitudeMSL_,const ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType& GPSFixCommandStatus_,bool GPSLatLongValid_,double magneticVariation_,const ::UMAA::Common::Measurement::Position2DTime& position2DWithTime_,double SOG_,double trueCourse_,const ::UMAA::Common::Measurement::Velocity3D_PlatformNED& velocity_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                ::UMAA::Common::Measurement::Altitude_MSL& altitudeMSL() noexcept {
                    return m_altitudeMSL_;
                }

                const ::UMAA::Common::Measurement::Altitude_MSL& altitudeMSL() const noexcept {
                    return m_altitudeMSL_;
                }

                void altitudeMSL(const ::UMAA::Common::Measurement::Altitude_MSL& value) {

                    m_altitudeMSL_ = value;
                }

                void altitudeMSL(::UMAA::Common::Measurement::Altitude_MSL&& value) {
                    m_altitudeMSL_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType& GPSFixCommandStatus() noexcept {
                    return m_GPSFixCommandStatus_;
                }

                const ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType& GPSFixCommandStatus() const noexcept {
                    return m_GPSFixCommandStatus_;
                }

                void GPSFixCommandStatus(const ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType& value) {

                    m_GPSFixCommandStatus_ = value;
                }

                void GPSFixCommandStatus(::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType&& value) {
                    m_GPSFixCommandStatus_ = std::move(value);
                }
                bool& GPSLatLongValid() noexcept {
                    return m_GPSLatLongValid_;
                }

                const bool& GPSLatLongValid() const noexcept {
                    return m_GPSLatLongValid_;
                }

                void GPSLatLongValid(bool value) {

                    m_GPSLatLongValid_ = value;
                }

                double& magneticVariation() noexcept {
                    return m_magneticVariation_;
                }

                const double& magneticVariation() const noexcept {
                    return m_magneticVariation_;
                }

                void magneticVariation(double value) {

                    m_magneticVariation_ = value;
                }

                ::UMAA::Common::Measurement::Position2DTime& position2DWithTime() noexcept {
                    return m_position2DWithTime_;
                }

                const ::UMAA::Common::Measurement::Position2DTime& position2DWithTime() const noexcept {
                    return m_position2DWithTime_;
                }

                void position2DWithTime(const ::UMAA::Common::Measurement::Position2DTime& value) {

                    m_position2DWithTime_ = value;
                }

                void position2DWithTime(::UMAA::Common::Measurement::Position2DTime&& value) {
                    m_position2DWithTime_ = std::move(value);
                }
                double& SOG() noexcept {
                    return m_SOG_;
                }

                const double& SOG() const noexcept {
                    return m_SOG_;
                }

                void SOG(double value) {

                    m_SOG_ = value;
                }

                double& trueCourse() noexcept {
                    return m_trueCourse_;
                }

                const double& trueCourse() const noexcept {
                    return m_trueCourse_;
                }

                void trueCourse(double value) {

                    m_trueCourse_ = value;
                }

                ::UMAA::Common::Measurement::Velocity3D_PlatformNED& velocity() noexcept {
                    return m_velocity_;
                }

                const ::UMAA::Common::Measurement::Velocity3D_PlatformNED& velocity() const noexcept {
                    return m_velocity_;
                }

                void velocity(const ::UMAA::Common::Measurement::Velocity3D_PlatformNED& value) {

                    m_velocity_ = value;
                }

                void velocity(::UMAA::Common::Measurement::Velocity3D_PlatformNED&& value) {
                    m_velocity_ = std::move(value);
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
                bool operator == (const GPSFixReportType& other_) const;
                bool operator != (const GPSFixReportType& other_) const;

                void swap(GPSFixReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::Altitude_MSL m_altitudeMSL_;
                ::UMAA::Common::MaritimeEnumeration::GPSFixEnumType::GPSFixEnumType m_GPSFixCommandStatus_;
                bool m_GPSLatLongValid_;
                double m_magneticVariation_;
                ::UMAA::Common::Measurement::Position2DTime m_position2DWithTime_;
                double m_SOG_;
                double m_trueCourse_;
                ::UMAA::Common::Measurement::Velocity3D_PlatformNED m_velocity_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(GPSFixReportType& a, GPSFixReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GPSFixReportType& sample);

        } // namespace GPSFixStatus  
    } // namespace SEM  
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
        struct topic_type_name< ::UMAA::SEM::GPSFixStatus::GPSFixReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::GPSFixStatus::GPSFixReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::GPSFixStatus::GPSFixReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::GPSFixStatus::GPSFixReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::GPSFixStatus::GPSFixReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::GPSFixStatus::GPSFixReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::GPSFixStatus::GPSFixReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::GPSFixStatus::GPSFixReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::GPSFixStatus::GPSFixReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::GPSFixStatus::GPSFixReportType > {
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

#endif // GPSFixReportType_593219773_hpp

