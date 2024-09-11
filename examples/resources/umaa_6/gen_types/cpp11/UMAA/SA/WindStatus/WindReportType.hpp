

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WindReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WindReportType_477153708_hpp
#define WindReportType_477153708_hpp

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
namespace UMAA {
    namespace SA {
        namespace WindStatus {

            static const std::string WindReportTypeTopic = "UMAA::SA::WindStatus::WindReportType";

            class NDDSUSERDllExport WindReportType {
              public:

                WindReportType();

                WindReportType(const ::dds::core::optional< double >& relativeAverageDirection_,const ::dds::core::optional< double >& relativeAverageSpeed_,const ::dds::core::optional< double >& relativeInstantaneousDirection_,const ::dds::core::optional< double >& relativeInstantaneousSpeed_,const ::dds::core::optional< double >& relativeMaximumDirection_,const ::dds::core::optional< double >& relativeMaximumSpeed_,const ::dds::core::optional< double >& relativeMinimumDirection_,const ::dds::core::optional< double >& relativeMinimumSpeed_,const ::dds::core::optional< double >& straightDeckCrossSpeed_,const ::dds::core::optional< double >& straightDeckHeadSpeed_,const ::dds::core::optional< double >& trueAverageDirection_,const ::dds::core::optional< double >& trueAverageSpeed_,const ::dds::core::optional< double >& trueInstantaneousDirection_,const ::dds::core::optional< double >& trueInstantaneousSpeed_,const ::dds::core::optional< double >& trueMaximumDirection_,const ::dds::core::optional< double >& trueMaximumSpeed_,const ::dds::core::optional< double >& trueMinimumDirection_,const ::dds::core::optional< double >& trueMinimumSpeed_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< double >& relativeAverageDirection() noexcept {
                    return m_relativeAverageDirection_;
                }

                const ::dds::core::optional< double >& relativeAverageDirection() const noexcept {
                    return m_relativeAverageDirection_;
                }

                void relativeAverageDirection(const ::dds::core::optional< double >& value) {

                    m_relativeAverageDirection_ = value;
                }

                void relativeAverageDirection(::dds::core::optional< double >&& value) {
                    m_relativeAverageDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeAverageSpeed() noexcept {
                    return m_relativeAverageSpeed_;
                }

                const ::dds::core::optional< double >& relativeAverageSpeed() const noexcept {
                    return m_relativeAverageSpeed_;
                }

                void relativeAverageSpeed(const ::dds::core::optional< double >& value) {

                    m_relativeAverageSpeed_ = value;
                }

                void relativeAverageSpeed(::dds::core::optional< double >&& value) {
                    m_relativeAverageSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeInstantaneousDirection() noexcept {
                    return m_relativeInstantaneousDirection_;
                }

                const ::dds::core::optional< double >& relativeInstantaneousDirection() const noexcept {
                    return m_relativeInstantaneousDirection_;
                }

                void relativeInstantaneousDirection(const ::dds::core::optional< double >& value) {

                    m_relativeInstantaneousDirection_ = value;
                }

                void relativeInstantaneousDirection(::dds::core::optional< double >&& value) {
                    m_relativeInstantaneousDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeInstantaneousSpeed() noexcept {
                    return m_relativeInstantaneousSpeed_;
                }

                const ::dds::core::optional< double >& relativeInstantaneousSpeed() const noexcept {
                    return m_relativeInstantaneousSpeed_;
                }

                void relativeInstantaneousSpeed(const ::dds::core::optional< double >& value) {

                    m_relativeInstantaneousSpeed_ = value;
                }

                void relativeInstantaneousSpeed(::dds::core::optional< double >&& value) {
                    m_relativeInstantaneousSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeMaximumDirection() noexcept {
                    return m_relativeMaximumDirection_;
                }

                const ::dds::core::optional< double >& relativeMaximumDirection() const noexcept {
                    return m_relativeMaximumDirection_;
                }

                void relativeMaximumDirection(const ::dds::core::optional< double >& value) {

                    m_relativeMaximumDirection_ = value;
                }

                void relativeMaximumDirection(::dds::core::optional< double >&& value) {
                    m_relativeMaximumDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeMaximumSpeed() noexcept {
                    return m_relativeMaximumSpeed_;
                }

                const ::dds::core::optional< double >& relativeMaximumSpeed() const noexcept {
                    return m_relativeMaximumSpeed_;
                }

                void relativeMaximumSpeed(const ::dds::core::optional< double >& value) {

                    m_relativeMaximumSpeed_ = value;
                }

                void relativeMaximumSpeed(::dds::core::optional< double >&& value) {
                    m_relativeMaximumSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeMinimumDirection() noexcept {
                    return m_relativeMinimumDirection_;
                }

                const ::dds::core::optional< double >& relativeMinimumDirection() const noexcept {
                    return m_relativeMinimumDirection_;
                }

                void relativeMinimumDirection(const ::dds::core::optional< double >& value) {

                    m_relativeMinimumDirection_ = value;
                }

                void relativeMinimumDirection(::dds::core::optional< double >&& value) {
                    m_relativeMinimumDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& relativeMinimumSpeed() noexcept {
                    return m_relativeMinimumSpeed_;
                }

                const ::dds::core::optional< double >& relativeMinimumSpeed() const noexcept {
                    return m_relativeMinimumSpeed_;
                }

                void relativeMinimumSpeed(const ::dds::core::optional< double >& value) {

                    m_relativeMinimumSpeed_ = value;
                }

                void relativeMinimumSpeed(::dds::core::optional< double >&& value) {
                    m_relativeMinimumSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& straightDeckCrossSpeed() noexcept {
                    return m_straightDeckCrossSpeed_;
                }

                const ::dds::core::optional< double >& straightDeckCrossSpeed() const noexcept {
                    return m_straightDeckCrossSpeed_;
                }

                void straightDeckCrossSpeed(const ::dds::core::optional< double >& value) {

                    m_straightDeckCrossSpeed_ = value;
                }

                void straightDeckCrossSpeed(::dds::core::optional< double >&& value) {
                    m_straightDeckCrossSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& straightDeckHeadSpeed() noexcept {
                    return m_straightDeckHeadSpeed_;
                }

                const ::dds::core::optional< double >& straightDeckHeadSpeed() const noexcept {
                    return m_straightDeckHeadSpeed_;
                }

                void straightDeckHeadSpeed(const ::dds::core::optional< double >& value) {

                    m_straightDeckHeadSpeed_ = value;
                }

                void straightDeckHeadSpeed(::dds::core::optional< double >&& value) {
                    m_straightDeckHeadSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& trueAverageDirection() noexcept {
                    return m_trueAverageDirection_;
                }

                const ::dds::core::optional< double >& trueAverageDirection() const noexcept {
                    return m_trueAverageDirection_;
                }

                void trueAverageDirection(const ::dds::core::optional< double >& value) {

                    m_trueAverageDirection_ = value;
                }

                void trueAverageDirection(::dds::core::optional< double >&& value) {
                    m_trueAverageDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& trueAverageSpeed() noexcept {
                    return m_trueAverageSpeed_;
                }

                const ::dds::core::optional< double >& trueAverageSpeed() const noexcept {
                    return m_trueAverageSpeed_;
                }

                void trueAverageSpeed(const ::dds::core::optional< double >& value) {

                    m_trueAverageSpeed_ = value;
                }

                void trueAverageSpeed(::dds::core::optional< double >&& value) {
                    m_trueAverageSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& trueInstantaneousDirection() noexcept {
                    return m_trueInstantaneousDirection_;
                }

                const ::dds::core::optional< double >& trueInstantaneousDirection() const noexcept {
                    return m_trueInstantaneousDirection_;
                }

                void trueInstantaneousDirection(const ::dds::core::optional< double >& value) {

                    m_trueInstantaneousDirection_ = value;
                }

                void trueInstantaneousDirection(::dds::core::optional< double >&& value) {
                    m_trueInstantaneousDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& trueInstantaneousSpeed() noexcept {
                    return m_trueInstantaneousSpeed_;
                }

                const ::dds::core::optional< double >& trueInstantaneousSpeed() const noexcept {
                    return m_trueInstantaneousSpeed_;
                }

                void trueInstantaneousSpeed(const ::dds::core::optional< double >& value) {

                    m_trueInstantaneousSpeed_ = value;
                }

                void trueInstantaneousSpeed(::dds::core::optional< double >&& value) {
                    m_trueInstantaneousSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& trueMaximumDirection() noexcept {
                    return m_trueMaximumDirection_;
                }

                const ::dds::core::optional< double >& trueMaximumDirection() const noexcept {
                    return m_trueMaximumDirection_;
                }

                void trueMaximumDirection(const ::dds::core::optional< double >& value) {

                    m_trueMaximumDirection_ = value;
                }

                void trueMaximumDirection(::dds::core::optional< double >&& value) {
                    m_trueMaximumDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& trueMaximumSpeed() noexcept {
                    return m_trueMaximumSpeed_;
                }

                const ::dds::core::optional< double >& trueMaximumSpeed() const noexcept {
                    return m_trueMaximumSpeed_;
                }

                void trueMaximumSpeed(const ::dds::core::optional< double >& value) {

                    m_trueMaximumSpeed_ = value;
                }

                void trueMaximumSpeed(::dds::core::optional< double >&& value) {
                    m_trueMaximumSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& trueMinimumDirection() noexcept {
                    return m_trueMinimumDirection_;
                }

                const ::dds::core::optional< double >& trueMinimumDirection() const noexcept {
                    return m_trueMinimumDirection_;
                }

                void trueMinimumDirection(const ::dds::core::optional< double >& value) {

                    m_trueMinimumDirection_ = value;
                }

                void trueMinimumDirection(::dds::core::optional< double >&& value) {
                    m_trueMinimumDirection_ = std::move(value);
                }
                ::dds::core::optional< double >& trueMinimumSpeed() noexcept {
                    return m_trueMinimumSpeed_;
                }

                const ::dds::core::optional< double >& trueMinimumSpeed() const noexcept {
                    return m_trueMinimumSpeed_;
                }

                void trueMinimumSpeed(const ::dds::core::optional< double >& value) {

                    m_trueMinimumSpeed_ = value;
                }

                void trueMinimumSpeed(::dds::core::optional< double >&& value) {
                    m_trueMinimumSpeed_ = std::move(value);
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
                bool operator == (const WindReportType& other_) const;
                bool operator != (const WindReportType& other_) const;

                void swap(WindReportType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_relativeAverageDirection_;
                ::dds::core::optional< double > m_relativeAverageSpeed_;
                ::dds::core::optional< double > m_relativeInstantaneousDirection_;
                ::dds::core::optional< double > m_relativeInstantaneousSpeed_;
                ::dds::core::optional< double > m_relativeMaximumDirection_;
                ::dds::core::optional< double > m_relativeMaximumSpeed_;
                ::dds::core::optional< double > m_relativeMinimumDirection_;
                ::dds::core::optional< double > m_relativeMinimumSpeed_;
                ::dds::core::optional< double > m_straightDeckCrossSpeed_;
                ::dds::core::optional< double > m_straightDeckHeadSpeed_;
                ::dds::core::optional< double > m_trueAverageDirection_;
                ::dds::core::optional< double > m_trueAverageSpeed_;
                ::dds::core::optional< double > m_trueInstantaneousDirection_;
                ::dds::core::optional< double > m_trueInstantaneousSpeed_;
                ::dds::core::optional< double > m_trueMaximumDirection_;
                ::dds::core::optional< double > m_trueMaximumSpeed_;
                ::dds::core::optional< double > m_trueMinimumDirection_;
                ::dds::core::optional< double > m_trueMinimumSpeed_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(WindReportType& a, WindReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WindReportType& sample);

        } // namespace WindStatus  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::WindStatus::WindReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::WindStatus::WindReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::WindStatus::WindReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::WindStatus::WindReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::WindStatus::WindReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::WindStatus::WindReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::WindStatus::WindReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::WindStatus::WindReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::WindStatus::WindReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::WindStatus::WindReportType > {
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

#endif // WindReportType_477153708_hpp

