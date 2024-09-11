

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SurfaceCapabilityLimitsType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SurfaceCapabilityLimitsType_786758062_hpp
#define SurfaceCapabilityLimitsType_786758062_hpp

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
    namespace EO {
        namespace UVPlatformSpecs {

            class NDDSUSERDllExport SurfaceCapabilityLimitsType {
              public:

                SurfaceCapabilityLimitsType();

                SurfaceCapabilityLimitsType(const ::dds::core::optional< double >& cruisingSpeed_,const ::dds::core::optional< double >& maxAcceleration_,const ::dds::core::optional< double >& maxDeceleration_,const ::dds::core::optional< double >& maxForwardSpeed_,const ::dds::core::optional< double >& maxReverseSpeed_,const ::dds::core::optional< double >& maxTowingSpeed_,const ::dds::core::optional< double >& maxTowingTurnAcceleration_,const ::dds::core::optional< double >& maxTowingTurnRate_,const ::dds::core::optional< double >& maxTurnAcceleration_,const ::dds::core::optional< double >& maxTurnRate_,const ::dds::core::optional< double >& minSpeedInMedium_,const ::dds::core::optional< double >& minTowingSpeed_);

                ::dds::core::optional< double >& cruisingSpeed() noexcept {
                    return m_cruisingSpeed_;
                }

                const ::dds::core::optional< double >& cruisingSpeed() const noexcept {
                    return m_cruisingSpeed_;
                }

                void cruisingSpeed(const ::dds::core::optional< double >& value) {

                    m_cruisingSpeed_ = value;
                }

                void cruisingSpeed(::dds::core::optional< double >&& value) {
                    m_cruisingSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& maxAcceleration() noexcept {
                    return m_maxAcceleration_;
                }

                const ::dds::core::optional< double >& maxAcceleration() const noexcept {
                    return m_maxAcceleration_;
                }

                void maxAcceleration(const ::dds::core::optional< double >& value) {

                    m_maxAcceleration_ = value;
                }

                void maxAcceleration(::dds::core::optional< double >&& value) {
                    m_maxAcceleration_ = std::move(value);
                }
                ::dds::core::optional< double >& maxDeceleration() noexcept {
                    return m_maxDeceleration_;
                }

                const ::dds::core::optional< double >& maxDeceleration() const noexcept {
                    return m_maxDeceleration_;
                }

                void maxDeceleration(const ::dds::core::optional< double >& value) {

                    m_maxDeceleration_ = value;
                }

                void maxDeceleration(::dds::core::optional< double >&& value) {
                    m_maxDeceleration_ = std::move(value);
                }
                ::dds::core::optional< double >& maxForwardSpeed() noexcept {
                    return m_maxForwardSpeed_;
                }

                const ::dds::core::optional< double >& maxForwardSpeed() const noexcept {
                    return m_maxForwardSpeed_;
                }

                void maxForwardSpeed(const ::dds::core::optional< double >& value) {

                    m_maxForwardSpeed_ = value;
                }

                void maxForwardSpeed(::dds::core::optional< double >&& value) {
                    m_maxForwardSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& maxReverseSpeed() noexcept {
                    return m_maxReverseSpeed_;
                }

                const ::dds::core::optional< double >& maxReverseSpeed() const noexcept {
                    return m_maxReverseSpeed_;
                }

                void maxReverseSpeed(const ::dds::core::optional< double >& value) {

                    m_maxReverseSpeed_ = value;
                }

                void maxReverseSpeed(::dds::core::optional< double >&& value) {
                    m_maxReverseSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& maxTowingSpeed() noexcept {
                    return m_maxTowingSpeed_;
                }

                const ::dds::core::optional< double >& maxTowingSpeed() const noexcept {
                    return m_maxTowingSpeed_;
                }

                void maxTowingSpeed(const ::dds::core::optional< double >& value) {

                    m_maxTowingSpeed_ = value;
                }

                void maxTowingSpeed(::dds::core::optional< double >&& value) {
                    m_maxTowingSpeed_ = std::move(value);
                }
                ::dds::core::optional< double >& maxTowingTurnAcceleration() noexcept {
                    return m_maxTowingTurnAcceleration_;
                }

                const ::dds::core::optional< double >& maxTowingTurnAcceleration() const noexcept {
                    return m_maxTowingTurnAcceleration_;
                }

                void maxTowingTurnAcceleration(const ::dds::core::optional< double >& value) {

                    m_maxTowingTurnAcceleration_ = value;
                }

                void maxTowingTurnAcceleration(::dds::core::optional< double >&& value) {
                    m_maxTowingTurnAcceleration_ = std::move(value);
                }
                ::dds::core::optional< double >& maxTowingTurnRate() noexcept {
                    return m_maxTowingTurnRate_;
                }

                const ::dds::core::optional< double >& maxTowingTurnRate() const noexcept {
                    return m_maxTowingTurnRate_;
                }

                void maxTowingTurnRate(const ::dds::core::optional< double >& value) {

                    m_maxTowingTurnRate_ = value;
                }

                void maxTowingTurnRate(::dds::core::optional< double >&& value) {
                    m_maxTowingTurnRate_ = std::move(value);
                }
                ::dds::core::optional< double >& maxTurnAcceleration() noexcept {
                    return m_maxTurnAcceleration_;
                }

                const ::dds::core::optional< double >& maxTurnAcceleration() const noexcept {
                    return m_maxTurnAcceleration_;
                }

                void maxTurnAcceleration(const ::dds::core::optional< double >& value) {

                    m_maxTurnAcceleration_ = value;
                }

                void maxTurnAcceleration(::dds::core::optional< double >&& value) {
                    m_maxTurnAcceleration_ = std::move(value);
                }
                ::dds::core::optional< double >& maxTurnRate() noexcept {
                    return m_maxTurnRate_;
                }

                const ::dds::core::optional< double >& maxTurnRate() const noexcept {
                    return m_maxTurnRate_;
                }

                void maxTurnRate(const ::dds::core::optional< double >& value) {

                    m_maxTurnRate_ = value;
                }

                void maxTurnRate(::dds::core::optional< double >&& value) {
                    m_maxTurnRate_ = std::move(value);
                }
                ::dds::core::optional< double >& minSpeedInMedium() noexcept {
                    return m_minSpeedInMedium_;
                }

                const ::dds::core::optional< double >& minSpeedInMedium() const noexcept {
                    return m_minSpeedInMedium_;
                }

                void minSpeedInMedium(const ::dds::core::optional< double >& value) {

                    m_minSpeedInMedium_ = value;
                }

                void minSpeedInMedium(::dds::core::optional< double >&& value) {
                    m_minSpeedInMedium_ = std::move(value);
                }
                ::dds::core::optional< double >& minTowingSpeed() noexcept {
                    return m_minTowingSpeed_;
                }

                const ::dds::core::optional< double >& minTowingSpeed() const noexcept {
                    return m_minTowingSpeed_;
                }

                void minTowingSpeed(const ::dds::core::optional< double >& value) {

                    m_minTowingSpeed_ = value;
                }

                void minTowingSpeed(::dds::core::optional< double >&& value) {
                    m_minTowingSpeed_ = std::move(value);
                }
                bool operator == (const SurfaceCapabilityLimitsType& other_) const;
                bool operator != (const SurfaceCapabilityLimitsType& other_) const;

                void swap(SurfaceCapabilityLimitsType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_cruisingSpeed_;
                ::dds::core::optional< double > m_maxAcceleration_;
                ::dds::core::optional< double > m_maxDeceleration_;
                ::dds::core::optional< double > m_maxForwardSpeed_;
                ::dds::core::optional< double > m_maxReverseSpeed_;
                ::dds::core::optional< double > m_maxTowingSpeed_;
                ::dds::core::optional< double > m_maxTowingTurnAcceleration_;
                ::dds::core::optional< double > m_maxTowingTurnRate_;
                ::dds::core::optional< double > m_maxTurnAcceleration_;
                ::dds::core::optional< double > m_maxTurnRate_;
                ::dds::core::optional< double > m_minSpeedInMedium_;
                ::dds::core::optional< double > m_minTowingSpeed_;

            };

            inline void swap(SurfaceCapabilityLimitsType& a, SurfaceCapabilityLimitsType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SurfaceCapabilityLimitsType& sample);

        } // namespace UVPlatformSpecs  
    } // namespace EO  
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
        struct topic_type_name< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType > {
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

#endif // SurfaceCapabilityLimitsType_786758062_hpp

