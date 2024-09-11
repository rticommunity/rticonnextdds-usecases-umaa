

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RouteObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RouteObjectiveType_2009711407_hpp
#define RouteObjectiveType_2009711407_hpp

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
#include "UMAA/Common/LargeListMetadata.hpp"
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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Time/DateTimeRequirementType.hpp"
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
#include "UMAA/MM/BaseType/StateTriggerType.hpp"
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
#include "UMAA/MM/BaseType/WaypointType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {

            static const std::string RouteObjectiveTypeTopic = "UMAA::MM::BaseType::RouteObjectiveType";

            class NDDSUSERDllExport RouteObjectiveType {
              public:

                RouteObjectiveType();

                RouteObjectiveType(const std::string& routeDescription_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_,const ::UMAA::Common::LargeListMetadata& waypointsListMetadata_);

                std::string& routeDescription() noexcept {
                    return m_routeDescription_;
                }

                const std::string& routeDescription() const noexcept {
                    return m_routeDescription_;
                }

                void routeDescription(const std::string& value) {

                    m_routeDescription_ = value;
                }

                void routeDescription(std::string&& value) {
                    m_routeDescription_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() const noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                void specializationReferenceTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_specializationReferenceTimestamp_ = value;
                }

                void specializationReferenceTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_specializationReferenceTimestamp_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() noexcept {
                    return m_specializationReferenceID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() const noexcept {
                    return m_specializationReferenceID_;
                }

                void specializationReferenceID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_specializationReferenceID_ = value;
                }

                void specializationReferenceID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_specializationReferenceID_ = std::move(value);
                }
                ::UMAA::Common::LargeListMetadata& waypointsListMetadata() noexcept {
                    return m_waypointsListMetadata_;
                }

                const ::UMAA::Common::LargeListMetadata& waypointsListMetadata() const noexcept {
                    return m_waypointsListMetadata_;
                }

                void waypointsListMetadata(const ::UMAA::Common::LargeListMetadata& value) {

                    m_waypointsListMetadata_ = value;
                }

                void waypointsListMetadata(::UMAA::Common::LargeListMetadata&& value) {
                    m_waypointsListMetadata_ = std::move(value);
                }
                bool operator == (const RouteObjectiveType& other_) const;
                bool operator != (const RouteObjectiveType& other_) const;

                void swap(RouteObjectiveType& other_) noexcept ;

              private:

                std::string m_routeDescription_;
                ::UMAA::Common::Measurement::DateTime m_specializationReferenceTimestamp_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationReferenceID_ {};
                ::UMAA::Common::LargeListMetadata m_waypointsListMetadata_;

            };

            inline void swap(RouteObjectiveType& a, RouteObjectiveType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RouteObjectiveType& sample);

            static const std::string RouteObjectiveTypeWaypointsListElementTopic = "UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement";

            class NDDSUSERDllExport RouteObjectiveTypeWaypointsListElement {
              public:

                RouteObjectiveTypeWaypointsListElement();

                RouteObjectiveTypeWaypointsListElement(const ::UMAA::MM::BaseType::WaypointType& element_,const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& elementID_,const ::UMAA::Common::Measurement::DateTime& elementTimestamp_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID_);

                ::UMAA::MM::BaseType::WaypointType& element() noexcept {
                    return m_element_;
                }

                const ::UMAA::MM::BaseType::WaypointType& element() const noexcept {
                    return m_element_;
                }

                void element(const ::UMAA::MM::BaseType::WaypointType& value) {

                    m_element_ = value;
                }

                void element(::UMAA::MM::BaseType::WaypointType&& value) {
                    m_element_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& listID() noexcept {
                    return m_listID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& listID() const noexcept {
                    return m_listID_;
                }

                void listID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_listID_ = value;
                }

                void listID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_listID_ = std::move(value);
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
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() noexcept {
                    return m_nextElementID_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& nextElementID() const noexcept {
                    return m_nextElementID_;
                }

                void nextElementID(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_nextElementID_ = value;
                }

                void nextElementID(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_nextElementID_ = std::move(value);
                }
                bool operator == (const RouteObjectiveTypeWaypointsListElement& other_) const;
                bool operator != (const RouteObjectiveTypeWaypointsListElement& other_) const;

                void swap(RouteObjectiveTypeWaypointsListElement& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::WaypointType m_element_;
                ::UMAA::Common::Measurement::NumericGUID m_listID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_elementID_ {};
                ::UMAA::Common::Measurement::DateTime m_elementTimestamp_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_nextElementID_;

            };

            inline void swap(RouteObjectiveTypeWaypointsListElement& a, RouteObjectiveTypeWaypointsListElement& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RouteObjectiveTypeWaypointsListElement& sample);

        } // namespace BaseType  
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
        struct topic_type_name< ::UMAA::MM::BaseType::RouteObjectiveType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::RouteObjectiveType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::RouteObjectiveType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::RouteObjectiveType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::RouteObjectiveType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::RouteObjectiveType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::RouteObjectiveType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::RouteObjectiveType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::RouteObjectiveType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::RouteObjectiveTypeWaypointsListElement > {
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

#endif // RouteObjectiveType_2009711407_hpp

