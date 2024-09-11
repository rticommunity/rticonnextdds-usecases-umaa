

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationReportType_1771252905_hpp
#define OrientationReportType_1771252905_hpp

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
#include "UMAA/Common/Measurement/CovarianceOrientationVelocityNEDType.hpp"
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
#include "UMAA/Common/Measurement/OrientationVel3D.hpp"
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
namespace UMAA {
    namespace SA {
        namespace OrientationStatus {

            static const std::string OrientationReportTypeTopic = "UMAA::SA::OrientationStatus::OrientationReportType";

            class NDDSUSERDllExport OrientationReportType {
              public:

                OrientationReportType();

                OrientationReportType(const ::UMAA::Common::Orientation::Orientation3DNEDType& attitude_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationNEDType >& attitudeCovariance_,const ::dds::core::optional< ::UMAA::Common::Measurement::OrientationVel3D >& attitudeRate_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType >& attitudeRateCovariance_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

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
                ::dds::core::optional< ::UMAA::Common::Measurement::OrientationVel3D >& attitudeRate() noexcept {
                    return m_attitudeRate_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::OrientationVel3D >& attitudeRate() const noexcept {
                    return m_attitudeRate_;
                }

                void attitudeRate(const ::dds::core::optional< ::UMAA::Common::Measurement::OrientationVel3D >& value) {

                    m_attitudeRate_ = value;
                }

                void attitudeRate(::dds::core::optional< ::UMAA::Common::Measurement::OrientationVel3D >&& value) {
                    m_attitudeRate_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType >& attitudeRateCovariance() noexcept {
                    return m_attitudeRateCovariance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType >& attitudeRateCovariance() const noexcept {
                    return m_attitudeRateCovariance_;
                }

                void attitudeRateCovariance(const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType >& value) {

                    m_attitudeRateCovariance_ = value;
                }

                void attitudeRateCovariance(::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType >&& value) {
                    m_attitudeRateCovariance_ = std::move(value);
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
                bool operator == (const OrientationReportType& other_) const;
                bool operator != (const OrientationReportType& other_) const;

                void swap(OrientationReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::Orientation3DNEDType m_attitude_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationNEDType > m_attitudeCovariance_;
                ::dds::core::optional< ::UMAA::Common::Measurement::OrientationVel3D > m_attitudeRate_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType > m_attitudeRateCovariance_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(OrientationReportType& a, OrientationReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const OrientationReportType& sample);

        } // namespace OrientationStatus  
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
        struct topic_type_name< ::UMAA::SA::OrientationStatus::OrientationReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::OrientationStatus::OrientationReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::OrientationStatus::OrientationReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::OrientationStatus::OrientationReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::OrientationStatus::OrientationReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::OrientationStatus::OrientationReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::OrientationStatus::OrientationReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::OrientationStatus::OrientationReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::OrientationStatus::OrientationReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::OrientationStatus::OrientationReportType > {
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

#endif // OrientationReportType_1771252905_hpp

