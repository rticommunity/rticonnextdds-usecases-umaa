

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnalogVideoConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnalogVideoConfigReportType_2964399_hpp
#define AnalogVideoConfigReportType_2964399_hpp

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/SEM/SensorManagement/AnalogSensorErrorType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace AnalogVideoConfig {

            static const std::string AnalogVideoConfigReport_TOPIC = "UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReport";

            class NDDSUSERDllExport AnalogVideoConfigReportType {
              public:
                AnalogVideoConfigReportType();

                AnalogVideoConfigReportType(const UMAA::SEM::SensorManagement::AnalogSensorErrorType& analogVideoError,const UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType& videoFormat,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                AnalogVideoConfigReportType (AnalogVideoConfigReportType&&) = default;
                AnalogVideoConfigReportType& operator=(AnalogVideoConfigReportType&&) = default;
                AnalogVideoConfigReportType& operator=(const AnalogVideoConfigReportType&) = default;
                AnalogVideoConfigReportType(const AnalogVideoConfigReportType&) = default;
                #else
                AnalogVideoConfigReportType(AnalogVideoConfigReportType&& other_) OMG_NOEXCEPT;  
                AnalogVideoConfigReportType& operator=(AnalogVideoConfigReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::SEM::SensorManagement::AnalogSensorErrorType& analogVideoError() OMG_NOEXCEPT {
                    return m_analogVideoError_;
                }

                const UMAA::SEM::SensorManagement::AnalogSensorErrorType& analogVideoError() const OMG_NOEXCEPT {
                    return m_analogVideoError_;
                }

                void analogVideoError(const UMAA::SEM::SensorManagement::AnalogSensorErrorType& value) {
                    m_analogVideoError_ = value;
                }

                void analogVideoError(UMAA::SEM::SensorManagement::AnalogSensorErrorType&& value) {
                    m_analogVideoError_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType& videoFormat() OMG_NOEXCEPT {
                    return m_videoFormat_;
                }

                const UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType& videoFormat() const OMG_NOEXCEPT {
                    return m_videoFormat_;
                }

                void videoFormat(const UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType& value) {
                    m_videoFormat_ = value;
                }

                void videoFormat(UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType&& value) {
                    m_videoFormat_ = std::move(value);
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

                bool operator == (const AnalogVideoConfigReportType& other_) const;
                bool operator != (const AnalogVideoConfigReportType& other_) const;

                void swap(AnalogVideoConfigReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::SEM::SensorManagement::AnalogSensorErrorType m_analogVideoError_;
                UMAA::Common::MaritimeEnumeration::VideoFormatEnumType::VideoFormatEnumType m_videoFormat_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(AnalogVideoConfigReportType& a, AnalogVideoConfigReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const AnalogVideoConfigReportType& sample);

        } // namespace AnalogVideoConfig  
    } // namespace SEM  
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
        struct topic_type_name< UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::AnalogVideoConfig::AnalogVideoConfigReportType > {
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

#endif // AnalogVideoConfigReportType_2964399_hpp

