

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeConfigReportType_319386127_hpp
#define RangeConfigReportType_319386127_hpp

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
#include "UMAA/SEM/SensorManagement/RangeErrorType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace RangeConfig {

            static const std::string RangeConfigReport_TOPIC = "UMAA::SA::RangeConfig::RangeConfigReport";

            class NDDSUSERDllExport RangeConfigReportType {
              public:
                RangeConfigReportType();

                RangeConfigReportType(double horizontalFOVStartAngle,double horizontalFOVStopAngle,double maxRange,double minRange,const UMAA::SEM::SensorManagement::RangeErrorType& rangeError,const UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status,double updateRate,double verticalFOVStartAngle,double verticalFOVStopAngle,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                RangeConfigReportType (RangeConfigReportType&&) = default;
                RangeConfigReportType& operator=(RangeConfigReportType&&) = default;
                RangeConfigReportType& operator=(const RangeConfigReportType&) = default;
                RangeConfigReportType(const RangeConfigReportType&) = default;
                #else
                RangeConfigReportType(RangeConfigReportType&& other_) OMG_NOEXCEPT;  
                RangeConfigReportType& operator=(RangeConfigReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& horizontalFOVStartAngle() OMG_NOEXCEPT {
                    return m_horizontalFOVStartAngle_;
                }

                const double& horizontalFOVStartAngle() const OMG_NOEXCEPT {
                    return m_horizontalFOVStartAngle_;
                }

                void horizontalFOVStartAngle(double value) {
                    m_horizontalFOVStartAngle_ = value;
                }

                double& horizontalFOVStopAngle() OMG_NOEXCEPT {
                    return m_horizontalFOVStopAngle_;
                }

                const double& horizontalFOVStopAngle() const OMG_NOEXCEPT {
                    return m_horizontalFOVStopAngle_;
                }

                void horizontalFOVStopAngle(double value) {
                    m_horizontalFOVStopAngle_ = value;
                }

                double& maxRange() OMG_NOEXCEPT {
                    return m_maxRange_;
                }

                const double& maxRange() const OMG_NOEXCEPT {
                    return m_maxRange_;
                }

                void maxRange(double value) {
                    m_maxRange_ = value;
                }

                double& minRange() OMG_NOEXCEPT {
                    return m_minRange_;
                }

                const double& minRange() const OMG_NOEXCEPT {
                    return m_minRange_;
                }

                void minRange(double value) {
                    m_minRange_ = value;
                }

                UMAA::SEM::SensorManagement::RangeErrorType& rangeError() OMG_NOEXCEPT {
                    return m_rangeError_;
                }

                const UMAA::SEM::SensorManagement::RangeErrorType& rangeError() const OMG_NOEXCEPT {
                    return m_rangeError_;
                }

                void rangeError(const UMAA::SEM::SensorManagement::RangeErrorType& value) {
                    m_rangeError_ = value;
                }

                void rangeError(UMAA::SEM::SensorManagement::RangeErrorType&& value) {
                    m_rangeError_ = std::move(value);
                }
                UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status() OMG_NOEXCEPT {
                    return m_status_;
                }

                const UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& status() const OMG_NOEXCEPT {
                    return m_status_;
                }

                void status(const UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType& value) {
                    m_status_ = value;
                }

                void status(UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType&& value) {
                    m_status_ = std::move(value);
                }
                double& updateRate() OMG_NOEXCEPT {
                    return m_updateRate_;
                }

                const double& updateRate() const OMG_NOEXCEPT {
                    return m_updateRate_;
                }

                void updateRate(double value) {
                    m_updateRate_ = value;
                }

                double& verticalFOVStartAngle() OMG_NOEXCEPT {
                    return m_verticalFOVStartAngle_;
                }

                const double& verticalFOVStartAngle() const OMG_NOEXCEPT {
                    return m_verticalFOVStartAngle_;
                }

                void verticalFOVStartAngle(double value) {
                    m_verticalFOVStartAngle_ = value;
                }

                double& verticalFOVStopAngle() OMG_NOEXCEPT {
                    return m_verticalFOVStopAngle_;
                }

                const double& verticalFOVStopAngle() const OMG_NOEXCEPT {
                    return m_verticalFOVStopAngle_;
                }

                void verticalFOVStopAngle(double value) {
                    m_verticalFOVStopAngle_ = value;
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

                bool operator == (const RangeConfigReportType& other_) const;
                bool operator != (const RangeConfigReportType& other_) const;

                void swap(RangeConfigReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_horizontalFOVStartAngle_;
                double m_horizontalFOVStopAngle_;
                double m_maxRange_;
                double m_minRange_;
                UMAA::SEM::SensorManagement::RangeErrorType m_rangeError_;
                UMAA::Common::Enumeration::PowerStatusEnumType::PowerStatusEnumType m_status_;
                double m_updateRate_;
                double m_verticalFOVStartAngle_;
                double m_verticalFOVStopAngle_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(RangeConfigReportType& a, RangeConfigReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RangeConfigReportType& sample);

        } // namespace RangeConfig  
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
        struct topic_type_name< UMAA::SA::RangeConfig::RangeConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::RangeConfig::RangeConfigReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::RangeConfig::RangeConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::RangeConfig::RangeConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::RangeConfig::RangeConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::RangeConfig::RangeConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::RangeConfig::RangeConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::RangeConfig::RangeConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::RangeConfig::RangeConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::RangeConfig::RangeConfigReportType > {
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

#endif // RangeConfigReportType_319386127_hpp

