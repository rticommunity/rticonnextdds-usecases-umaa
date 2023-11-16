

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegularPolygonExecutionStatusReportType_1602789940_hpp
#define GlobalRegularPolygonExecutionStatusReportType_1602789940_hpp

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
#include "UMAA/MO/GlobalRegularPolygonState/GlobalRegularPolygonStateType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalRegularPolygonControl {

            static const std::string GlobalRegularPolygonExecutionStatusReport_TOPIC = "UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReport";

            class NDDSUSERDllExport GlobalRegularPolygonExecutionStatusReportType {
              public:
                GlobalRegularPolygonExecutionStatusReportType();

                GlobalRegularPolygonExecutionStatusReportType(const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& globalRegularPolygonState,const UMAA::Common::Measurement::DateTime& timePatternAchieved,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timePatternCompleted,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalRegularPolygonExecutionStatusReportType (GlobalRegularPolygonExecutionStatusReportType&&) = default;
                GlobalRegularPolygonExecutionStatusReportType& operator=(GlobalRegularPolygonExecutionStatusReportType&&) = default;
                GlobalRegularPolygonExecutionStatusReportType& operator=(const GlobalRegularPolygonExecutionStatusReportType&) = default;
                GlobalRegularPolygonExecutionStatusReportType(const GlobalRegularPolygonExecutionStatusReportType&) = default;
                #else
                GlobalRegularPolygonExecutionStatusReportType(GlobalRegularPolygonExecutionStatusReportType&& other_) OMG_NOEXCEPT;  
                GlobalRegularPolygonExecutionStatusReportType& operator=(GlobalRegularPolygonExecutionStatusReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& globalRegularPolygonState() OMG_NOEXCEPT {
                    return m_globalRegularPolygonState_;
                }

                const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& globalRegularPolygonState() const OMG_NOEXCEPT {
                    return m_globalRegularPolygonState_;
                }

                void globalRegularPolygonState(const UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType& value) {
                    m_globalRegularPolygonState_ = value;
                }

                void globalRegularPolygonState(UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType&& value) {
                    m_globalRegularPolygonState_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timePatternAchieved() OMG_NOEXCEPT {
                    return m_timePatternAchieved_;
                }

                const UMAA::Common::Measurement::DateTime& timePatternAchieved() const OMG_NOEXCEPT {
                    return m_timePatternAchieved_;
                }

                void timePatternAchieved(const UMAA::Common::Measurement::DateTime& value) {
                    m_timePatternAchieved_ = value;
                }

                void timePatternAchieved(UMAA::Common::Measurement::DateTime&& value) {
                    m_timePatternAchieved_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timePatternCompleted() OMG_NOEXCEPT {
                    return m_timePatternCompleted_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timePatternCompleted() const OMG_NOEXCEPT {
                    return m_timePatternCompleted_;
                }

                void timePatternCompleted(const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& value) {
                    m_timePatternCompleted_ = value;
                }

                void timePatternCompleted(::dds::core::optional< UMAA::Common::Measurement::DateTime >&& value) {
                    m_timePatternCompleted_ = std::move(value);
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

                bool operator == (const GlobalRegularPolygonExecutionStatusReportType& other_) const;
                bool operator != (const GlobalRegularPolygonExecutionStatusReportType& other_) const;

                void swap(GlobalRegularPolygonExecutionStatusReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::MO::GlobalRegularPolygonState::GlobalRegularPolygonStateType m_globalRegularPolygonState_;
                UMAA::Common::Measurement::DateTime m_timePatternAchieved_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime > m_timePatternCompleted_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(GlobalRegularPolygonExecutionStatusReportType& a, GlobalRegularPolygonExecutionStatusReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalRegularPolygonExecutionStatusReportType& sample);

        } // namespace GlobalRegularPolygonControl  
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
        struct topic_type_name< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonExecutionStatusReportType > {
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

#endif // GlobalRegularPolygonExecutionStatusReportType_1602789940_hpp

