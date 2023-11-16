

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorCommandAckReportType_1310512084_hpp
#define VideoIlluminatorCommandAckReportType_1310512084_hpp

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
        namespace VideoIlluminatorControl {

            static const std::string VideoIlluminatorCommandAckReport_TOPIC = "UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReport";

            class NDDSUSERDllExport VideoIlluminatorCommandAckReportType {
              public:
                VideoIlluminatorCommandAckReportType();

                VideoIlluminatorCommandAckReportType(double beamWidth,int32_t level,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                VideoIlluminatorCommandAckReportType (VideoIlluminatorCommandAckReportType&&) = default;
                VideoIlluminatorCommandAckReportType& operator=(VideoIlluminatorCommandAckReportType&&) = default;
                VideoIlluminatorCommandAckReportType& operator=(const VideoIlluminatorCommandAckReportType&) = default;
                VideoIlluminatorCommandAckReportType(const VideoIlluminatorCommandAckReportType&) = default;
                #else
                VideoIlluminatorCommandAckReportType(VideoIlluminatorCommandAckReportType&& other_) OMG_NOEXCEPT;  
                VideoIlluminatorCommandAckReportType& operator=(VideoIlluminatorCommandAckReportType&&  other_) OMG_NOEXCEPT;
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

                bool operator == (const VideoIlluminatorCommandAckReportType& other_) const;
                bool operator != (const VideoIlluminatorCommandAckReportType& other_) const;

                void swap(VideoIlluminatorCommandAckReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_beamWidth_;
                int32_t m_level_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(VideoIlluminatorCommandAckReportType& a, VideoIlluminatorCommandAckReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VideoIlluminatorCommandAckReportType& sample);

        } // namespace VideoIlluminatorControl  
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
        struct topic_type_name< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::VideoIlluminatorControl::VideoIlluminatorCommandAckReportType > {
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

#endif // VideoIlluminatorCommandAckReportType_1310512084_hpp

