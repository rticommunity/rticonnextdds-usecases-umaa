

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedReportType_869979519_hpp
#define SpeedReportType_869979519_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace SpeedStatus {

            static const std::string SpeedReportTypeTopic = "UMAA::SA::SpeedStatus::SpeedReportType";

            class NDDSUSERDllExport SpeedReportType {
              public:

                SpeedReportType();

                SpeedReportType(const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType >& mode_,const ::dds::core::optional< double >& speedOverGround_,const ::dds::core::optional< double >& speedThroughAir_,const ::dds::core::optional< double >& speedThroughWater_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType >& mode() noexcept {
                    return m_mode_;
                }

                const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType >& mode() const noexcept {
                    return m_mode_;
                }

                void mode(const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType >& value) {

                    m_mode_ = value;
                }

                void mode(::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType >&& value) {
                    m_mode_ = std::move(value);
                }
                ::dds::core::optional< double >& speedOverGround() noexcept {
                    return m_speedOverGround_;
                }

                const ::dds::core::optional< double >& speedOverGround() const noexcept {
                    return m_speedOverGround_;
                }

                void speedOverGround(const ::dds::core::optional< double >& value) {

                    m_speedOverGround_ = value;
                }

                void speedOverGround(::dds::core::optional< double >&& value) {
                    m_speedOverGround_ = std::move(value);
                }
                ::dds::core::optional< double >& speedThroughAir() noexcept {
                    return m_speedThroughAir_;
                }

                const ::dds::core::optional< double >& speedThroughAir() const noexcept {
                    return m_speedThroughAir_;
                }

                void speedThroughAir(const ::dds::core::optional< double >& value) {

                    m_speedThroughAir_ = value;
                }

                void speedThroughAir(::dds::core::optional< double >&& value) {
                    m_speedThroughAir_ = std::move(value);
                }
                ::dds::core::optional< double >& speedThroughWater() noexcept {
                    return m_speedThroughWater_;
                }

                const ::dds::core::optional< double >& speedThroughWater() const noexcept {
                    return m_speedThroughWater_;
                }

                void speedThroughWater(const ::dds::core::optional< double >& value) {

                    m_speedThroughWater_ = value;
                }

                void speedThroughWater(::dds::core::optional< double >&& value) {
                    m_speedThroughWater_ = std::move(value);
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
                bool operator == (const SpeedReportType& other_) const;
                bool operator != (const SpeedReportType& other_) const;

                void swap(SpeedReportType& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::VehicleSpeedModeEnumModule::VehicleSpeedModeEnumType > m_mode_;
                ::dds::core::optional< double > m_speedOverGround_;
                ::dds::core::optional< double > m_speedThroughAir_;
                ::dds::core::optional< double > m_speedThroughWater_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(SpeedReportType& a, SpeedReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SpeedReportType& sample);

        } // namespace SpeedStatus  
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
        struct topic_type_name< ::UMAA::SA::SpeedStatus::SpeedReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::SpeedStatus::SpeedReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::SpeedStatus::SpeedReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::SpeedStatus::SpeedReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::SpeedStatus::SpeedReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::SpeedStatus::SpeedReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::SpeedStatus::SpeedReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::SpeedStatus::SpeedReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::SpeedStatus::SpeedReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::SpeedStatus::SpeedReportType > {
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

#endif // SpeedReportType_869979519_hpp

