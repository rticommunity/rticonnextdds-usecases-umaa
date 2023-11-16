

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpSpecsReportType_1957364353_hpp
#define BallastPumpSpecsReportType_1957364353_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace BallastTank {

            RTI_CONSTEXPR_OR_CONST_STRING std::string BallastPumpSpecsReport_TOPIC = "UMAA::EO::BallastTank::BallastPumpSpecsReport";

            class NDDSUSERDllExport BallastPumpSpecsReportType {
              public:

                BallastPumpSpecsReportType();

                BallastPumpSpecsReportType(double maxMassEmptyRate_,double maxMassFillRate_,double maxVolumeEmptyRate_,double maxVolumeFillRate_,double minMassEmptyRate_,double minMassFillRate_,double minVolumeEmptyRate_,double minVolumeFillRate_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                double& maxMassEmptyRate() noexcept {
                    return m_maxMassEmptyRate_;
                }

                const double& maxMassEmptyRate() const noexcept {
                    return m_maxMassEmptyRate_;
                }

                void maxMassEmptyRate(double value) {

                    m_maxMassEmptyRate_ = value;
                }

                double& maxMassFillRate() noexcept {
                    return m_maxMassFillRate_;
                }

                const double& maxMassFillRate() const noexcept {
                    return m_maxMassFillRate_;
                }

                void maxMassFillRate(double value) {

                    m_maxMassFillRate_ = value;
                }

                double& maxVolumeEmptyRate() noexcept {
                    return m_maxVolumeEmptyRate_;
                }

                const double& maxVolumeEmptyRate() const noexcept {
                    return m_maxVolumeEmptyRate_;
                }

                void maxVolumeEmptyRate(double value) {

                    m_maxVolumeEmptyRate_ = value;
                }

                double& maxVolumeFillRate() noexcept {
                    return m_maxVolumeFillRate_;
                }

                const double& maxVolumeFillRate() const noexcept {
                    return m_maxVolumeFillRate_;
                }

                void maxVolumeFillRate(double value) {

                    m_maxVolumeFillRate_ = value;
                }

                double& minMassEmptyRate() noexcept {
                    return m_minMassEmptyRate_;
                }

                const double& minMassEmptyRate() const noexcept {
                    return m_minMassEmptyRate_;
                }

                void minMassEmptyRate(double value) {

                    m_minMassEmptyRate_ = value;
                }

                double& minMassFillRate() noexcept {
                    return m_minMassFillRate_;
                }

                const double& minMassFillRate() const noexcept {
                    return m_minMassFillRate_;
                }

                void minMassFillRate(double value) {

                    m_minMassFillRate_ = value;
                }

                double& minVolumeEmptyRate() noexcept {
                    return m_minVolumeEmptyRate_;
                }

                const double& minVolumeEmptyRate() const noexcept {
                    return m_minVolumeEmptyRate_;
                }

                void minVolumeEmptyRate(double value) {

                    m_minVolumeEmptyRate_ = value;
                }

                double& minVolumeFillRate() noexcept {
                    return m_minVolumeFillRate_;
                }

                const double& minVolumeFillRate() const noexcept {
                    return m_minVolumeFillRate_;
                }

                void minVolumeFillRate(double value) {

                    m_minVolumeFillRate_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
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
                bool operator == (const BallastPumpSpecsReportType& other_) const;
                bool operator != (const BallastPumpSpecsReportType& other_) const;

                void swap(BallastPumpSpecsReportType& other_) noexcept ;

              private:

                double m_maxMassEmptyRate_;
                double m_maxMassFillRate_;
                double m_maxVolumeEmptyRate_;
                double m_maxVolumeFillRate_;
                double m_minMassEmptyRate_;
                double m_minMassFillRate_;
                double m_minVolumeEmptyRate_;
                double m_minVolumeFillRate_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(BallastPumpSpecsReportType& a, BallastPumpSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastPumpSpecsReportType& sample);

        } // namespace BallastTank  
    } // namespace EO  
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
        struct topic_type_name< ::UMAA::EO::BallastTank::BallastPumpSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastPumpSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::BallastTank::BallastPumpSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::BallastTank::BallastPumpSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastPumpSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastPumpSpecsReportType > {
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

#endif // BallastPumpSpecsReportType_1957364353_hpp

