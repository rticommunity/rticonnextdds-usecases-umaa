

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LargeListMetadata.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LargeListMetadata_1240579003_hpp
#define LargeListMetadata_1240579003_hpp

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

        class NDDSUSERDllExport LargeListMetadata {
          public:

            LargeListMetadata();

            LargeListMetadata(const ::UMAA::Common::Measurement::NumericGUID& listID_,const ::UMAA::Common::Measurement::NumericGUID& updateElementID_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& updateElementTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& startingElementID_,int32_t size_);

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
            ::UMAA::Common::Measurement::NumericGUID& updateElementID() noexcept {
                return m_updateElementID_;
            }

            const ::UMAA::Common::Measurement::NumericGUID& updateElementID() const noexcept {
                return m_updateElementID_;
            }

            void updateElementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                m_updateElementID_ = value;
            }

            void updateElementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                m_updateElementID_ = std::move(value);
            }
            ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& updateElementTimestamp() noexcept {
                return m_updateElementTimestamp_;
            }

            const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& updateElementTimestamp() const noexcept {
                return m_updateElementTimestamp_;
            }

            void updateElementTimestamp(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                m_updateElementTimestamp_ = value;
            }

            void updateElementTimestamp(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                m_updateElementTimestamp_ = std::move(value);
            }
            ::UMAA::Common::Measurement::NumericGUID& startingElementID() noexcept {
                return m_startingElementID_;
            }

            const ::UMAA::Common::Measurement::NumericGUID& startingElementID() const noexcept {
                return m_startingElementID_;
            }

            void startingElementID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                m_startingElementID_ = value;
            }

            void startingElementID(::UMAA::Common::Measurement::NumericGUID&& value) {
                m_startingElementID_ = std::move(value);
            }
            int32_t& size() noexcept {
                return m_size_;
            }

            const int32_t& size() const noexcept {
                return m_size_;
            }

            void size(int32_t value) {

                m_size_ = value;
            }

            bool operator == (const LargeListMetadata& other_) const;
            bool operator != (const LargeListMetadata& other_) const;

            void swap(LargeListMetadata& other_) noexcept ;

          private:

            ::UMAA::Common::Measurement::NumericGUID m_listID_ {};
            ::UMAA::Common::Measurement::NumericGUID m_updateElementID_ {};
            ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_updateElementTimestamp_;
            ::UMAA::Common::Measurement::NumericGUID m_startingElementID_ {};
            int32_t m_size_;

        };

        inline void swap(LargeListMetadata& a, LargeListMetadata& b)  noexcept 
        {
            a.swap(b);
        }

        NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LargeListMetadata& sample);

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
        struct topic_type_name< ::UMAA::Common::LargeListMetadata > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::LargeListMetadata";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::LargeListMetadata > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::LargeListMetadata > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::LargeListMetadata& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::LargeListMetadata& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::LargeListMetadata& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::LargeListMetadata& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::LargeListMetadata > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::LargeListMetadata > {
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

#endif // LargeListMetadata_1240579003_hpp

