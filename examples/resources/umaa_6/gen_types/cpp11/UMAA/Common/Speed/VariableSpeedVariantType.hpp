

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VariableSpeedVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VariableSpeedVariantType_1712672613_hpp
#define VariableSpeedVariantType_1712672613_hpp

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
#include "UMAA/Common/Speed/RecommendedSpeedVariantType.hpp"
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
#include "UMAA/Common/Speed/RequiredSpeedVariantType.hpp"
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
#include "UMAA/Common/Speed/TimeWithSpeedVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Speed {
            enum class VariableSpeedVariantTypeEnum {
                RECOMMENDEDSPEEDVARIANT_D, 
                REQUIREDSPEEDVARIANT_D, 
                TIMEWITHSPEEDVARIANT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const VariableSpeedVariantTypeEnum& sample);

            class NDDSUSERDllExport VariableSpeedVariantTypeUnion {
              public:

                VariableSpeedVariantTypeUnion();

                ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::Common::Speed::VariableSpeedVariantTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Speed::RecommendedSpeedVariantType& RecommendedSpeedVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::VariableSpeedVariantTypeUnion::RecommendedSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_RecommendedSpeedVariantVariant_;
                }

                const ::UMAA::Common::Speed::RecommendedSpeedVariantType& RecommendedSpeedVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::VariableSpeedVariantTypeUnion::RecommendedSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_RecommendedSpeedVariantVariant_;
                }

                void RecommendedSpeedVariantVariant(const ::UMAA::Common::Speed::RecommendedSpeedVariantType& value) {
                    m_u_.m_RecommendedSpeedVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D);
                }

                void RecommendedSpeedVariantVariant(::UMAA::Common::Speed::RecommendedSpeedVariantType&& value) {
                    m_u_.m_RecommendedSpeedVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::RECOMMENDEDSPEEDVARIANT_D);
                }
                ::UMAA::Common::Speed::RequiredSpeedVariantType& RequiredSpeedVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::VariableSpeedVariantTypeUnion::RequiredSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_RequiredSpeedVariantVariant_;
                }

                const ::UMAA::Common::Speed::RequiredSpeedVariantType& RequiredSpeedVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::VariableSpeedVariantTypeUnion::RequiredSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_RequiredSpeedVariantVariant_;
                }

                void RequiredSpeedVariantVariant(const ::UMAA::Common::Speed::RequiredSpeedVariantType& value) {
                    m_u_.m_RequiredSpeedVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D);
                }

                void RequiredSpeedVariantVariant(::UMAA::Common::Speed::RequiredSpeedVariantType&& value) {
                    m_u_.m_RequiredSpeedVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::REQUIREDSPEEDVARIANT_D);
                }
                ::UMAA::Common::Speed::TimeWithSpeedVariantType& TimeWithSpeedVariantVariant()  {

                    if (_d() != (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::VariableSpeedVariantTypeUnion::TimeWithSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_TimeWithSpeedVariantVariant_;
                }

                const ::UMAA::Common::Speed::TimeWithSpeedVariantType& TimeWithSpeedVariantVariant() const  {

                    if (_d() != (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Speed::VariableSpeedVariantTypeUnion::TimeWithSpeedVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_TimeWithSpeedVariantVariant_;
                }

                void TimeWithSpeedVariantVariant(const ::UMAA::Common::Speed::TimeWithSpeedVariantType& value) {
                    m_u_.m_TimeWithSpeedVariantVariant_ = value;
                    m_d_= (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D);
                }

                void TimeWithSpeedVariantVariant(::UMAA::Common::Speed::TimeWithSpeedVariantType&& value) {
                    m_u_.m_TimeWithSpeedVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Speed::VariableSpeedVariantTypeEnum::TIMEWITHSPEEDVARIANT_D);
                }
                bool operator == (const VariableSpeedVariantTypeUnion& other_) const;
                bool operator != (const VariableSpeedVariantTypeUnion& other_) const;
                static ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum default_discriminator();

                void swap(VariableSpeedVariantTypeUnion& other_) noexcept ;

              private:

                ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Speed::RecommendedSpeedVariantType m_RecommendedSpeedVariantVariant_;
                    ::UMAA::Common::Speed::RequiredSpeedVariantType m_RequiredSpeedVariantVariant_;
                    ::UMAA::Common::Speed::TimeWithSpeedVariantType m_TimeWithSpeedVariantVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Speed::RecommendedSpeedVariantType& RecommendedSpeedVariantVariant_,const ::UMAA::Common::Speed::RequiredSpeedVariantType& RequiredSpeedVariantVariant_,const ::UMAA::Common::Speed::TimeWithSpeedVariantType& TimeWithSpeedVariantVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(VariableSpeedVariantTypeUnion& a, VariableSpeedVariantTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VariableSpeedVariantTypeUnion& sample);

            class NDDSUSERDllExport VariableSpeedVariantType {
              public:

                VariableSpeedVariantType();

                explicit VariableSpeedVariantType(const ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion& VariableSpeedVariantTypeSubtypes_);

                ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion& VariableSpeedVariantTypeSubtypes() noexcept {
                    return m_VariableSpeedVariantTypeSubtypes_;
                }

                const ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion& VariableSpeedVariantTypeSubtypes() const noexcept {
                    return m_VariableSpeedVariantTypeSubtypes_;
                }

                void VariableSpeedVariantTypeSubtypes(const ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion& value) {

                    m_VariableSpeedVariantTypeSubtypes_ = value;
                }

                void VariableSpeedVariantTypeSubtypes(::UMAA::Common::Speed::VariableSpeedVariantTypeUnion&& value) {
                    m_VariableSpeedVariantTypeSubtypes_ = std::move(value);
                }
                bool operator == (const VariableSpeedVariantType& other_) const;
                bool operator != (const VariableSpeedVariantType& other_) const;

                void swap(VariableSpeedVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion m_VariableSpeedVariantTypeSubtypes_;

            };

            inline void swap(VariableSpeedVariantType& a, VariableSpeedVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VariableSpeedVariantType& sample);

        } // namespace Speed  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum>
        {
            static const ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum value;
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
        struct topic_type_name< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::VariableSpeedVariantTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::VariableSpeedVariantTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::VariableSpeedVariantTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Speed::VariableSpeedVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::VariableSpeedVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::VariableSpeedVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::VariableSpeedVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::VariableSpeedVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum>
        {
            static const ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::VariableSpeedVariantTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::VariableSpeedVariantTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::VariableSpeedVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::VariableSpeedVariantType > {
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

#endif // VariableSpeedVariantType_1712672613_hpp

