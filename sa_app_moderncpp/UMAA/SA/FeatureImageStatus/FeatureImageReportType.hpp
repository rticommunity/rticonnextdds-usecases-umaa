

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FeatureImageReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FeatureImageReportType_1916779367_hpp
#define FeatureImageReportType_1916779367_hpp

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
#include "UMAA/SA/BoundingBox/BoundingBoxType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace FeatureImageStatus {

            static const std::string FeatureImageReport_TOPIC = "UMAA::SA::FeatureImageStatus::FeatureImageReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< UMAA::Common::Measurement::NumericGUID >;
            #endif
            class NDDSUSERDllExport FeatureImageReportType {
              public:
                FeatureImageReportType();

                FeatureImageReportType(const ::dds::core::optional< UMAA::SA::BoundingBox::BoundingBoxType >& boundingBox,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& featureID,const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& imageID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                FeatureImageReportType (FeatureImageReportType&&) = default;
                FeatureImageReportType& operator=(FeatureImageReportType&&) = default;
                FeatureImageReportType& operator=(const FeatureImageReportType&) = default;
                FeatureImageReportType(const FeatureImageReportType&) = default;
                #else
                FeatureImageReportType(FeatureImageReportType&& other_) OMG_NOEXCEPT;  
                FeatureImageReportType& operator=(FeatureImageReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< UMAA::SA::BoundingBox::BoundingBoxType >& boundingBox() OMG_NOEXCEPT {
                    return m_boundingBox_;
                }

                const ::dds::core::optional< UMAA::SA::BoundingBox::BoundingBoxType >& boundingBox() const OMG_NOEXCEPT {
                    return m_boundingBox_;
                }

                void boundingBox(const ::dds::core::optional< UMAA::SA::BoundingBox::BoundingBoxType >& value) {
                    m_boundingBox_ = value;
                }

                void boundingBox(::dds::core::optional< UMAA::SA::BoundingBox::BoundingBoxType >&& value) {
                    m_boundingBox_ = std::move(value);
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
                ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& featureID() OMG_NOEXCEPT {
                    return m_featureID_;
                }

                const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& featureID() const OMG_NOEXCEPT {
                    return m_featureID_;
                }

                void featureID(const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& value) {
                    m_featureID_ = value;
                }

                void featureID(::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_featureID_ = std::move(value);
                }
                ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& imageID() OMG_NOEXCEPT {
                    return m_imageID_;
                }

                const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& imageID() const OMG_NOEXCEPT {
                    return m_imageID_;
                }

                void imageID(const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& value) {
                    m_imageID_ = value;
                }

                void imageID(::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_imageID_ = std::move(value);
                }

                bool operator == (const FeatureImageReportType& other_) const;
                bool operator != (const FeatureImageReportType& other_) const;

                void swap(FeatureImageReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< UMAA::SA::BoundingBox::BoundingBoxType > m_boundingBox_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > m_featureID_;
                ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > m_imageID_;

            };

            inline void swap(FeatureImageReportType& a, FeatureImageReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FeatureImageReportType& sample);

        } // namespace FeatureImageStatus  
    } // namespace SA  
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
        struct topic_type_name< UMAA::SA::FeatureImageStatus::FeatureImageReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::FeatureImageStatus::FeatureImageReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::FeatureImageStatus::FeatureImageReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::FeatureImageStatus::FeatureImageReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::FeatureImageStatus::FeatureImageReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::FeatureImageStatus::FeatureImageReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::FeatureImageStatus::FeatureImageReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::FeatureImageStatus::FeatureImageReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::FeatureImageStatus::FeatureImageReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::FeatureImageStatus::FeatureImageReportType > {
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

#endif // FeatureImageReportType_1916779367_hpp

