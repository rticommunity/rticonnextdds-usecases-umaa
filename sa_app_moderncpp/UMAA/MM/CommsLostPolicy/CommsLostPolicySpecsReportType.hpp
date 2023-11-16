

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsLostPolicySpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CommsLostPolicySpecsReportType_1168129046_hpp
#define CommsLostPolicySpecsReportType_1168129046_hpp

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
    namespace MM {
        namespace CommsLostPolicy {

            static const std::string CommsLostPolicySpecsReport_TOPIC = "UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReport";

            class NDDSUSERDllExport CommsLostPolicySpecsReportType {
              public:
                CommsLostPolicySpecsReportType();

                CommsLostPolicySpecsReportType(bool continueMission,bool moveToPose,bool retroTraverse,bool stop,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                CommsLostPolicySpecsReportType (CommsLostPolicySpecsReportType&&) = default;
                CommsLostPolicySpecsReportType& operator=(CommsLostPolicySpecsReportType&&) = default;
                CommsLostPolicySpecsReportType& operator=(const CommsLostPolicySpecsReportType&) = default;
                CommsLostPolicySpecsReportType(const CommsLostPolicySpecsReportType&) = default;
                #else
                CommsLostPolicySpecsReportType(CommsLostPolicySpecsReportType&& other_) OMG_NOEXCEPT;  
                CommsLostPolicySpecsReportType& operator=(CommsLostPolicySpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& continueMission() OMG_NOEXCEPT {
                    return m_continueMission_;
                }

                const bool& continueMission() const OMG_NOEXCEPT {
                    return m_continueMission_;
                }

                void continueMission(bool value) {
                    m_continueMission_ = value;
                }

                bool& moveToPose() OMG_NOEXCEPT {
                    return m_moveToPose_;
                }

                const bool& moveToPose() const OMG_NOEXCEPT {
                    return m_moveToPose_;
                }

                void moveToPose(bool value) {
                    m_moveToPose_ = value;
                }

                bool& retroTraverse() OMG_NOEXCEPT {
                    return m_retroTraverse_;
                }

                const bool& retroTraverse() const OMG_NOEXCEPT {
                    return m_retroTraverse_;
                }

                void retroTraverse(bool value) {
                    m_retroTraverse_ = value;
                }

                bool& stop() OMG_NOEXCEPT {
                    return m_stop_;
                }

                const bool& stop() const OMG_NOEXCEPT {
                    return m_stop_;
                }

                void stop(bool value) {
                    m_stop_ = value;
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

                bool operator == (const CommsLostPolicySpecsReportType& other_) const;
                bool operator != (const CommsLostPolicySpecsReportType& other_) const;

                void swap(CommsLostPolicySpecsReportType& other_) OMG_NOEXCEPT ;

              private:

                bool m_continueMission_;
                bool m_moveToPose_;
                bool m_retroTraverse_;
                bool m_stop_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(CommsLostPolicySpecsReportType& a, CommsLostPolicySpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CommsLostPolicySpecsReportType& sample);

        } // namespace CommsLostPolicy  
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
        struct topic_type_name< UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::CommsLostPolicy::CommsLostPolicySpecsReportType > {
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

#endif // CommsLostPolicySpecsReportType_1168129046_hpp

