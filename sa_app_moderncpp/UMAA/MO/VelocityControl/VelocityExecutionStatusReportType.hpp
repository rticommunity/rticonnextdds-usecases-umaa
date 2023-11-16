

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityExecutionStatusReportType_953279669_hpp
#define VelocityExecutionStatusReportType_953279669_hpp

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
    namespace MO {
        namespace VelocityControl {

            static const std::string VelocityExecutionStatusReport_TOPIC = "UMAA::MO::VelocityControl::VelocityExecutionStatusReport";

            class NDDSUSERDllExport VelocityExecutionStatusReportType {
              public:
                VelocityExecutionStatusReportType();

                VelocityExecutionStatusReportType(bool downSpeedAchieved,bool forwardSpeedAchieved,bool pitchRateAchieved,bool rightSpeedAchieved,bool rollRateAchieved,bool yawRateAchieved,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                VelocityExecutionStatusReportType (VelocityExecutionStatusReportType&&) = default;
                VelocityExecutionStatusReportType& operator=(VelocityExecutionStatusReportType&&) = default;
                VelocityExecutionStatusReportType& operator=(const VelocityExecutionStatusReportType&) = default;
                VelocityExecutionStatusReportType(const VelocityExecutionStatusReportType&) = default;
                #else
                VelocityExecutionStatusReportType(VelocityExecutionStatusReportType&& other_) OMG_NOEXCEPT;  
                VelocityExecutionStatusReportType& operator=(VelocityExecutionStatusReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& downSpeedAchieved() OMG_NOEXCEPT {
                    return m_downSpeedAchieved_;
                }

                const bool& downSpeedAchieved() const OMG_NOEXCEPT {
                    return m_downSpeedAchieved_;
                }

                void downSpeedAchieved(bool value) {
                    m_downSpeedAchieved_ = value;
                }

                bool& forwardSpeedAchieved() OMG_NOEXCEPT {
                    return m_forwardSpeedAchieved_;
                }

                const bool& forwardSpeedAchieved() const OMG_NOEXCEPT {
                    return m_forwardSpeedAchieved_;
                }

                void forwardSpeedAchieved(bool value) {
                    m_forwardSpeedAchieved_ = value;
                }

                bool& pitchRateAchieved() OMG_NOEXCEPT {
                    return m_pitchRateAchieved_;
                }

                const bool& pitchRateAchieved() const OMG_NOEXCEPT {
                    return m_pitchRateAchieved_;
                }

                void pitchRateAchieved(bool value) {
                    m_pitchRateAchieved_ = value;
                }

                bool& rightSpeedAchieved() OMG_NOEXCEPT {
                    return m_rightSpeedAchieved_;
                }

                const bool& rightSpeedAchieved() const OMG_NOEXCEPT {
                    return m_rightSpeedAchieved_;
                }

                void rightSpeedAchieved(bool value) {
                    m_rightSpeedAchieved_ = value;
                }

                bool& rollRateAchieved() OMG_NOEXCEPT {
                    return m_rollRateAchieved_;
                }

                const bool& rollRateAchieved() const OMG_NOEXCEPT {
                    return m_rollRateAchieved_;
                }

                void rollRateAchieved(bool value) {
                    m_rollRateAchieved_ = value;
                }

                bool& yawRateAchieved() OMG_NOEXCEPT {
                    return m_yawRateAchieved_;
                }

                const bool& yawRateAchieved() const OMG_NOEXCEPT {
                    return m_yawRateAchieved_;
                }

                void yawRateAchieved(bool value) {
                    m_yawRateAchieved_ = value;
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
                UMAA::Common::Measurement::NumericGUID& sessionID() OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& sessionID() const OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                void sessionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_sessionID_ = value;
                }

                void sessionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }

                bool operator == (const VelocityExecutionStatusReportType& other_) const;
                bool operator != (const VelocityExecutionStatusReportType& other_) const;

                void swap(VelocityExecutionStatusReportType& other_) OMG_NOEXCEPT ;

              private:

                bool m_downSpeedAchieved_;
                bool m_forwardSpeedAchieved_;
                bool m_pitchRateAchieved_;
                bool m_rightSpeedAchieved_;
                bool m_rollRateAchieved_;
                bool m_yawRateAchieved_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(VelocityExecutionStatusReportType& a, VelocityExecutionStatusReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VelocityExecutionStatusReportType& sample);

        } // namespace VelocityControl  
    } // namespace MO  
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
        struct topic_type_name< UMAA::MO::VelocityControl::VelocityExecutionStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::VelocityControl::VelocityExecutionStatusReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::VelocityControl::VelocityExecutionStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::VelocityControl::VelocityExecutionStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::VelocityControl::VelocityExecutionStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::VelocityControl::VelocityExecutionStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::VelocityControl::VelocityExecutionStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::VelocityControl::VelocityExecutionStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::VelocityControl::VelocityExecutionStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::VelocityControl::VelocityExecutionStatusReportType > {
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

#endif // VelocityExecutionStatusReportType_953279669_hpp

