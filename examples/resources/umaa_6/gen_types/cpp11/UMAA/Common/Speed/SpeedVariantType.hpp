

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedVariantType_557285267_hpp
#define SpeedVariantType_557285267_hpp

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
#include "UMAA/Common/Speed/AirSpeedVariantType.hpp"
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
#include "UMAA/Common/Speed/EngineRPMSpeedVariantType.hpp"
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
#include "UMAA/Common/Speed/GroundSpeedVariantType.hpp"
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
#include "UMAA/Common/Speed/VehicleSpeedModeVariantType.hpp"
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
#include "UMAA/Common/Speed/WaterSpeedVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Speed {
            enum class SpeedVariantTypeEnum {
                AIRSPEEDVARIANT_D, 
                ENGINERPMSPEEDVARIANT_D, 
                GROUNDSPEEDVARIANT_D, 
                VEHICLESPEEDMODEVARIANT_D, 
                WATERSPEEDVARIANT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SpeedVariantTypeEnum& sample);

            class NDDSUSERDllExport SpeedVariantTypeUnion {
              public:

                SpeedVariantTypeUnion();

                ::UMAA::Common::Speed::SpeedVariantTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::Common::Speed::SpeedVariantTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::Common::Speed::SpeedVariantTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Speed::AirSpeedVariantType& AirSpeedVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::AirSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AirSpeedVariantVariant_;
                }

                const ::UMAA::Common::Speed::AirSpeedVariantType& AirSpeedVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::AirSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AirSpeedVariantVariant_;
                }

                void AirSpeedVariantVariant(const ::UMAA::Common::Speed::AirSpeedVariantType& value) {
                    m_u_.m_AirSpeedVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D);
                }

                void AirSpeedVariantVariant(::UMAA::Common::Speed::AirSpeedVariantType&& value) {
                    m_u_.m_AirSpeedVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::AIRSPEEDVARIANT_D);
                }
                ::UMAA::Common::Speed::EngineRPMSpeedVariantType& EngineRPMSpeedVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::EngineRPMSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_EngineRPMSpeedVariantVariant_;
                }

                const ::UMAA::Common::Speed::EngineRPMSpeedVariantType& EngineRPMSpeedVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::EngineRPMSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_EngineRPMSpeedVariantVariant_;
                }

                void EngineRPMSpeedVariantVariant(const ::UMAA::Common::Speed::EngineRPMSpeedVariantType& value) {
                    m_u_.m_EngineRPMSpeedVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D);
                }

                void EngineRPMSpeedVariantVariant(::UMAA::Common::Speed::EngineRPMSpeedVariantType&& value) {
                    m_u_.m_EngineRPMSpeedVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::ENGINERPMSPEEDVARIANT_D);
                }
                ::UMAA::Common::Speed::GroundSpeedVariantType& GroundSpeedVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::GroundSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GroundSpeedVariantVariant_;
                }

                const ::UMAA::Common::Speed::GroundSpeedVariantType& GroundSpeedVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::GroundSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GroundSpeedVariantVariant_;
                }

                void GroundSpeedVariantVariant(const ::UMAA::Common::Speed::GroundSpeedVariantType& value) {
                    m_u_.m_GroundSpeedVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D);
                }

                void GroundSpeedVariantVariant(::UMAA::Common::Speed::GroundSpeedVariantType&& value) {
                    m_u_.m_GroundSpeedVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::GROUNDSPEEDVARIANT_D);
                }
                ::UMAA::Common::Speed::VehicleSpeedModeVariantType& VehicleSpeedModeVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::VehicleSpeedModeVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_VehicleSpeedModeVariantVariant_;
                }

                const ::UMAA::Common::Speed::VehicleSpeedModeVariantType& VehicleSpeedModeVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::VehicleSpeedModeVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_VehicleSpeedModeVariantVariant_;
                }

                void VehicleSpeedModeVariantVariant(const ::UMAA::Common::Speed::VehicleSpeedModeVariantType& value) {
                    m_u_.m_VehicleSpeedModeVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D);
                }

                void VehicleSpeedModeVariantVariant(::UMAA::Common::Speed::VehicleSpeedModeVariantType&& value) {
                    m_u_.m_VehicleSpeedModeVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::VEHICLESPEEDMODEVARIANT_D);
                }
                ::UMAA::Common::Speed::WaterSpeedVariantType& WaterSpeedVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::WaterSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_WaterSpeedVariantVariant_;
                }

                const ::UMAA::Common::Speed::WaterSpeedVariantType& WaterSpeedVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedVariantTypeUnion::WaterSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_WaterSpeedVariantVariant_;
                }

                void WaterSpeedVariantVariant(const ::UMAA::Common::Speed::WaterSpeedVariantType& value) {
                    m_u_.m_WaterSpeedVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D);
                }

                void WaterSpeedVariantVariant(::UMAA::Common::Speed::WaterSpeedVariantType&& value) {
                    m_u_.m_WaterSpeedVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedVariantTypeEnum::WATERSPEEDVARIANT_D);
                }
                bool operator == (const SpeedVariantTypeUnion& other_) const;
                bool operator != (const SpeedVariantTypeUnion& other_) const;
                static ::UMAA::Common::Speed::SpeedVariantTypeEnum default_discriminator();

                void swap(SpeedVariantTypeUnion& other_) noexcept ;

              private:

                ::UMAA::Common::Speed::SpeedVariantTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Speed::AirSpeedVariantType m_AirSpeedVariantVariant_;
                    ::UMAA::Common::Speed::EngineRPMSpeedVariantType m_EngineRPMSpeedVariantVariant_;
                    ::UMAA::Common::Speed::GroundSpeedVariantType m_GroundSpeedVariantVariant_;
                    ::UMAA::Common::Speed::VehicleSpeedModeVariantType m_VehicleSpeedModeVariantVariant_;
                    ::UMAA::Common::Speed::WaterSpeedVariantType m_WaterSpeedVariantVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Speed::AirSpeedVariantType& AirSpeedVariantVariant_,const ::UMAA::Common::Speed::EngineRPMSpeedVariantType& EngineRPMSpeedVariantVariant_,const ::UMAA::Common::Speed::GroundSpeedVariantType& GroundSpeedVariantVariant_,const ::UMAA::Common::Speed::VehicleSpeedModeVariantType& VehicleSpeedModeVariantVariant_,const ::UMAA::Common::Speed::WaterSpeedVariantType& WaterSpeedVariantVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(SpeedVariantTypeUnion& a, SpeedVariantTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SpeedVariantTypeUnion& sample);

            class NDDSUSERDllExport SpeedVariantType {
              public:

                SpeedVariantType();

                explicit SpeedVariantType(const ::UMAA::Common::Speed::SpeedVariantTypeUnion& SpeedVariantTypeSubtypes_);

                ::UMAA::Common::Speed::SpeedVariantTypeUnion& SpeedVariantTypeSubtypes() noexcept {
                    return m_SpeedVariantTypeSubtypes_;
                }

                const ::UMAA::Common::Speed::SpeedVariantTypeUnion& SpeedVariantTypeSubtypes() const noexcept {
                    return m_SpeedVariantTypeSubtypes_;
                }

                void SpeedVariantTypeSubtypes(const ::UMAA::Common::Speed::SpeedVariantTypeUnion& value) {

                    m_SpeedVariantTypeSubtypes_ = value;
                }

                void SpeedVariantTypeSubtypes(::UMAA::Common::Speed::SpeedVariantTypeUnion&& value) {
                    m_SpeedVariantTypeSubtypes_ = std::move(value);
                }
                bool operator == (const SpeedVariantType& other_) const;
                bool operator != (const SpeedVariantType& other_) const;

                void swap(SpeedVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Speed::SpeedVariantTypeUnion m_SpeedVariantTypeSubtypes_;

            };

            inline void swap(SpeedVariantType& a, SpeedVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SpeedVariantType& sample);

        } // namespace Speed  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Speed::SpeedVariantTypeEnum>
        {
            static const ::UMAA::Common::Speed::SpeedVariantTypeEnum value;
        };
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
        struct topic_type_name< ::UMAA::Common::Speed::SpeedVariantTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::SpeedVariantTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::SpeedVariantTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::SpeedVariantTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::SpeedVariantTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Speed::SpeedVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::SpeedVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::SpeedVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::SpeedVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::SpeedVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Speed::SpeedVariantTypeEnum>
        {
            static const ::UMAA::Common::Speed::SpeedVariantTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Speed::SpeedVariantTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::SpeedVariantTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::SpeedVariantTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::SpeedVariantTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::SpeedVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::SpeedVariantType > {
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

#endif // SpeedVariantType_557285267_hpp

