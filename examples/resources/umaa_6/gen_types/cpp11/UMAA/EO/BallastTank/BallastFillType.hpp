

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastFillType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastFillType_331398751_hpp
#define BallastFillType_331398751_hpp

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
#include "UMAA/Common/Measurement/BallastMassType.hpp"
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
#include "UMAA/Common/Measurement/LevelType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace BallastTank {
            enum class BallastFillTypeEnum {
                LEVEL_D, 
                BALLASTMASS_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BallastFillTypeEnum& sample);

            class NDDSUSERDllExport BallastFillTypeUnion {
              public:

                BallastFillTypeUnion();

                ::UMAA::EO::BallastTank::BallastFillTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::EO::BallastTank::BallastFillTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::EO::BallastTank::BallastFillTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Measurement::LevelType& LevelVariant()  {

                    if (_d() != (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::EO::BallastTank::BallastFillTypeUnion::LevelVariant not selected by the discriminator" );
                    }
                    return m_u_.m_LevelVariant_;
                }

                const ::UMAA::Common::Measurement::LevelType& LevelVariant() const  {

                    if (_d() != (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::EO::BallastTank::BallastFillTypeUnion::LevelVariant not selected by the discriminator" );
                    }
                    return m_u_.m_LevelVariant_;
                }

                void LevelVariant(const ::UMAA::Common::Measurement::LevelType& value) {
                    m_u_.m_LevelVariant_ = value;
                    m_d_= (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D);
                }

                void LevelVariant(::UMAA::Common::Measurement::LevelType&& value) {
                    m_u_.m_LevelVariant_ = std::move(value);
                    m_d_= (UMAA::EO::BallastTank::BallastFillTypeEnum::LEVEL_D);
                }
                ::UMAA::Common::Measurement::BallastMassType& BallastMassVariant()  {

                    if (_d() != (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::EO::BallastTank::BallastFillTypeUnion::BallastMassVariant not selected by the discriminator" );
                    }
                    return m_u_.m_BallastMassVariant_;
                }

                const ::UMAA::Common::Measurement::BallastMassType& BallastMassVariant() const  {

                    if (_d() != (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::EO::BallastTank::BallastFillTypeUnion::BallastMassVariant not selected by the discriminator" );
                    }
                    return m_u_.m_BallastMassVariant_;
                }

                void BallastMassVariant(const ::UMAA::Common::Measurement::BallastMassType& value) {
                    m_u_.m_BallastMassVariant_ = value;
                    m_d_= (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D);
                }

                void BallastMassVariant(::UMAA::Common::Measurement::BallastMassType&& value) {
                    m_u_.m_BallastMassVariant_ = std::move(value);
                    m_d_= (UMAA::EO::BallastTank::BallastFillTypeEnum::BALLASTMASS_D);
                }
                bool operator == (const BallastFillTypeUnion& other_) const;
                bool operator != (const BallastFillTypeUnion& other_) const;
                static ::UMAA::EO::BallastTank::BallastFillTypeEnum default_discriminator();

                void swap(BallastFillTypeUnion& other_) noexcept ;

              private:

                ::UMAA::EO::BallastTank::BallastFillTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Measurement::LevelType m_LevelVariant_;
                    ::UMAA::Common::Measurement::BallastMassType m_BallastMassVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Measurement::LevelType& LevelVariant_,const ::UMAA::Common::Measurement::BallastMassType& BallastMassVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(BallastFillTypeUnion& a, BallastFillTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastFillTypeUnion& sample);

            class NDDSUSERDllExport BallastFillType {
              public:

                BallastFillType();

                explicit BallastFillType(const ::UMAA::EO::BallastTank::BallastFillTypeUnion& BallastFillTypeSubtypes_);

                ::UMAA::EO::BallastTank::BallastFillTypeUnion& BallastFillTypeSubtypes() noexcept {
                    return m_BallastFillTypeSubtypes_;
                }

                const ::UMAA::EO::BallastTank::BallastFillTypeUnion& BallastFillTypeSubtypes() const noexcept {
                    return m_BallastFillTypeSubtypes_;
                }

                void BallastFillTypeSubtypes(const ::UMAA::EO::BallastTank::BallastFillTypeUnion& value) {

                    m_BallastFillTypeSubtypes_ = value;
                }

                void BallastFillTypeSubtypes(::UMAA::EO::BallastTank::BallastFillTypeUnion&& value) {
                    m_BallastFillTypeSubtypes_ = std::move(value);
                }
                bool operator == (const BallastFillType& other_) const;
                bool operator != (const BallastFillType& other_) const;

                void swap(BallastFillType& other_) noexcept ;

              private:

                ::UMAA::EO::BallastTank::BallastFillTypeUnion m_BallastFillTypeSubtypes_;

            };

            inline void swap(BallastFillType& a, BallastFillType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastFillType& sample);

        } // namespace BallastTank  
    } // namespace EO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::EO::BallastTank::BallastFillTypeEnum>
        {
            static const ::UMAA::EO::BallastTank::BallastFillTypeEnum value;
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
        struct topic_type_name< ::UMAA::EO::BallastTank::BallastFillTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastFillTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::EO::BallastTank::BallastFillTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BallastTank::BallastFillTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BallastTank::BallastFillTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::EO::BallastTank::BallastFillType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastFillType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::EO::BallastTank::BallastFillType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BallastTank::BallastFillType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BallastTank::BallastFillType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::EO::BallastTank::BallastFillTypeEnum>
        {
            static const ::UMAA::EO::BallastTank::BallastFillTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastFillTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastFillTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastFillTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastFillTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastFillType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastFillType > {
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

#endif // BallastFillType_331398751_hpp

