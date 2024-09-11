

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalPoseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalPoseReportType_1111239035_hpp
#define GlobalPoseReportType_1111239035_hpp

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
#include "UMAA/Common/IdentifierType.hpp"
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
#include "UMAA/Common/Measurement/CovarianceOrientationNEDType.hpp"
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
#include "UMAA/Common/Measurement/CovariancePositionNEDType.hpp"
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
#include "UMAA/Common/Measurement/GeoPosition2D.hpp"
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
#include "UMAA/Common/Orientation/Orientation3DNEDType.hpp"
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
        namespace GlobalPoseStatus {

            static const std::string GlobalPoseReportTypeTopic = "UMAA::SA::GlobalPoseStatus::GlobalPoseReportType";

            class NDDSUSERDllExport GlobalPoseReportType {
              public:

                GlobalPoseReportType();

                GlobalPoseReportType(const ::dds::core::optional< double >& altitude_,const ::dds::core::optional< double >& altitudeAGL_,const ::dds::core::optional< double >& altitudeASF_,const ::dds::core::optional< double >& altitudeGeodetic_,const ::UMAA::Common::Orientation::Orientation3DNEDType& attitude_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationNEDType >& attitudeCovariance_,double course_,const ::dds::core::optional< double >& depth_,const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType& navigationSolution_,const ::UMAA::Common::Measurement::GeoPosition2D& position_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& positionCovariance_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< double >& altitude() noexcept {
                    return m_altitude_;
                }

                const ::dds::core::optional< double >& altitude() const noexcept {
                    return m_altitude_;
                }

                void altitude(const ::dds::core::optional< double >& value) {

                    m_altitude_ = value;
                }

                void altitude(::dds::core::optional< double >&& value) {
                    m_altitude_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeAGL() noexcept {
                    return m_altitudeAGL_;
                }

                const ::dds::core::optional< double >& altitudeAGL() const noexcept {
                    return m_altitudeAGL_;
                }

                void altitudeAGL(const ::dds::core::optional< double >& value) {

                    m_altitudeAGL_ = value;
                }

                void altitudeAGL(::dds::core::optional< double >&& value) {
                    m_altitudeAGL_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeASF() noexcept {
                    return m_altitudeASF_;
                }

                const ::dds::core::optional< double >& altitudeASF() const noexcept {
                    return m_altitudeASF_;
                }

                void altitudeASF(const ::dds::core::optional< double >& value) {

                    m_altitudeASF_ = value;
                }

                void altitudeASF(::dds::core::optional< double >&& value) {
                    m_altitudeASF_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeGeodetic() noexcept {
                    return m_altitudeGeodetic_;
                }

                const ::dds::core::optional< double >& altitudeGeodetic() const noexcept {
                    return m_altitudeGeodetic_;
                }

                void altitudeGeodetic(const ::dds::core::optional< double >& value) {

                    m_altitudeGeodetic_ = value;
                }

                void altitudeGeodetic(::dds::core::optional< double >&& value) {
                    m_altitudeGeodetic_ = std::move(value);
                }
                ::UMAA::Common::Orientation::Orientation3DNEDType& attitude() noexcept {
                    return m_attitude_;
                }

                const ::UMAA::Common::Orientation::Orientation3DNEDType& attitude() const noexcept {
                    return m_attitude_;
                }

                void attitude(const ::UMAA::Common::Orientation::Orientation3DNEDType& value) {

                    m_attitude_ = value;
                }

                void attitude(::UMAA::Common::Orientation::Orientation3DNEDType&& value) {
                    m_attitude_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationNEDType >& attitudeCovariance() noexcept {
                    return m_attitudeCovariance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationNEDType >& attitudeCovariance() const noexcept {
                    return m_attitudeCovariance_;
                }

                void attitudeCovariance(const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationNEDType >& value) {

                    m_attitudeCovariance_ = value;
                }

                void attitudeCovariance(::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationNEDType >&& value) {
                    m_attitudeCovariance_ = std::move(value);
                }
                double& course() noexcept {
                    return m_course_;
                }

                const double& course() const noexcept {
                    return m_course_;
                }

                void course(double value) {

                    m_course_ = value;
                }

                ::dds::core::optional< double >& depth() noexcept {
                    return m_depth_;
                }

                const ::dds::core::optional< double >& depth() const noexcept {
                    return m_depth_;
                }

                void depth(const ::dds::core::optional< double >& value) {

                    m_depth_ = value;
                }

                void depth(::dds::core::optional< double >&& value) {
                    m_depth_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType& navigationSolution() noexcept {
                    return m_navigationSolution_;
                }

                const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType& navigationSolution() const noexcept {
                    return m_navigationSolution_;
                }

                void navigationSolution(const ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType& value) {

                    m_navigationSolution_ = value;
                }

                void navigationSolution(::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType&& value) {
                    m_navigationSolution_ = std::move(value);
                }
                ::UMAA::Common::Measurement::GeoPosition2D& position() noexcept {
                    return m_position_;
                }

                const ::UMAA::Common::Measurement::GeoPosition2D& position() const noexcept {
                    return m_position_;
                }

                void position(const ::UMAA::Common::Measurement::GeoPosition2D& value) {

                    m_position_ = value;
                }

                void position(::UMAA::Common::Measurement::GeoPosition2D&& value) {
                    m_position_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& positionCovariance() noexcept {
                    return m_positionCovariance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& positionCovariance() const noexcept {
                    return m_positionCovariance_;
                }

                void positionCovariance(const ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >& value) {

                    m_positionCovariance_ = value;
                }

                void positionCovariance(::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType >&& value) {
                    m_positionCovariance_ = std::move(value);
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
                ::UMAA::Common::IdentifierType& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::IdentifierType& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::IdentifierType& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::IdentifierType&& value) {
                    m_source_ = std::move(value);
                }
                bool operator == (const GlobalPoseReportType& other_) const;
                bool operator != (const GlobalPoseReportType& other_) const;

                void swap(GlobalPoseReportType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_altitude_;
                ::dds::core::optional< double > m_altitudeAGL_;
                ::dds::core::optional< double > m_altitudeASF_;
                ::dds::core::optional< double > m_altitudeGeodetic_;
                ::UMAA::Common::Orientation::Orientation3DNEDType m_attitude_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationNEDType > m_attitudeCovariance_;
                double m_course_;
                ::dds::core::optional< double > m_depth_;
                ::UMAA::Common::MaritimeEnumeration::NavigationSolutionEnumModule::NavigationSolutionEnumType m_navigationSolution_;
                ::UMAA::Common::Measurement::GeoPosition2D m_position_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovariancePositionNEDType > m_positionCovariance_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(GlobalPoseReportType& a, GlobalPoseReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalPoseReportType& sample);

        } // namespace GlobalPoseStatus  
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
        struct topic_type_name< ::UMAA::SA::GlobalPoseStatus::GlobalPoseReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::GlobalPoseStatus::GlobalPoseReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::GlobalPoseStatus::GlobalPoseReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::GlobalPoseStatus::GlobalPoseReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::GlobalPoseStatus::GlobalPoseReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::GlobalPoseStatus::GlobalPoseReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::GlobalPoseStatus::GlobalPoseReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::GlobalPoseStatus::GlobalPoseReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::GlobalPoseStatus::GlobalPoseReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::GlobalPoseStatus::GlobalPoseReportType > {
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

#endif // GlobalPoseReportType_1111239035_hpp

