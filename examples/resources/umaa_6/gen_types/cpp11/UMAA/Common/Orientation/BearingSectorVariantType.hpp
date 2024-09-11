

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BearingSectorVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BearingSectorVariantType_1322384047_hpp
#define BearingSectorVariantType_1322384047_hpp

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
#include "UMAA/Common/Orientation/BearingSectorGuideCourseVariantType.hpp"
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
#include "UMAA/Common/Orientation/BearingSectorMagneticNorthVariantType.hpp"
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
#include "UMAA/Common/Orientation/BearingSectorTrueNorthVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Orientation {
            enum class BearingSectorVariantTypeEnum {
                BEARINGSECTORGUIDECOURSEVARIANT_D, 
                BEARINGSECTORMAGNETICNORTHVARIANT_D, 
                BEARINGSECTORTRUENORTHVARIANT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BearingSectorVariantTypeEnum& sample);

            class NDDSUSERDllExport BearingSectorVariantTypeUnion {
              public:

                BearingSectorVariantTypeUnion();

                ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::Common::Orientation::BearingSectorVariantTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Orientation::BearingSectorGuideCourseVariantType& BearingSectorGuideCourseVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::BearingSectorVariantTypeUnion::BearingSectorGuideCourseVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_BearingSectorGuideCourseVariantVariant_;
                }

                const ::UMAA::Common::Orientation::BearingSectorGuideCourseVariantType& BearingSectorGuideCourseVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::BearingSectorVariantTypeUnion::BearingSectorGuideCourseVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_BearingSectorGuideCourseVariantVariant_;
                }

                void BearingSectorGuideCourseVariantVariant(const ::UMAA::Common::Orientation::BearingSectorGuideCourseVariantType& value) {
                    m_u_.m_BearingSectorGuideCourseVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D);
                }

                void BearingSectorGuideCourseVariantVariant(::UMAA::Common::Orientation::BearingSectorGuideCourseVariantType&& value) {
                    m_u_.m_BearingSectorGuideCourseVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORGUIDECOURSEVARIANT_D);
                }
                ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType& BearingSectorMagneticNorthVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::BearingSectorVariantTypeUnion::BearingSectorMagneticNorthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_BearingSectorMagneticNorthVariantVariant_;
                }

                const ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType& BearingSectorMagneticNorthVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::BearingSectorVariantTypeUnion::BearingSectorMagneticNorthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_BearingSectorMagneticNorthVariantVariant_;
                }

                void BearingSectorMagneticNorthVariantVariant(const ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType& value) {
                    m_u_.m_BearingSectorMagneticNorthVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D);
                }

                void BearingSectorMagneticNorthVariantVariant(::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType&& value) {
                    m_u_.m_BearingSectorMagneticNorthVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORMAGNETICNORTHVARIANT_D);
                }
                ::UMAA::Common::Orientation::BearingSectorTrueNorthVariantType& BearingSectorTrueNorthVariantVariant()  {

                    if (_d() != (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::BearingSectorVariantTypeUnion::BearingSectorTrueNorthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_BearingSectorTrueNorthVariantVariant_;
                }

                const ::UMAA::Common::Orientation::BearingSectorTrueNorthVariantType& BearingSectorTrueNorthVariantVariant() const  {

                    if (_d() != (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Orientation::BearingSectorVariantTypeUnion::BearingSectorTrueNorthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_BearingSectorTrueNorthVariantVariant_;
                }

                void BearingSectorTrueNorthVariantVariant(const ::UMAA::Common::Orientation::BearingSectorTrueNorthVariantType& value) {
                    m_u_.m_BearingSectorTrueNorthVariantVariant_ = value;
                    m_d_= (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D);
                }

                void BearingSectorTrueNorthVariantVariant(::UMAA::Common::Orientation::BearingSectorTrueNorthVariantType&& value) {
                    m_u_.m_BearingSectorTrueNorthVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Orientation::BearingSectorVariantTypeEnum::BEARINGSECTORTRUENORTHVARIANT_D);
                }
                bool operator == (const BearingSectorVariantTypeUnion& other_) const;
                bool operator != (const BearingSectorVariantTypeUnion& other_) const;
                static ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum default_discriminator();

                void swap(BearingSectorVariantTypeUnion& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Orientation::BearingSectorGuideCourseVariantType m_BearingSectorGuideCourseVariantVariant_;
                    ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType m_BearingSectorMagneticNorthVariantVariant_;
                    ::UMAA::Common::Orientation::BearingSectorTrueNorthVariantType m_BearingSectorTrueNorthVariantVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Orientation::BearingSectorGuideCourseVariantType& BearingSectorGuideCourseVariantVariant_,const ::UMAA::Common::Orientation::BearingSectorMagneticNorthVariantType& BearingSectorMagneticNorthVariantVariant_,const ::UMAA::Common::Orientation::BearingSectorTrueNorthVariantType& BearingSectorTrueNorthVariantVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(BearingSectorVariantTypeUnion& a, BearingSectorVariantTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BearingSectorVariantTypeUnion& sample);

            class NDDSUSERDllExport BearingSectorVariantType {
              public:

                BearingSectorVariantType();

                explicit BearingSectorVariantType(const ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion& BearingSectorVariantTypeSubtypes_);

                ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion& BearingSectorVariantTypeSubtypes() noexcept {
                    return m_BearingSectorVariantTypeSubtypes_;
                }

                const ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion& BearingSectorVariantTypeSubtypes() const noexcept {
                    return m_BearingSectorVariantTypeSubtypes_;
                }

                void BearingSectorVariantTypeSubtypes(const ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion& value) {

                    m_BearingSectorVariantTypeSubtypes_ = value;
                }

                void BearingSectorVariantTypeSubtypes(::UMAA::Common::Orientation::BearingSectorVariantTypeUnion&& value) {
                    m_BearingSectorVariantTypeSubtypes_ = std::move(value);
                }
                bool operator == (const BearingSectorVariantType& other_) const;
                bool operator != (const BearingSectorVariantType& other_) const;

                void swap(BearingSectorVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion m_BearingSectorVariantTypeSubtypes_;

            };

            inline void swap(BearingSectorVariantType& a, BearingSectorVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BearingSectorVariantType& sample);

        } // namespace Orientation  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum>
        {
            static const ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum value;
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
        struct topic_type_name< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::BearingSectorVariantTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::BearingSectorVariantTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::BearingSectorVariantTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Orientation::BearingSectorVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Orientation::BearingSectorVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Orientation::BearingSectorVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Orientation::BearingSectorVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Orientation::BearingSectorVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum>
        {
            static const ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::BearingSectorVariantTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::BearingSectorVariantTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Orientation::BearingSectorVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Orientation::BearingSectorVariantType > {
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

#endif // BearingSectorVariantType_1322384047_hpp

