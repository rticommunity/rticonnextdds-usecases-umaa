

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef UVPlatformCapabilitiesType_797577100_hpp
#define UVPlatformCapabilitiesType_797577100_hpp

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
namespace UMAA {
    namespace EO {
        namespace UVPlatformSpecs {

            class NDDSUSERDllExport UVPlatformCapabilitiesType {
              public:

                UVPlatformCapabilitiesType();

                UVPlatformCapabilitiesType(double cruisingSpeed_,double maxForwardSpeed_,double maxPitchRate_,double maxReverseSpeed_,const ::dds::core::optional< double >& maxTowingSpeed_,const ::dds::core::optional< double >& maxTowingTurnRate_,double maxTurnRate_,const ::dds::core::optional< double >& minTowingSpeed_,const ::dds::core::optional< double >& minTowingTurnRate_);

                double& cruisingSpeed() noexcept {
                    return m_cruisingSpeed_;
                }

                const double& cruisingSpeed() const noexcept {
                    return m_cruisingSpeed_;
                }

                void cruisingSpeed(double value) {

                    m_cruisingSpeed_ = value;
                }

                double& maxForwardSpeed() noexcept {
                    return m_maxForwardSpeed_;
                }

                const double& maxForwardSpeed() const noexcept {
                    return m_maxForwardSpeed_;
                }

                void maxForwardSpeed(double value) {

                    m_maxForwardSpeed_ = value;
                }

                double& maxPitchRate() noexcept {
                    return m_maxPitchRate_;
                }

                const double& maxPitchRate() const noexcept {
                    return m_maxPitchRate_;
                }

                void maxPitchRate(double value) {

                    m_maxPitchRate_ = value;
                }

                double& maxReverseSpeed() noexcept {
                    return m_maxReverseSpeed_;
                }

                const double& maxReverseSpeed() const noexcept {
                    return m_maxReverseSpeed_;
                }

                void maxReverseSpeed(double value) {

                    m_maxReverseSpeed_ = value;
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
                double& maxTurnRate() noexcept {
                    return m_maxTurnRate_;
                }

                const double& maxTurnRate() const noexcept {
                    return m_maxTurnRate_;
                }

                void maxTurnRate(double value) {

                    m_maxTurnRate_ = value;
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
                ::dds::core::optional< double >& minTowingTurnRate() noexcept {
                    return m_minTowingTurnRate_;
                }

                const ::dds::core::optional< double >& minTowingTurnRate() const noexcept {
                    return m_minTowingTurnRate_;
                }

                void minTowingTurnRate(const ::dds::core::optional< double >& value) {

                    m_minTowingTurnRate_ = value;
                }

                void minTowingTurnRate(::dds::core::optional< double >&& value) {
                    m_minTowingTurnRate_ = std::move(value);
                }
                bool operator == (const UVPlatformCapabilitiesType& other_) const;
                bool operator != (const UVPlatformCapabilitiesType& other_) const;

                void swap(UVPlatformCapabilitiesType& other_) noexcept ;

              private:

                double m_cruisingSpeed_;
                double m_maxForwardSpeed_;
                double m_maxPitchRate_;
                double m_maxReverseSpeed_;
                ::dds::core::optional< double > m_maxTowingSpeed_;
                ::dds::core::optional< double > m_maxTowingTurnRate_;
                double m_maxTurnRate_;
                ::dds::core::optional< double > m_minTowingSpeed_;
                ::dds::core::optional< double > m_minTowingTurnRate_;

            };

            inline void swap(UVPlatformCapabilitiesType& a, UVPlatformCapabilitiesType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const UVPlatformCapabilitiesType& sample);

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
        struct topic_type_name< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesType > {
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

#endif // UVPlatformCapabilitiesType_797577100_hpp

