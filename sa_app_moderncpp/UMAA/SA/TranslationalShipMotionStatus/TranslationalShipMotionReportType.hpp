

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TranslationalShipMotionReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TranslationalShipMotionReportType_1153455098_hpp
#define TranslationalShipMotionReportType_1153455098_hpp

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
#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_Axes.hpp"
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
    namespace SA {
        namespace TranslationalShipMotionStatus {

            static const std::string TranslationalShipMotionReport_TOPIC = "UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReport";

            class NDDSUSERDllExport TranslationalShipMotionReportType {
              public:
                TranslationalShipMotionReportType();

                TranslationalShipMotionReportType(const ::dds::core::optional< double >& heave,const ::dds::core::optional< double >& surge,const ::dds::core::optional< double >& sway,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                TranslationalShipMotionReportType (TranslationalShipMotionReportType&&) = default;
                TranslationalShipMotionReportType& operator=(TranslationalShipMotionReportType&&) = default;
                TranslationalShipMotionReportType& operator=(const TranslationalShipMotionReportType&) = default;
                TranslationalShipMotionReportType(const TranslationalShipMotionReportType&) = default;
                #else
                TranslationalShipMotionReportType(TranslationalShipMotionReportType&& other_) OMG_NOEXCEPT;  
                TranslationalShipMotionReportType& operator=(TranslationalShipMotionReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< double >& heave() OMG_NOEXCEPT {
                    return m_heave_;
                }

                const ::dds::core::optional< double >& heave() const OMG_NOEXCEPT {
                    return m_heave_;
                }

                void heave(const ::dds::core::optional< double >& value) {
                    m_heave_ = value;
                }

                void heave(::dds::core::optional< double >&& value) {
                    m_heave_ = std::move(value);
                }
                ::dds::core::optional< double >& surge() OMG_NOEXCEPT {
                    return m_surge_;
                }

                const ::dds::core::optional< double >& surge() const OMG_NOEXCEPT {
                    return m_surge_;
                }

                void surge(const ::dds::core::optional< double >& value) {
                    m_surge_ = value;
                }

                void surge(::dds::core::optional< double >&& value) {
                    m_surge_ = std::move(value);
                }
                ::dds::core::optional< double >& sway() OMG_NOEXCEPT {
                    return m_sway_;
                }

                const ::dds::core::optional< double >& sway() const OMG_NOEXCEPT {
                    return m_sway_;
                }

                void sway(const ::dds::core::optional< double >& value) {
                    m_sway_ = value;
                }

                void sway(::dds::core::optional< double >&& value) {
                    m_sway_ = std::move(value);
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

                bool operator == (const TranslationalShipMotionReportType& other_) const;
                bool operator != (const TranslationalShipMotionReportType& other_) const;

                void swap(TranslationalShipMotionReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< double > m_heave_;
                ::dds::core::optional< double > m_surge_;
                ::dds::core::optional< double > m_sway_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(TranslationalShipMotionReportType& a, TranslationalShipMotionReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TranslationalShipMotionReportType& sample);

        } // namespace TranslationalShipMotionStatus  
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
        struct topic_type_name< UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::TranslationalShipMotionStatus::TranslationalShipMotionReportType > {
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

#endif // TranslationalShipMotionReportType_1153455098_hpp

