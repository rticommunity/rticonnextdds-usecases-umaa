

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef SpeedRequirementVariantType_1666757375_hpp
#define SpeedRequirementVariantType_1666757375_hpp

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
#include "UMAA/Common/Speed/AirSpeedRequirementVariantType.hpp"
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
#include "UMAA/Common/Speed/EngineRPMSpeedRequirementVariantType.hpp"
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
#include "UMAA/Common/Speed/GroundSpeedRequirementVariantType.hpp"
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
#include "UMAA/Common/Speed/VehicleSpeedModeRequirementVariantType.hpp"
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
#include "UMAA/Common/Speed/WaterSpeedRequirementVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Speed {
            enum class SpeedRequirementVariantTypeEnum {
                AIRSPEEDREQUIREMENTVARIANT_D, 
                ENGINERPMSPEEDREQUIREMENTVARIANT_D, 
                GROUNDSPEEDREQUIREMENTVARIANT_D, 
                VEHICLESPEEDMODEREQUIREMENTVARIANT_D, 
                WATERSPEEDREQUIREMENTVARIANT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const SpeedRequirementVariantTypeEnum& sample);

            class NDDSUSERDllExport SpeedRequirementVariantTypeUnion {
              public:

                SpeedRequirementVariantTypeUnion();

                ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Speed::AirSpeedRequirementVariantType& AirSpeedRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::AirSpeedRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AirSpeedRequirementVariantVariant_;
                }

                const ::UMAA::Common::Speed::AirSpeedRequirementVariantType& AirSpeedRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::AirSpeedRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AirSpeedRequirementVariantVariant_;
                }

                void AirSpeedRequirementVariantVariant(const ::UMAA::Common::Speed::AirSpeedRequirementVariantType& value) {
                    m_u_.m_AirSpeedRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D);
                }

                void AirSpeedRequirementVariantVariant(::UMAA::Common::Speed::AirSpeedRequirementVariantType&& value) {
                    m_u_.m_AirSpeedRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::AIRSPEEDREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Speed::EngineRPMSpeedRequirementVariantType& EngineRPMSpeedRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::EngineRPMSpeedRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_EngineRPMSpeedRequirementVariantVariant_;
                }

                const ::UMAA::Common::Speed::EngineRPMSpeedRequirementVariantType& EngineRPMSpeedRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::EngineRPMSpeedRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_EngineRPMSpeedRequirementVariantVariant_;
                }

                void EngineRPMSpeedRequirementVariantVariant(const ::UMAA::Common::Speed::EngineRPMSpeedRequirementVariantType& value) {
                    m_u_.m_EngineRPMSpeedRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D);
                }

                void EngineRPMSpeedRequirementVariantVariant(::UMAA::Common::Speed::EngineRPMSpeedRequirementVariantType&& value) {
                    m_u_.m_EngineRPMSpeedRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::ENGINERPMSPEEDREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Speed::GroundSpeedRequirementVariantType& GroundSpeedRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::GroundSpeedRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GroundSpeedRequirementVariantVariant_;
                }

                const ::UMAA::Common::Speed::GroundSpeedRequirementVariantType& GroundSpeedRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::GroundSpeedRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GroundSpeedRequirementVariantVariant_;
                }

                void GroundSpeedRequirementVariantVariant(const ::UMAA::Common::Speed::GroundSpeedRequirementVariantType& value) {
                    m_u_.m_GroundSpeedRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D);
                }

                void GroundSpeedRequirementVariantVariant(::UMAA::Common::Speed::GroundSpeedRequirementVariantType&& value) {
                    m_u_.m_GroundSpeedRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::GROUNDSPEEDREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Speed::VehicleSpeedModeRequirementVariantType& VehicleSpeedModeRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::VehicleSpeedModeRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_VehicleSpeedModeRequirementVariantVariant_;
                }

                const ::UMAA::Common::Speed::VehicleSpeedModeRequirementVariantType& VehicleSpeedModeRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::VehicleSpeedModeRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_VehicleSpeedModeRequirementVariantVariant_;
                }

                void VehicleSpeedModeRequirementVariantVariant(const ::UMAA::Common::Speed::VehicleSpeedModeRequirementVariantType& value) {
                    m_u_.m_VehicleSpeedModeRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D);
                }

                void VehicleSpeedModeRequirementVariantVariant(::UMAA::Common::Speed::VehicleSpeedModeRequirementVariantType&& value) {
                    m_u_.m_VehicleSpeedModeRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::VEHICLESPEEDMODEREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Speed::WaterSpeedRequirementVariantType& WaterSpeedRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::WaterSpeedRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_WaterSpeedRequirementVariantVariant_;
                }

                const ::UMAA::Common::Speed::WaterSpeedRequirementVariantType& WaterSpeedRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion::WaterSpeedRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_WaterSpeedRequirementVariantVariant_;
                }

                void WaterSpeedRequirementVariantVariant(const ::UMAA::Common::Speed::WaterSpeedRequirementVariantType& value) {
                    m_u_.m_WaterSpeedRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D);
                }

                void WaterSpeedRequirementVariantVariant(::UMAA::Common::Speed::WaterSpeedRequirementVariantType&& value) {
                    m_u_.m_WaterSpeedRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::SpeedRequirementVariantTypeEnum::WATERSPEEDREQUIREMENTVARIANT_D);
                }
                bool operator == (const SpeedRequirementVariantTypeUnion& other_) const;
                bool operator != (const SpeedRequirementVariantTypeUnion& other_) const;
                static ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum default_discriminator();

                void swap(SpeedRequirementVariantTypeUnion& other_) noexcept ;

              private:

                ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Speed::AirSpeedRequirementVariantType m_AirSpeedRequirementVariantVariant_;
                    ::UMAA::Common::Speed::EngineRPMSpeedRequirementVariantType m_EngineRPMSpeedRequirementVariantVariant_;
                    ::UMAA::Common::Speed::GroundSpeedRequirementVariantType m_GroundSpeedRequirementVariantVariant_;
                    ::UMAA::Common::Speed::VehicleSpeedModeRequirementVariantType m_VehicleSpeedModeRequirementVariantVariant_;
                    ::UMAA::Common::Speed::WaterSpeedRequirementVariantType m_WaterSpeedRequirementVariantVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Speed::AirSpeedRequirementVariantType& AirSpeedRequirementVariantVariant_,const ::UMAA::Common::Speed::EngineRPMSpeedRequirementVariantType& EngineRPMSpeedRequirementVariantVariant_,const ::UMAA::Common::Speed::GroundSpeedRequirementVariantType& GroundSpeedRequirementVariantVariant_,const ::UMAA::Common::Speed::VehicleSpeedModeRequirementVariantType& VehicleSpeedModeRequirementVariantVariant_,const ::UMAA::Common::Speed::WaterSpeedRequirementVariantType& WaterSpeedRequirementVariantVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(SpeedRequirementVariantTypeUnion& a, SpeedRequirementVariantTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SpeedRequirementVariantTypeUnion& sample);

            class NDDSUSERDllExport SpeedRequirementVariantType {
              public:

                SpeedRequirementVariantType();

                explicit SpeedRequirementVariantType(const ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion& SpeedRequirementVariantTypeSubtypes_);

                ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion& SpeedRequirementVariantTypeSubtypes() noexcept {
                    return m_SpeedRequirementVariantTypeSubtypes_;
                }

                const ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion& SpeedRequirementVariantTypeSubtypes() const noexcept {
                    return m_SpeedRequirementVariantTypeSubtypes_;
                }

                void SpeedRequirementVariantTypeSubtypes(const ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion& value) {

                    m_SpeedRequirementVariantTypeSubtypes_ = value;
                }

                void SpeedRequirementVariantTypeSubtypes(::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion&& value) {
                    m_SpeedRequirementVariantTypeSubtypes_ = std::move(value);
                }
                bool operator == (const SpeedRequirementVariantType& other_) const;
                bool operator != (const SpeedRequirementVariantType& other_) const;

                void swap(SpeedRequirementVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion m_SpeedRequirementVariantTypeSubtypes_;

            };

            inline void swap(SpeedRequirementVariantType& a, SpeedRequirementVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SpeedRequirementVariantType& sample);

        } // namespace Speed  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum>
        {
            static const ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum value;
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
        struct topic_type_name< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::SpeedRequirementVariantTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Speed::SpeedRequirementVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::SpeedRequirementVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::SpeedRequirementVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::SpeedRequirementVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::SpeedRequirementVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum>
        {
            static const ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::SpeedRequirementVariantTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::SpeedRequirementVariantTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::SpeedRequirementVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::SpeedRequirementVariantType > {
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

#endif // SpeedRequirementVariantType_1666757375_hpp

