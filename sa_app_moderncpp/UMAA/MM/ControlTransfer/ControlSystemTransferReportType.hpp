

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControlSystemTransferReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ControlSystemTransferReportType_1351700109_hpp
#define ControlSystemTransferReportType_1351700109_hpp

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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

            static const std::string ControlSystemTransferReport_TOPIC = "UMAA::MM::ControlTransfer::ControlSystemTransferReport";

            class NDDSUSERDllExport ControlSystemTransferReportType {
              public:
                ControlSystemTransferReportType();

                ControlSystemTransferReportType(int32_t authorityLevel,const UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType& result,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ControlSystemTransferReportType (ControlSystemTransferReportType&&) = default;
                ControlSystemTransferReportType& operator=(ControlSystemTransferReportType&&) = default;
                ControlSystemTransferReportType& operator=(const ControlSystemTransferReportType&) = default;
                ControlSystemTransferReportType(const ControlSystemTransferReportType&) = default;
                #else
                ControlSystemTransferReportType(ControlSystemTransferReportType&& other_) OMG_NOEXCEPT;  
                ControlSystemTransferReportType& operator=(ControlSystemTransferReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                int32_t& authorityLevel() OMG_NOEXCEPT {
                    return m_authorityLevel_;
                }

                const int32_t& authorityLevel() const OMG_NOEXCEPT {
                    return m_authorityLevel_;
                }

                void authorityLevel(int32_t value) {
                    m_authorityLevel_ = value;
                }

                UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType& result() OMG_NOEXCEPT {
                    return m_result_;
                }

                const UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType& result() const OMG_NOEXCEPT {
                    return m_result_;
                }

                void result(const UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType& value) {
                    m_result_ = value;
                }

                void result(UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType&& value) {
                    m_result_ = std::move(value);
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

                bool operator == (const ControlSystemTransferReportType& other_) const;
                bool operator != (const ControlSystemTransferReportType& other_) const;

                void swap(ControlSystemTransferReportType& other_) OMG_NOEXCEPT ;

              private:

                int32_t m_authorityLevel_;
                UMAA::Common::MaritimeEnumeration::HandoverResultEnumType::HandoverResultEnumType m_result_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(ControlSystemTransferReportType& a, ControlSystemTransferReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ControlSystemTransferReportType& sample);

        } // namespace ControlTransfer  
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
        struct topic_type_name< UMAA::MM::ControlTransfer::ControlSystemTransferReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::ControlTransfer::ControlSystemTransferReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::ControlTransfer::ControlSystemTransferReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::ControlTransfer::ControlSystemTransferReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::ControlTransfer::ControlSystemTransferReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::ControlTransfer::ControlSystemTransferReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::ControlTransfer::ControlSystemTransferReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::ControlTransfer::ControlSystemTransferReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::ControlTransfer::ControlSystemTransferReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::ControlTransfer::ControlSystemTransferReportType > {
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

#endif // ControlSystemTransferReportType_1351700109_hpp

