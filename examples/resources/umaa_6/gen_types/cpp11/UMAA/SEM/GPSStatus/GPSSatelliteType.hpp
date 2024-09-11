

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSSatelliteType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSSatelliteType_1384633519_hpp
#define GPSSatelliteType_1384633519_hpp

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
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.hpp"
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
        namespace GPSStatus {

            class NDDSUSERDllExport GPSSatelliteType {
              public:

                GPSSatelliteType();

                GPSSatelliteType(double antennaCarrierNoiseDensity_,double azimuth_,double basebandCarrierNoiseDensity_,double carrierFrequency_,const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType& constellationType_,bool containsAlmanacData_,double elevation_,bool ephemerisData_,double satelliteID_,bool usedInFix_);

                double& antennaCarrierNoiseDensity() noexcept {
                    return m_antennaCarrierNoiseDensity_;
                }

                const double& antennaCarrierNoiseDensity() const noexcept {
                    return m_antennaCarrierNoiseDensity_;
                }

                void antennaCarrierNoiseDensity(double value) {

                    m_antennaCarrierNoiseDensity_ = value;
                }

                double& azimuth() noexcept {
                    return m_azimuth_;
                }

                const double& azimuth() const noexcept {
                    return m_azimuth_;
                }

                void azimuth(double value) {

                    m_azimuth_ = value;
                }

                double& basebandCarrierNoiseDensity() noexcept {
                    return m_basebandCarrierNoiseDensity_;
                }

                const double& basebandCarrierNoiseDensity() const noexcept {
                    return m_basebandCarrierNoiseDensity_;
                }

                void basebandCarrierNoiseDensity(double value) {

                    m_basebandCarrierNoiseDensity_ = value;
                }

                double& carrierFrequency() noexcept {
                    return m_carrierFrequency_;
                }

                const double& carrierFrequency() const noexcept {
                    return m_carrierFrequency_;
                }

                void carrierFrequency(double value) {

                    m_carrierFrequency_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType& constellationType() noexcept {
                    return m_constellationType_;
                }

                const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType& constellationType() const noexcept {
                    return m_constellationType_;
                }

                void constellationType(const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType& value) {

                    m_constellationType_ = value;
                }

                void constellationType(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType&& value) {
                    m_constellationType_ = std::move(value);
                }
                bool& containsAlmanacData() noexcept {
                    return m_containsAlmanacData_;
                }

                const bool& containsAlmanacData() const noexcept {
                    return m_containsAlmanacData_;
                }

                void containsAlmanacData(bool value) {

                    m_containsAlmanacData_ = value;
                }

                double& elevation() noexcept {
                    return m_elevation_;
                }

                const double& elevation() const noexcept {
                    return m_elevation_;
                }

                void elevation(double value) {

                    m_elevation_ = value;
                }

                bool& ephemerisData() noexcept {
                    return m_ephemerisData_;
                }

                const bool& ephemerisData() const noexcept {
                    return m_ephemerisData_;
                }

                void ephemerisData(bool value) {

                    m_ephemerisData_ = value;
                }

                double& satelliteID() noexcept {
                    return m_satelliteID_;
                }

                const double& satelliteID() const noexcept {
                    return m_satelliteID_;
                }

                void satelliteID(double value) {

                    m_satelliteID_ = value;
                }

                bool& usedInFix() noexcept {
                    return m_usedInFix_;
                }

                const bool& usedInFix() const noexcept {
                    return m_usedInFix_;
                }

                void usedInFix(bool value) {

                    m_usedInFix_ = value;
                }

                bool operator == (const GPSSatelliteType& other_) const;
                bool operator != (const GPSSatelliteType& other_) const;

                void swap(GPSSatelliteType& other_) noexcept ;

              private:

                double m_antennaCarrierNoiseDensity_;
                double m_azimuth_;
                double m_basebandCarrierNoiseDensity_;
                double m_carrierFrequency_;
                ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType m_constellationType_;
                bool m_containsAlmanacData_;
                double m_elevation_;
                bool m_ephemerisData_;
                double m_satelliteID_;
                bool m_usedInFix_;

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
        struct topic_type_support< ::UMAA::SEM::GPSStatus::GPSSatelliteType > {
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

#endif // GPSSatelliteType_1384633519_hpp

