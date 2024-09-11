

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSConfigTestType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FLSConfigTestType_1330051791_hpp
#define FLSConfigTestType_1330051791_hpp

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
#include "UMAA/Common/MeasurementConstrained/MeasurementConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace BaseType {

            class NDDSUSERDllExport FLSConfigTestType {
              public:

                FLSConfigTestType();

                FLSConfigTestType(double activeBandwidth_,double activeCenterFrequency_,int32_t attenuation_,const ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType& beamwidth_,double passiveBandwidth_,double passiveCenterFrequency_,double range_,double steering_,bool upSweep_,const ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType& waveformLength_);

                double& activeBandwidth() noexcept {
                    return m_activeBandwidth_;
                }

                const double& activeBandwidth() const noexcept {
                    return m_activeBandwidth_;
                }

                void activeBandwidth(double value) {

                    m_activeBandwidth_ = value;
                }

                double& activeCenterFrequency() noexcept {
                    return m_activeCenterFrequency_;
                }

                const double& activeCenterFrequency() const noexcept {
                    return m_activeCenterFrequency_;
                }

                void activeCenterFrequency(double value) {

                    m_activeCenterFrequency_ = value;
                }

                int32_t& attenuation() noexcept {
                    return m_attenuation_;
                }

                const int32_t& attenuation() const noexcept {
                    return m_attenuation_;
                }

                void attenuation(int32_t value) {

                    m_attenuation_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType& beamwidth() noexcept {
                    return m_beamwidth_;
                }

                const ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType& beamwidth() const noexcept {
                    return m_beamwidth_;
                }

                void beamwidth(const ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType& value) {

                    m_beamwidth_ = value;
                }

                void beamwidth(::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType&& value) {
                    m_beamwidth_ = std::move(value);
                }
                double& passiveBandwidth() noexcept {
                    return m_passiveBandwidth_;
                }

                const double& passiveBandwidth() const noexcept {
                    return m_passiveBandwidth_;
                }

                void passiveBandwidth(double value) {

                    m_passiveBandwidth_ = value;
                }

                double& passiveCenterFrequency() noexcept {
                    return m_passiveCenterFrequency_;
                }

                const double& passiveCenterFrequency() const noexcept {
                    return m_passiveCenterFrequency_;
                }

                void passiveCenterFrequency(double value) {

                    m_passiveCenterFrequency_ = value;
                }

                double& range() noexcept {
                    return m_range_;
                }

                const double& range() const noexcept {
                    return m_range_;
                }

                void range(double value) {

                    m_range_ = value;
                }

                double& steering() noexcept {
                    return m_steering_;
                }

                const double& steering() const noexcept {
                    return m_steering_;
                }

                void steering(double value) {

                    m_steering_ = value;
                }

                bool& upSweep() noexcept {
                    return m_upSweep_;
                }

                const bool& upSweep() const noexcept {
                    return m_upSweep_;
                }

                void upSweep(bool value) {

                    m_upSweep_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType& waveformLength() noexcept {
                    return m_waveformLength_;
                }

                const ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType& waveformLength() const noexcept {
                    return m_waveformLength_;
                }

                void waveformLength(const ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType& value) {

                    m_waveformLength_ = value;
                }

                void waveformLength(::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType&& value) {
                    m_waveformLength_ = std::move(value);
                }
                bool operator == (const FLSConfigTestType& other_) const;
                bool operator != (const FLSConfigTestType& other_) const;

                void swap(FLSConfigTestType& other_) noexcept ;

              private:

                double m_activeBandwidth_;
                double m_activeCenterFrequency_;
                int32_t m_attenuation_;
                ::UMAA::Common::MaritimeEnumeration::FLSBeamwidthEnumModule::FLSBeamwidthEnumType m_beamwidth_;
                double m_passiveBandwidth_;
                double m_passiveCenterFrequency_;
                double m_range_;
                double m_steering_;
                bool m_upSweep_;
                ::UMAA::Common::MaritimeEnumeration::FLSWaveformLengthEnumModule::FLSWaveformLengthEnumType m_waveformLength_;

            };

            inline void swap(FLSConfigTestType& a, FLSConfigTestType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FLSConfigTestType& sample);

        } // namespace BaseType  
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
        struct topic_type_name< ::UMAA::SEM::BaseType::FLSConfigTestType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::BaseType::FLSConfigTestType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SEM::BaseType::FLSConfigTestType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::BaseType::FLSConfigTestType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::BaseType::FLSConfigTestType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::BaseType::FLSConfigTestType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::BaseType::FLSConfigTestType > {
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

#endif // FLSConfigTestType_1330051791_hpp

