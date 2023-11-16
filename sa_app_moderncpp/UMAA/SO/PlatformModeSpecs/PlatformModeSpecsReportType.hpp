

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlatformModeSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlatformModeSpecsReportType_1515919816_hpp
#define PlatformModeSpecsReportType_1515919816_hpp

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
    namespace SO {
        namespace PlatformModeSpecs {

            static const std::string PlatformModeSpecsReport_TOPIC = "UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReport";

            class NDDSUSERDllExport PlatformModeSpecsReportType {
              public:
                PlatformModeSpecsReportType();

                PlatformModeSpecsReportType(bool supportedMaintenance,bool supportedStandardOperating,bool supportedTraining,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PlatformModeSpecsReportType (PlatformModeSpecsReportType&&) = default;
                PlatformModeSpecsReportType& operator=(PlatformModeSpecsReportType&&) = default;
                PlatformModeSpecsReportType& operator=(const PlatformModeSpecsReportType&) = default;
                PlatformModeSpecsReportType(const PlatformModeSpecsReportType&) = default;
                #else
                PlatformModeSpecsReportType(PlatformModeSpecsReportType&& other_) OMG_NOEXCEPT;  
                PlatformModeSpecsReportType& operator=(PlatformModeSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& supportedMaintenance() OMG_NOEXCEPT {
                    return m_supportedMaintenance_;
                }

                const bool& supportedMaintenance() const OMG_NOEXCEPT {
                    return m_supportedMaintenance_;
                }

                void supportedMaintenance(bool value) {
                    m_supportedMaintenance_ = value;
                }

                bool& supportedStandardOperating() OMG_NOEXCEPT {
                    return m_supportedStandardOperating_;
                }

                const bool& supportedStandardOperating() const OMG_NOEXCEPT {
                    return m_supportedStandardOperating_;
                }

                void supportedStandardOperating(bool value) {
                    m_supportedStandardOperating_ = value;
                }

                bool& supportedTraining() OMG_NOEXCEPT {
                    return m_supportedTraining_;
                }

                const bool& supportedTraining() const OMG_NOEXCEPT {
                    return m_supportedTraining_;
                }

                void supportedTraining(bool value) {
                    m_supportedTraining_ = value;
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

                bool operator == (const PlatformModeSpecsReportType& other_) const;
                bool operator != (const PlatformModeSpecsReportType& other_) const;

                void swap(PlatformModeSpecsReportType& other_) OMG_NOEXCEPT ;

              private:

                bool m_supportedMaintenance_;
                bool m_supportedStandardOperating_;
                bool m_supportedTraining_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PlatformModeSpecsReportType& a, PlatformModeSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PlatformModeSpecsReportType& sample);

        } // namespace PlatformModeSpecs  
    } // namespace SO  
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
        struct topic_type_name< UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::PlatformModeSpecs::PlatformModeSpecsReportType > {
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

#endif // PlatformModeSpecsReportType_1515919816_hpp

