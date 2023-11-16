

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSReportType_832787563_hpp
#define GPSReportType_832787563_hpp

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
#include "UMAA/SEM/GPSStatus/GPSClockType.hpp"
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
#include "UMAA/SEM/GPSStatus/GPSSatelliteType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace GPSStatus {

            static const std::string GPSReport_TOPIC = "UMAA::SEM::GPSStatus::GPSReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::SEM::GPSStatus::GPSSatelliteType >;
            template class NDDSUSERDllExport std::vector< UMAA::SEM::GPSStatus::GPSSatelliteType >;
            #endif
            class NDDSUSERDllExport GPSReportType {
              public:
                GPSReportType();

                GPSReportType(const UMAA::SEM::GPSStatus::GPSClockType& clock,int32_t numberSatellitesInView,const ::rti::core::bounded_sequence< UMAA::SEM::GPSStatus::GPSSatelliteType, 100L >& satellites,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GPSReportType (GPSReportType&&) = default;
                GPSReportType& operator=(GPSReportType&&) = default;
                GPSReportType& operator=(const GPSReportType&) = default;
                GPSReportType(const GPSReportType&) = default;
                #else
                GPSReportType(GPSReportType&& other_) OMG_NOEXCEPT;  
                GPSReportType& operator=(GPSReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::SEM::GPSStatus::GPSClockType& clock() OMG_NOEXCEPT {
                    return m_clock_;
                }

                const UMAA::SEM::GPSStatus::GPSClockType& clock() const OMG_NOEXCEPT {
                    return m_clock_;
                }

                void clock(const UMAA::SEM::GPSStatus::GPSClockType& value) {
                    m_clock_ = value;
                }

                void clock(UMAA::SEM::GPSStatus::GPSClockType&& value) {
                    m_clock_ = std::move(value);
                }
                int32_t& numberSatellitesInView() OMG_NOEXCEPT {
                    return m_numberSatellitesInView_;
                }

                const int32_t& numberSatellitesInView() const OMG_NOEXCEPT {
                    return m_numberSatellitesInView_;
                }

                void numberSatellitesInView(int32_t value) {
                    m_numberSatellitesInView_ = value;
                }

                ::rti::core::bounded_sequence< UMAA::SEM::GPSStatus::GPSSatelliteType, 100L >& satellites() OMG_NOEXCEPT {
                    return m_satellites_;
                }

                const ::rti::core::bounded_sequence< UMAA::SEM::GPSStatus::GPSSatelliteType, 100L >& satellites() const OMG_NOEXCEPT {
                    return m_satellites_;
                }

                void satellites(const ::rti::core::bounded_sequence< UMAA::SEM::GPSStatus::GPSSatelliteType, 100L >& value) {
                    m_satellites_ = value;
                }

                void satellites(::rti::core::bounded_sequence< UMAA::SEM::GPSStatus::GPSSatelliteType, 100L >&& value) {
                    m_satellites_ = std::move(value);
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

                bool operator == (const GPSReportType& other_) const;
                bool operator != (const GPSReportType& other_) const;

                void swap(GPSReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::SEM::GPSStatus::GPSClockType m_clock_;
                int32_t m_numberSatellitesInView_;
                ::rti::core::bounded_sequence< UMAA::SEM::GPSStatus::GPSSatelliteType, 100L > m_satellites_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(GPSReportType& a, GPSReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GPSReportType& sample);

        } // namespace GPSStatus  
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
        struct topic_type_name< UMAA::SEM::GPSStatus::GPSReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::GPSStatus::GPSReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::GPSStatus::GPSReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::GPSStatus::GPSReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::GPSStatus::GPSReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::GPSStatus::GPSReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::GPSStatus::GPSReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::GPSStatus::GPSReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::GPSStatus::GPSReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::GPSStatus::GPSReportType > {
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

#endif // GPSReportType_832787563_hpp

