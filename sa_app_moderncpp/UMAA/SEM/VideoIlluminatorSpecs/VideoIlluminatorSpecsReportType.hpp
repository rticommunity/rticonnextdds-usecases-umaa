

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VideoIlluminatorSpecsReportType_1089081381_hpp
#define VideoIlluminatorSpecsReportType_1089081381_hpp

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
    namespace SEM {
        namespace VideoIlluminatorSpecs {

            static const std::string VideoIlluminatorSpecsReport_TOPIC = "UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReport";

            class NDDSUSERDllExport VideoIlluminatorSpecsReportType {
              public:
                VideoIlluminatorSpecsReportType();

                VideoIlluminatorSpecsReportType(bool maxBeamWidth,const std::string& name,bool supportedColor,bool supportedGreyscale,bool supportedInfrared,bool supportedLowlight,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                VideoIlluminatorSpecsReportType (VideoIlluminatorSpecsReportType&&) = default;
                VideoIlluminatorSpecsReportType& operator=(VideoIlluminatorSpecsReportType&&) = default;
                VideoIlluminatorSpecsReportType& operator=(const VideoIlluminatorSpecsReportType&) = default;
                VideoIlluminatorSpecsReportType(const VideoIlluminatorSpecsReportType&) = default;
                #else
                VideoIlluminatorSpecsReportType(VideoIlluminatorSpecsReportType&& other_) OMG_NOEXCEPT;  
                VideoIlluminatorSpecsReportType& operator=(VideoIlluminatorSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& maxBeamWidth() OMG_NOEXCEPT {
                    return m_maxBeamWidth_;
                }

                const bool& maxBeamWidth() const OMG_NOEXCEPT {
                    return m_maxBeamWidth_;
                }

                void maxBeamWidth(bool value) {
                    m_maxBeamWidth_ = value;
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
                bool& supportedColor() OMG_NOEXCEPT {
                    return m_supportedColor_;
                }

                const bool& supportedColor() const OMG_NOEXCEPT {
                    return m_supportedColor_;
                }

                void supportedColor(bool value) {
                    m_supportedColor_ = value;
                }

                bool& supportedGreyscale() OMG_NOEXCEPT {
                    return m_supportedGreyscale_;
                }

                const bool& supportedGreyscale() const OMG_NOEXCEPT {
                    return m_supportedGreyscale_;
                }

                void supportedGreyscale(bool value) {
                    m_supportedGreyscale_ = value;
                }

                bool& supportedInfrared() OMG_NOEXCEPT {
                    return m_supportedInfrared_;
                }

                const bool& supportedInfrared() const OMG_NOEXCEPT {
                    return m_supportedInfrared_;
                }

                void supportedInfrared(bool value) {
                    m_supportedInfrared_ = value;
                }

                bool& supportedLowlight() OMG_NOEXCEPT {
                    return m_supportedLowlight_;
                }

                const bool& supportedLowlight() const OMG_NOEXCEPT {
                    return m_supportedLowlight_;
                }

                void supportedLowlight(bool value) {
                    m_supportedLowlight_ = value;
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

                bool operator == (const VideoIlluminatorSpecsReportType& other_) const;
                bool operator != (const VideoIlluminatorSpecsReportType& other_) const;

                void swap(VideoIlluminatorSpecsReportType& other_) OMG_NOEXCEPT ;

              private:

                bool m_maxBeamWidth_;
                std::string m_name_;
                bool m_supportedColor_;
                bool m_supportedGreyscale_;
                bool m_supportedInfrared_;
                bool m_supportedLowlight_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(VideoIlluminatorSpecsReportType& a, VideoIlluminatorSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VideoIlluminatorSpecsReportType& sample);

        } // namespace VideoIlluminatorSpecs  
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
        struct topic_type_name< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::VideoIlluminatorSpecs::VideoIlluminatorSpecsReportType > {
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

#endif // VideoIlluminatorSpecsReportType_1089081381_hpp

