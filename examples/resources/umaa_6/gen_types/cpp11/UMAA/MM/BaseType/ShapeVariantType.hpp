

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShapeVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ShapeVariantType_92585635_hpp
#define ShapeVariantType_92585635_hpp

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
#include "UMAA/MM/BaseType/EllipseVariantType.hpp"
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
#include "UMAA/MM/BaseType/PolygonVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {
            enum class ShapeVariantTypeEnum {
                ELLIPSEVARIANT_D, 
                POLYGONVARIANT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ShapeVariantTypeEnum& sample);

            class NDDSUSERDllExport ShapeVariantTypeUnion {
              public:

                ShapeVariantTypeUnion();

                ::UMAA::MM::BaseType::ShapeVariantTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::MM::BaseType::ShapeVariantTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::MM::BaseType::ShapeVariantTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::MM::BaseType::EllipseVariantType& EllipseVariantVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ShapeVariantTypeUnion::EllipseVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_EllipseVariantVariant_;
                }

                const ::UMAA::MM::BaseType::EllipseVariantType& EllipseVariantVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ShapeVariantTypeUnion::EllipseVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_EllipseVariantVariant_;
                }

                void EllipseVariantVariant(const ::UMAA::MM::BaseType::EllipseVariantType& value) {
                    m_u_.m_EllipseVariantVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D);
                }

                void EllipseVariantVariant(::UMAA::MM::BaseType::EllipseVariantType&& value) {
                    m_u_.m_EllipseVariantVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ShapeVariantTypeEnum::ELLIPSEVARIANT_D);
                }
                ::UMAA::MM::BaseType::PolygonVariantType& PolygonVariantVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ShapeVariantTypeUnion::PolygonVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_PolygonVariantVariant_;
                }

                const ::UMAA::MM::BaseType::PolygonVariantType& PolygonVariantVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ShapeVariantTypeUnion::PolygonVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_PolygonVariantVariant_;
                }

                void PolygonVariantVariant(const ::UMAA::MM::BaseType::PolygonVariantType& value) {
                    m_u_.m_PolygonVariantVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D);
                }

                void PolygonVariantVariant(::UMAA::MM::BaseType::PolygonVariantType&& value) {
                    m_u_.m_PolygonVariantVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ShapeVariantTypeEnum::POLYGONVARIANT_D);
                }
                bool operator == (const ShapeVariantTypeUnion& other_) const;
                bool operator != (const ShapeVariantTypeUnion& other_) const;
                static ::UMAA::MM::BaseType::ShapeVariantTypeEnum default_discriminator();

                void swap(ShapeVariantTypeUnion& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::ShapeVariantTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::MM::BaseType::EllipseVariantType m_EllipseVariantVariant_;
                    ::UMAA::MM::BaseType::PolygonVariantType m_PolygonVariantVariant_;
                    Union_();
                    Union_(const ::UMAA::MM::BaseType::EllipseVariantType& EllipseVariantVariant_,const ::UMAA::MM::BaseType::PolygonVariantType& PolygonVariantVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(ShapeVariantTypeUnion& a, ShapeVariantTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ShapeVariantTypeUnion& sample);

            class NDDSUSERDllExport ShapeVariantType {
              public:

                ShapeVariantType();

                explicit ShapeVariantType(const ::UMAA::MM::BaseType::ShapeVariantTypeUnion& ShapeVariantTypeSubtypes_);

                ::UMAA::MM::BaseType::ShapeVariantTypeUnion& ShapeVariantTypeSubtypes() noexcept {
                    return m_ShapeVariantTypeSubtypes_;
                }

                const ::UMAA::MM::BaseType::ShapeVariantTypeUnion& ShapeVariantTypeSubtypes() const noexcept {
                    return m_ShapeVariantTypeSubtypes_;
                }

                void ShapeVariantTypeSubtypes(const ::UMAA::MM::BaseType::ShapeVariantTypeUnion& value) {

                    m_ShapeVariantTypeSubtypes_ = value;
                }

                void ShapeVariantTypeSubtypes(::UMAA::MM::BaseType::ShapeVariantTypeUnion&& value) {
                    m_ShapeVariantTypeSubtypes_ = std::move(value);
                }
                bool operator == (const ShapeVariantType& other_) const;
                bool operator != (const ShapeVariantType& other_) const;

                void swap(ShapeVariantType& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::ShapeVariantTypeUnion m_ShapeVariantTypeSubtypes_;

            };

            inline void swap(ShapeVariantType& a, ShapeVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ShapeVariantType& sample);

        } // namespace BaseType  
    } // namespace MM  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MM::BaseType::ShapeVariantTypeEnum>
        {
            static const ::UMAA::MM::BaseType::ShapeVariantTypeEnum value;
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
        struct topic_type_name< ::UMAA::MM::BaseType::ShapeVariantTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ShapeVariantTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::ShapeVariantTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::ShapeVariantTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::ShapeVariantTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MM::BaseType::ShapeVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ShapeVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::ShapeVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::ShapeVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::ShapeVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MM::BaseType::ShapeVariantTypeEnum>
        {
            static const ::UMAA::MM::BaseType::ShapeVariantTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ShapeVariantTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ShapeVariantTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ShapeVariantTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ShapeVariantTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ShapeVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ShapeVariantType > {
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

#endif // ShapeVariantType_92585635_hpp

