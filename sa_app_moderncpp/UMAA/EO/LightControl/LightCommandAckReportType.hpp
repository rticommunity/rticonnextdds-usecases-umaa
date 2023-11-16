

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LightCommandAckReportType_406116345_hpp
#define LightCommandAckReportType_406116345_hpp

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
namespace UMAA {
    namespace EO {
        namespace LightControl {

            static const std::string LightCommandAckReport_TOPIC = "UMAA::EO::LightControl::LightCommandAckReport";

            class NDDSUSERDllExport LightCommandAckReportType {
              public:
                LightCommandAckReportType();

                LightCommandAckReportType(bool allroundLight,bool flashingLight,bool mastheadLight,bool portSideLight,bool starboardSideLight,bool sternLight,bool towingLight,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LightCommandAckReportType (LightCommandAckReportType&&) = default;
                LightCommandAckReportType& operator=(LightCommandAckReportType&&) = default;
                LightCommandAckReportType& operator=(const LightCommandAckReportType&) = default;
                LightCommandAckReportType(const LightCommandAckReportType&) = default;
                #else
                LightCommandAckReportType(LightCommandAckReportType&& other_) OMG_NOEXCEPT;  
                LightCommandAckReportType& operator=(LightCommandAckReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& allroundLight() OMG_NOEXCEPT {
                    return m_allroundLight_;
                }

                const bool& allroundLight() const OMG_NOEXCEPT {
                    return m_allroundLight_;
                }

                void allroundLight(bool value) {
                    m_allroundLight_ = value;
                }

                bool& flashingLight() OMG_NOEXCEPT {
                    return m_flashingLight_;
                }

                const bool& flashingLight() const OMG_NOEXCEPT {
                    return m_flashingLight_;
                }

                void flashingLight(bool value) {
                    m_flashingLight_ = value;
                }

                bool& mastheadLight() OMG_NOEXCEPT {
                    return m_mastheadLight_;
                }

                const bool& mastheadLight() const OMG_NOEXCEPT {
                    return m_mastheadLight_;
                }

                void mastheadLight(bool value) {
                    m_mastheadLight_ = value;
                }

                bool& portSideLight() OMG_NOEXCEPT {
                    return m_portSideLight_;
                }

                const bool& portSideLight() const OMG_NOEXCEPT {
                    return m_portSideLight_;
                }

                void portSideLight(bool value) {
                    m_portSideLight_ = value;
                }

                bool& starboardSideLight() OMG_NOEXCEPT {
                    return m_starboardSideLight_;
                }

                const bool& starboardSideLight() const OMG_NOEXCEPT {
                    return m_starboardSideLight_;
                }

                void starboardSideLight(bool value) {
                    m_starboardSideLight_ = value;
                }

                bool& sternLight() OMG_NOEXCEPT {
                    return m_sternLight_;
                }

                const bool& sternLight() const OMG_NOEXCEPT {
                    return m_sternLight_;
                }

                void sternLight(bool value) {
                    m_sternLight_ = value;
                }

                bool& towingLight() OMG_NOEXCEPT {
                    return m_towingLight_;
                }

                const bool& towingLight() const OMG_NOEXCEPT {
                    return m_towingLight_;
                }

                void towingLight(bool value) {
                    m_towingLight_ = value;
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
                UMAA::Common::Measurement::NumericGUID& sessionID() OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& sessionID() const OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                void sessionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_sessionID_ = value;
                }

                void sessionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }

                bool operator == (const LightCommandAckReportType& other_) const;
                bool operator != (const LightCommandAckReportType& other_) const;

                void swap(LightCommandAckReportType& other_) OMG_NOEXCEPT ;

              private:

                bool m_allroundLight_;
                bool m_flashingLight_;
                bool m_mastheadLight_;
                bool m_portSideLight_;
                bool m_starboardSideLight_;
                bool m_sternLight_;
                bool m_towingLight_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(LightCommandAckReportType& a, LightCommandAckReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LightCommandAckReportType& sample);

        } // namespace LightControl  
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
        struct topic_type_name< UMAA::EO::LightControl::LightCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::LightControl::LightCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::LightControl::LightCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::LightControl::LightCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::LightControl::LightCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::LightControl::LightCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::LightControl::LightCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::LightControl::LightCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::LightControl::LightCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::LightControl::LightCommandAckReportType > {
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

#endif // LightCommandAckReportType_406116345_hpp

