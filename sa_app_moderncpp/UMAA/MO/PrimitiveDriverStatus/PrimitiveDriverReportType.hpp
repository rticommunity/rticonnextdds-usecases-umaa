

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PrimitiveDriverReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PrimitiveDriverReportType_1656513768_hpp
#define PrimitiveDriverReportType_1656513768_hpp

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
#include "UMAA/Common/Measurement/LinearEffort.hpp"
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
#include "UMAA/Common/Measurement/RotationalEffort.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace PrimitiveDriverStatus {

            static const std::string PrimitiveDriverReport_TOPIC = "UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReport";

            class NDDSUSERDllExport PrimitiveDriverReportType {
              public:
                PrimitiveDriverReportType();

                PrimitiveDriverReportType(const UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort,const UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort,const UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort,const UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PrimitiveDriverReportType (PrimitiveDriverReportType&&) = default;
                PrimitiveDriverReportType& operator=(PrimitiveDriverReportType&&) = default;
                PrimitiveDriverReportType& operator=(const PrimitiveDriverReportType&) = default;
                PrimitiveDriverReportType(const PrimitiveDriverReportType&) = default;
                #else
                PrimitiveDriverReportType(PrimitiveDriverReportType&& other_) OMG_NOEXCEPT;  
                PrimitiveDriverReportType& operator=(PrimitiveDriverReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort() OMG_NOEXCEPT {
                    return m_propulsiveLinearEffort_;
                }

                const UMAA::Common::Measurement::LinearEffort& propulsiveLinearEffort() const OMG_NOEXCEPT {
                    return m_propulsiveLinearEffort_;
                }

                void propulsiveLinearEffort(const UMAA::Common::Measurement::LinearEffort& value) {
                    m_propulsiveLinearEffort_ = value;
                }

                void propulsiveLinearEffort(UMAA::Common::Measurement::LinearEffort&& value) {
                    m_propulsiveLinearEffort_ = std::move(value);
                }
                UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort() OMG_NOEXCEPT {
                    return m_propulsiveRotationalEffort_;
                }

                const UMAA::Common::Measurement::RotationalEffort& propulsiveRotationalEffort() const OMG_NOEXCEPT {
                    return m_propulsiveRotationalEffort_;
                }

                void propulsiveRotationalEffort(const UMAA::Common::Measurement::RotationalEffort& value) {
                    m_propulsiveRotationalEffort_ = value;
                }

                void propulsiveRotationalEffort(UMAA::Common::Measurement::RotationalEffort&& value) {
                    m_propulsiveRotationalEffort_ = std::move(value);
                }
                UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort() OMG_NOEXCEPT {
                    return m_resistiveLinearEffort_;
                }

                const UMAA::Common::Measurement::LinearEffort& resistiveLinearEffort() const OMG_NOEXCEPT {
                    return m_resistiveLinearEffort_;
                }

                void resistiveLinearEffort(const UMAA::Common::Measurement::LinearEffort& value) {
                    m_resistiveLinearEffort_ = value;
                }

                void resistiveLinearEffort(UMAA::Common::Measurement::LinearEffort&& value) {
                    m_resistiveLinearEffort_ = std::move(value);
                }
                UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort() OMG_NOEXCEPT {
                    return m_resistiveRotationalEffort_;
                }

                const UMAA::Common::Measurement::RotationalEffort& resistiveRotationalEffort() const OMG_NOEXCEPT {
                    return m_resistiveRotationalEffort_;
                }

                void resistiveRotationalEffort(const UMAA::Common::Measurement::RotationalEffort& value) {
                    m_resistiveRotationalEffort_ = value;
                }

                void resistiveRotationalEffort(UMAA::Common::Measurement::RotationalEffort&& value) {
                    m_resistiveRotationalEffort_ = std::move(value);
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

                bool operator == (const PrimitiveDriverReportType& other_) const;
                bool operator != (const PrimitiveDriverReportType& other_) const;

                void swap(PrimitiveDriverReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::LinearEffort m_propulsiveLinearEffort_;
                UMAA::Common::Measurement::RotationalEffort m_propulsiveRotationalEffort_;
                UMAA::Common::Measurement::LinearEffort m_resistiveLinearEffort_;
                UMAA::Common::Measurement::RotationalEffort m_resistiveRotationalEffort_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PrimitiveDriverReportType& a, PrimitiveDriverReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PrimitiveDriverReportType& sample);

        } // namespace PrimitiveDriverStatus  
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
        struct topic_type_name< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::PrimitiveDriverStatus::PrimitiveDriverReportType > {
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

#endif // PrimitiveDriverReportType_1656513768_hpp

