

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AccelerationReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AccelerationReportType_494470366_hpp
#define AccelerationReportType_494470366_hpp

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
#include "UMAA/Common/Measurement/Acceleration3D_PlatformXYZ.hpp"
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
#include "UMAA/Common/Measurement/CovarianceNEDAccelerationAccelerationType.hpp"
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
#include "UMAA/Common/Measurement/CovarianceOrientationAccelerationAccelerationType.hpp"
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
#include "UMAA/Common/Measurement/OrientationAcceleration3D.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace AccelerationStatus {

            static const std::string AccelerationReport_TOPIC = "UMAA::SA::AccelerationStatus::AccelerationReport";

            class NDDSUSERDllExport AccelerationReportType {
              public:
                AccelerationReportType();

                AccelerationReportType(const UMAA::Common::Measurement::Acceleration3D_PlatformXYZ& acceleration,const UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& accelerationCovariance,const UMAA::Common::Measurement::OrientationAcceleration3D& attitudeAcceleration,const UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& rotationalAccelerationCovariance,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                AccelerationReportType (AccelerationReportType&&) = default;
                AccelerationReportType& operator=(AccelerationReportType&&) = default;
                AccelerationReportType& operator=(const AccelerationReportType&) = default;
                AccelerationReportType(const AccelerationReportType&) = default;
                #else
                AccelerationReportType(AccelerationReportType&& other_) OMG_NOEXCEPT;  
                AccelerationReportType& operator=(AccelerationReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::Acceleration3D_PlatformXYZ& acceleration() OMG_NOEXCEPT {
                    return m_acceleration_;
                }

                const UMAA::Common::Measurement::Acceleration3D_PlatformXYZ& acceleration() const OMG_NOEXCEPT {
                    return m_acceleration_;
                }

                void acceleration(const UMAA::Common::Measurement::Acceleration3D_PlatformXYZ& value) {
                    m_acceleration_ = value;
                }

                void acceleration(UMAA::Common::Measurement::Acceleration3D_PlatformXYZ&& value) {
                    m_acceleration_ = std::move(value);
                }
                UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& accelerationCovariance() OMG_NOEXCEPT {
                    return m_accelerationCovariance_;
                }

                const UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& accelerationCovariance() const OMG_NOEXCEPT {
                    return m_accelerationCovariance_;
                }

                void accelerationCovariance(const UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType& value) {
                    m_accelerationCovariance_ = value;
                }

                void accelerationCovariance(UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType&& value) {
                    m_accelerationCovariance_ = std::move(value);
                }
                UMAA::Common::Measurement::OrientationAcceleration3D& attitudeAcceleration() OMG_NOEXCEPT {
                    return m_attitudeAcceleration_;
                }

                const UMAA::Common::Measurement::OrientationAcceleration3D& attitudeAcceleration() const OMG_NOEXCEPT {
                    return m_attitudeAcceleration_;
                }

                void attitudeAcceleration(const UMAA::Common::Measurement::OrientationAcceleration3D& value) {
                    m_attitudeAcceleration_ = value;
                }

                void attitudeAcceleration(UMAA::Common::Measurement::OrientationAcceleration3D&& value) {
                    m_attitudeAcceleration_ = std::move(value);
                }
                UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& rotationalAccelerationCovariance() OMG_NOEXCEPT {
                    return m_rotationalAccelerationCovariance_;
                }

                const UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& rotationalAccelerationCovariance() const OMG_NOEXCEPT {
                    return m_rotationalAccelerationCovariance_;
                }

                void rotationalAccelerationCovariance(const UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType& value) {
                    m_rotationalAccelerationCovariance_ = value;
                }

                void rotationalAccelerationCovariance(UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType&& value) {
                    m_rotationalAccelerationCovariance_ = std::move(value);
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

                bool operator == (const AccelerationReportType& other_) const;
                bool operator != (const AccelerationReportType& other_) const;

                void swap(AccelerationReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::Acceleration3D_PlatformXYZ m_acceleration_;
                UMAA::Common::Measurement::CovarianceNEDAccelerationAccelerationType m_accelerationCovariance_;
                UMAA::Common::Measurement::OrientationAcceleration3D m_attitudeAcceleration_;
                UMAA::Common::Measurement::CovarianceOrientationAccelerationAccelerationType m_rotationalAccelerationCovariance_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(AccelerationReportType& a, AccelerationReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const AccelerationReportType& sample);

        } // namespace AccelerationStatus  
    } // namespace SA  
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
        struct topic_type_name< UMAA::SA::AccelerationStatus::AccelerationReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::AccelerationStatus::AccelerationReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::AccelerationStatus::AccelerationReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::AccelerationStatus::AccelerationReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::AccelerationStatus::AccelerationReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::AccelerationStatus::AccelerationReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::AccelerationStatus::AccelerationReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::AccelerationStatus::AccelerationReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::AccelerationStatus::AccelerationReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::AccelerationStatus::AccelerationReportType > {
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

#endif // AccelerationReportType_494470366_hpp

