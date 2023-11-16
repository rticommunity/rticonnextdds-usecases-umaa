

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfCollisionAvoidanceConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SelfCollisionAvoidanceConfigReportType_1403327077_hpp
#define SelfCollisionAvoidanceConfigReportType_1403327077_hpp

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
    namespace MO {
        namespace SelfCollisionAvoidanceConfig {

            static const std::string SelfCollisionAvoidanceConfigReport_TOPIC = "UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReport";

            class NDDSUSERDllExport SelfCollisionAvoidanceConfigReportType {
              public:
                SelfCollisionAvoidanceConfigReportType();

                SelfCollisionAvoidanceConfigReportType(int32_t priority,const UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType& state,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                SelfCollisionAvoidanceConfigReportType (SelfCollisionAvoidanceConfigReportType&&) = default;
                SelfCollisionAvoidanceConfigReportType& operator=(SelfCollisionAvoidanceConfigReportType&&) = default;
                SelfCollisionAvoidanceConfigReportType& operator=(const SelfCollisionAvoidanceConfigReportType&) = default;
                SelfCollisionAvoidanceConfigReportType(const SelfCollisionAvoidanceConfigReportType&) = default;
                #else
                SelfCollisionAvoidanceConfigReportType(SelfCollisionAvoidanceConfigReportType&& other_) OMG_NOEXCEPT;  
                SelfCollisionAvoidanceConfigReportType& operator=(SelfCollisionAvoidanceConfigReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                int32_t& priority() OMG_NOEXCEPT {
                    return m_priority_;
                }

                const int32_t& priority() const OMG_NOEXCEPT {
                    return m_priority_;
                }

                void priority(int32_t value) {
                    m_priority_ = value;
                }

                UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType& state() OMG_NOEXCEPT {
                    return m_state_;
                }

                const UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType& state() const OMG_NOEXCEPT {
                    return m_state_;
                }

                void state(const UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType& value) {
                    m_state_ = value;
                }

                void state(UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType&& value) {
                    m_state_ = std::move(value);
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

                bool operator == (const SelfCollisionAvoidanceConfigReportType& other_) const;
                bool operator != (const SelfCollisionAvoidanceConfigReportType& other_) const;

                void swap(SelfCollisionAvoidanceConfigReportType& other_) OMG_NOEXCEPT ;

              private:

                int32_t m_priority_;
                UMAA::Common::MaritimeEnumeration::CollisionAvoidStateEnumType::CollisionAvoidStateEnumType m_state_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(SelfCollisionAvoidanceConfigReportType& a, SelfCollisionAvoidanceConfigReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SelfCollisionAvoidanceConfigReportType& sample);

        } // namespace SelfCollisionAvoidanceConfig  
    } // namespace MO  
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
        struct topic_type_name< UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::SelfCollisionAvoidanceConfig::SelfCollisionAvoidanceConfigReportType > {
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

#endif // SelfCollisionAvoidanceConfigReportType_1403327077_hpp

