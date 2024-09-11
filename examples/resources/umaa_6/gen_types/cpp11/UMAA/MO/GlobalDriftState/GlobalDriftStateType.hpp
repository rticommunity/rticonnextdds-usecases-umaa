

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftStateType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftStateType_190884955_hpp
#define GlobalDriftStateType_190884955_hpp

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
#include "UMAA/MO/GlobalDriftState/GlobalRegionDriftType.hpp"
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
#include "UMAA/MO/GlobalDriftState/GlobalTransitDriftType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalDriftState {
            enum class GlobalDriftStateTypeEnum {
                GLOBALTRANSITDRIFT_D, 
                GLOBALREGIONDRIFT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GlobalDriftStateTypeEnum& sample);

            class NDDSUSERDllExport GlobalDriftStateTypeUnion {
              public:

                GlobalDriftStateTypeUnion();

                ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::MO::GlobalDriftState::GlobalTransitDriftType& GlobalTransitDriftVariant()  {

                    if (_d() != (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion::GlobalTransitDriftVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GlobalTransitDriftVariant_;
                }

                const ::UMAA::MO::GlobalDriftState::GlobalTransitDriftType& GlobalTransitDriftVariant() const  {

                    if (_d() != (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion::GlobalTransitDriftVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GlobalTransitDriftVariant_;
                }

                void GlobalTransitDriftVariant(const ::UMAA::MO::GlobalDriftState::GlobalTransitDriftType& value) {
                    m_u_.m_GlobalTransitDriftVariant_ = value;
                    m_d_= (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D);
                }

                void GlobalTransitDriftVariant(::UMAA::MO::GlobalDriftState::GlobalTransitDriftType&& value) {
                    m_u_.m_GlobalTransitDriftVariant_ = std::move(value);
                    m_d_= (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALTRANSITDRIFT_D);
                }
                ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType& GlobalRegionDriftVariant()  {

                    if (_d() != (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion::GlobalRegionDriftVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GlobalRegionDriftVariant_;
                }

                const ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType& GlobalRegionDriftVariant() const  {

                    if (_d() != (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion::GlobalRegionDriftVariant not selected by the discriminator" );
                    }
                    return m_u_.m_GlobalRegionDriftVariant_;
                }

                void GlobalRegionDriftVariant(const ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType& value) {
                    m_u_.m_GlobalRegionDriftVariant_ = value;
                    m_d_= (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D);
                }

                void GlobalRegionDriftVariant(::UMAA::MO::GlobalDriftState::GlobalRegionDriftType&& value) {
                    m_u_.m_GlobalRegionDriftVariant_ = std::move(value);
                    m_d_= (UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum::GLOBALREGIONDRIFT_D);
                }
                bool operator == (const GlobalDriftStateTypeUnion& other_) const;
                bool operator != (const GlobalDriftStateTypeUnion& other_) const;
                static ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum default_discriminator();

                void swap(GlobalDriftStateTypeUnion& other_) noexcept ;

              private:

                ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::MO::GlobalDriftState::GlobalTransitDriftType m_GlobalTransitDriftVariant_;
                    ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType m_GlobalRegionDriftVariant_;
                    Union_();
                    Union_(const ::UMAA::MO::GlobalDriftState::GlobalTransitDriftType& GlobalTransitDriftVariant_,const ::UMAA::MO::GlobalDriftState::GlobalRegionDriftType& GlobalRegionDriftVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(GlobalDriftStateTypeUnion& a, GlobalDriftStateTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalDriftStateTypeUnion& sample);

            class NDDSUSERDllExport GlobalDriftStateType {
              public:

                GlobalDriftStateType();

                explicit GlobalDriftStateType(const ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion& GlobalDriftStateTypeSubtypes_);

                ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion& GlobalDriftStateTypeSubtypes() noexcept {
                    return m_GlobalDriftStateTypeSubtypes_;
                }

                const ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion& GlobalDriftStateTypeSubtypes() const noexcept {
                    return m_GlobalDriftStateTypeSubtypes_;
                }

                void GlobalDriftStateTypeSubtypes(const ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion& value) {

                    m_GlobalDriftStateTypeSubtypes_ = value;
                }

                void GlobalDriftStateTypeSubtypes(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion&& value) {
                    m_GlobalDriftStateTypeSubtypes_ = std::move(value);
                }
                bool operator == (const GlobalDriftStateType& other_) const;
                bool operator != (const GlobalDriftStateType& other_) const;

                void swap(GlobalDriftStateType& other_) noexcept ;

              private:

                ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion m_GlobalDriftStateTypeSubtypes_;

            };

            inline void swap(GlobalDriftStateType& a, GlobalDriftStateType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalDriftStateType& sample);

        } // namespace GlobalDriftState  
    } // namespace MO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum>
        {
            static const ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum value;
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
        struct topic_type_name< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalDriftState::GlobalDriftStateType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::GlobalDriftState::GlobalDriftStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum>
        {
            static const ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalDriftState::GlobalDriftStateTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::GlobalDriftState::GlobalDriftStateType > {
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

#endif // GlobalDriftStateType_190884955_hpp

