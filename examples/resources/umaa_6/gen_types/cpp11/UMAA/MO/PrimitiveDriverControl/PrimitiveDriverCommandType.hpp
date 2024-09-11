

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverCommandType_1045313480_hpp
#define PrimitiveDriverCommandType_1045313480_hpp

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

            static const std::string PrimitiveDriverCommandTypeTopic = "UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType";

            class NDDSUSERDllExport PrimitiveDriverCommandType {
              public:

                PrimitiveDriverCommandType();

                PrimitiveDriverCommandType(const ::UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort_,const ::UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort_,const ::UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort_,const ::UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::IdentifierType& destination_);

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
                ::UMAA::Common::IdentifierType& destination() noexcept {
                    return m_destination_;
                }

                const ::UMAA::Common::IdentifierType& destination() const noexcept {
                    return m_destination_;
                }

                void destination(const ::UMAA::Common::IdentifierType& value) {

                    m_destination_ = value;
                }

                void destination(::UMAA::Common::IdentifierType&& value) {
                    m_destination_ = std::move(value);
                }
                bool operator == (const PrimitiveDriverCommandType& other_) const;
                bool operator != (const PrimitiveDriverCommandType& other_) const;

                void swap(PrimitiveDriverCommandType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::LinearEffort m_propulsiveLinearEffort_;
                ::UMAA::Common::Measurement::RotationalEffort m_propulsiveRotationalEffort_;
                ::UMAA::Common::Measurement::LinearEffort m_resistiveLinearEffort_;
                ::UMAA::Common::Measurement::RotationalEffort m_resistiveRotationalEffort_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};
                ::UMAA::Common::IdentifierType m_destination_;

            };

            inline void swap(PrimitiveDriverCommandType& a, PrimitiveDriverCommandType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PrimitiveDriverCommandType& sample);

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
        struct topic_type_name< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::PrimitiveDriverControl::PrimitiveDriverCommandType > {
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

#endif // PrimitiveDriverCommandType_1045313480_hpp

