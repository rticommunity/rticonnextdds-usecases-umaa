

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSClockType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSClockType_1708035119_hpp
#define GPSClockType_1708035119_hpp

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

            class NDDSUSERDllExport GPSClockType {
              public:

                GPSClockType();

                GPSClockType(int64_t bias_,int64_t biasUncertainty_,int32_t drift_,int32_t driftUncertainty_,int64_t elapsedRealtime_,int64_t elapsedRealtimeUncertainty_,int64_t fullBias_,int64_t hardwareClockDiscontinuityCount_,int32_t leapSecond_,double referenceCarrierFrequency_,const std::string& referenceCodeTypeFor_,const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType& referenceConstellationType_,int32_t time_,const ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType& timeFigureOfMerit_);

                int64_t& bias() noexcept {
                    return m_bias_;
                }

                const int64_t& bias() const noexcept {
                    return m_bias_;
                }

                void bias(int64_t value) {

                    m_bias_ = value;
                }

                int64_t& biasUncertainty() noexcept {
                    return m_biasUncertainty_;
                }

                const int64_t& biasUncertainty() const noexcept {
                    return m_biasUncertainty_;
                }

                void biasUncertainty(int64_t value) {

                    m_biasUncertainty_ = value;
                }

                int32_t& drift() noexcept {
                    return m_drift_;
                }

                const int32_t& drift() const noexcept {
                    return m_drift_;
                }

                void drift(int32_t value) {

                    m_drift_ = value;
                }

                int32_t& driftUncertainty() noexcept {
                    return m_driftUncertainty_;
                }

                const int32_t& driftUncertainty() const noexcept {
                    return m_driftUncertainty_;
                }

                void driftUncertainty(int32_t value) {

                    m_driftUncertainty_ = value;
                }

                int64_t& elapsedRealtime() noexcept {
                    return m_elapsedRealtime_;
                }

                const int64_t& elapsedRealtime() const noexcept {
                    return m_elapsedRealtime_;
                }

                void elapsedRealtime(int64_t value) {

                    m_elapsedRealtime_ = value;
                }

                int64_t& elapsedRealtimeUncertainty() noexcept {
                    return m_elapsedRealtimeUncertainty_;
                }

                const int64_t& elapsedRealtimeUncertainty() const noexcept {
                    return m_elapsedRealtimeUncertainty_;
                }

                void elapsedRealtimeUncertainty(int64_t value) {

                    m_elapsedRealtimeUncertainty_ = value;
                }

                int64_t& fullBias() noexcept {
                    return m_fullBias_;
                }

                const int64_t& fullBias() const noexcept {
                    return m_fullBias_;
                }

                void fullBias(int64_t value) {

                    m_fullBias_ = value;
                }

                int64_t& hardwareClockDiscontinuityCount() noexcept {
                    return m_hardwareClockDiscontinuityCount_;
                }

                const int64_t& hardwareClockDiscontinuityCount() const noexcept {
                    return m_hardwareClockDiscontinuityCount_;
                }

                void hardwareClockDiscontinuityCount(int64_t value) {

                    m_hardwareClockDiscontinuityCount_ = value;
                }

                int32_t& leapSecond() noexcept {
                    return m_leapSecond_;
                }

                const int32_t& leapSecond() const noexcept {
                    return m_leapSecond_;
                }

                void leapSecond(int32_t value) {

                    m_leapSecond_ = value;
                }

                double& referenceCarrierFrequency() noexcept {
                    return m_referenceCarrierFrequency_;
                }

                const double& referenceCarrierFrequency() const noexcept {
                    return m_referenceCarrierFrequency_;
                }

                void referenceCarrierFrequency(double value) {

                    m_referenceCarrierFrequency_ = value;
                }

                std::string& referenceCodeTypeFor() noexcept {
                    return m_referenceCodeTypeFor_;
                }

                const std::string& referenceCodeTypeFor() const noexcept {
                    return m_referenceCodeTypeFor_;
                }

                void referenceCodeTypeFor(const std::string& value) {

                    m_referenceCodeTypeFor_ = value;
                }

                void referenceCodeTypeFor(std::string&& value) {
                    m_referenceCodeTypeFor_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType& referenceConstellationType() noexcept {
                    return m_referenceConstellationType_;
                }

                const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType& referenceConstellationType() const noexcept {
                    return m_referenceConstellationType_;
                }

                void referenceConstellationType(const ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType& value) {

                    m_referenceConstellationType_ = value;
                }

                void referenceConstellationType(::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType&& value) {
                    m_referenceConstellationType_ = std::move(value);
                }
                int32_t& time() noexcept {
                    return m_time_;
                }

                const int32_t& time() const noexcept {
                    return m_time_;
                }

                void time(int32_t value) {

                    m_time_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType& timeFigureOfMerit() noexcept {
                    return m_timeFigureOfMerit_;
                }

                const ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType& timeFigureOfMerit() const noexcept {
                    return m_timeFigureOfMerit_;
                }

                void timeFigureOfMerit(const ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType& value) {

                    m_timeFigureOfMerit_ = value;
                }

                void timeFigureOfMerit(::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType&& value) {
                    m_timeFigureOfMerit_ = std::move(value);
                }
                bool operator == (const GPSClockType& other_) const;
                bool operator != (const GPSClockType& other_) const;

                void swap(GPSClockType& other_) noexcept ;

              private:

                int64_t m_bias_;
                int64_t m_biasUncertainty_;
                int32_t m_drift_;
                int32_t m_driftUncertainty_;
                int64_t m_elapsedRealtime_;
                int64_t m_elapsedRealtimeUncertainty_;
                int64_t m_fullBias_;
                int64_t m_hardwareClockDiscontinuityCount_;
                int32_t m_leapSecond_;
                double m_referenceCarrierFrequency_;
                std::string m_referenceCodeTypeFor_;
                ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumModule::GPSConstellationEnumType m_referenceConstellationType_;
                int32_t m_time_;
                ::UMAA::Common::MaritimeEnumeration::TFOMEnumModule::TFOMEnumType m_timeFigureOfMerit_;

            };

            inline void swap(GPSClockType& a, GPSClockType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GPSClockType& sample);

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
        struct topic_type_name< ::UMAA::SEM::GPSStatus::GPSClockType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::GPSStatus::GPSClockType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SEM::GPSStatus::GPSClockType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::GPSStatus::GPSClockType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::GPSStatus::GPSClockType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::GPSStatus::GPSClockType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::GPSStatus::GPSClockType > {
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

#endif // GPSClockType_1708035119_hpp

