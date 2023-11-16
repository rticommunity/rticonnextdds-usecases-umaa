

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DriverConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DriverConfigReportType_551596296_hpp
#define DriverConfigReportType_551596296_hpp

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
#include "UMAA/Common/Capabilities/Speed_BSL_Capability.hpp"
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
#include "UMAA/Common/Measurement/ElevationType.hpp"
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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Speed/SpeedControlType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace DriverConfig {

            static const std::string DriverConfigReport_TOPIC = "UMAA::MO::DriverConfig::DriverConfigReport";

            class NDDSUSERDllExport DriverConfigReportType {
              public:
                DriverConfigReportType();

                DriverConfigReportType(const ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& maxAllowableAcceleration,const ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& maxAllowableAttitudeAcceleration,const ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& maxAllowableElevation,const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& maxAllowableSpeed,const ::dds::core::optional< double >& maxAllowableTurnRate,const ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >& maxElevationChangeRate,const ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& minAllowableAcceleration,const ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& minAllowableAttitudeAcceleration,const ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& minAllowableElevation,const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& minAllowableSpeed,const ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& recommendedAcceleration,const ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& recommendedAttitudeAcceleration,const ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& recommendedElevation,const ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >& recommendedElevationChangeRate,const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& recommendedSpeed,const ::dds::core::optional< double >& recommendedTurnRate,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                DriverConfigReportType (DriverConfigReportType&&) = default;
                DriverConfigReportType& operator=(DriverConfigReportType&&) = default;
                DriverConfigReportType& operator=(const DriverConfigReportType&) = default;
                DriverConfigReportType(const DriverConfigReportType&) = default;
                #else
                DriverConfigReportType(DriverConfigReportType&& other_) OMG_NOEXCEPT;  
                DriverConfigReportType& operator=(DriverConfigReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& maxAllowableAcceleration() OMG_NOEXCEPT {
                    return m_maxAllowableAcceleration_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& maxAllowableAcceleration() const OMG_NOEXCEPT {
                    return m_maxAllowableAcceleration_;
                }

                void maxAllowableAcceleration(const ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& value) {
                    m_maxAllowableAcceleration_ = value;
                }

                void maxAllowableAcceleration(::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >&& value) {
                    m_maxAllowableAcceleration_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& maxAllowableAttitudeAcceleration() OMG_NOEXCEPT {
                    return m_maxAllowableAttitudeAcceleration_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& maxAllowableAttitudeAcceleration() const OMG_NOEXCEPT {
                    return m_maxAllowableAttitudeAcceleration_;
                }

                void maxAllowableAttitudeAcceleration(const ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& value) {
                    m_maxAllowableAttitudeAcceleration_ = value;
                }

                void maxAllowableAttitudeAcceleration(::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >&& value) {
                    m_maxAllowableAttitudeAcceleration_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& maxAllowableElevation() OMG_NOEXCEPT {
                    return m_maxAllowableElevation_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& maxAllowableElevation() const OMG_NOEXCEPT {
                    return m_maxAllowableElevation_;
                }

                void maxAllowableElevation(const ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& value) {
                    m_maxAllowableElevation_ = value;
                }

                void maxAllowableElevation(::dds::core::optional< UMAA::Common::Measurement::ElevationType >&& value) {
                    m_maxAllowableElevation_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& maxAllowableSpeed() OMG_NOEXCEPT {
                    return m_maxAllowableSpeed_;
                }

                const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& maxAllowableSpeed() const OMG_NOEXCEPT {
                    return m_maxAllowableSpeed_;
                }

                void maxAllowableSpeed(const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& value) {
                    m_maxAllowableSpeed_ = value;
                }

                void maxAllowableSpeed(::dds::core::optional< UMAA::Common::Speed::SpeedControlType >&& value) {
                    m_maxAllowableSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& maxAllowableTurnRate() OMG_NOEXCEPT {
                    return m_maxAllowableTurnRate_;
                }

                const ::dds::core::optional< double >& maxAllowableTurnRate() const OMG_NOEXCEPT {
                    return m_maxAllowableTurnRate_;
                }

                void maxAllowableTurnRate(const ::dds::core::optional< double >& value) {
                    m_maxAllowableTurnRate_ = value;
                }

                void maxAllowableTurnRate(::dds::core::optional< double >&& value) {
                    m_maxAllowableTurnRate_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >& maxElevationChangeRate() OMG_NOEXCEPT {
                    return m_maxElevationChangeRate_;
                }

                const ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >& maxElevationChangeRate() const OMG_NOEXCEPT {
                    return m_maxElevationChangeRate_;
                }

                void maxElevationChangeRate(const ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >& value) {
                    m_maxElevationChangeRate_ = value;
                }

                void maxElevationChangeRate(::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >&& value) {
                    m_maxElevationChangeRate_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& minAllowableAcceleration() OMG_NOEXCEPT {
                    return m_minAllowableAcceleration_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& minAllowableAcceleration() const OMG_NOEXCEPT {
                    return m_minAllowableAcceleration_;
                }

                void minAllowableAcceleration(const ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& value) {
                    m_minAllowableAcceleration_ = value;
                }

                void minAllowableAcceleration(::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >&& value) {
                    m_minAllowableAcceleration_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& minAllowableAttitudeAcceleration() OMG_NOEXCEPT {
                    return m_minAllowableAttitudeAcceleration_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& minAllowableAttitudeAcceleration() const OMG_NOEXCEPT {
                    return m_minAllowableAttitudeAcceleration_;
                }

                void minAllowableAttitudeAcceleration(const ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& value) {
                    m_minAllowableAttitudeAcceleration_ = value;
                }

                void minAllowableAttitudeAcceleration(::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >&& value) {
                    m_minAllowableAttitudeAcceleration_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& minAllowableElevation() OMG_NOEXCEPT {
                    return m_minAllowableElevation_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& minAllowableElevation() const OMG_NOEXCEPT {
                    return m_minAllowableElevation_;
                }

                void minAllowableElevation(const ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& value) {
                    m_minAllowableElevation_ = value;
                }

                void minAllowableElevation(::dds::core::optional< UMAA::Common::Measurement::ElevationType >&& value) {
                    m_minAllowableElevation_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& minAllowableSpeed() OMG_NOEXCEPT {
                    return m_minAllowableSpeed_;
                }

                const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& minAllowableSpeed() const OMG_NOEXCEPT {
                    return m_minAllowableSpeed_;
                }

                void minAllowableSpeed(const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& value) {
                    m_minAllowableSpeed_ = value;
                }

                void minAllowableSpeed(::dds::core::optional< UMAA::Common::Speed::SpeedControlType >&& value) {
                    m_minAllowableSpeed_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& recommendedAcceleration() OMG_NOEXCEPT {
                    return m_recommendedAcceleration_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& recommendedAcceleration() const OMG_NOEXCEPT {
                    return m_recommendedAcceleration_;
                }

                void recommendedAcceleration(const ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >& value) {
                    m_recommendedAcceleration_ = value;
                }

                void recommendedAcceleration(::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ >&& value) {
                    m_recommendedAcceleration_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& recommendedAttitudeAcceleration() OMG_NOEXCEPT {
                    return m_recommendedAttitudeAcceleration_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& recommendedAttitudeAcceleration() const OMG_NOEXCEPT {
                    return m_recommendedAttitudeAcceleration_;
                }

                void recommendedAttitudeAcceleration(const ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >& value) {
                    m_recommendedAttitudeAcceleration_ = value;
                }

                void recommendedAttitudeAcceleration(::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D >&& value) {
                    m_recommendedAttitudeAcceleration_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& recommendedElevation() OMG_NOEXCEPT {
                    return m_recommendedElevation_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& recommendedElevation() const OMG_NOEXCEPT {
                    return m_recommendedElevation_;
                }

                void recommendedElevation(const ::dds::core::optional< UMAA::Common::Measurement::ElevationType >& value) {
                    m_recommendedElevation_ = value;
                }

                void recommendedElevation(::dds::core::optional< UMAA::Common::Measurement::ElevationType >&& value) {
                    m_recommendedElevation_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >& recommendedElevationChangeRate() OMG_NOEXCEPT {
                    return m_recommendedElevationChangeRate_;
                }

                const ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >& recommendedElevationChangeRate() const OMG_NOEXCEPT {
                    return m_recommendedElevationChangeRate_;
                }

                void recommendedElevationChangeRate(const ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >& value) {
                    m_recommendedElevationChangeRate_ = value;
                }

                void recommendedElevationChangeRate(::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability >&& value) {
                    m_recommendedElevationChangeRate_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& recommendedSpeed() OMG_NOEXCEPT {
                    return m_recommendedSpeed_;
                }

                const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& recommendedSpeed() const OMG_NOEXCEPT {
                    return m_recommendedSpeed_;
                }

                void recommendedSpeed(const ::dds::core::optional< UMAA::Common::Speed::SpeedControlType >& value) {
                    m_recommendedSpeed_ = value;
                }

                void recommendedSpeed(::dds::core::optional< UMAA::Common::Speed::SpeedControlType >&& value) {
                    m_recommendedSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& recommendedTurnRate() OMG_NOEXCEPT {
                    return m_recommendedTurnRate_;
                }

                const ::dds::core::optional< double >& recommendedTurnRate() const OMG_NOEXCEPT {
                    return m_recommendedTurnRate_;
                }

                void recommendedTurnRate(const ::dds::core::optional< double >& value) {
                    m_recommendedTurnRate_ = value;
                }

                void recommendedTurnRate(::dds::core::optional< double >&& value) {
                    m_recommendedTurnRate_ = std::move(value);
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

                bool operator == (const DriverConfigReportType& other_) const;
                bool operator != (const DriverConfigReportType& other_) const;

                void swap(DriverConfigReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ > m_maxAllowableAcceleration_;
                ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D > m_maxAllowableAttitudeAcceleration_;
                ::dds::core::optional< UMAA::Common::Measurement::ElevationType > m_maxAllowableElevation_;
                ::dds::core::optional< UMAA::Common::Speed::SpeedControlType > m_maxAllowableSpeed_;
                ::dds::core::optional< double > m_maxAllowableTurnRate_;
                ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability > m_maxElevationChangeRate_;
                ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ > m_minAllowableAcceleration_;
                ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D > m_minAllowableAttitudeAcceleration_;
                ::dds::core::optional< UMAA::Common::Measurement::ElevationType > m_minAllowableElevation_;
                ::dds::core::optional< UMAA::Common::Speed::SpeedControlType > m_minAllowableSpeed_;
                ::dds::core::optional< UMAA::Common::Measurement::Acceleration3D_PlatformXYZ > m_recommendedAcceleration_;
                ::dds::core::optional< UMAA::Common::Measurement::OrientationAcceleration3D > m_recommendedAttitudeAcceleration_;
                ::dds::core::optional< UMAA::Common::Measurement::ElevationType > m_recommendedElevation_;
                ::dds::core::optional< UMAA::Common::Capabilities::Speed_BSL_Capability > m_recommendedElevationChangeRate_;
                ::dds::core::optional< UMAA::Common::Speed::SpeedControlType > m_recommendedSpeed_;
                ::dds::core::optional< double > m_recommendedTurnRate_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(DriverConfigReportType& a, DriverConfigReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DriverConfigReportType& sample);

        } // namespace DriverConfig  
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
        struct topic_type_name< UMAA::MO::DriverConfig::DriverConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::DriverConfig::DriverConfigReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::DriverConfig::DriverConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::DriverConfig::DriverConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::DriverConfig::DriverConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::DriverConfig::DriverConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::DriverConfig::DriverConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::DriverConfig::DriverConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::DriverConfig::DriverConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::DriverConfig::DriverConfigReportType > {
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

#endif // DriverConfigReportType_551596296_hpp

