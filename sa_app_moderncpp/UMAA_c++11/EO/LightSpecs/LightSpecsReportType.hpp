

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LightSpecsReportType_1091443327_hpp
#define LightSpecsReportType_1091443327_hpp

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
namespace UMAA {
    namespace EO {
        namespace LightSpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string LightSpecsReport_TOPIC = "UMAA::EO::LightSpecs::LightSpecsReport";

            class NDDSUSERDllExport LightSpecsReportType {
              public:

                LightSpecsReportType();

                LightSpecsReportType(bool allroundLight_,bool flashingLight_,bool mastheadLight_,bool portSideLight_,bool starboardSideLight_,bool sternLight_,bool towingLight_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                bool& allroundLight() noexcept {
                    return m_allroundLight_;
                }

                const bool& allroundLight() const noexcept {
                    return m_allroundLight_;
                }

                void allroundLight(bool value) {

                    m_allroundLight_ = value;
                }

                bool& flashingLight() noexcept {
                    return m_flashingLight_;
                }

                const bool& flashingLight() const noexcept {
                    return m_flashingLight_;
                }

                void flashingLight(bool value) {

                    m_flashingLight_ = value;
                }

                bool& mastheadLight() noexcept {
                    return m_mastheadLight_;
                }

                const bool& mastheadLight() const noexcept {
                    return m_mastheadLight_;
                }

                void mastheadLight(bool value) {

                    m_mastheadLight_ = value;
                }

                bool& portSideLight() noexcept {
                    return m_portSideLight_;
                }

                const bool& portSideLight() const noexcept {
                    return m_portSideLight_;
                }

                void portSideLight(bool value) {

                    m_portSideLight_ = value;
                }

                bool& starboardSideLight() noexcept {
                    return m_starboardSideLight_;
                }

                const bool& starboardSideLight() const noexcept {
                    return m_starboardSideLight_;
                }

                void starboardSideLight(bool value) {

                    m_starboardSideLight_ = value;
                }

                bool& sternLight() noexcept {
                    return m_sternLight_;
                }

                const bool& sternLight() const noexcept {
                    return m_sternLight_;
                }

                void sternLight(bool value) {

                    m_sternLight_ = value;
                }

                bool& towingLight() noexcept {
                    return m_towingLight_;
                }

                const bool& towingLight() const noexcept {
                    return m_towingLight_;
                }

                void towingLight(bool value) {

                    m_towingLight_ = value;
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
                bool operator == (const LightSpecsReportType& other_) const;
                bool operator != (const LightSpecsReportType& other_) const;

                void swap(LightSpecsReportType& other_) noexcept ;

              private:

                bool m_allroundLight_;
                bool m_flashingLight_;
                bool m_mastheadLight_;
                bool m_portSideLight_;
                bool m_starboardSideLight_;
                bool m_sternLight_;
                bool m_towingLight_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(LightSpecsReportType& a, LightSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LightSpecsReportType& sample);

        } // namespace LightSpecs  
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
        struct topic_type_name< ::UMAA::EO::LightSpecs::LightSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::LightSpecs::LightSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::LightSpecs::LightSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::LightSpecs::LightSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::LightSpecs::LightSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::LightSpecs::LightSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::LightSpecs::LightSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::LightSpecs::LightSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::LightSpecs::LightSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::LightSpecs::LightSpecsReportType > {
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

#endif // LightSpecsReportType_1091443327_hpp

