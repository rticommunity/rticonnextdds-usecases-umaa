

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnchorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnchorSpecsReportType_431074103_hpp
#define AnchorSpecsReportType_431074103_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace AnchorSpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string AnchorSpecsReport_TOPIC = "UMAA::EO::AnchorSpecs::AnchorSpecsReport";

            class NDDSUSERDllExport AnchorSpecsReportType {
              public:

                AnchorSpecsReportType();

                AnchorSpecsReportType(double anchorHoldingPower_,double anchorHoldingPowerRatio_,const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType& anchorKind_,const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType& anchorLocation_,double anchorSize_,double rodeLength_,double rodeSize_,double rodeWorkingLoadLimit_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                double& anchorHoldingPower() noexcept {
                    return m_anchorHoldingPower_;
                }

                const double& anchorHoldingPower() const noexcept {
                    return m_anchorHoldingPower_;
                }

                void anchorHoldingPower(double value) {

                    m_anchorHoldingPower_ = value;
                }

                double& anchorHoldingPowerRatio() noexcept {
                    return m_anchorHoldingPowerRatio_;
                }

                const double& anchorHoldingPowerRatio() const noexcept {
                    return m_anchorHoldingPowerRatio_;
                }

                void anchorHoldingPowerRatio(double value) {

                    m_anchorHoldingPowerRatio_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType& anchorKind() noexcept {
                    return m_anchorKind_;
                }

                const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType& anchorKind() const noexcept {
                    return m_anchorKind_;
                }

                void anchorKind(const ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType& value) {

                    m_anchorKind_ = value;
                }

                void anchorKind(::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType&& value) {
                    m_anchorKind_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType& anchorLocation() noexcept {
                    return m_anchorLocation_;
                }

                const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType& anchorLocation() const noexcept {
                    return m_anchorLocation_;
                }

                void anchorLocation(const ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType& value) {

                    m_anchorLocation_ = value;
                }

                void anchorLocation(::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType&& value) {
                    m_anchorLocation_ = std::move(value);
                }
                double& anchorSize() noexcept {
                    return m_anchorSize_;
                }

                const double& anchorSize() const noexcept {
                    return m_anchorSize_;
                }

                void anchorSize(double value) {

                    m_anchorSize_ = value;
                }

                double& rodeLength() noexcept {
                    return m_rodeLength_;
                }

                const double& rodeLength() const noexcept {
                    return m_rodeLength_;
                }

                void rodeLength(double value) {

                    m_rodeLength_ = value;
                }

                double& rodeSize() noexcept {
                    return m_rodeSize_;
                }

                const double& rodeSize() const noexcept {
                    return m_rodeSize_;
                }

                void rodeSize(double value) {

                    m_rodeSize_ = value;
                }

                double& rodeWorkingLoadLimit() noexcept {
                    return m_rodeWorkingLoadLimit_;
                }

                const double& rodeWorkingLoadLimit() const noexcept {
                    return m_rodeWorkingLoadLimit_;
                }

                void rodeWorkingLoadLimit(double value) {

                    m_rodeWorkingLoadLimit_ = value;
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
                bool operator == (const AnchorSpecsReportType& other_) const;
                bool operator != (const AnchorSpecsReportType& other_) const;

                void swap(AnchorSpecsReportType& other_) noexcept ;

              private:

                double m_anchorHoldingPower_;
                double m_anchorHoldingPowerRatio_;
                ::UMAA::Common::MaritimeEnumeration::AnchorKindEnumType::AnchorKindEnumType m_anchorKind_;
                ::UMAA::Common::MaritimeEnumeration::AnchorLocationEnumType::AnchorLocationEnumType m_anchorLocation_;
                double m_anchorSize_;
                double m_rodeLength_;
                double m_rodeSize_;
                double m_rodeWorkingLoadLimit_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(AnchorSpecsReportType& a, AnchorSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const AnchorSpecsReportType& sample);

        } // namespace AnchorSpecs  
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
        struct topic_type_name< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::AnchorSpecs::AnchorSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::AnchorSpecs::AnchorSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::AnchorSpecs::AnchorSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::AnchorSpecs::AnchorSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::AnchorSpecs::AnchorSpecsReportType > {
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

#endif // AnchorSpecsReportType_431074103_hpp

