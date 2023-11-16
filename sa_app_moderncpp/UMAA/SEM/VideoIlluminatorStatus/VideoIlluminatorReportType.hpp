

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorReportType_1020678115_hpp
#define VideoIlluminatorReportType_1020678115_hpp

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
namespace UMAA {
    namespace SEM {
        namespace VideoIlluminatorStatus {

            static const std::string VideoIlluminatorReport_TOPIC = "UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReport";

            class NDDSUSERDllExport VideoIlluminatorReportType {
              public:
                VideoIlluminatorReportType();

                VideoIlluminatorReportType(double beamWidth,int32_t level,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                VideoIlluminatorReportType (VideoIlluminatorReportType&&) = default;
                VideoIlluminatorReportType& operator=(VideoIlluminatorReportType&&) = default;
                VideoIlluminatorReportType& operator=(const VideoIlluminatorReportType&) = default;
                VideoIlluminatorReportType(const VideoIlluminatorReportType&) = default;
                #else
                VideoIlluminatorReportType(VideoIlluminatorReportType&& other_) OMG_NOEXCEPT;  
                VideoIlluminatorReportType& operator=(VideoIlluminatorReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& beamWidth() OMG_NOEXCEPT {
                    return m_beamWidth_;
                }

                const double& beamWidth() const OMG_NOEXCEPT {
                    return m_beamWidth_;
                }

                void beamWidth(double value) {
                    m_beamWidth_ = value;
                }

                int32_t& level() OMG_NOEXCEPT {
                    return m_level_;
                }

                const int32_t& level() const OMG_NOEXCEPT {
                    return m_level_;
                }

                void level(int32_t value) {
                    m_level_ = value;
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

                bool operator == (const VideoIlluminatorReportType& other_) const;
                bool operator != (const VideoIlluminatorReportType& other_) const;

                void swap(VideoIlluminatorReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_beamWidth_;
                int32_t m_level_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(VideoIlluminatorReportType& a, VideoIlluminatorReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VideoIlluminatorReportType& sample);

        } // namespace VideoIlluminatorStatus  
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
        struct topic_type_name< UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType > {
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

#endif // VideoIlluminatorReportType_1020678115_hpp

