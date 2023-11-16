

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterspacePlanAssignmentReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterspacePlanAssignmentReportType_1559617949_hpp
#define WaterspacePlanAssignmentReportType_1559617949_hpp

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
    namespace MM {
        namespace WaterspacePlanAssignmentStatus {

            RTI_CONSTEXPR_OR_CONST_STRING std::string WaterspacePlanAssignmentReport_TOPIC = "UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReport";

            class NDDSUSERDllExport WaterspacePlanAssignmentReportType {
              public:

                WaterspacePlanAssignmentReportType();

                WaterspacePlanAssignmentReportType(const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& missionID_,const ::UMAA::Common::Measurement::NumericGUID& objectiveID_,const ::UMAA::Common::Measurement::NumericGUID& taskID_,const ::UMAA::Common::Measurement::NumericGUID& waterspacePlanID_);

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
                ::UMAA::Common::Measurement::NumericGUID& missionID() noexcept {
                    return m_missionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& missionID() const noexcept {
                    return m_missionID_;
                }

                void missionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_missionID_ = value;
                }

                void missionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_missionID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& objectiveID() noexcept {
                    return m_objectiveID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& objectiveID() const noexcept {
                    return m_objectiveID_;
                }

                void objectiveID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_objectiveID_ = value;
                }

                void objectiveID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_objectiveID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& taskID() noexcept {
                    return m_taskID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& taskID() const noexcept {
                    return m_taskID_;
                }

                void taskID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_taskID_ = value;
                }

                void taskID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_taskID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& waterspacePlanID() noexcept {
                    return m_waterspacePlanID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& waterspacePlanID() const noexcept {
                    return m_waterspacePlanID_;
                }

                void waterspacePlanID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_waterspacePlanID_ = value;
                }

                void waterspacePlanID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_waterspacePlanID_ = std::move(value);
                }
                bool operator == (const WaterspacePlanAssignmentReportType& other_) const;
                bool operator != (const WaterspacePlanAssignmentReportType& other_) const;

                void swap(WaterspacePlanAssignmentReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::Measurement::NumericGUID m_missionID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_objectiveID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_taskID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_waterspacePlanID_ {};

            };

            inline void swap(WaterspacePlanAssignmentReportType& a, WaterspacePlanAssignmentReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WaterspacePlanAssignmentReportType& sample);

        } // namespace WaterspacePlanAssignmentStatus  
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
        struct topic_type_name< ::UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::WaterspacePlanAssignmentStatus::WaterspacePlanAssignmentReportType > {
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

#endif // WaterspacePlanAssignmentReportType_1559617949_hpp

