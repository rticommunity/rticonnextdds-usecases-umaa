

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterPresetConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmitterPresetConfigReportType_1242816494_hpp
#define EmitterPresetConfigReportType_1242816494_hpp

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace EmitterPresetConfig {

            static const std::string EmitterPresetConfigReportTypeTopic = "UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::Measurement::NumericGUID >;
            #endif
            class NDDSUSERDllExport EmitterPresetConfigReportType {
              public:

                EmitterPresetConfigReportType();

                EmitterPresetConfigReportType(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& allowedEmitterID_,const std::string& levelName_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& securedEmitterID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& levelID_);

                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& allowedEmitterID() noexcept {
                    return m_allowedEmitterID_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& allowedEmitterID() const noexcept {
                    return m_allowedEmitterID_;
                }

                void allowedEmitterID(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& value) {

                    m_allowedEmitterID_ = value;
                }

                void allowedEmitterID(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >&& value) {
                    m_allowedEmitterID_ = std::move(value);
                }
                std::string& levelName() noexcept {
                    return m_levelName_;
                }

                const std::string& levelName() const noexcept {
                    return m_levelName_;
                }

                void levelName(const std::string& value) {

                    m_levelName_ = value;
                }

                void levelName(std::string&& value) {
                    m_levelName_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& securedEmitterID() noexcept {
                    return m_securedEmitterID_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& securedEmitterID() const noexcept {
                    return m_securedEmitterID_;
                }

                void securedEmitterID(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >& value) {

                    m_securedEmitterID_ = value;
                }

                void securedEmitterID(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L >&& value) {
                    m_securedEmitterID_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& levelID() noexcept {
                    return m_levelID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& levelID() const noexcept {
                    return m_levelID_;
                }

                void levelID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_levelID_ = value;
                }

                void levelID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_levelID_ = std::move(value);
                }
                bool operator == (const EmitterPresetConfigReportType& other_) const;
                bool operator != (const EmitterPresetConfigReportType& other_) const;

                void swap(EmitterPresetConfigReportType& other_) noexcept ;

              private:

                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L > m_allowedEmitterID_;
                std::string m_levelName_;
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 128L > m_securedEmitterID_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_levelID_ {};

            };

            inline void swap(EmitterPresetConfigReportType& a, EmitterPresetConfigReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const EmitterPresetConfigReportType& sample);

        } // namespace EmitterPresetConfig  
    } // namespace SO  
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
        struct topic_type_name< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::EmitterPresetConfig::EmitterPresetConfigReportType > {
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

#endif // EmitterPresetConfigReportType_1242816494_hpp

