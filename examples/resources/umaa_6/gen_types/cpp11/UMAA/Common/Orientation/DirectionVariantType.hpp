

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionVariantType_423825788_hpp
#define DirectionVariantType_423825788_hpp

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
#include "UMAA/Common/Orientation/DirectionCurrentVariantType.hpp"
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
#include "UMAA/Common/Orientation/DirectionMagneticNorthVariantType.hpp"
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
#include "UMAA/Common/Orientation/DirectionTrueNorthVariantType.hpp"
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
#include "UMAA/Common/Orientation/DirectionWindVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {
            enum class DirectionVariantTypeEnum {
                DIRECTIONCURRENTVARIANT_D, 
                DIRECTIONMAGNETICNORTHVARIANT_D, 
                DIRECTIONTRUENORTHVARIANT_D, 
                DIRECTIONWINDVARIANT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DirectionVariantTypeEnum& sample);

            class NDDSUSERDllExport DirectionVariantTypeUnion {
              public:

                DirectionVariantTypeUnion();

                ::UMAA::Common::Orientation::DirectionVariantTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::Common::Orientation::DirectionVariantTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::Common::Orientation::DirectionVariantTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Orientation::DirectionCurrentVariantType& DirectionCurrentVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionVariantTypeUnion::DirectionCurrentVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionCurrentVariantVariant_;
                }

                const ::UMAA::Common::Orientation::DirectionCurrentVariantType& DirectionCurrentVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionVariantTypeUnion::DirectionCurrentVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionCurrentVariantVariant_;
                }

                void DirectionCurrentVariantVariant(const ::UMAA::Common::Orientation::DirectionCurrentVariantType& value) {
                    m_u_.m_DirectionCurrentVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D);
                }

                void DirectionCurrentVariantVariant(::UMAA::Common::Orientation::DirectionCurrentVariantType&& value) {
                    m_u_.m_DirectionCurrentVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONCURRENTVARIANT_D);
                }
                ::UMAA::Common::Orientation::DirectionMagneticNorthVariantType& DirectionMagneticNorthVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionVariantTypeUnion::DirectionMagneticNorthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionMagneticNorthVariantVariant_;
                }

                const ::UMAA::Common::Orientation::DirectionMagneticNorthVariantType& DirectionMagneticNorthVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionVariantTypeUnion::DirectionMagneticNorthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionMagneticNorthVariantVariant_;
                }

                void DirectionMagneticNorthVariantVariant(const ::UMAA::Common::Orientation::DirectionMagneticNorthVariantType& value) {
                    m_u_.m_DirectionMagneticNorthVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D);
                }

                void DirectionMagneticNorthVariantVariant(::UMAA::Common::Orientation::DirectionMagneticNorthVariantType&& value) {
                    m_u_.m_DirectionMagneticNorthVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONMAGNETICNORTHVARIANT_D);
                }
                ::UMAA::Common::Orientation::DirectionTrueNorthVariantType& DirectionTrueNorthVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionVariantTypeUnion::DirectionTrueNorthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionTrueNorthVariantVariant_;
                }

                const ::UMAA::Common::Orientation::DirectionTrueNorthVariantType& DirectionTrueNorthVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionVariantTypeUnion::DirectionTrueNorthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionTrueNorthVariantVariant_;
                }

                void DirectionTrueNorthVariantVariant(const ::UMAA::Common::Orientation::DirectionTrueNorthVariantType& value) {
                    m_u_.m_DirectionTrueNorthVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D);
                }

                void DirectionTrueNorthVariantVariant(::UMAA::Common::Orientation::DirectionTrueNorthVariantType&& value) {
                    m_u_.m_DirectionTrueNorthVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONTRUENORTHVARIANT_D);
                }
                ::UMAA::Common::Orientation::DirectionWindVariantType& DirectionWindVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionVariantTypeUnion::DirectionWindVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionWindVariantVariant_;
                }

                const ::UMAA::Common::Orientation::DirectionWindVariantType& DirectionWindVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::DirectionVariantTypeUnion::DirectionWindVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DirectionWindVariantVariant_;
                }

                void DirectionWindVariantVariant(const ::UMAA::Common::Orientation::DirectionWindVariantType& value) {
                    m_u_.m_DirectionWindVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D);
                }

                void DirectionWindVariantVariant(::UMAA::Common::Orientation::DirectionWindVariantType&& value) {
                    m_u_.m_DirectionWindVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::DirectionVariantTypeEnum::DIRECTIONWINDVARIANT_D);
                }
                bool operator == (const DirectionVariantTypeUnion& other_) const;
                bool operator != (const DirectionVariantTypeUnion& other_) const;
                static ::UMAA::Common::Orientation::DirectionVariantTypeEnum default_discriminator();

                void swap(DirectionVariantTypeUnion& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::DirectionVariantTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Orientation::DirectionCurrentVariantType m_DirectionCurrentVariantVariant_;
                    ::UMAA::Common::Orientation::DirectionMagneticNorthVariantType m_DirectionMagneticNorthVariantVariant_;
                    ::UMAA::Common::Orientation::DirectionTrueNorthVariantType m_DirectionTrueNorthVariantVariant_;
                    ::UMAA::Common::Orientation::DirectionWindVariantType m_DirectionWindVariantVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Orientation::DirectionCurrentVariantType& DirectionCurrentVariantVariant_,const ::UMAA::Common::Orientation::DirectionMagneticNorthVariantType& DirectionMagneticNorthVariantVariant_,const ::UMAA::Common::Orientation::DirectionTrueNorthVariantType& DirectionTrueNorthVariantVariant_,const ::UMAA::Common::Orientation::DirectionWindVariantType& DirectionWindVariantVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(DirectionVariantTypeUnion& a, DirectionVariantTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DirectionVariantTypeUnion& sample);

            class NDDSUSERDllExport DirectionVariantType {
              public:

                DirectionVariantType();

                explicit DirectionVariantType(const ::UMAA::Common::Orientation::DirectionVariantTypeUnion& DirectionVariantTypeSubtypes_);

                ::UMAA::Common::Orientation::DirectionVariantTypeUnion& DirectionVariantTypeSubtypes() noexcept {
                    return m_DirectionVariantTypeSubtypes_;
                }

                const ::UMAA::Common::Orientation::DirectionVariantTypeUnion& DirectionVariantTypeSubtypes() const noexcept {
                    return m_DirectionVariantTypeSubtypes_;
                }

                void DirectionVariantTypeSubtypes(const ::UMAA::Common::Orientation::DirectionVariantTypeUnion& value) {

                    m_DirectionVariantTypeSubtypes_ = value;
                }

                void DirectionVariantTypeSubtypes(::UMAA::Common::Orientation::DirectionVariantTypeUnion&& value) {
                    m_DirectionVariantTypeSubtypes_ = std::move(value);
                }
                bool operator == (const DirectionVariantType& other_) const;
                bool operator != (const DirectionVariantType& other_) const;

                void swap(DirectionVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::DirectionVariantTypeUnion m_DirectionVariantTypeSubtypes_;

            };

            inline void swap(DirectionVariantType& a, DirectionVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DirectionVariantType& sample);

        } // namespace Orientation  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::DirectionVariantTypeEnum>
        {
            static const ::UMAA::Common::Orientation::DirectionVariantTypeEnum value;
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
        struct topic_type_name< ::UMAA::Common::Orientation::DirectionVariantTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::DirectionVariantTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::DirectionVariantTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::DirectionVariantTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::DirectionVariantTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Orientation::DirectionVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::DirectionVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::DirectionVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::DirectionVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::DirectionVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::DirectionVariantTypeEnum>
        {
            static const ::UMAA::Common::Orientation::DirectionVariantTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionVariantTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionVariantTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionVariantTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionVariantTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::DirectionVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::DirectionVariantType > {
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

#endif // DirectionVariantType_423825788_hpp

