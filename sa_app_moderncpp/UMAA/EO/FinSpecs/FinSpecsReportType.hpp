

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FinSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FinSpecsReportType_944472035_hpp
#define FinSpecsReportType_944472035_hpp

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
namespace UMAA {
    namespace EO {
        namespace FinSpecs {

            static const std::string FinSpecsReport_TOPIC = "UMAA::EO::FinSpecs::FinSpecsReport";

            class NDDSUSERDllExport FinSpecsReportType {
              public:
                FinSpecsReportType();

                FinSpecsReportType(double maxDeflectionRate,double maxNegativeDeflection,double maxPositiveDeflection,double minDeflectionRate,const std::string& name,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                FinSpecsReportType (FinSpecsReportType&&) = default;
                FinSpecsReportType& operator=(FinSpecsReportType&&) = default;
                FinSpecsReportType& operator=(const FinSpecsReportType&) = default;
                FinSpecsReportType(const FinSpecsReportType&) = default;
                #else
                FinSpecsReportType(FinSpecsReportType&& other_) OMG_NOEXCEPT;  
                FinSpecsReportType& operator=(FinSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& maxDeflectionRate() OMG_NOEXCEPT {
                    return m_maxDeflectionRate_;
                }

                const double& maxDeflectionRate() const OMG_NOEXCEPT {
                    return m_maxDeflectionRate_;
                }

                void maxDeflectionRate(double value) {
                    m_maxDeflectionRate_ = value;
                }

                double& maxNegativeDeflection() OMG_NOEXCEPT {
                    return m_maxNegativeDeflection_;
                }

                const double& maxNegativeDeflection() const OMG_NOEXCEPT {
                    return m_maxNegativeDeflection_;
                }

                void maxNegativeDeflection(double value) {
                    m_maxNegativeDeflection_ = value;
                }

                double& maxPositiveDeflection() OMG_NOEXCEPT {
                    return m_maxPositiveDeflection_;
                }

                const double& maxPositiveDeflection() const OMG_NOEXCEPT {
                    return m_maxPositiveDeflection_;
                }

                void maxPositiveDeflection(double value) {
                    m_maxPositiveDeflection_ = value;
                }

                double& minDeflectionRate() OMG_NOEXCEPT {
                    return m_minDeflectionRate_;
                }

                const double& minDeflectionRate() const OMG_NOEXCEPT {
                    return m_minDeflectionRate_;
                }

                void minDeflectionRate(double value) {
                    m_minDeflectionRate_ = value;
                }

                std::string& name() OMG_NOEXCEPT {
                    return m_name_;
                }

                const std::string& name() const OMG_NOEXCEPT {
                    return m_name_;
                }

                void name(const std::string& value) {
                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
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

                bool operator == (const FinSpecsReportType& other_) const;
                bool operator != (const FinSpecsReportType& other_) const;

                void swap(FinSpecsReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_maxDeflectionRate_;
                double m_maxNegativeDeflection_;
                double m_maxPositiveDeflection_;
                double m_minDeflectionRate_;
                std::string m_name_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(FinSpecsReportType& a, FinSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FinSpecsReportType& sample);

        } // namespace FinSpecs  
    } // namespace EO  
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
        struct topic_type_name< UMAA::EO::FinSpecs::FinSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::FinSpecs::FinSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::FinSpecs::FinSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::FinSpecs::FinSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::FinSpecs::FinSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::FinSpecs::FinSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::FinSpecs::FinSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::FinSpecs::FinSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::FinSpecs::FinSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::FinSpecs::FinSpecsReportType > {
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

#endif // FinSpecsReportType_944472035_hpp

