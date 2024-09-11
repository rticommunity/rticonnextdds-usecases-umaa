

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IdentifierType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef IdentifierType_1132007157_hpp
#define IdentifierType_1132007157_hpp

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
namespace UMAA {
    namespace Common {

        class NDDSUSERDllExport IdentifierType {
          public:

            IdentifierType();

            IdentifierType(const ::UMAA::Common::Measurement::NumericGUID& id_,const ::UMAA::Common::Measurement::NumericGUID& parentID_);

            ::UMAA::Common::Measurement::NumericGUID& id() noexcept {
                return m_id_;
            }

            const ::UMAA::Common::Measurement::NumericGUID& id() const noexcept {
                return m_id_;
            }

            void id(const ::UMAA::Common::Measurement::NumericGUID& value) {

                m_id_ = value;
            }

            void id(::UMAA::Common::Measurement::NumericGUID&& value) {
                m_id_ = std::move(value);
            }
            ::UMAA::Common::Measurement::NumericGUID& parentID() noexcept {
                return m_parentID_;
            }

            const ::UMAA::Common::Measurement::NumericGUID& parentID() const noexcept {
                return m_parentID_;
            }

            void parentID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                m_parentID_ = value;
            }

            void parentID(::UMAA::Common::Measurement::NumericGUID&& value) {
                m_parentID_ = std::move(value);
            }
            bool operator == (const IdentifierType& other_) const;
            bool operator != (const IdentifierType& other_) const;

            void swap(IdentifierType& other_) noexcept ;

          private:

            ::UMAA::Common::Measurement::NumericGUID m_id_ {};
            ::UMAA::Common::Measurement::NumericGUID m_parentID_ {};

        };

        inline void swap(IdentifierType& a, IdentifierType& b)  noexcept 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const IdentifierType& sample);

    } // namespace Common  
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
        struct topic_type_name< ::UMAA::Common::IdentifierType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::IdentifierType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::IdentifierType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::IdentifierType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::IdentifierType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::IdentifierType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::IdentifierType > {
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

#endif // IdentifierType_1132007157_hpp

