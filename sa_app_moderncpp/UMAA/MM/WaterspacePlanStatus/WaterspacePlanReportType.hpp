

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterspacePlanReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterspacePlanReportType_774014636_hpp
#define WaterspacePlanReportType_774014636_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/PlanningZoneType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace WaterspacePlanStatus {

            static const std::string WaterspacePlanReport_TOPIC = "UMAA::MM::WaterspacePlanStatus::WaterspacePlanReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::MM::BaseType::PlanningZoneType >;
            template class NDDSUSERDllExport std::vector< UMAA::MM::BaseType::PlanningZoneType >;
            #endif
            class NDDSUSERDllExport WaterspacePlanReportType {
              public:
                WaterspacePlanReportType();

                WaterspacePlanReportType(const std::string& waterspacePlanName,const ::rti::core::bounded_sequence< UMAA::MM::BaseType::PlanningZoneType, 100L >& zones,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& waterspacePlanID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                WaterspacePlanReportType (WaterspacePlanReportType&&) = default;
                WaterspacePlanReportType& operator=(WaterspacePlanReportType&&) = default;
                WaterspacePlanReportType& operator=(const WaterspacePlanReportType&) = default;
                WaterspacePlanReportType(const WaterspacePlanReportType&) = default;
                #else
                WaterspacePlanReportType(WaterspacePlanReportType&& other_) OMG_NOEXCEPT;  
                WaterspacePlanReportType& operator=(WaterspacePlanReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                std::string& waterspacePlanName() OMG_NOEXCEPT {
                    return m_waterspacePlanName_;
                }

                const std::string& waterspacePlanName() const OMG_NOEXCEPT {
                    return m_waterspacePlanName_;
                }

                void waterspacePlanName(const std::string& value) {
                    m_waterspacePlanName_ = value;
                }

                void waterspacePlanName(std::string&& value) {
                    m_waterspacePlanName_ = std::move(value);
                }
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::PlanningZoneType, 100L >& zones() OMG_NOEXCEPT {
                    return m_zones_;
                }

                const ::rti::core::bounded_sequence< UMAA::MM::BaseType::PlanningZoneType, 100L >& zones() const OMG_NOEXCEPT {
                    return m_zones_;
                }

                void zones(const ::rti::core::bounded_sequence< UMAA::MM::BaseType::PlanningZoneType, 100L >& value) {
                    m_zones_ = value;
                }

                void zones(::rti::core::bounded_sequence< UMAA::MM::BaseType::PlanningZoneType, 100L >&& value) {
                    m_zones_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& source() OMG_NOEXCEPT {
                    return m_source_;
                }

                const UMAA::Common::Measurement::NumericGUID& source() const OMG_NOEXCEPT {
                    return m_source_;
                }

                void source(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_source_ = value;
                }

                void source(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeStamp() OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                const UMAA::Common::Measurement::DateTime& timeStamp() const OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                void timeStamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStamp_ = value;
                }

                void timeStamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& waterspacePlanID() OMG_NOEXCEPT {
                    return m_waterspacePlanID_;
                }

                const UMAA::Common::Measurement::NumericGUID& waterspacePlanID() const OMG_NOEXCEPT {
                    return m_waterspacePlanID_;
                }

                void waterspacePlanID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_waterspacePlanID_ = value;
                }

                void waterspacePlanID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_waterspacePlanID_ = std::move(value);
                }

                bool operator == (const WaterspacePlanReportType& other_) const;
                bool operator != (const WaterspacePlanReportType& other_) const;

                void swap(WaterspacePlanReportType& other_) OMG_NOEXCEPT ;

              private:

                std::string m_waterspacePlanName_;
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::PlanningZoneType, 100L > m_zones_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_waterspacePlanID_;

            };

            inline void swap(WaterspacePlanReportType& a, WaterspacePlanReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WaterspacePlanReportType& sample);

        } // namespace WaterspacePlanStatus  
    } // namespace MM  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::WaterspacePlanStatus::WaterspacePlanReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // WaterspacePlanReportType_774014636_hpp

