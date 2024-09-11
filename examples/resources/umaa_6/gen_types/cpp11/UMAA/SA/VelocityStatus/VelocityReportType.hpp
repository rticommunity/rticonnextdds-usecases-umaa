

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityReportType_169779043_hpp
#define VelocityReportType_169779043_hpp

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
#include "UMAA/Common/Measurement/CovarianceVelocityNEDType.hpp"
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
#include "UMAA/Common/Measurement/Velocity3DPlatformNEDType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace VelocityStatus {

            static const std::string VelocityReportTypeTopic = "UMAA::SA::VelocityStatus::VelocityReportType";

            class NDDSUSERDllExport VelocityReportType {
              public:

                VelocityReportType();

                VelocityReportType(const ::UMAA::Common::Measurement::OrientationVel3D& attitudeRate_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType >& attitudeRateCovariance_,const ::UMAA::Common::Measurement::Velocity3DPlatformNEDType& velocity_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >& velocityCovariance_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::UMAA::Common::Measurement::OrientationVel3D& attitudeRate() noexcept {
                    return m_attitudeRate_;
                }

                const ::UMAA::Common::Measurement::OrientationVel3D& attitudeRate() const noexcept {
                    return m_attitudeRate_;
                }

                void attitudeRate(const ::UMAA::Common::Measurement::OrientationVel3D& value) {

                    m_attitudeRate_ = value;
                }

                void attitudeRate(::UMAA::Common::Measurement::OrientationVel3D&& value) {
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
                ::UMAA::Common::Measurement::Velocity3DPlatformNEDType& velocity() noexcept {
                    return m_velocity_;
                }

                const ::UMAA::Common::Measurement::Velocity3DPlatformNEDType& velocity() const noexcept {
                    return m_velocity_;
                }

                void velocity(const ::UMAA::Common::Measurement::Velocity3DPlatformNEDType& value) {

                    m_velocity_ = value;
                }

                void velocity(::UMAA::Common::Measurement::Velocity3DPlatformNEDType&& value) {
                    m_velocity_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >& velocityCovariance() noexcept {
                    return m_velocityCovariance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >& velocityCovariance() const noexcept {
                    return m_velocityCovariance_;
                }

                void velocityCovariance(const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >& value) {

                    m_velocityCovariance_ = value;
                }

                void velocityCovariance(::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType >&& value) {
                    m_velocityCovariance_ = std::move(value);
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
                bool operator == (const VelocityReportType& other_) const;
                bool operator != (const VelocityReportType& other_) const;

                void swap(VelocityReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::OrientationVel3D m_attitudeRate_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationVelocityNEDType > m_attitudeRateCovariance_;
                ::UMAA::Common::Measurement::Velocity3DPlatformNEDType m_velocity_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceVelocityNEDType > m_velocityCovariance_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(VelocityReportType& a, VelocityReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VelocityReportType& sample);

        } // namespace VelocityStatus  
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
        struct topic_type_name< ::UMAA::SA::VelocityStatus::VelocityReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::VelocityStatus::VelocityReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::VelocityStatus::VelocityReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::VelocityStatus::VelocityReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::VelocityStatus::VelocityReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::VelocityStatus::VelocityReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::VelocityStatus::VelocityReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::VelocityStatus::VelocityReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::VelocityStatus::VelocityReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::VelocityStatus::VelocityReportType > {
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

#endif // VelocityReportType_169779043_hpp

