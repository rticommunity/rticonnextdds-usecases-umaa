

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanReportType_1757477173_hpp
#define MissionPlanReportType_1757477173_hpp

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
#include "UMAA/Common/LargeSetMetadata.hpp"
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
#include "UMAA/MM/BaseType/MissionPlanType.hpp"
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
#include "UMAA/MM/Constraint/ConstraintType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace MissionPlanReport {

            static const std::string MissionPlanReportTypeTopic = "UMAA::MM::MissionPlanReport::MissionPlanReportType";

            class NDDSUSERDllExport MissionPlanReportType {
              public:

                MissionPlanReportType();

                MissionPlanReportType(const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::LargeSetMetadata& constraintsSetMetadata_,const ::UMAA::Common::LargeSetMetadata& missionPlanSetMetadata_);

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
                ::UMAA::Common::LargeSetMetadata& constraintsSetMetadata() noexcept {
                    return m_constraintsSetMetadata_;
                }

                const ::UMAA::Common::LargeSetMetadata& constraintsSetMetadata() const noexcept {
                    return m_constraintsSetMetadata_;
                }

                void constraintsSetMetadata(const ::UMAA::Common::LargeSetMetadata& value) {

                    m_constraintsSetMetadata_ = value;
                }

                void constraintsSetMetadata(::UMAA::Common::LargeSetMetadata&& value) {
                    m_constraintsSetMetadata_ = std::move(value);
                }
                ::UMAA::Common::LargeSetMetadata& missionPlanSetMetadata() noexcept {
                    return m_missionPlanSetMetadata_;
                }

                const ::UMAA::Common::LargeSetMetadata& missionPlanSetMetadata() const noexcept {
                    return m_missionPlanSetMetadata_;
                }

                void missionPlanSetMetadata(const ::UMAA::Common::LargeSetMetadata& value) {

                    m_missionPlanSetMetadata_ = value;
                }

                void missionPlanSetMetadata(::UMAA::Common::LargeSetMetadata&& value) {
                    m_missionPlanSetMetadata_ = std::move(value);
                }
                bool operator == (const MissionPlanReportType& other_) const;
                bool operator != (const MissionPlanReportType& other_) const;

                void swap(MissionPlanReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::LargeSetMetadata m_constraintsSetMetadata_;
                ::UMAA::Common::LargeSetMetadata m_missionPlanSetMetadata_;

            };

            inline void swap(MissionPlanReportType& a, MissionPlanReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MissionPlanReportType& sample);

            static const std::string MissionPlanReportTypeConstraintsSetElementTopic = "UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement";

            class NDDSUSERDllExport MissionPlanReportTypeConstraintsSetElement {
              public:

                MissionPlanReportTypeConstraintsSetElement();

                MissionPlanReportTypeConstraintsSetElement(const ::UMAA::MM::Constraint::ConstraintType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_);

                ::UMAA::MM::Constraint::ConstraintType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::Constraint::ConstraintType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::Constraint::ConstraintType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::Constraint::ConstraintType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& setID() noexcept {
                    return m_setID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& setID() const noexcept {
                    return m_setID_;
                }

                void setID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_setID_ = value;
                }

                void setID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_setID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& elementID() noexcept {
                    return m_elementID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& elementID() const noexcept {
                    return m_elementID_;
                }

                void elementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_elementID_ = value;
                }

                void elementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_elementID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& elementTimestamp() noexcept {
                    return m_elementTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& elementTimestamp() const noexcept {
                    return m_elementTimestamp_;
                }

                void elementTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_elementTimestamp_ = value;
                }

                void elementTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_elementTimestamp_ = std::move(value);
                }
                bool operator == (const MissionPlanReportTypeConstraintsSetElement& other_) const;
                bool operator != (const MissionPlanReportTypeConstraintsSetElement& other_) const;

                void swap(MissionPlanReportTypeConstraintsSetElement& other_) noexcept ;

              private:

                ::UMAA::MM::Constraint::ConstraintType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_setID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;

            };

            inline void swap(MissionPlanReportTypeConstraintsSetElement& a, MissionPlanReportTypeConstraintsSetElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MissionPlanReportTypeConstraintsSetElement& sample);

            static const std::string MissionPlanReportTypeMissionPlanSetElementTopic = "UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement";

            class NDDSUSERDllExport MissionPlanReportTypeMissionPlanSetElement {
              public:

                MissionPlanReportTypeMissionPlanSetElement();

                MissionPlanReportTypeMissionPlanSetElement(const ::UMAA::MM::BaseType::MissionPlanType& element_,const ::UMAA::Common::Measurement::NumericGUID& setID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_);

                ::UMAA::MM::BaseType::MissionPlanType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::BaseType::MissionPlanType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::BaseType::MissionPlanType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::BaseType::MissionPlanType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& setID() noexcept {
                    return m_setID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& setID() const noexcept {
                    return m_setID_;
                }

                void setID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_setID_ = value;
                }

                void setID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_setID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& elementID() noexcept {
                    return m_elementID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& elementID() const noexcept {
                    return m_elementID_;
                }

                void elementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_elementID_ = value;
                }

                void elementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_elementID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& elementTimestamp() noexcept {
                    return m_elementTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& elementTimestamp() const noexcept {
                    return m_elementTimestamp_;
                }

                void elementTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_elementTimestamp_ = value;
                }

                void elementTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_elementTimestamp_ = std::move(value);
                }
                bool operator == (const MissionPlanReportTypeMissionPlanSetElement& other_) const;
                bool operator != (const MissionPlanReportTypeMissionPlanSetElement& other_) const;

                void swap(MissionPlanReportTypeMissionPlanSetElement& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::MissionPlanType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_setID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;

            };

            inline void swap(MissionPlanReportTypeMissionPlanSetElement& a, MissionPlanReportTypeMissionPlanSetElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MissionPlanReportTypeMissionPlanSetElement& sample);

        } // namespace MissionPlanReport  
    } // namespace MM  
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
        struct topic_type_name< ::UMAA::MM::MissionPlanReport::MissionPlanReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::MissionPlanReport::MissionPlanReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::MissionPlanReport::MissionPlanReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::MissionPlanReport::MissionPlanReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::MissionPlanReport::MissionPlanReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::MissionPlanReport::MissionPlanReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::MissionPlanReport::MissionPlanReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::MissionPlanReport::MissionPlanReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::MissionPlanReport::MissionPlanReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::MissionPlanReport::MissionPlanReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeConstraintsSetElement > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::MissionPlanReport::MissionPlanReportTypeMissionPlanSetElement > {
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

#endif // MissionPlanReportType_1757477173_hpp

