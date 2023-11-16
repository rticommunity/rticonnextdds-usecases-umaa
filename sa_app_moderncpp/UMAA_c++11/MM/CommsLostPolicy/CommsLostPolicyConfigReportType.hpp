

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicyConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLostPolicyConfigReportType_2006789040_hpp
#define CommsLostPolicyConfigReportType_2006789040_hpp

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/CommsLostPolicy/MoveToPosPolicyType.hpp"
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
#include "UMAA/MM/CommsLostPolicy/RetrotraversePolicyType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace CommsLostPolicy {

            RTI_CONSTEXPR_OR_CONST_STRING std::string CommsLostPolicyConfigReport_TOPIC = "UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReport";

            class NDDSUSERDllExport CommsLostPolicyConfigReportType {
              public:

                CommsLostPolicyConfigReportType();

                CommsLostPolicyConfigReportType(double commsLostTimeOut_,bool commsRegainedStop_,double commsRegainedTimeOut_,const ::dds::core::optional< bool >& continueMission_,const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& moveToPos_,const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& retrotraverse_,const ::dds::core::optional< bool >& stopMotion_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                double& commsLostTimeOut() noexcept {
                    return m_commsLostTimeOut_;
                }

                const double& commsLostTimeOut() const noexcept {
                    return m_commsLostTimeOut_;
                }

                void commsLostTimeOut(double value) {

                    m_commsLostTimeOut_ = value;
                }

                bool& commsRegainedStop() noexcept {
                    return m_commsRegainedStop_;
                }

                const bool& commsRegainedStop() const noexcept {
                    return m_commsRegainedStop_;
                }

                void commsRegainedStop(bool value) {

                    m_commsRegainedStop_ = value;
                }

                double& commsRegainedTimeOut() noexcept {
                    return m_commsRegainedTimeOut_;
                }

                const double& commsRegainedTimeOut() const noexcept {
                    return m_commsRegainedTimeOut_;
                }

                void commsRegainedTimeOut(double value) {

                    m_commsRegainedTimeOut_ = value;
                }

                ::dds::core::optional< bool >& continueMission() noexcept {
                    return m_continueMission_;
                }

                const ::dds::core::optional< bool >& continueMission() const noexcept {
                    return m_continueMission_;
                }

                void continueMission(const ::dds::core::optional< bool >& value) {

                    m_continueMission_ = value;
                }

                void continueMission(::dds::core::optional< bool >&& value) {
                    m_continueMission_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& moveToPos() noexcept {
                    return m_moveToPos_;
                }

                const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& moveToPos() const noexcept {
                    return m_moveToPos_;
                }

                void moveToPos(const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >& value) {

                    m_moveToPos_ = value;
                }

                void moveToPos(::dds::core::optional< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType >&& value) {
                    m_moveToPos_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& retrotraverse() noexcept {
                    return m_retrotraverse_;
                }

                const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& retrotraverse() const noexcept {
                    return m_retrotraverse_;
                }

                void retrotraverse(const ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >& value) {

                    m_retrotraverse_ = value;
                }

                void retrotraverse(::dds::core::optional< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType >&& value) {
                    m_retrotraverse_ = std::move(value);
                }
                ::dds::core::optional< bool >& stopMotion() noexcept {
                    return m_stopMotion_;
                }

                const ::dds::core::optional< bool >& stopMotion() const noexcept {
                    return m_stopMotion_;
                }

                void stopMotion(const ::dds::core::optional< bool >& value) {

                    m_stopMotion_ = value;
                }

                void stopMotion(::dds::core::optional< bool >&& value) {
                    m_stopMotion_ = std::move(value);
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
                bool operator == (const CommsLostPolicyConfigReportType& other_) const;
                bool operator != (const CommsLostPolicyConfigReportType& other_) const;

                void swap(CommsLostPolicyConfigReportType& other_) noexcept ;

              private:

                double m_commsLostTimeOut_;
                bool m_commsRegainedStop_;
                double m_commsRegainedTimeOut_;
                ::dds::core::optional< bool > m_continueMission_;
                ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::MoveToPosPolicyType > m_moveToPos_;
                ::dds::core::optional< ::UMAA::MM::CommsLostPolicy::RetrotraversePolicyType > m_retrotraverse_;
                ::dds::core::optional< bool > m_stopMotion_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(CommsLostPolicyConfigReportType& a, CommsLostPolicyConfigReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsLostPolicyConfigReportType& sample);

        } // namespace CommsLostPolicy  
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
        struct topic_type_name< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::CommsLostPolicy::CommsLostPolicyConfigReportType > {
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

#endif // CommsLostPolicyConfigReportType_2006789040_hpp

