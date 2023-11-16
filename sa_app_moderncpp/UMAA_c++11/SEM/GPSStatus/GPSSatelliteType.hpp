

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSSatelliteType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSSatelliteType_1384633428_hpp
#define GPSSatelliteType_1384633428_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
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
        namespace GPSStatus {

            class NDDSUSERDllExport GPSSatelliteType {
              public:

                GPSSatelliteType();

                GPSSatelliteType(const ::dds::core::optional< double >& antennaCarrierNoiseDensity_,const ::dds::core::optional< double >& azimuth_,const ::dds::core::optional< double >& basebandCarrierNoiseDensity_,const ::dds::core::optional< double >& carrierFrequency_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& constellationType_,const ::dds::core::optional< bool >& containsAlmanacData_,const ::dds::core::optional< double >& elevation_,const ::dds::core::optional< bool >& ephemerisData_,const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& satelliteId_,const ::dds::core::optional< bool >& usedInFix_);

                ::dds::core::optional< double >& antennaCarrierNoiseDensity() noexcept {
                    return m_antennaCarrierNoiseDensity_;
                }

                const ::dds::core::optional< double >& antennaCarrierNoiseDensity() const noexcept {
                    return m_antennaCarrierNoiseDensity_;
                }

                void antennaCarrierNoiseDensity(const ::dds::core::optional< double >& value) {

                    m_antennaCarrierNoiseDensity_ = value;
                }

                void antennaCarrierNoiseDensity(::dds::core::optional< double >&& value) {
                    m_antennaCarrierNoiseDensity_ = std::move(value);
                }
                ::dds::core::optional< double >& azimuth() noexcept {
                    return m_azimuth_;
                }

                const ::dds::core::optional< double >& azimuth() const noexcept {
                    return m_azimuth_;
                }

                void azimuth(const ::dds::core::optional< double >& value) {

                    m_azimuth_ = value;
                }

                void azimuth(::dds::core::optional< double >&& value) {
                    m_azimuth_ = std::move(value);
                }
                ::dds::core::optional< double >& basebandCarrierNoiseDensity() noexcept {
                    return m_basebandCarrierNoiseDensity_;
                }

                const ::dds::core::optional< double >& basebandCarrierNoiseDensity() const noexcept {
                    return m_basebandCarrierNoiseDensity_;
                }

                void basebandCarrierNoiseDensity(const ::dds::core::optional< double >& value) {

                    m_basebandCarrierNoiseDensity_ = value;
                }

                void basebandCarrierNoiseDensity(::dds::core::optional< double >&& value) {
                    m_basebandCarrierNoiseDensity_ = std::move(value);
                }
                ::dds::core::optional< double >& carrierFrequency() noexcept {
                    return m_carrierFrequency_;
                }

                const ::dds::core::optional< double >& carrierFrequency() const noexcept {
                    return m_carrierFrequency_;
                }

                void carrierFrequency(const ::dds::core::optional< double >& value) {

                    m_carrierFrequency_ = value;
                }

                void carrierFrequency(::dds::core::optional< double >&& value) {
                    m_carrierFrequency_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& constellationType() noexcept {
                    return m_constellationType_;
                }

                const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& constellationType() const noexcept {
                    return m_constellationType_;
                }

                void constellationType(const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& value) {

                    m_constellationType_ = value;
                }

                void constellationType(::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >&& value) {
                    m_constellationType_ = std::move(value);
                }
                ::dds::core::optional< bool >& containsAlmanacData() noexcept {
                    return m_containsAlmanacData_;
                }

                const ::dds::core::optional< bool >& containsAlmanacData() const noexcept {
                    return m_containsAlmanacData_;
                }

                void containsAlmanacData(const ::dds::core::optional< bool >& value) {

                    m_containsAlmanacData_ = value;
                }

                void containsAlmanacData(::dds::core::optional< bool >&& value) {
                    m_containsAlmanacData_ = std::move(value);
                }
                ::dds::core::optional< double >& elevation() noexcept {
                    return m_elevation_;
                }

                const ::dds::core::optional< double >& elevation() const noexcept {
                    return m_elevation_;
                }

                void elevation(const ::dds::core::optional< double >& value) {

                    m_elevation_ = value;
                }

                void elevation(::dds::core::optional< double >&& value) {
                    m_elevation_ = std::move(value);
                }
                ::dds::core::optional< bool >& ephemerisData() noexcept {
                    return m_ephemerisData_;
                }

                const ::dds::core::optional< bool >& ephemerisData() const noexcept {
                    return m_ephemerisData_;
                }

                void ephemerisData(const ::dds::core::optional< bool >& value) {

                    m_ephemerisData_ = value;
                }

                void ephemerisData(::dds::core::optional< bool >&& value) {
                    m_ephemerisData_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& satelliteId() noexcept {
                    return m_satelliteId_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& satelliteId() const noexcept {
                    return m_satelliteId_;
                }

                void satelliteId(const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& value) {

                    m_satelliteId_ = value;
                }

                void satelliteId(::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >&& value) {
                    m_satelliteId_ = std::move(value);
                }
                ::dds::core::optional< bool >& usedInFix() noexcept {
                    return m_usedInFix_;
                }

                const ::dds::core::optional< bool >& usedInFix() const noexcept {
                    return m_usedInFix_;
                }

                void usedInFix(const ::dds::core::optional< bool >& value) {

                    m_usedInFix_ = value;
                }

                void usedInFix(::dds::core::optional< bool >&& value) {
                    m_usedInFix_ = std::move(value);
                }
                bool operator == (const GPSSatelliteType& other_) const;
                bool operator != (const GPSSatelliteType& other_) const;

                void swap(GPSSatelliteType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_antennaCarrierNoiseDensity_;
                ::dds::core::optional< double > m_azimuth_;
                ::dds::core::optional< double > m_basebandCarrierNoiseDensity_;
                ::dds::core::optional< double > m_carrierFrequency_;
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType > m_constellationType_;
                ::dds::core::optional< bool > m_containsAlmanacData_;
                ::dds::core::optional< double > m_elevation_;
                ::dds::core::optional< bool > m_ephemerisData_;
                ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID > m_satelliteId_;
                ::dds::core::optional< bool > m_usedInFix_;

            };

            inline void swap(GPSSatelliteType& a, GPSSatelliteType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GPSSatelliteType& sample);

        } // namespace GPSStatus  
    } // namespace SEM  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::UMAA::SEM::GPSStatus::GPSSatelliteType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::GPSStatus::GPSSatelliteType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::GPSStatus::GPSSatelliteType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::GPSStatus::GPSSatelliteType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::GPSStatus::GPSSatelliteType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::GPSStatus::GPSSatelliteType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::GPSStatus::GPSSatelliteType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::GPSStatus::GPSSatelliteType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::GPSStatus::GPSSatelliteType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::GPSStatus::GPSSatelliteType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // GPSSatelliteType_1384633428_hpp

