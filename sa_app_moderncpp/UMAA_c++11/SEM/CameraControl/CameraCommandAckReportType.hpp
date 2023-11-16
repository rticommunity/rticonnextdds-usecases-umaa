

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraCommandAckReportType_202597353_hpp
#define CameraCommandAckReportType_202597353_hpp

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
#include "UMAA/Common/Measurement/BuiltInTestStatusType_All.hpp"
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
#include "UMAA/Common/Measurement/Position2D.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace CameraControl {

            RTI_CONSTEXPR_OR_CONST_STRING std::string CameraCommandAckReport_TOPIC = "UMAA::SEM::CameraControl::CameraCommandAckReport";

            class NDDSUSERDllExport CameraCommandAckReportType {
              public:

                CameraCommandAckReportType();

                CameraCommandAckReportType(const ::dds::core::optional< ::UMAA::Common::Measurement::BuiltInTestStatusType_All >& builtInTest_,bool filtered_,const ::UMAA::Common::Measurement::Position2D& imageCenterLocation_,const ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType& mode_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_);

                ::dds::core::optional< ::UMAA::Common::Measurement::BuiltInTestStatusType_All >& builtInTest() noexcept {
                    return m_builtInTest_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::BuiltInTestStatusType_All >& builtInTest() const noexcept {
                    return m_builtInTest_;
                }

                void builtInTest(const ::dds::core::optional< ::UMAA::Common::Measurement::BuiltInTestStatusType_All >& value) {

                    m_builtInTest_ = value;
                }

                void builtInTest(::dds::core::optional< ::UMAA::Common::Measurement::BuiltInTestStatusType_All >&& value) {
                    m_builtInTest_ = std::move(value);
                }
                bool& filtered() noexcept {
                    return m_filtered_;
                }

                const bool& filtered() const noexcept {
                    return m_filtered_;
                }

                void filtered(bool value) {

                    m_filtered_ = value;
                }

                ::UMAA::Common::Measurement::Position2D& imageCenterLocation() noexcept {
                    return m_imageCenterLocation_;
                }

                const ::UMAA::Common::Measurement::Position2D& imageCenterLocation() const noexcept {
                    return m_imageCenterLocation_;
                }

                void imageCenterLocation(const ::UMAA::Common::Measurement::Position2D& value) {

                    m_imageCenterLocation_ = value;
                }

                void imageCenterLocation(::UMAA::Common::Measurement::Position2D&& value) {
                    m_imageCenterLocation_ = std::move(value);
                }
                ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType& mode() noexcept {
                    return m_mode_;
                }

                const ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType& mode() const noexcept {
                    return m_mode_;
                }

                void mode(const ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType& value) {

                    m_mode_ = value;
                }

                void mode(::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType&& value) {
                    m_mode_ = std::move(value);
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
                bool operator == (const CameraCommandAckReportType& other_) const;
                bool operator != (const CameraCommandAckReportType& other_) const;

                void swap(CameraCommandAckReportType& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::Common::Measurement::BuiltInTestStatusType_All > m_builtInTest_;
                bool m_filtered_;
                ::UMAA::Common::Measurement::Position2D m_imageCenterLocation_;
                ::UMAA::Common::Enumeration::IRPolarityEnumType::IRPolarityEnumType m_mode_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};

            };

            inline void swap(CameraCommandAckReportType& a, CameraCommandAckReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraCommandAckReportType& sample);

        } // namespace CameraControl  
    } // namespace SEM  
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
        struct topic_type_name< ::UMAA::SEM::CameraControl::CameraCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::CameraControl::CameraCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::CameraControl::CameraCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::CameraControl::CameraCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::CameraControl::CameraCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::CameraControl::CameraCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::CameraControl::CameraCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::CameraControl::CameraCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::CameraControl::CameraCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::CameraControl::CameraCommandAckReportType > {
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

#endif // CameraCommandAckReportType_202597353_hpp

