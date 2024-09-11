

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ConditionalType_612618838_hpp
#define ConditionalType_612618838_hpp

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
    namespace MM {
        namespace Conditional {

            class NDDSUSERDllExport ConditionalType {
              public:

                ConditionalType();

                ConditionalType(const ::UMAA::Common::Measurement::NumericGUID& conditionalID_,const std::string& name_,const ::UMAA::Common::Measurement::NumericGUID& specializationID_,const ::UMAA::Common::Measurement::DateTime& specializationTimestamp_,const std::string& specializationTopic_);

                ::UMAA::Common::Measurement::NumericGUID& conditionalID() noexcept {
                    return m_conditionalID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& conditionalID() const noexcept {
                    return m_conditionalID_;
                }

                void conditionalID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_conditionalID_ = value;
                }

                void conditionalID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_conditionalID_ = std::move(value);
                }
                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& specializationID() noexcept {
                    return m_specializationID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& specializationID() const noexcept {
                    return m_specializationID_;
                }

                void specializationID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_specializationID_ = value;
                }

                void specializationID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_specializationID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& specializationTimestamp() noexcept {
                    return m_specializationTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& specializationTimestamp() const noexcept {
                    return m_specializationTimestamp_;
                }

                void specializationTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_specializationTimestamp_ = value;
                }

                void specializationTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_specializationTimestamp_ = std::move(value);
                }
                std::string& specializationTopic() noexcept {
                    return m_specializationTopic_;
                }

                const std::string& specializationTopic() const noexcept {
                    return m_specializationTopic_;
                }

                void specializationTopic(const std::string& value) {

                    m_specializationTopic_ = value;
                }

                void specializationTopic(std::string&& value) {
                    m_specializationTopic_ = std::move(value);
                }
                bool operator == (const ConditionalType& other_) const;
                bool operator != (const ConditionalType& other_) const;

                void swap(ConditionalType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_conditionalID_ {};
                std::string m_name_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationID_ {};
                ::UMAA::Common::Measurement::DateTime m_specializationTimestamp_;
                std::string m_specializationTopic_;

            };

            inline void swap(ConditionalType& a, ConditionalType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ConditionalType& sample);

        } // namespace Conditional  
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
        struct topic_type_name< ::UMAA::MM::Conditional::ConditionalType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::Conditional::ConditionalType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::Conditional::ConditionalType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::Conditional::ConditionalType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::Conditional::ConditionalType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::Conditional::ConditionalType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::Conditional::ConditionalType > {
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

#endif // ConditionalType_612618838_hpp

