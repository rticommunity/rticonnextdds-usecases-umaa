

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PassiveContactType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PassiveContactType_1738029701_hpp
#define PassiveContactType_1738029701_hpp

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
#include "UMAA/Common/MeasurementConstrained/MeasurementConstrainedTypes.hpp"
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
        namespace PassiveContactReport {

            class NDDSUSERDllExport PassiveContactType {
              public:

                PassiveContactType();

                PassiveContactType(double bearing_,double bearingRate_,double bearingRateUncertainty_,double bearingUncertainty_,double contactLevel_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType >& contactType_,const ::dds::core::optional< double >& course_,const ::dds::core::optional< double >& courseUncertainty_,const ::dds::core::optional< double >& declination_,const ::dds::core::optional< double >& declinationUncertainty_,const ::dds::core::optional< double >& narrowbandContactFrequency_,const ::dds::core::optional< double >& range_,const ::dds::core::optional< double >& rangeUncertainty_,const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType >& threatType_);

                double& bearing() noexcept {
                    return m_bearing_;
                }

                const double& bearing() const noexcept {
                    return m_bearing_;
                }

                void bearing(double value) {

                    m_bearing_ = value;
                }

                double& bearingRate() noexcept {
                    return m_bearingRate_;
                }

                const double& bearingRate() const noexcept {
                    return m_bearingRate_;
                }

                void bearingRate(double value) {

                    m_bearingRate_ = value;
                }

                double& bearingRateUncertainty() noexcept {
                    return m_bearingRateUncertainty_;
                }

                const double& bearingRateUncertainty() const noexcept {
                    return m_bearingRateUncertainty_;
                }

                void bearingRateUncertainty(double value) {

                    m_bearingRateUncertainty_ = value;
                }

                double& bearingUncertainty() noexcept {
                    return m_bearingUncertainty_;
                }

                const double& bearingUncertainty() const noexcept {
                    return m_bearingUncertainty_;
                }

                void bearingUncertainty(double value) {

                    m_bearingUncertainty_ = value;
                }

                double& contactLevel() noexcept {
                    return m_contactLevel_;
                }

                const double& contactLevel() const noexcept {
                    return m_contactLevel_;
                }

                void contactLevel(double value) {

                    m_contactLevel_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType >& contactType() noexcept {
                    return m_contactType_;
                }

                const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType >& contactType() const noexcept {
                    return m_contactType_;
                }

                void contactType(const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType >& value) {

                    m_contactType_ = value;
                }

                void contactType(::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType >&& value) {
                    m_contactType_ = std::move(value);
                }
                ::dds::core::optional< double >& course() noexcept {
                    return m_course_;
                }

                const ::dds::core::optional< double >& course() const noexcept {
                    return m_course_;
                }

                void course(const ::dds::core::optional< double >& value) {

                    m_course_ = value;
                }

                void course(::dds::core::optional< double >&& value) {
                    m_course_ = std::move(value);
                }
                ::dds::core::optional< double >& courseUncertainty() noexcept {
                    return m_courseUncertainty_;
                }

                const ::dds::core::optional< double >& courseUncertainty() const noexcept {
                    return m_courseUncertainty_;
                }

                void courseUncertainty(const ::dds::core::optional< double >& value) {

                    m_courseUncertainty_ = value;
                }

                void courseUncertainty(::dds::core::optional< double >&& value) {
                    m_courseUncertainty_ = std::move(value);
                }
                ::dds::core::optional< double >& declination() noexcept {
                    return m_declination_;
                }

                const ::dds::core::optional< double >& declination() const noexcept {
                    return m_declination_;
                }

                void declination(const ::dds::core::optional< double >& value) {

                    m_declination_ = value;
                }

                void declination(::dds::core::optional< double >&& value) {
                    m_declination_ = std::move(value);
                }
                ::dds::core::optional< double >& declinationUncertainty() noexcept {
                    return m_declinationUncertainty_;
                }

                const ::dds::core::optional< double >& declinationUncertainty() const noexcept {
                    return m_declinationUncertainty_;
                }

                void declinationUncertainty(const ::dds::core::optional< double >& value) {

                    m_declinationUncertainty_ = value;
                }

                void declinationUncertainty(::dds::core::optional< double >&& value) {
                    m_declinationUncertainty_ = std::move(value);
                }
                ::dds::core::optional< double >& narrowbandContactFrequency() noexcept {
                    return m_narrowbandContactFrequency_;
                }

                const ::dds::core::optional< double >& narrowbandContactFrequency() const noexcept {
                    return m_narrowbandContactFrequency_;
                }

                void narrowbandContactFrequency(const ::dds::core::optional< double >& value) {

                    m_narrowbandContactFrequency_ = value;
                }

                void narrowbandContactFrequency(::dds::core::optional< double >&& value) {
                    m_narrowbandContactFrequency_ = std::move(value);
                }
                ::dds::core::optional< double >& range() noexcept {
                    return m_range_;
                }

                const ::dds::core::optional< double >& range() const noexcept {
                    return m_range_;
                }

                void range(const ::dds::core::optional< double >& value) {

                    m_range_ = value;
                }

                void range(::dds::core::optional< double >&& value) {
                    m_range_ = std::move(value);
                }
                ::dds::core::optional< double >& rangeUncertainty() noexcept {
                    return m_rangeUncertainty_;
                }

                const ::dds::core::optional< double >& rangeUncertainty() const noexcept {
                    return m_rangeUncertainty_;
                }

                void rangeUncertainty(const ::dds::core::optional< double >& value) {

                    m_rangeUncertainty_ = value;
                }

                void rangeUncertainty(::dds::core::optional< double >&& value) {
                    m_rangeUncertainty_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType >& threatType() noexcept {
                    return m_threatType_;
                }

                const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType >& threatType() const noexcept {
                    return m_threatType_;
                }

                void threatType(const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType >& value) {

                    m_threatType_ = value;
                }

                void threatType(::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType >&& value) {
                    m_threatType_ = std::move(value);
                }
                bool operator == (const PassiveContactType& other_) const;
                bool operator != (const PassiveContactType& other_) const;

                void swap(PassiveContactType& other_) noexcept ;

              private:

                double m_bearing_;
                double m_bearingRate_;
                double m_bearingRateUncertainty_;
                double m_bearingUncertainty_;
                double m_contactLevel_;
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::PassiveContactFeatureEnumModule::PassiveContactFeatureEnumType > m_contactType_;
                ::dds::core::optional< double > m_course_;
                ::dds::core::optional< double > m_courseUncertainty_;
                ::dds::core::optional< double > m_declination_;
                ::dds::core::optional< double > m_declinationUncertainty_;
                ::dds::core::optional< double > m_narrowbandContactFrequency_;
                ::dds::core::optional< double > m_range_;
                ::dds::core::optional< double > m_rangeUncertainty_;
                ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::TrackIdentityEnumModule::TrackIdentityEnumType > m_threatType_;

            };

            inline void swap(PassiveContactType& a, PassiveContactType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PassiveContactType& sample);

        } // namespace PassiveContactReport  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::PassiveContactReport::PassiveContactType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PassiveContactReport::PassiveContactType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SA::PassiveContactReport::PassiveContactType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PassiveContactReport::PassiveContactType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PassiveContactReport::PassiveContactType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::PassiveContactReport::PassiveContactType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PassiveContactReport::PassiveContactType > {
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

#endif // PassiveContactType_1738029701_hpp

