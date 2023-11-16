

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSClockType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSClockType_1708034919_hpp
#define GPSClockType_1708034919_hpp

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
namespace UMAA {
    namespace SEM {
        namespace GPSStatus {

            class NDDSUSERDllExport GPSClockType {
              public:

                GPSClockType();

                GPSClockType(const ::dds::core::optional< int32_t >& bias_,const ::dds::core::optional< int32_t >& biasUncertianty_,const ::dds::core::optional< int32_t >& drift_,const ::dds::core::optional< int32_t >& driftUncertainty_,const ::dds::core::optional< int32_t >& elapsedRealtime_,const ::dds::core::optional< int32_t >& elapsedRealtimeUncertainty_,const ::dds::core::optional< int32_t >& fullBias_,const ::dds::core::optional< int32_t >& hardwareClockDiscontinuityCount_,const ::dds::core::optional< int32_t >& leapSecond_,const ::dds::core::optional< double >& referenceCarrierFrequency_,const ::dds::core::optional< std::string >& referenceCodeTypeFor_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& referenceConstellationType_,const ::dds::core::optional< int32_t >& time_,const ::dds::core::optional< double >& timeUncertainty_);

                ::dds::core::optional< int32_t >& bias() noexcept {
                    return m_bias_;
                }

                const ::dds::core::optional< int32_t >& bias() const noexcept {
                    return m_bias_;
                }

                void bias(const ::dds::core::optional< int32_t >& value) {

                    m_bias_ = value;
                }

                void bias(::dds::core::optional< int32_t >&& value) {
                    m_bias_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& biasUncertianty() noexcept {
                    return m_biasUncertianty_;
                }

                const ::dds::core::optional< int32_t >& biasUncertianty() const noexcept {
                    return m_biasUncertianty_;
                }

                void biasUncertianty(const ::dds::core::optional< int32_t >& value) {

                    m_biasUncertianty_ = value;
                }

                void biasUncertianty(::dds::core::optional< int32_t >&& value) {
                    m_biasUncertianty_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& drift() noexcept {
                    return m_drift_;
                }

                const ::dds::core::optional< int32_t >& drift() const noexcept {
                    return m_drift_;
                }

                void drift(const ::dds::core::optional< int32_t >& value) {

                    m_drift_ = value;
                }

                void drift(::dds::core::optional< int32_t >&& value) {
                    m_drift_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& driftUncertainty() noexcept {
                    return m_driftUncertainty_;
                }

                const ::dds::core::optional< int32_t >& driftUncertainty() const noexcept {
                    return m_driftUncertainty_;
                }

                void driftUncertainty(const ::dds::core::optional< int32_t >& value) {

                    m_driftUncertainty_ = value;
                }

                void driftUncertainty(::dds::core::optional< int32_t >&& value) {
                    m_driftUncertainty_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& elapsedRealtime() noexcept {
                    return m_elapsedRealtime_;
                }

                const ::dds::core::optional< int32_t >& elapsedRealtime() const noexcept {
                    return m_elapsedRealtime_;
                }

                void elapsedRealtime(const ::dds::core::optional< int32_t >& value) {

                    m_elapsedRealtime_ = value;
                }

                void elapsedRealtime(::dds::core::optional< int32_t >&& value) {
                    m_elapsedRealtime_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& elapsedRealtimeUncertainty() noexcept {
                    return m_elapsedRealtimeUncertainty_;
                }

                const ::dds::core::optional< int32_t >& elapsedRealtimeUncertainty() const noexcept {
                    return m_elapsedRealtimeUncertainty_;
                }

                void elapsedRealtimeUncertainty(const ::dds::core::optional< int32_t >& value) {

                    m_elapsedRealtimeUncertainty_ = value;
                }

                void elapsedRealtimeUncertainty(::dds::core::optional< int32_t >&& value) {
                    m_elapsedRealtimeUncertainty_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& fullBias() noexcept {
                    return m_fullBias_;
                }

                const ::dds::core::optional< int32_t >& fullBias() const noexcept {
                    return m_fullBias_;
                }

                void fullBias(const ::dds::core::optional< int32_t >& value) {

                    m_fullBias_ = value;
                }

                void fullBias(::dds::core::optional< int32_t >&& value) {
                    m_fullBias_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& hardwareClockDiscontinuityCount() noexcept {
                    return m_hardwareClockDiscontinuityCount_;
                }

                const ::dds::core::optional< int32_t >& hardwareClockDiscontinuityCount() const noexcept {
                    return m_hardwareClockDiscontinuityCount_;
                }

                void hardwareClockDiscontinuityCount(const ::dds::core::optional< int32_t >& value) {

                    m_hardwareClockDiscontinuityCount_ = value;
                }

                void hardwareClockDiscontinuityCount(::dds::core::optional< int32_t >&& value) {
                    m_hardwareClockDiscontinuityCount_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& leapSecond() noexcept {
                    return m_leapSecond_;
                }

                const ::dds::core::optional< int32_t >& leapSecond() const noexcept {
                    return m_leapSecond_;
                }

                void leapSecond(const ::dds::core::optional< int32_t >& value) {

                    m_leapSecond_ = value;
                }

                void leapSecond(::dds::core::optional< int32_t >&& value) {
                    m_leapSecond_ = std::move(value);
                }
                ::dds::core::optional< double >& referenceCarrierFrequency() noexcept {
                    return m_referenceCarrierFrequency_;
                }

                const ::dds::core::optional< double >& referenceCarrierFrequency() const noexcept {
                    return m_referenceCarrierFrequency_;
                }

                void referenceCarrierFrequency(const ::dds::core::optional< double >& value) {

                    m_referenceCarrierFrequency_ = value;
                }

                void referenceCarrierFrequency(::dds::core::optional< double >&& value) {
                    m_referenceCarrierFrequency_ = std::move(value);
                }
                ::dds::core::optional< std::string >& referenceCodeTypeFor() noexcept {
                    return m_referenceCodeTypeFor_;
                }

                const ::dds::core::optional< std::string >& referenceCodeTypeFor() const noexcept {
                    return m_referenceCodeTypeFor_;
                }

                void referenceCodeTypeFor(const ::dds::core::optional< std::string >& value) {

                    m_referenceCodeTypeFor_ = value;
                }

                void referenceCodeTypeFor(::dds::core::optional< std::string >&& value) {
                    m_referenceCodeTypeFor_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& referenceConstellationType() noexcept {
                    return m_referenceConstellationType_;
                }

                const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& referenceConstellationType() const noexcept {
                    return m_referenceConstellationType_;
                }

                void referenceConstellationType(const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >& value) {

                    m_referenceConstellationType_ = value;
                }

                void referenceConstellationType(::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType >&& value) {
                    m_referenceConstellationType_ = std::move(value);
                }
                ::dds::core::optional< int32_t >& time() noexcept {
                    return m_time_;
                }

                const ::dds::core::optional< int32_t >& time() const noexcept {
                    return m_time_;
                }

                void time(const ::dds::core::optional< int32_t >& value) {

                    m_time_ = value;
                }

                void time(::dds::core::optional< int32_t >&& value) {
                    m_time_ = std::move(value);
                }
                ::dds::core::optional< double >& timeUncertainty() noexcept {
                    return m_timeUncertainty_;
                }

                const ::dds::core::optional< double >& timeUncertainty() const noexcept {
                    return m_timeUncertainty_;
                }

                void timeUncertainty(const ::dds::core::optional< double >& value) {

                    m_timeUncertainty_ = value;
                }

                void timeUncertainty(::dds::core::optional< double >&& value) {
                    m_timeUncertainty_ = std::move(value);
                }
                bool operator == (const GPSClockType& other_) const;
                bool operator != (const GPSClockType& other_) const;

                void swap(GPSClockType& other_) noexcept ;

              private:

                ::dds::core::optional< int32_t > m_bias_;
                ::dds::core::optional< int32_t > m_biasUncertianty_;
                ::dds::core::optional< int32_t > m_drift_;
                ::dds::core::optional< int32_t > m_driftUncertainty_;
                ::dds::core::optional< int32_t > m_elapsedRealtime_;
                ::dds::core::optional< int32_t > m_elapsedRealtimeUncertainty_;
                ::dds::core::optional< int32_t > m_fullBias_;
                ::dds::core::optional< int32_t > m_hardwareClockDiscontinuityCount_;
                ::dds::core::optional< int32_t > m_leapSecond_;
                ::dds::core::optional< double > m_referenceCarrierFrequency_;
                ::dds::core::optional< std::string > m_referenceCodeTypeFor_;
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::GPSConstellationEnumType::GPSConstellationEnumType > m_referenceConstellationType_;
                ::dds::core::optional< int32_t > m_time_;
                ::dds::core::optional< double > m_timeUncertainty_;

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
        struct is_topic_type< ::UMAA::SEM::GPSStatus::GPSClockType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::GPSStatus::GPSClockType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::GPSStatus::GPSClockType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::GPSStatus::GPSClockType& sample, const std::vector<char>& buffer);
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

#endif // GPSClockType_1708034919_hpp

