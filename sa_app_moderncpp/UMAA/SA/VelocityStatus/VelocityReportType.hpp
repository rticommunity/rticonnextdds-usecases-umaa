

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityReportType_169778901_hpp
#define VelocityReportType_169778901_hpp

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
#include "UMAA/Common/Measurement/CovarianceOrientationType.hpp"
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
#include "UMAA/Common/Measurement/CovarianceVelocityVelocityType.hpp"
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
#include "UMAA/Common/Measurement/OrientationVelocity3D.hpp"
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
    namespace SA {
        namespace VelocityStatus {

            static const std::string VelocityReport_TOPIC = "UMAA::SA::VelocityStatus::VelocityReport";

            class NDDSUSERDllExport VelocityReportType {
              public:
                VelocityReportType();

                VelocityReportType(const UMAA::Common::Measurement::OrientationVelocity3D& attitudeRate,const ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >& attitudeRateCovariance,const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType >& mode,const UMAA::Common::Measurement::Velocity3D_PlatformNED& velocity,const ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >& velocityCovariance,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                VelocityReportType (VelocityReportType&&) = default;
                VelocityReportType& operator=(VelocityReportType&&) = default;
                VelocityReportType& operator=(const VelocityReportType&) = default;
                VelocityReportType(const VelocityReportType&) = default;
                #else
                VelocityReportType(VelocityReportType&& other_) OMG_NOEXCEPT;  
                VelocityReportType& operator=(VelocityReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::OrientationVelocity3D& attitudeRate() OMG_NOEXCEPT {
                    return m_attitudeRate_;
                }

                const UMAA::Common::Measurement::OrientationVelocity3D& attitudeRate() const OMG_NOEXCEPT {
                    return m_attitudeRate_;
                }

                void attitudeRate(const UMAA::Common::Measurement::OrientationVelocity3D& value) {
                    m_attitudeRate_ = value;
                }

                void attitudeRate(UMAA::Common::Measurement::OrientationVelocity3D&& value) {
                    m_attitudeRate_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >& attitudeRateCovariance() OMG_NOEXCEPT {
                    return m_attitudeRateCovariance_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >& attitudeRateCovariance() const OMG_NOEXCEPT {
                    return m_attitudeRateCovariance_;
                }

                void attitudeRateCovariance(const ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >& value) {
                    m_attitudeRateCovariance_ = value;
                }

                void attitudeRateCovariance(::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >&& value) {
                    m_attitudeRateCovariance_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType >& mode() OMG_NOEXCEPT {
                    return m_mode_;
                }

                const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType >& mode() const OMG_NOEXCEPT {
                    return m_mode_;
                }

                void mode(const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType >& value) {
                    m_mode_ = value;
                }

                void mode(::dds::core::optional< UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType >&& value) {
                    m_mode_ = std::move(value);
                }
                UMAA::Common::Measurement::Velocity3D_PlatformNED& velocity() OMG_NOEXCEPT {
                    return m_velocity_;
                }

                const UMAA::Common::Measurement::Velocity3D_PlatformNED& velocity() const OMG_NOEXCEPT {
                    return m_velocity_;
                }

                void velocity(const UMAA::Common::Measurement::Velocity3D_PlatformNED& value) {
                    m_velocity_ = value;
                }

                void velocity(UMAA::Common::Measurement::Velocity3D_PlatformNED&& value) {
                    m_velocity_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >& velocityCovariance() OMG_NOEXCEPT {
                    return m_velocityCovariance_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >& velocityCovariance() const OMG_NOEXCEPT {
                    return m_velocityCovariance_;
                }

                void velocityCovariance(const ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >& value) {
                    m_velocityCovariance_ = value;
                }

                void velocityCovariance(::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >&& value) {
                    m_velocityCovariance_ = std::move(value);
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

                bool operator == (const VelocityReportType& other_) const;
                bool operator != (const VelocityReportType& other_) const;

                void swap(VelocityReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::OrientationVelocity3D m_attitudeRate_;
                ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType > m_attitudeRateCovariance_;
                ::dds::core::optional< UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumType::VehicleSpeedModeEnumType > m_mode_;
                UMAA::Common::Measurement::Velocity3D_PlatformNED m_velocity_;
                ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType > m_velocityCovariance_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(VelocityReportType& a, VelocityReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VelocityReportType& sample);

        } // namespace VelocityStatus  
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
        struct topic_type_name< UMAA::SA::VelocityStatus::VelocityReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::VelocityStatus::VelocityReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::VelocityStatus::VelocityReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::VelocityStatus::VelocityReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::VelocityStatus::VelocityReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::VelocityStatus::VelocityReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::VelocityStatus::VelocityReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::VelocityStatus::VelocityReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::VelocityStatus::VelocityReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::VelocityStatus::VelocityReportType > {
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

#endif // VelocityReportType_169778901_hpp

