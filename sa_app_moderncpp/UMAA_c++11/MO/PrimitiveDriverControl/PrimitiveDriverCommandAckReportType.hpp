

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverCommandAckReportType_1072962277_hpp
#define PrimitiveDriverCommandAckReportType_1072962277_hpp

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
#include "UMAA/Common/Measurement/LinearEffort.hpp"
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
#include "UMAA/Common/Measurement/RotationalEffort.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace PrimitiveDriverControl {

            RTI_CONSTEXPR_OR_CONST_STRING std::string PrimitiveDriverCommandAckReport_TOPIC = "UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReport";

            class NDDSUSERDllExport PrimitiveDriverCommandAckReportType {
              public:

                PrimitiveDriverCommandAckReportType();

                PrimitiveDriverCommandAckReportType(const ::UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort_,const ::UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort_,const ::UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort_,const ::UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_);

                ::UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort() noexcept {
                    return m_propulsiveLinearEffort_;
                }

                const ::UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort() const noexcept {
                    return m_propulsiveLinearEffort_;
                }

                void propulsiveLinearEffort(const ::UMAA::Common::Measurement::LinearEffort& value) {

                    m_propulsiveLinearEffort_ = value;
                }

                void propulsiveLinearEffort(::UMAA::Common::Measurement::LinearEffort&& value) {
                    m_propulsiveLinearEffort_ = std::move(value);
                }
                ::UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort() noexcept {
                    return m_propulsiveRotationalEffort_;
                }

                const ::UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort() const noexcept {
                    return m_propulsiveRotationalEffort_;
                }

                void propulsiveRotationalEffort(const ::UMAA::Common::Measurement::RotationalEffort& value) {

                    m_propulsiveRotationalEffort_ = value;
                }

                void propulsiveRotationalEffort(::UMAA::Common::Measurement::RotationalEffort&& value) {
                    m_propulsiveRotationalEffort_ = std::move(value);
                }
                ::UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort() noexcept {
                    return m_resistiveLinearEffort_;
                }

                const ::UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort() const noexcept {
                    return m_resistiveLinearEffort_;
                }

                void resistiveLinearEffort(const ::UMAA::Common::Measurement::LinearEffort& value) {

                    m_resistiveLinearEffort_ = value;
                }

                void resistiveLinearEffort(::UMAA::Common::Measurement::LinearEffort&& value) {
                    m_resistiveLinearEffort_ = std::move(value);
                }
                ::UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort() noexcept {
                    return m_resistiveRotationalEffort_;
                }

                const ::UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort() const noexcept {
                    return m_resistiveRotationalEffort_;
                }

                void resistiveRotationalEffort(const ::UMAA::Common::Measurement::RotationalEffort& value) {

                    m_resistiveRotationalEffort_ = value;
                }

                void resistiveRotationalEffort(::UMAA::Common::Measurement::RotationalEffort&& value) {
                    m_resistiveRotationalEffort_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& sessionID() noexcept {
                    return m_sessionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& sessionID() const noexcept {
                    return m_sessionID_;
                }

                void sessionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_sessionID_ = value;
                }

                void sessionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }
                bool operator == (const PrimitiveDriverCommandAckReportType& other_) const;
                bool operator != (const PrimitiveDriverCommandAckReportType& other_) const;

                void swap(PrimitiveDriverCommandAckReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::LinearEffort m_propulsiveLinearEffort_;
                ::UMAA::Common::Measurement::RotationalEffort m_propulsiveRotationalEffort_;
                ::UMAA::Common::Measurement::LinearEffort m_resistiveLinearEffort_;
                ::UMAA::Common::Measurement::RotationalEffort m_resistiveRotationalEffort_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};

            };

            inline void swap(PrimitiveDriverCommandAckReportType& a, PrimitiveDriverCommandAckReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PrimitiveDriverCommandAckReportType& sample);

        } // namespace PrimitiveDriverControl  
    } // namespace MO  
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
        struct topic_type_name< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandAckReportType > {
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

#endif // PrimitiveDriverCommandAckReportType_1072962277_hpp

