

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NEDVelocityReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef NEDVelocityReportType_227656961_hpp
#define NEDVelocityReportType_227656961_hpp

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
        namespace NEDVelocityStatus {

            static const std::string NEDVelocityReport_TOPIC = "UMAA::SA::NEDVelocityStatus::NEDVelocityReport";

            class NDDSUSERDllExport NEDVelocityReportType {
              public:
                NEDVelocityReportType();

                NEDVelocityReportType(const ::dds::core::optional< UMAA::Common::Measurement::OrientationVelocity3D >& attitudeRate,const ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >& attitudeRateRMS,const UMAA::Common::Measurement::Velocity3D_PlatformNED& velocity,const ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >& velocityRMS,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                NEDVelocityReportType (NEDVelocityReportType&&) = default;
                NEDVelocityReportType& operator=(NEDVelocityReportType&&) = default;
                NEDVelocityReportType& operator=(const NEDVelocityReportType&) = default;
                NEDVelocityReportType(const NEDVelocityReportType&) = default;
                #else
                NEDVelocityReportType(NEDVelocityReportType&& other_) OMG_NOEXCEPT;  
                NEDVelocityReportType& operator=(NEDVelocityReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< UMAA::Common::Measurement::OrientationVelocity3D >& attitudeRate() OMG_NOEXCEPT {
                    return m_attitudeRate_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::OrientationVelocity3D >& attitudeRate() const OMG_NOEXCEPT {
                    return m_attitudeRate_;
                }

                void attitudeRate(const ::dds::core::optional< UMAA::Common::Measurement::OrientationVelocity3D >& value) {
                    m_attitudeRate_ = value;
                }

                void attitudeRate(::dds::core::optional< UMAA::Common::Measurement::OrientationVelocity3D >&& value) {
                    m_attitudeRate_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >& attitudeRateRMS() OMG_NOEXCEPT {
                    return m_attitudeRateRMS_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >& attitudeRateRMS() const OMG_NOEXCEPT {
                    return m_attitudeRateRMS_;
                }

                void attitudeRateRMS(const ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >& value) {
                    m_attitudeRateRMS_ = value;
                }

                void attitudeRateRMS(::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType >&& value) {
                    m_attitudeRateRMS_ = std::move(value);
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
                ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >& velocityRMS() OMG_NOEXCEPT {
                    return m_velocityRMS_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >& velocityRMS() const OMG_NOEXCEPT {
                    return m_velocityRMS_;
                }

                void velocityRMS(const ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >& value) {
                    m_velocityRMS_ = value;
                }

                void velocityRMS(::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType >&& value) {
                    m_velocityRMS_ = std::move(value);
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

                bool operator == (const NEDVelocityReportType& other_) const;
                bool operator != (const NEDVelocityReportType& other_) const;

                void swap(NEDVelocityReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< UMAA::Common::Measurement::OrientationVelocity3D > m_attitudeRate_;
                ::dds::core::optional< UMAA::Common::Measurement::CovarianceOrientationType > m_attitudeRateRMS_;
                UMAA::Common::Measurement::Velocity3D_PlatformNED m_velocity_;
                ::dds::core::optional< UMAA::Common::Measurement::CovarianceVelocityVelocityType > m_velocityRMS_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(NEDVelocityReportType& a, NEDVelocityReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const NEDVelocityReportType& sample);

        } // namespace NEDVelocityStatus  
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
        struct topic_type_name< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::NEDVelocityStatus::NEDVelocityReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::NEDVelocityStatus::NEDVelocityReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::NEDVelocityStatus::NEDVelocityReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::NEDVelocityStatus::NEDVelocityReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::NEDVelocityStatus::NEDVelocityReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::NEDVelocityStatus::NEDVelocityReportType > {
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

#endif // NEDVelocityReportType_227656961_hpp

