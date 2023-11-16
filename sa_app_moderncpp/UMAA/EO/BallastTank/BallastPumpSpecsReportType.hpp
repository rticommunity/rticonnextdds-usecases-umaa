

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
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

            static const std::string BallastPumpSpecsReport_TOPIC = "UMAA::EO::BallastTank::BallastPumpSpecsReport";

            class NDDSUSERDllExport BallastPumpSpecsReportType {
              public:
                BallastPumpSpecsReportType();

                BallastPumpSpecsReportType(double maxMassEmptyRate,double maxMassFillRate,double maxVolumeEmptyRate,double maxVolumeFillRate,double minMassEmptyRate,double minMassFillRate,double minVolumeEmptyRate,double minVolumeFillRate,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                BallastPumpSpecsReportType (BallastPumpSpecsReportType&&) = default;
                BallastPumpSpecsReportType& operator=(BallastPumpSpecsReportType&&) = default;
                BallastPumpSpecsReportType& operator=(const BallastPumpSpecsReportType&) = default;
                BallastPumpSpecsReportType(const BallastPumpSpecsReportType&) = default;
                #else
                BallastPumpSpecsReportType(BallastPumpSpecsReportType&& other_) OMG_NOEXCEPT;  
                BallastPumpSpecsReportType& operator=(BallastPumpSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& maxMassEmptyRate() OMG_NOEXCEPT {
                    return m_maxMassEmptyRate_;
                }

                const double& maxMassEmptyRate() const OMG_NOEXCEPT {
                    return m_maxMassEmptyRate_;
                }

                void maxMassEmptyRate(double value) {
                    m_maxMassEmptyRate_ = value;
                }

                double& maxMassFillRate() OMG_NOEXCEPT {
                    return m_maxMassFillRate_;
                }

                const double& maxMassFillRate() const OMG_NOEXCEPT {
                    return m_maxMassFillRate_;
                }

                void maxMassFillRate(double value) {
                    m_maxMassFillRate_ = value;
                }

                double& maxVolumeEmptyRate() OMG_NOEXCEPT {
                    return m_maxVolumeEmptyRate_;
                }

                const double& maxVolumeEmptyRate() const OMG_NOEXCEPT {
                    return m_maxVolumeEmptyRate_;
                }

                void maxVolumeEmptyRate(double value) {
                    m_maxVolumeEmptyRate_ = value;
                }

                double& maxVolumeFillRate() OMG_NOEXCEPT {
                    return m_maxVolumeFillRate_;
                }

                const double& maxVolumeFillRate() const OMG_NOEXCEPT {
                    return m_maxVolumeFillRate_;
                }

                void maxVolumeFillRate(double value) {
                    m_maxVolumeFillRate_ = value;
                }

                double& minMassEmptyRate() OMG_NOEXCEPT {
                    return m_minMassEmptyRate_;
                }

                const double& minMassEmptyRate() const OMG_NOEXCEPT {
                    return m_minMassEmptyRate_;
                }

                void minMassEmptyRate(double value) {
                    m_minMassEmptyRate_ = value;
                }

                double& minMassFillRate() OMG_NOEXCEPT {
                    return m_minMassFillRate_;
                }

                const double& minMassFillRate() const OMG_NOEXCEPT {
                    return m_minMassFillRate_;
                }

                void minMassFillRate(double value) {
                    m_minMassFillRate_ = value;
                }

                double& minVolumeEmptyRate() OMG_NOEXCEPT {
                    return m_minVolumeEmptyRate_;
                }

                const double& minVolumeEmptyRate() const OMG_NOEXCEPT {
                    return m_minVolumeEmptyRate_;
                }

                void minVolumeEmptyRate(double value) {
                    m_minVolumeEmptyRate_ = value;
                }

                double& minVolumeFillRate() OMG_NOEXCEPT {
                    return m_minVolumeFillRate_;
                }

                const double& minVolumeFillRate() const OMG_NOEXCEPT {
                    return m_minVolumeFillRate_;
                }

                void minVolumeFillRate(double value) {
                    m_minVolumeFillRate_ = value;
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

                bool operator == (const BallastPumpSpecsReportType& other_) const;
                bool operator != (const BallastPumpSpecsReportType& other_) const;

                void swap(BallastPumpSpecsReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_maxMassEmptyRate_;
                double m_maxMassFillRate_;
                double m_maxVolumeEmptyRate_;
                double m_maxVolumeFillRate_;
                double m_minMassEmptyRate_;
                double m_minMassFillRate_;
                double m_minVolumeEmptyRate_;
                double m_minVolumeFillRate_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(BallastPumpSpecsReportType& a, BallastPumpSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastPumpSpecsReportType& sample);

        } // namespace BallastTank  
    } // namespace EO  
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
        struct topic_type_name< UMAA::EO::BallastTank::BallastPumpSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastPumpSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::BallastTank::BallastPumpSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::BallastTank::BallastPumpSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::BallastTank::BallastPumpSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::BallastTank::BallastPumpSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::BallastTank::BallastPumpSpecsReportType > {
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

#endif // BallastPumpSpecsReportType_1957364353_hpp

