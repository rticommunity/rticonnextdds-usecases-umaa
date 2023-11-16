

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDriftExecutionStatusReportType_939127679_hpp
#define LocalDriftExecutionStatusReportType_939127679_hpp

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
#include "UMAA/MO/LocalDriftState/LocalDriftStateType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalDriftControl {

            static const std::string LocalDriftExecutionStatusReport_TOPIC = "UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReport";

            class NDDSUSERDllExport LocalDriftExecutionStatusReportType {
              public:
                LocalDriftExecutionStatusReportType();

                LocalDriftExecutionStatusReportType(double distanceFromReference,const UMAA::MO::LocalDriftState::LocalDriftStateType& localDriftState,const UMAA::Common::Measurement::DateTime& timeDriftAchieved,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeDriftCompleted,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalDriftExecutionStatusReportType (LocalDriftExecutionStatusReportType&&) = default;
                LocalDriftExecutionStatusReportType& operator=(LocalDriftExecutionStatusReportType&&) = default;
                LocalDriftExecutionStatusReportType& operator=(const LocalDriftExecutionStatusReportType&) = default;
                LocalDriftExecutionStatusReportType(const LocalDriftExecutionStatusReportType&) = default;
                #else
                LocalDriftExecutionStatusReportType(LocalDriftExecutionStatusReportType&& other_) OMG_NOEXCEPT;  
                LocalDriftExecutionStatusReportType& operator=(LocalDriftExecutionStatusReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& distanceFromReference() OMG_NOEXCEPT {
                    return m_distanceFromReference_;
                }

                const double& distanceFromReference() const OMG_NOEXCEPT {
                    return m_distanceFromReference_;
                }

                void distanceFromReference(double value) {
                    m_distanceFromReference_ = value;
                }

                UMAA::MO::LocalDriftState::LocalDriftStateType& localDriftState() OMG_NOEXCEPT {
                    return m_localDriftState_;
                }

                const UMAA::MO::LocalDriftState::LocalDriftStateType& localDriftState() const OMG_NOEXCEPT {
                    return m_localDriftState_;
                }

                void localDriftState(const UMAA::MO::LocalDriftState::LocalDriftStateType& value) {
                    m_localDriftState_ = value;
                }

                void localDriftState(UMAA::MO::LocalDriftState::LocalDriftStateType&& value) {
                    m_localDriftState_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeDriftAchieved() OMG_NOEXCEPT {
                    return m_timeDriftAchieved_;
                }

                const UMAA::Common::Measurement::DateTime& timeDriftAchieved() const OMG_NOEXCEPT {
                    return m_timeDriftAchieved_;
                }

                void timeDriftAchieved(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeDriftAchieved_ = value;
                }

                void timeDriftAchieved(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeDriftAchieved_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeDriftCompleted() OMG_NOEXCEPT {
                    return m_timeDriftCompleted_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& timeDriftCompleted() const OMG_NOEXCEPT {
                    return m_timeDriftCompleted_;
                }

                void timeDriftCompleted(const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& value) {
                    m_timeDriftCompleted_ = value;
                }

                void timeDriftCompleted(::dds::core::optional< UMAA::Common::Measurement::DateTime >&& value) {
                    m_timeDriftCompleted_ = std::move(value);
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

                bool operator == (const LocalDriftExecutionStatusReportType& other_) const;
                bool operator != (const LocalDriftExecutionStatusReportType& other_) const;

                void swap(LocalDriftExecutionStatusReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_distanceFromReference_;
                UMAA::MO::LocalDriftState::LocalDriftStateType m_localDriftState_;
                UMAA::Common::Measurement::DateTime m_timeDriftAchieved_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime > m_timeDriftCompleted_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(LocalDriftExecutionStatusReportType& a, LocalDriftExecutionStatusReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalDriftExecutionStatusReportType& sample);

        } // namespace LocalDriftControl  
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
        struct topic_type_name< UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType > {
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

#endif // LocalDriftExecutionStatusReportType_939127679_hpp

