

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalHoverStateType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalHoverStateType_1807392099_hpp
#define GlobalHoverStateType_1807392099_hpp

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
#include "UMAA/MO/GlobalHoverState/GlobalHoveringHoverType.hpp"
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
#include "UMAA/MO/GlobalHoverState/GlobalTransitHoverType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalHoverState {
            enum class GlobalHoverStateTypeEnum {
                GLOBALTRANSITHOVER_D, 
                GLOBALHOVERINGHOVER_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GlobalHoverStateTypeEnum& sample);

            class NDDSUSERDllExport GlobalHoverStateTypeUnion {
              public:

                GlobalHoverStateTypeUnion();

                ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType& GlobalTransitHoverVariant()  {

                    if (_d() != (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion::GlobalTransitHoverVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GlobalTransitHoverVariant_;
                }

                const ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType& GlobalTransitHoverVariant() const  {

                    if (_d() != (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion::GlobalTransitHoverVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GlobalTransitHoverVariant_;
                }

                void GlobalTransitHoverVariant(const ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType& value) {
                    m_u_.m_GlobalTransitHoverVariant_ = value;
                    m_d_= (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D);
                }

                void GlobalTransitHoverVariant(::UMAA::MO::GlobalHoverState::GlobalTransitHoverType&& value) {
                    m_u_.m_GlobalTransitHoverVariant_ = std::move(value);
                    m_d_= (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALTRANSITHOVER_D);
                }
                ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& GlobalHoveringHoverVariant()  {

                    if (_d() != (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion::GlobalHoveringHoverVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GlobalHoveringHoverVariant_;
                }

                const ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& GlobalHoveringHoverVariant() const  {

                    if (_d() != (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion::GlobalHoveringHoverVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GlobalHoveringHoverVariant_;
                }

                void GlobalHoveringHoverVariant(const ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& value) {
                    m_u_.m_GlobalHoveringHoverVariant_ = value;
                    m_d_= (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D);
                }

                void GlobalHoveringHoverVariant(::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType&& value) {
                    m_u_.m_GlobalHoveringHoverVariant_ = std::move(value);
                    m_d_= (UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum::GLOBALHOVERINGHOVER_D);
                }
                bool operator == (const GlobalHoverStateTypeUnion& other_) const;
                bool operator != (const GlobalHoverStateTypeUnion& other_) const;
                static ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum default_discriminator();

                void swap(GlobalHoverStateTypeUnion& other_) noexcept ;

              private:

                ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType m_GlobalTransitHoverVariant_;
                    ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType m_GlobalHoveringHoverVariant_;
                    Union_();
                    Union_(const ::UMAA::MO::GlobalHoverState::GlobalTransitHoverType& GlobalTransitHoverVariant_,const ::UMAA::MO::GlobalHoverState::GlobalHoveringHoverType& GlobalHoveringHoverVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(GlobalHoverStateTypeUnion& a, GlobalHoverStateTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalHoverStateTypeUnion& sample);

            class NDDSUSERDllExport GlobalHoverStateType {
              public:

                GlobalHoverStateType();

                explicit GlobalHoverStateType(const ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion& GlobalHoverStateTypeSubtypes_);

                ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion& GlobalHoverStateTypeSubtypes() noexcept {
                    return m_GlobalHoverStateTypeSubtypes_;
                }

                const ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion& GlobalHoverStateTypeSubtypes() const noexcept {
                    return m_GlobalHoverStateTypeSubtypes_;
                }

                void GlobalHoverStateTypeSubtypes(const ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion& value) {

                    m_GlobalHoverStateTypeSubtypes_ = value;
                }

                void GlobalHoverStateTypeSubtypes(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion&& value) {
                    m_GlobalHoverStateTypeSubtypes_ = std::move(value);
                }
                bool operator == (const GlobalHoverStateType& other_) const;
                bool operator != (const GlobalHoverStateType& other_) const;

                void swap(GlobalHoverStateType& other_) noexcept ;

              private:

                ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion m_GlobalHoverStateTypeSubtypes_;

            };

            inline void swap(GlobalHoverStateType& a, GlobalHoverStateType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalHoverStateType& sample);

        } // namespace GlobalHoverState  
    } // namespace MO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum>
        {
            static const ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum value;
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
        struct topic_type_name< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalHoverState::GlobalHoverStateType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::GlobalHoverState::GlobalHoverStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum>
        {
            static const ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalHoverState::GlobalHoverStateTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalHoverState::GlobalHoverStateType > {
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

#endif // GlobalHoverStateType_1807392099_hpp

