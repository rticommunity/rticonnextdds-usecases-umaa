

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsionType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsionType_1416675483_hpp
#define PropulsionType_1416675483_hpp

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
#include "UMAA/Common/Propulsion/PropulsiveEffortType.hpp"
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
#include "UMAA/Common/Propulsion/PropulsiveRPMType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Propulsion {
            enum class PropulsionTypeEnum {
                PROPULSIVEEFFORT_D, 
                PROPULSIVERPM_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const PropulsionTypeEnum& sample);

            class NDDSUSERDllExport PropulsionTypeUnion {
              public:

                PropulsionTypeUnion();

                ::UMAA::Common::Propulsion::PropulsionTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::Common::Propulsion::PropulsionTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::Common::Propulsion::PropulsionTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Propulsion::PropulsiveEffortType& PropulsiveEffortVariant()  {

                    if (_d() != (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Propulsion::PropulsionTypeUnion::PropulsiveEffortVariant not selected by the discriminator" );
                    }
                    return m_u_.m_PropulsiveEffortVariant_;
                }

                const ::UMAA::Common::Propulsion::PropulsiveEffortType& PropulsiveEffortVariant() const  {

                    if (_d() != (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Propulsion::PropulsionTypeUnion::PropulsiveEffortVariant not selected by the discriminator" );
                    }
                    return m_u_.m_PropulsiveEffortVariant_;
                }

                void PropulsiveEffortVariant(const ::UMAA::Common::Propulsion::PropulsiveEffortType& value) {
                    m_u_.m_PropulsiveEffortVariant_ = value;
                    m_d_= (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D);
                }

                void PropulsiveEffortVariant(::UMAA::Common::Propulsion::PropulsiveEffortType&& value) {
                    m_u_.m_PropulsiveEffortVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVEEFFORT_D);
                }
                ::UMAA::Common::Propulsion::PropulsiveRPMType& PropulsiveRPMVariant()  {

                    if (_d() != (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Propulsion::PropulsionTypeUnion::PropulsiveRPMVariant not selected by the discriminator" );
                    }
                    return m_u_.m_PropulsiveRPMVariant_;
                }

                const ::UMAA::Common::Propulsion::PropulsiveRPMType& PropulsiveRPMVariant() const  {

                    if (_d() != (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Propulsion::PropulsionTypeUnion::PropulsiveRPMVariant not selected by the discriminator" );
                    }
                    return m_u_.m_PropulsiveRPMVariant_;
                }

                void PropulsiveRPMVariant(const ::UMAA::Common::Propulsion::PropulsiveRPMType& value) {
                    m_u_.m_PropulsiveRPMVariant_ = value;
                    m_d_= (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D);
                }

                void PropulsiveRPMVariant(::UMAA::Common::Propulsion::PropulsiveRPMType&& value) {
                    m_u_.m_PropulsiveRPMVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Propulsion::PropulsionTypeEnum::PROPULSIVERPM_D);
                }
                bool operator == (const PropulsionTypeUnion& other_) const;
                bool operator != (const PropulsionTypeUnion& other_) const;
                static ::UMAA::Common::Propulsion::PropulsionTypeEnum default_discriminator();

                void swap(PropulsionTypeUnion& other_) noexcept ;

              private:

                ::UMAA::Common::Propulsion::PropulsionTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Propulsion::PropulsiveEffortType m_PropulsiveEffortVariant_;
                    ::UMAA::Common::Propulsion::PropulsiveRPMType m_PropulsiveRPMVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Propulsion::PropulsiveEffortType& PropulsiveEffortVariant_,const ::UMAA::Common::Propulsion::PropulsiveRPMType& PropulsiveRPMVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(PropulsionTypeUnion& a, PropulsionTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsionTypeUnion& sample);

            class NDDSUSERDllExport PropulsionType {
              public:

                PropulsionType();

                explicit PropulsionType(const ::UMAA::Common::Propulsion::PropulsionTypeUnion& PropulsionTypeSubtypes_);

                ::UMAA::Common::Propulsion::PropulsionTypeUnion& PropulsionTypeSubtypes() noexcept {
                    return m_PropulsionTypeSubtypes_;
                }

                const ::UMAA::Common::Propulsion::PropulsionTypeUnion& PropulsionTypeSubtypes() const noexcept {
                    return m_PropulsionTypeSubtypes_;
                }

                void PropulsionTypeSubtypes(const ::UMAA::Common::Propulsion::PropulsionTypeUnion& value) {

                    m_PropulsionTypeSubtypes_ = value;
                }

                void PropulsionTypeSubtypes(::UMAA::Common::Propulsion::PropulsionTypeUnion&& value) {
                    m_PropulsionTypeSubtypes_ = std::move(value);
                }
                bool operator == (const PropulsionType& other_) const;
                bool operator != (const PropulsionType& other_) const;

                void swap(PropulsionType& other_) noexcept ;

              private:

                ::UMAA::Common::Propulsion::PropulsionTypeUnion m_PropulsionTypeSubtypes_;

            };

            inline void swap(PropulsionType& a, PropulsionType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PropulsionType& sample);

        } // namespace Propulsion  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Propulsion::PropulsionTypeEnum>
        {
            static const ::UMAA::Common::Propulsion::PropulsionTypeEnum value;
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
        struct topic_type_name< ::UMAA::Common::Propulsion::PropulsionTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Propulsion::PropulsionTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Propulsion::PropulsionTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Propulsion::PropulsionTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Propulsion::PropulsionTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Propulsion::PropulsionType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Propulsion::PropulsionType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Propulsion::PropulsionType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Propulsion::PropulsionType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Propulsion::PropulsionType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Propulsion::PropulsionTypeEnum>
        {
            static const ::UMAA::Common::Propulsion::PropulsionTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Propulsion::PropulsionTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Propulsion::PropulsionTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Propulsion::PropulsionTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Propulsion::PropulsionTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Propulsion::PropulsionType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Propulsion::PropulsionType > {
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

#endif // PropulsionType_1416675483_hpp

