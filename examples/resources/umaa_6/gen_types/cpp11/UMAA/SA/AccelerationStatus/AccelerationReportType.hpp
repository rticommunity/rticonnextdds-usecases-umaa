

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AccelerationReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AccelerationReportType_494470761_hpp
#define AccelerationReportType_494470761_hpp

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
#include "UMAA/Common/Measurement/Acceleration3DPlatformXYZ.hpp"
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
#include "UMAA/Common/Measurement/CovarianceAccelerationPlatformXYZType.hpp"
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
#include "UMAA/Common/Measurement/CovarianceOrientationAccelerationPlatformXYZType.hpp"
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
#include "UMAA/Common/Orientation/OrientationAcceleration3DPlatformXYZ.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace AccelerationStatus {

            static const std::string AccelerationReportTypeTopic = "UMAA::SA::AccelerationStatus::AccelerationReportType";

            class NDDSUSERDllExport AccelerationReportType {
              public:

                AccelerationReportType();

                AccelerationReportType(const ::UMAA::Common::Measurement::Acceleration3DPlatformXYZ& acceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >& accelerationCovariance_,const ::dds::core::optional< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >& rotationalAcceleration_,const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >& rotationalAccelerationCovariance_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::UMAA::Common::Measurement::Acceleration3DPlatformXYZ& acceleration() noexcept {
                    return m_acceleration_;
                }

                const ::UMAA::Common::Measurement::Acceleration3DPlatformXYZ& acceleration() const noexcept {
                    return m_acceleration_;
                }

                void acceleration(const ::UMAA::Common::Measurement::Acceleration3DPlatformXYZ& value) {

                    m_acceleration_ = value;
                }

                void acceleration(::UMAA::Common::Measurement::Acceleration3DPlatformXYZ&& value) {
                    m_acceleration_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >& accelerationCovariance() noexcept {
                    return m_accelerationCovariance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >& accelerationCovariance() const noexcept {
                    return m_accelerationCovariance_;
                }

                void accelerationCovariance(const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >& value) {

                    m_accelerationCovariance_ = value;
                }

                void accelerationCovariance(::dds::core::optional< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType >&& value) {
                    m_accelerationCovariance_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >& rotationalAcceleration() noexcept {
                    return m_rotationalAcceleration_;
                }

                const ::dds::core::optional< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >& rotationalAcceleration() const noexcept {
                    return m_rotationalAcceleration_;
                }

                void rotationalAcceleration(const ::dds::core::optional< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >& value) {

                    m_rotationalAcceleration_ = value;
                }

                void rotationalAcceleration(::dds::core::optional< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ >&& value) {
                    m_rotationalAcceleration_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >& rotationalAccelerationCovariance() noexcept {
                    return m_rotationalAccelerationCovariance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >& rotationalAccelerationCovariance() const noexcept {
                    return m_rotationalAccelerationCovariance_;
                }

                void rotationalAccelerationCovariance(const ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >& value) {

                    m_rotationalAccelerationCovariance_ = value;
                }

                void rotationalAccelerationCovariance(::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType >&& value) {
                    m_rotationalAccelerationCovariance_ = std::move(value);
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
                bool operator == (const AccelerationReportType& other_) const;
                bool operator != (const AccelerationReportType& other_) const;

                void swap(AccelerationReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::Acceleration3DPlatformXYZ m_acceleration_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceAccelerationPlatformXYZType > m_accelerationCovariance_;
                ::dds::core::optional< ::UMAA::Common::Orientation::OrientationAcceleration3DPlatformXYZ > m_rotationalAcceleration_;
                ::dds::core::optional< ::UMAA::Common::Measurement::CovarianceOrientationAccelerationPlatformXYZType > m_rotationalAccelerationCovariance_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(AccelerationReportType& a, AccelerationReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const AccelerationReportType& sample);

        } // namespace AccelerationStatus  
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
        struct topic_type_name< ::UMAA::SA::AccelerationStatus::AccelerationReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::AccelerationStatus::AccelerationReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::AccelerationStatus::AccelerationReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::AccelerationStatus::AccelerationReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::AccelerationStatus::AccelerationReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::AccelerationStatus::AccelerationReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::AccelerationStatus::AccelerationReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::AccelerationStatus::AccelerationReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::AccelerationStatus::AccelerationReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::AccelerationStatus::AccelerationReportType > {
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

#endif // AccelerationReportType_494470761_hpp

