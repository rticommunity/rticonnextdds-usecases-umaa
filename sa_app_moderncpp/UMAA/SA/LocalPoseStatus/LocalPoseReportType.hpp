

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalPoseReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalPoseReportType_607343734_hpp
#define LocalPoseReportType_607343734_hpp

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
#include "UMAA/Common/Measurement/Altitude_AGL.hpp"
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
#include "UMAA/Common/Measurement/CovariancePositionVelocityType.hpp"
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
#include "UMAA/Common/Measurement/Orientation3D.hpp"
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
#include "UMAA/Common/Measurement/Position3D_PlatformXYZ.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace LocalPoseStatus {

            static const std::string LocalPoseReport_TOPIC = "UMAA::SA::LocalPoseStatus::LocalPoseReport";

            class NDDSUSERDllExport LocalPoseReportType {
              public:
                LocalPoseReportType();

                LocalPoseReportType(const ::dds::core::optional< UMAA::Common::Measurement::Altitude_MSL >& altitude,const ::dds::core::optional< UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL,const ::dds::core::optional< double >& altitudeASF,const UMAA::Common::Measurement::Orientation3D& attitude,const UMAA::Common::Measurement::CovarianceOrientationType& attitudeRMS,const ::dds::core::optional< double >& depth,const ::dds::core::optional< UMAA::Common::Measurement::Position3D_PlatformXYZ >& position,const UMAA::Common::Measurement::CovariancePositionVelocityType& xyPositionCovariance,const UMAA::Common::Measurement::CovariancePositionVelocityType& zPositionCovariance,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalPoseReportType (LocalPoseReportType&&) = default;
                LocalPoseReportType& operator=(LocalPoseReportType&&) = default;
                LocalPoseReportType& operator=(const LocalPoseReportType&) = default;
                LocalPoseReportType(const LocalPoseReportType&) = default;
                #else
                LocalPoseReportType(LocalPoseReportType&& other_) OMG_NOEXCEPT;  
                LocalPoseReportType& operator=(LocalPoseReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< UMAA::Common::Measurement::Altitude_MSL >& altitude() OMG_NOEXCEPT {
                    return m_altitude_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::Altitude_MSL >& altitude() const OMG_NOEXCEPT {
                    return m_altitude_;
                }

                void altitude(const ::dds::core::optional< UMAA::Common::Measurement::Altitude_MSL >& value) {
                    m_altitude_ = value;
                }

                void altitude(::dds::core::optional< UMAA::Common::Measurement::Altitude_MSL >&& value) {
                    m_altitude_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL() OMG_NOEXCEPT {
                    return m_altitudeAGL_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::Altitude_AGL >& altitudeAGL() const OMG_NOEXCEPT {
                    return m_altitudeAGL_;
                }

                void altitudeAGL(const ::dds::core::optional< UMAA::Common::Measurement::Altitude_AGL >& value) {
                    m_altitudeAGL_ = value;
                }

                void altitudeAGL(::dds::core::optional< UMAA::Common::Measurement::Altitude_AGL >&& value) {
                    m_altitudeAGL_ = std::move(value);
                }
                ::dds::core::optional< double >& altitudeASF() OMG_NOEXCEPT {
                    return m_altitudeASF_;
                }

                const ::dds::core::optional< double >& altitudeASF() const OMG_NOEXCEPT {
                    return m_altitudeASF_;
                }

                void altitudeASF(const ::dds::core::optional< double >& value) {
                    m_altitudeASF_ = value;
                }

                void altitudeASF(::dds::core::optional< double >&& value) {
                    m_altitudeASF_ = std::move(value);
                }
                UMAA::Common::Measurement::Orientation3D& attitude() OMG_NOEXCEPT {
                    return m_attitude_;
                }

                const UMAA::Common::Measurement::Orientation3D& attitude() const OMG_NOEXCEPT {
                    return m_attitude_;
                }

                void attitude(const UMAA::Common::Measurement::Orientation3D& value) {
                    m_attitude_ = value;
                }

                void attitude(UMAA::Common::Measurement::Orientation3D&& value) {
                    m_attitude_ = std::move(value);
                }
                UMAA::Common::Measurement::CovarianceOrientationType& attitudeRMS() OMG_NOEXCEPT {
                    return m_attitudeRMS_;
                }

                const UMAA::Common::Measurement::CovarianceOrientationType& attitudeRMS() const OMG_NOEXCEPT {
                    return m_attitudeRMS_;
                }

                void attitudeRMS(const UMAA::Common::Measurement::CovarianceOrientationType& value) {
                    m_attitudeRMS_ = value;
                }

                void attitudeRMS(UMAA::Common::Measurement::CovarianceOrientationType&& value) {
                    m_attitudeRMS_ = std::move(value);
                }
                ::dds::core::optional< double >& depth() OMG_NOEXCEPT {
                    return m_depth_;
                }

                const ::dds::core::optional< double >& depth() const OMG_NOEXCEPT {
                    return m_depth_;
                }

                void depth(const ::dds::core::optional< double >& value) {
                    m_depth_ = value;
                }

                void depth(::dds::core::optional< double >&& value) {
                    m_depth_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::Position3D_PlatformXYZ >& position() OMG_NOEXCEPT {
                    return m_position_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::Position3D_PlatformXYZ >& position() const OMG_NOEXCEPT {
                    return m_position_;
                }

                void position(const ::dds::core::optional< UMAA::Common::Measurement::Position3D_PlatformXYZ >& value) {
                    m_position_ = value;
                }

                void position(::dds::core::optional< UMAA::Common::Measurement::Position3D_PlatformXYZ >&& value) {
                    m_position_ = std::move(value);
                }
                UMAA::Common::Measurement::CovariancePositionVelocityType& xyPositionCovariance() OMG_NOEXCEPT {
                    return m_xyPositionCovariance_;
                }

                const UMAA::Common::Measurement::CovariancePositionVelocityType& xyPositionCovariance() const OMG_NOEXCEPT {
                    return m_xyPositionCovariance_;
                }

                void xyPositionCovariance(const UMAA::Common::Measurement::CovariancePositionVelocityType& value) {
                    m_xyPositionCovariance_ = value;
                }

                void xyPositionCovariance(UMAA::Common::Measurement::CovariancePositionVelocityType&& value) {
                    m_xyPositionCovariance_ = std::move(value);
                }
                UMAA::Common::Measurement::CovariancePositionVelocityType& zPositionCovariance() OMG_NOEXCEPT {
                    return m_zPositionCovariance_;
                }

                const UMAA::Common::Measurement::CovariancePositionVelocityType& zPositionCovariance() const OMG_NOEXCEPT {
                    return m_zPositionCovariance_;
                }

                void zPositionCovariance(const UMAA::Common::Measurement::CovariancePositionVelocityType& value) {
                    m_zPositionCovariance_ = value;
                }

                void zPositionCovariance(UMAA::Common::Measurement::CovariancePositionVelocityType&& value) {
                    m_zPositionCovariance_ = std::move(value);
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

                bool operator == (const LocalPoseReportType& other_) const;
                bool operator != (const LocalPoseReportType& other_) const;

                void swap(LocalPoseReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< UMAA::Common::Measurement::Altitude_MSL > m_altitude_;
                ::dds::core::optional< UMAA::Common::Measurement::Altitude_AGL > m_altitudeAGL_;
                ::dds::core::optional< double > m_altitudeASF_;
                UMAA::Common::Measurement::Orientation3D m_attitude_;
                UMAA::Common::Measurement::CovarianceOrientationType m_attitudeRMS_;
                ::dds::core::optional< double > m_depth_;
                ::dds::core::optional< UMAA::Common::Measurement::Position3D_PlatformXYZ > m_position_;
                UMAA::Common::Measurement::CovariancePositionVelocityType m_xyPositionCovariance_;
                UMAA::Common::Measurement::CovariancePositionVelocityType m_zPositionCovariance_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(LocalPoseReportType& a, LocalPoseReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalPoseReportType& sample);

        } // namespace LocalPoseStatus  
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
        struct topic_type_name< UMAA::SA::LocalPoseStatus::LocalPoseReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::LocalPoseStatus::LocalPoseReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::LocalPoseStatus::LocalPoseReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::LocalPoseStatus::LocalPoseReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::LocalPoseStatus::LocalPoseReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::LocalPoseStatus::LocalPoseReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::LocalPoseStatus::LocalPoseReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::LocalPoseStatus::LocalPoseReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::LocalPoseStatus::LocalPoseReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::LocalPoseStatus::LocalPoseReportType > {
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

#endif // LocalPoseReportType_607343734_hpp

