

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemControlReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemControlReportType_226879613_hpp
#define ControlSystemControlReportType_226879613_hpp

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
    namespace MM {
        namespace ControlTransfer {

            RTI_CONSTEXPR_OR_CONST_STRING std::string ControlSystemControlReport_TOPIC = "UMAA::MM::ControlTransfer::ControlSystemControlReport";

            class NDDSUSERDllExport ControlSystemControlReportType {
              public:

                ControlSystemControlReportType();

                ControlSystemControlReportType(int32_t authorityLevel_,const ::UMAA::Common::Measurement::NumericGUID& controlSystemID_,const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType& status_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                int32_t& authorityLevel() noexcept {
                    return m_authorityLevel_;
                }

                const int32_t& authorityLevel() const noexcept {
                    return m_authorityLevel_;
                }

                void authorityLevel(int32_t value) {

                    m_authorityLevel_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& controlSystemID() noexcept {
                    return m_controlSystemID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& controlSystemID() const noexcept {
                    return m_controlSystemID_;
                }

                void controlSystemID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_controlSystemID_ = value;
                }

                void controlSystemID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_controlSystemID_ = std::move(value);
                }
                ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType& status() noexcept {
                    return m_status_;
                }

                const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType& status() const noexcept {
                    return m_status_;
                }

                void status(const ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType& value) {

                    m_status_ = value;
                }

                void status(::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType&& value) {
                    m_status_ = std::move(value);
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
                bool operator == (const ControlSystemControlReportType& other_) const;
                bool operator != (const ControlSystemControlReportType& other_) const;

                void swap(ControlSystemControlReportType& other_) noexcept ;

              private:

                int32_t m_authorityLevel_;
                ::UMAA::Common::Measurement::NumericGUID m_controlSystemID_ {};
                ::UMAA::Common::Enumeration::ResourceAllocationStatusEnumType::ResourceAllocationStatusEnumType m_status_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(ControlSystemControlReportType& a, ControlSystemControlReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ControlSystemControlReportType& sample);

        } // namespace ControlTransfer  
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
        struct topic_type_name< ::UMAA::MM::ControlTransfer::ControlSystemControlReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::ControlTransfer::ControlSystemControlReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::ControlTransfer::ControlSystemControlReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::ControlTransfer::ControlSystemControlReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::ControlTransfer::ControlSystemControlReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::ControlTransfer::ControlSystemControlReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::ControlTransfer::ControlSystemControlReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::ControlTransfer::ControlSystemControlReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::ControlTransfer::ControlSystemControlReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::ControlTransfer::ControlSystemControlReportType > {
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

#endif // ControlSystemControlReportType_226879613_hpp

