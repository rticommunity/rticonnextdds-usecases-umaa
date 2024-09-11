

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionRequirementVariantType_669103456_hpp
#define DirectionRequirementVariantType_669103456_hpp

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
#include "UMAA/Common/Orientation/DirectionCurrentRequirementVariantType.hpp"
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
#include "UMAA/Common/Orientation/DirectionMagneticNorthRequirementVariantType.hpp"
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
#include "UMAA/Common/Orientation/DirectionTrueNorthRequirementVariantType.hpp"
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
#include "UMAA/Common/Orientation/DirectionTurnRateRequirementVariantType.hpp"
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
#include "UMAA/Common/Orientation/DirectionWindRequirementVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {
            enum class DirectionRequirementVariantTypeEnum {
                DIRECTIONCURRENTREQUIREMENTVARIANT_D, 
                DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D, 
                DIRECTIONTRUENORTHREQUIREMENTVARIANT_D, 
                DIRECTIONTURNRATEREQUIREMENTVARIANT_D, 
                DIRECTIONWINDREQUIREMENTVARIANT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DirectionRequirementVariantTypeEnum& sample);

            class NDDSUSERDllExport DirectionRequirementVariantTypeUnion {
              public:

                DirectionRequirementVariantTypeUnion();

                ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Orientation::DirectionCurrentRequirementVariantType& DirectionCurrentRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionCurrentRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionCurrentRequirementVariantVariant_;
                }

                const ::UMAA::Common::Orientation::DirectionCurrentRequirementVariantType& DirectionCurrentRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionCurrentRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionCurrentRequirementVariantVariant_;
                }

                void DirectionCurrentRequirementVariantVariant(const ::UMAA::Common::Orientation::DirectionCurrentRequirementVariantType& value) {
                    m_u_.m_DirectionCurrentRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D);
                }

                void DirectionCurrentRequirementVariantVariant(::UMAA::Common::Orientation::DirectionCurrentRequirementVariantType&& value) {
                    m_u_.m_DirectionCurrentRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONCURRENTREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Orientation::DirectionMagneticNorthRequirementVariantType& DirectionMagneticNorthRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionMagneticNorthRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionMagneticNorthRequirementVariantVariant_;
                }

                const ::UMAA::Common::Orientation::DirectionMagneticNorthRequirementVariantType& DirectionMagneticNorthRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionMagneticNorthRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionMagneticNorthRequirementVariantVariant_;
                }

                void DirectionMagneticNorthRequirementVariantVariant(const ::UMAA::Common::Orientation::DirectionMagneticNorthRequirementVariantType& value) {
                    m_u_.m_DirectionMagneticNorthRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D);
                }

                void DirectionMagneticNorthRequirementVariantVariant(::UMAA::Common::Orientation::DirectionMagneticNorthRequirementVariantType&& value) {
                    m_u_.m_DirectionMagneticNorthRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONMAGNETICNORTHREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Orientation::DirectionTrueNorthRequirementVariantType& DirectionTrueNorthRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionTrueNorthRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionTrueNorthRequirementVariantVariant_;
                }

                const ::UMAA::Common::Orientation::DirectionTrueNorthRequirementVariantType& DirectionTrueNorthRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionTrueNorthRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionTrueNorthRequirementVariantVariant_;
                }

                void DirectionTrueNorthRequirementVariantVariant(const ::UMAA::Common::Orientation::DirectionTrueNorthRequirementVariantType& value) {
                    m_u_.m_DirectionTrueNorthRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D);
                }

                void DirectionTrueNorthRequirementVariantVariant(::UMAA::Common::Orientation::DirectionTrueNorthRequirementVariantType&& value) {
                    m_u_.m_DirectionTrueNorthRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTRUENORTHREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType& DirectionTurnRateRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionTurnRateRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionTurnRateRequirementVariantVariant_;
                }

                const ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType& DirectionTurnRateRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionTurnRateRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionTurnRateRequirementVariantVariant_;
                }

                void DirectionTurnRateRequirementVariantVariant(const ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType& value) {
                    m_u_.m_DirectionTurnRateRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D);
                }

                void DirectionTurnRateRequirementVariantVariant(::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType&& value) {
                    m_u_.m_DirectionTurnRateRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONTURNRATEREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Orientation::DirectionWindRequirementVariantType& DirectionWindRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionWindRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionWindRequirementVariantVariant_;
                }

                const ::UMAA::Common::Orientation::DirectionWindRequirementVariantType& DirectionWindRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion::DirectionWindRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionWindRequirementVariantVariant_;
                }

                void DirectionWindRequirementVariantVariant(const ::UMAA::Common::Orientation::DirectionWindRequirementVariantType& value) {
                    m_u_.m_DirectionWindRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D);
                }

                void DirectionWindRequirementVariantVariant(::UMAA::Common::Orientation::DirectionWindRequirementVariantType&& value) {
                    m_u_.m_DirectionWindRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum::DIRECTIONWINDREQUIREMENTVARIANT_D);
                }
                bool operator == (const DirectionRequirementVariantTypeUnion& other_) const;
                bool operator != (const DirectionRequirementVariantTypeUnion& other_) const;
                static ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum default_discriminator();

                void swap(DirectionRequirementVariantTypeUnion& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Orientation::DirectionCurrentRequirementVariantType m_DirectionCurrentRequirementVariantVariant_;
                    ::UMAA::Common::Orientation::DirectionMagneticNorthRequirementVariantType m_DirectionMagneticNorthRequirementVariantVariant_;
                    ::UMAA::Common::Orientation::DirectionTrueNorthRequirementVariantType m_DirectionTrueNorthRequirementVariantVariant_;
                    ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType m_DirectionTurnRateRequirementVariantVariant_;
                    ::UMAA::Common::Orientation::DirectionWindRequirementVariantType m_DirectionWindRequirementVariantVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Orientation::DirectionCurrentRequirementVariantType& DirectionCurrentRequirementVariantVariant_,const ::UMAA::Common::Orientation::DirectionMagneticNorthRequirementVariantType& DirectionMagneticNorthRequirementVariantVariant_,const ::UMAA::Common::Orientation::DirectionTrueNorthRequirementVariantType& DirectionTrueNorthRequirementVariantVariant_,const ::UMAA::Common::Orientation::DirectionTurnRateRequirementVariantType& DirectionTurnRateRequirementVariantVariant_,const ::UMAA::Common::Orientation::DirectionWindRequirementVariantType& DirectionWindRequirementVariantVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(DirectionRequirementVariantTypeUnion& a, DirectionRequirementVariantTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DirectionRequirementVariantTypeUnion& sample);

            class NDDSUSERDllExport DirectionRequirementVariantType {
              public:

                DirectionRequirementVariantType();

                explicit DirectionRequirementVariantType(const ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion& DirectionRequirementVariantTypeSubtypes_);

                ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion& DirectionRequirementVariantTypeSubtypes() noexcept {
                    return m_DirectionRequirementVariantTypeSubtypes_;
                }

                const ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion& DirectionRequirementVariantTypeSubtypes() const noexcept {
                    return m_DirectionRequirementVariantTypeSubtypes_;
                }

                void DirectionRequirementVariantTypeSubtypes(const ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion& value) {

                    m_DirectionRequirementVariantTypeSubtypes_ = value;
                }

                void DirectionRequirementVariantTypeSubtypes(::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion&& value) {
                    m_DirectionRequirementVariantTypeSubtypes_ = std::move(value);
                }
                bool operator == (const DirectionRequirementVariantType& other_) const;
                bool operator != (const DirectionRequirementVariantType& other_) const;

                void swap(DirectionRequirementVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion m_DirectionRequirementVariantTypeSubtypes_;

            };

            inline void swap(DirectionRequirementVariantType& a, DirectionRequirementVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DirectionRequirementVariantType& sample);

        } // namespace Orientation  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum>
        {
            static const ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum value;
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
        struct topic_type_name< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Orientation::DirectionRequirementVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::DirectionRequirementVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::DirectionRequirementVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::DirectionRequirementVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::DirectionRequirementVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum>
        {
            static const ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionRequirementVariantTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionRequirementVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionRequirementVariantType > {
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

#endif // DirectionRequirementVariantType_669103456_hpp

