

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsChannelSpecsReportType_74255873_hpp
#define CommsChannelSpecsReportType_74255873_hpp

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
#include "UMAA/CO/CommsChannelSpecs/FrequencyRangeType.hpp"
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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace CO {
        namespace CommsChannelSpecs {

            static const std::string CommsChannelSpecsReportTypeTopic = "UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType";

            class NDDSUSERDllExport CommsChannelSpecsReportType {
              public:

                CommsChannelSpecsReportType();

                CommsChannelSpecsReportType(int32_t bufferSize_,const ::dds::core::optional< std::string >& commsDeviceIdentifier_,double maxTransmitPower_,double minimumSNR_,const ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType& spectrumRange_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                int32_t& bufferSize() noexcept {
                    return m_bufferSize_;
                }

                const int32_t& bufferSize() const noexcept {
                    return m_bufferSize_;
                }

                void bufferSize(int32_t value) {

                    m_bufferSize_ = value;
                }

                ::dds::core::optional< std::string >& commsDeviceIdentifier() noexcept {
                    return m_commsDeviceIdentifier_;
                }

                const ::dds::core::optional< std::string >& commsDeviceIdentifier() const noexcept {
                    return m_commsDeviceIdentifier_;
                }

                void commsDeviceIdentifier(const ::dds::core::optional< std::string >& value) {

                    m_commsDeviceIdentifier_ = value;
                }

                void commsDeviceIdentifier(::dds::core::optional< std::string >&& value) {
                    m_commsDeviceIdentifier_ = std::move(value);
                }
                double& maxTransmitPower() noexcept {
                    return m_maxTransmitPower_;
                }

                const double& maxTransmitPower() const noexcept {
                    return m_maxTransmitPower_;
                }

                void maxTransmitPower(double value) {

                    m_maxTransmitPower_ = value;
                }

                double& minimumSNR() noexcept {
                    return m_minimumSNR_;
                }

                const double& minimumSNR() const noexcept {
                    return m_minimumSNR_;
                }

                void minimumSNR(double value) {

                    m_minimumSNR_ = value;
                }

                ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType& spectrumRange() noexcept {
                    return m_spectrumRange_;
                }

                const ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType& spectrumRange() const noexcept {
                    return m_spectrumRange_;
                }

                void spectrumRange(const ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType& value) {

                    m_spectrumRange_ = value;
                }

                void spectrumRange(::UMAA::CO::CommsChannelSpecs::FrequencyRangeType&& value) {
                    m_spectrumRange_ = std::move(value);
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
                bool operator == (const CommsChannelSpecsReportType& other_) const;
                bool operator != (const CommsChannelSpecsReportType& other_) const;

                void swap(CommsChannelSpecsReportType& other_) noexcept ;

              private:

                int32_t m_bufferSize_;
                ::dds::core::optional< std::string > m_commsDeviceIdentifier_;
                double m_maxTransmitPower_;
                double m_minimumSNR_;
                ::UMAA::CO::CommsChannelSpecs::FrequencyRangeType m_spectrumRange_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(CommsChannelSpecsReportType& a, CommsChannelSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsChannelSpecsReportType& sample);

        } // namespace CommsChannelSpecs  
    } // namespace CO  
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
        struct topic_type_name< ::UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::CommsChannelSpecs::CommsChannelSpecsReportType > {
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

#endif // CommsChannelSpecsReportType_74255873_hpp

