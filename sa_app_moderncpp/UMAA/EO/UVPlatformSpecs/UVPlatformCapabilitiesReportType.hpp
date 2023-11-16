

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformCapabilitiesReportType_1594135249_hpp
#define UVPlatformCapabilitiesReportType_1594135249_hpp

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/EO/UVPlatformSpecs/UVPlatformCapabilitiesType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace UVPlatformSpecs {

            static const std::string UVPlatformCapabilitiesReport_TOPIC = "UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReport";

            class NDDSUSERDllExport UVPlatformCapabilitiesReportType {
              public:
                UVPlatformCapabilitiesReportType();

                UVPlatformCapabilitiesReportType(double endurance,double maxDepth,double range,const UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& surfaceCapabilities,double towingCapacity,const ::dds::core::optional< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >& underwaterCapabilities,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                UVPlatformCapabilitiesReportType (UVPlatformCapabilitiesReportType&&) = default;
                UVPlatformCapabilitiesReportType& operator=(UVPlatformCapabilitiesReportType&&) = default;
                UVPlatformCapabilitiesReportType& operator=(const UVPlatformCapabilitiesReportType&) = default;
                UVPlatformCapabilitiesReportType(const UVPlatformCapabilitiesReportType&) = default;
                #else
                UVPlatformCapabilitiesReportType(UVPlatformCapabilitiesReportType&& other_) OMG_NOEXCEPT;  
                UVPlatformCapabilitiesReportType& operator=(UVPlatformCapabilitiesReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& endurance() OMG_NOEXCEPT {
                    return m_endurance_;
                }

                const double& endurance() const OMG_NOEXCEPT {
                    return m_endurance_;
                }

                void endurance(double value) {
                    m_endurance_ = value;
                }

                double& maxDepth() OMG_NOEXCEPT {
                    return m_maxDepth_;
                }

                const double& maxDepth() const OMG_NOEXCEPT {
                    return m_maxDepth_;
                }

                void maxDepth(double value) {
                    m_maxDepth_ = value;
                }

                double& range() OMG_NOEXCEPT {
                    return m_range_;
                }

                const double& range() const OMG_NOEXCEPT {
                    return m_range_;
                }

                void range(double value) {
                    m_range_ = value;
                }

                UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& surfaceCapabilities() OMG_NOEXCEPT {
                    return m_surfaceCapabilities_;
                }

                const UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& surfaceCapabilities() const OMG_NOEXCEPT {
                    return m_surfaceCapabilities_;
                }

                void surfaceCapabilities(const UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& value) {
                    m_surfaceCapabilities_ = value;
                }

                void surfaceCapabilities(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType&& value) {
                    m_surfaceCapabilities_ = std::move(value);
                }
                double& towingCapacity() OMG_NOEXCEPT {
                    return m_towingCapacity_;
                }

                const double& towingCapacity() const OMG_NOEXCEPT {
                    return m_towingCapacity_;
                }

                void towingCapacity(double value) {
                    m_towingCapacity_ = value;
                }

                ::dds::core::optional< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >& underwaterCapabilities() OMG_NOEXCEPT {
                    return m_underwaterCapabilities_;
                }

                const ::dds::core::optional< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >& underwaterCapabilities() const OMG_NOEXCEPT {
                    return m_underwaterCapabilities_;
                }

                void underwaterCapabilities(const ::dds::core::optional< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >& value) {
                    m_underwaterCapabilities_ = value;
                }

                void underwaterCapabilities(::dds::core::optional< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType >&& value) {
                    m_underwaterCapabilities_ = std::move(value);
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

                bool operator == (const UVPlatformCapabilitiesReportType& other_) const;
                bool operator != (const UVPlatformCapabilitiesReportType& other_) const;

                void swap(UVPlatformCapabilitiesReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_endurance_;
                double m_maxDepth_;
                double m_range_;
                UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType m_surfaceCapabilities_;
                double m_towingCapacity_;
                ::dds::core::optional< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType > m_underwaterCapabilities_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(UVPlatformCapabilitiesReportType& a, UVPlatformCapabilitiesReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const UVPlatformCapabilitiesReportType& sample);

        } // namespace UVPlatformSpecs  
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
        struct topic_type_name< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
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

#endif // UVPlatformCapabilitiesReportType_1594135249_hpp

