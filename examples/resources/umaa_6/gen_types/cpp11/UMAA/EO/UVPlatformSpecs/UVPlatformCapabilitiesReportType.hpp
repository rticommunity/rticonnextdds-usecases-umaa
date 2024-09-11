

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformCapabilitiesReportType_1594135504_hpp
#define UVPlatformCapabilitiesReportType_1594135504_hpp

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
#include "UMAA/EO/UVPlatformSpecs/SurfaceCapabilityLimitsType.hpp"
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
#include "UMAA/EO/UVPlatformSpecs/UnderwaterCapabilityLimitsType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace UVPlatformSpecs {

            static const std::string UVPlatformCapabilitiesReportTypeTopic = "UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType";

            class NDDSUSERDllExport UVPlatformCapabilitiesReportType {
              public:

                UVPlatformCapabilitiesReportType();

                UVPlatformCapabilitiesReportType(double minWaterDepth_,const ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType& surfaceCapabilities_,const ::dds::core::optional< double >& towingCapacity_,const ::dds::core::optional< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >& underwaterCapabilities_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                double& minWaterDepth() noexcept {
                    return m_minWaterDepth_;
                }

                const double& minWaterDepth() const noexcept {
                    return m_minWaterDepth_;
                }

                void minWaterDepth(double value) {

                    m_minWaterDepth_ = value;
                }

                ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType& surfaceCapabilities() noexcept {
                    return m_surfaceCapabilities_;
                }

                const ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType& surfaceCapabilities() const noexcept {
                    return m_surfaceCapabilities_;
                }

                void surfaceCapabilities(const ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType& value) {

                    m_surfaceCapabilities_ = value;
                }

                void surfaceCapabilities(::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType&& value) {
                    m_surfaceCapabilities_ = std::move(value);
                }
                ::dds::core::optional< double >& towingCapacity() noexcept {
                    return m_towingCapacity_;
                }

                const ::dds::core::optional< double >& towingCapacity() const noexcept {
                    return m_towingCapacity_;
                }

                void towingCapacity(const ::dds::core::optional< double >& value) {

                    m_towingCapacity_ = value;
                }

                void towingCapacity(::dds::core::optional< double >&& value) {
                    m_towingCapacity_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >& underwaterCapabilities() noexcept {
                    return m_underwaterCapabilities_;
                }

                const ::dds::core::optional< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >& underwaterCapabilities() const noexcept {
                    return m_underwaterCapabilities_;
                }

                void underwaterCapabilities(const ::dds::core::optional< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >& value) {

                    m_underwaterCapabilities_ = value;
                }

                void underwaterCapabilities(::dds::core::optional< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >&& value) {
                    m_underwaterCapabilities_ = std::move(value);
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
                bool operator == (const UVPlatformCapabilitiesReportType& other_) const;
                bool operator != (const UVPlatformCapabilitiesReportType& other_) const;

                void swap(UVPlatformCapabilitiesReportType& other_) noexcept ;

              private:

                double m_minWaterDepth_;
                ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType m_surfaceCapabilities_;
                ::dds::core::optional< double > m_towingCapacity_;
                ::dds::core::optional< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType > m_underwaterCapabilities_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(UVPlatformCapabilitiesReportType& a, UVPlatformCapabilitiesReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const UVPlatformCapabilitiesReportType& sample);

        } // namespace UVPlatformSpecs  
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
        struct topic_type_name< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
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

#endif // UVPlatformCapabilitiesReportType_1594135504_hpp

