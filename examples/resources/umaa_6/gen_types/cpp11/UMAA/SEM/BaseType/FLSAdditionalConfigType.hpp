

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FLSAdditionalConfigType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef FLSAdditionalConfigType_919847041_hpp
#define FLSAdditionalConfigType_919847041_hpp

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
#include "UMAA/SEM/BaseType/FLSConfigSearchBottomType.hpp"
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
#include "UMAA/SEM/BaseType/FLSConfigSearchVolumeType.hpp"
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
#include "UMAA/SEM/BaseType/FLSConfigTestType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace BaseType {
            enum class FLSAdditionalConfigTypeEnum {
                FLSCONFIGSEARCHBOTTOM_D, 
                FLSCONFIGSEARCHVOLUME_D, 
                FLSCONFIGTEST_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const FLSAdditionalConfigTypeEnum& sample);

            class NDDSUSERDllExport FLSAdditionalConfigTypeUnion {
              public:

                FLSAdditionalConfigTypeUnion();

                ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::SEM::BaseType::FLSConfigSearchBottomType& FLSConfigSearchBottomVariant()  {

                    if (_d() != (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion::FLSConfigSearchBottomVariant not selected by the discriminator" );
                    }
                    return m_u_.m_FLSConfigSearchBottomVariant_;
                }

                const ::UMAA::SEM::BaseType::FLSConfigSearchBottomType& FLSConfigSearchBottomVariant() const  {

                    if (_d() != (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion::FLSConfigSearchBottomVariant not selected by the discriminator" );
                    }
                    return m_u_.m_FLSConfigSearchBottomVariant_;
                }

                void FLSConfigSearchBottomVariant(const ::UMAA::SEM::BaseType::FLSConfigSearchBottomType& value) {
                    m_u_.m_FLSConfigSearchBottomVariant_ = value;
                    m_d_= (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D);
                }

                void FLSConfigSearchBottomVariant(::UMAA::SEM::BaseType::FLSConfigSearchBottomType&& value) {
                    m_u_.m_FLSConfigSearchBottomVariant_ = std::move(value);
                    m_d_= (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHBOTTOM_D);
                }
                ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType& FLSConfigSearchVolumeVariant()  {

                    if (_d() != (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion::FLSConfigSearchVolumeVariant not selected by the discriminator" );
                    }
                    return m_u_.m_FLSConfigSearchVolumeVariant_;
                }

                const ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType& FLSConfigSearchVolumeVariant() const  {

                    if (_d() != (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion::FLSConfigSearchVolumeVariant not selected by the discriminator" );
                    }
                    return m_u_.m_FLSConfigSearchVolumeVariant_;
                }

                void FLSConfigSearchVolumeVariant(const ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType& value) {
                    m_u_.m_FLSConfigSearchVolumeVariant_ = value;
                    m_d_= (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D);
                }

                void FLSConfigSearchVolumeVariant(::UMAA::SEM::BaseType::FLSConfigSearchVolumeType&& value) {
                    m_u_.m_FLSConfigSearchVolumeVariant_ = std::move(value);
                    m_d_= (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGSEARCHVOLUME_D);
                }
                ::UMAA::SEM::BaseType::FLSConfigTestType& FLSConfigTestVariant()  {

                    if (_d() != (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion::FLSConfigTestVariant not selected by the discriminator" );
                    }
                    return m_u_.m_FLSConfigTestVariant_;
                }

                const ::UMAA::SEM::BaseType::FLSConfigTestType& FLSConfigTestVariant() const  {

                    if (_d() != (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion::FLSConfigTestVariant not selected by the discriminator" );
                    }
                    return m_u_.m_FLSConfigTestVariant_;
                }

                void FLSConfigTestVariant(const ::UMAA::SEM::BaseType::FLSConfigTestType& value) {
                    m_u_.m_FLSConfigTestVariant_ = value;
                    m_d_= (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D);
                }

                void FLSConfigTestVariant(::UMAA::SEM::BaseType::FLSConfigTestType&& value) {
                    m_u_.m_FLSConfigTestVariant_ = std::move(value);
                    m_d_= (UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum::FLSCONFIGTEST_D);
                }
                bool operator == (const FLSAdditionalConfigTypeUnion& other_) const;
                bool operator != (const FLSAdditionalConfigTypeUnion& other_) const;
                static ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum default_discriminator();

                void swap(FLSAdditionalConfigTypeUnion& other_) noexcept ;

              private:

                ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::SEM::BaseType::FLSConfigSearchBottomType m_FLSConfigSearchBottomVariant_;
                    ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType m_FLSConfigSearchVolumeVariant_;
                    ::UMAA::SEM::BaseType::FLSConfigTestType m_FLSConfigTestVariant_;
                    Union_();
                    Union_(const ::UMAA::SEM::BaseType::FLSConfigSearchBottomType& FLSConfigSearchBottomVariant_,const ::UMAA::SEM::BaseType::FLSConfigSearchVolumeType& FLSConfigSearchVolumeVariant_,const ::UMAA::SEM::BaseType::FLSConfigTestType& FLSConfigTestVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(FLSAdditionalConfigTypeUnion& a, FLSAdditionalConfigTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FLSAdditionalConfigTypeUnion& sample);

            class NDDSUSERDllExport FLSAdditionalConfigType {
              public:

                FLSAdditionalConfigType();

                explicit FLSAdditionalConfigType(const ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion& FLSAdditionalConfigTypeSubtypes_);

                ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion& FLSAdditionalConfigTypeSubtypes() noexcept {
                    return m_FLSAdditionalConfigTypeSubtypes_;
                }

                const ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion& FLSAdditionalConfigTypeSubtypes() const noexcept {
                    return m_FLSAdditionalConfigTypeSubtypes_;
                }

                void FLSAdditionalConfigTypeSubtypes(const ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion& value) {

                    m_FLSAdditionalConfigTypeSubtypes_ = value;
                }

                void FLSAdditionalConfigTypeSubtypes(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion&& value) {
                    m_FLSAdditionalConfigTypeSubtypes_ = std::move(value);
                }
                bool operator == (const FLSAdditionalConfigType& other_) const;
                bool operator != (const FLSAdditionalConfigType& other_) const;

                void swap(FLSAdditionalConfigType& other_) noexcept ;

              private:

                ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion m_FLSAdditionalConfigTypeSubtypes_;

            };

            inline void swap(FLSAdditionalConfigType& a, FLSAdditionalConfigType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const FLSAdditionalConfigType& sample);

        } // namespace BaseType  
    } // namespace SEM  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum>
        {
            static const ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum value;
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
        struct topic_type_name< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::SEM::BaseType::FLSAdditionalConfigType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::BaseType::FLSAdditionalConfigType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SEM::BaseType::FLSAdditionalConfigType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::BaseType::FLSAdditionalConfigType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::BaseType::FLSAdditionalConfigType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum>
        {
            static const ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::BaseType::FLSAdditionalConfigTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::SEM::BaseType::FLSAdditionalConfigType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::BaseType::FLSAdditionalConfigType > {
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

#endif // FLSAdditionalConfigType_919847041_hpp

