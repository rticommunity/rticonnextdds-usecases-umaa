

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverExecutionStatusReport.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverExecutionStatusReport_460594257_hpp
#define GlobalHoverExecutionStatusReport_460594257_hpp

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
#include "UMAA/MO/GlobalHoverState/GlobalHoverStateType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalHoverControl {

            class NDDSUSERDllExport GlobalHoverExecutionStatusReport {
              public:
                GlobalHoverExecutionStatusReport();

                GlobalHoverExecutionStatusReport(const UMAA::MO::GlobalHoverState::GlobalHoverStateType& globalHoverState,const UMAA::Common::Measurement::DateTime& timeHoverAchieved,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeHoverCompleted);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalHoverExecutionStatusReport (GlobalHoverExecutionStatusReport&&) = default;
                GlobalHoverExecutionStatusReport& operator=(GlobalHoverExecutionStatusReport&&) = default;
                GlobalHoverExecutionStatusReport& operator=(const GlobalHoverExecutionStatusReport&) = default;
                GlobalHoverExecutionStatusReport(const GlobalHoverExecutionStatusReport&) = default;
                #else
                GlobalHoverExecutionStatusReport(GlobalHoverExecutionStatusReport&& other_) OMG_NOEXCEPT;  
                GlobalHoverExecutionStatusReport& operator=(GlobalHoverExecutionStatusReport&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::MO::GlobalHoverState::GlobalHoverStateType& globalHoverState() OMG_NOEXCEPT {
                    return m_globalHoverState_;
                }

                const UMAA::MO::GlobalHoverState::GlobalHoverStateType& globalHoverState() const OMG_NOEXCEPT {
                    return m_globalHoverState_;
                }

                void globalHoverState(const UMAA::MO::GlobalHoverState::GlobalHoverStateType& value) {
                    m_globalHoverState_ = value;
                }

                void globalHoverState(UMAA::MO::GlobalHoverState::GlobalHoverStateType&& value) {
                    m_globalHoverState_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeHoverAchieved() OMG_NOEXCEPT {
                    return m_timeHoverAchieved_;
                }

                const UMAA::Common::Measurement::DateTime& timeHoverAchieved() const OMG_NOEXCEPT {
                    return m_timeHoverAchieved_;
                }

                void timeHoverAchieved(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeHoverAchieved_ = value;
                }

                void timeHoverAchieved(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeHoverAchieved_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeHoverCompleted() OMG_NOEXCEPT {
                    return m_timeHoverCompleted_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeHoverCompleted() const OMG_NOEXCEPT {
                    return m_timeHoverCompleted_;
                }

                void timeHoverCompleted(const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& value) {
                    m_timeHoverCompleted_ = value;
                }

                void timeHoverCompleted(::dds::core::optional< UMAA::Common::Measurement::DateTime >&& value) {
                    m_timeHoverCompleted_ = std::move(value);
                }

                bool operator == (const GlobalHoverExecutionStatusReport& other_) const;
                bool operator != (const GlobalHoverExecutionStatusReport& other_) const;

                void swap(GlobalHoverExecutionStatusReport& other_) OMG_NOEXCEPT ;

              private:

                UMAA::MO::GlobalHoverState::GlobalHoverStateType m_globalHoverState_;
                UMAA::Common::Measurement::DateTime m_timeHoverAchieved_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime > m_timeHoverCompleted_;

            };

            inline void swap(GlobalHoverExecutionStatusReport& a, GlobalHoverExecutionStatusReport& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalHoverExecutionStatusReport& sample);

        } // namespace GlobalHoverControl  
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
        struct topic_type_name< UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalHoverControl::GlobalHoverExecutionStatusReport > {
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

#endif // GlobalHoverExecutionStatusReport_460594257_hpp

