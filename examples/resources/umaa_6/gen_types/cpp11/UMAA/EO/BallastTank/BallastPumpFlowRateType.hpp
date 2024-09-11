

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpFlowRateType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpFlowRateType_2133445084_hpp
#define BallastPumpFlowRateType_2133445084_hpp

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
#include "UMAA/EO/BallastTank/MassBallastFlowRateType.hpp"
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
#include "UMAA/EO/BallastTank/VolumeBallastFlowRateType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace BallastTank {
            enum class BallastPumpFlowRateTypeEnum {
                MASSBALLASTFLOWRATE_D, 
                VOLUMEBALLASTFLOWRATE_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const BallastPumpFlowRateTypeEnum& sample);

            class NDDSUSERDllExport BallastPumpFlowRateTypeUnion {
              public:

                BallastPumpFlowRateTypeUnion();

                ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::EO::BallastTank::MassBallastFlowRateType& MassBallastFlowRateVariant()  {

                    if (_d() != (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion::MassBallastFlowRateVariant not selected by the discriminator" );
                    }
                    return m_u_.m_MassBallastFlowRateVariant_;
                }

                const ::UMAA::EO::BallastTank::MassBallastFlowRateType& MassBallastFlowRateVariant() const  {

                    if (_d() != (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion::MassBallastFlowRateVariant not selected by the discriminator" );
                    }
                    return m_u_.m_MassBallastFlowRateVariant_;
                }

                void MassBallastFlowRateVariant(const ::UMAA::EO::BallastTank::MassBallastFlowRateType& value) {
                    m_u_.m_MassBallastFlowRateVariant_ = value;
                    m_d_= (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D);
                }

                void MassBallastFlowRateVariant(::UMAA::EO::BallastTank::MassBallastFlowRateType&& value) {
                    m_u_.m_MassBallastFlowRateVariant_ = std::move(value);
                    m_d_= (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::MASSBALLASTFLOWRATE_D);
                }
                ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& VolumeBallastFlowRateVariant()  {

                    if (_d() != (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion::VolumeBallastFlowRateVariant not selected by the discriminator" );
                    }
                    return m_u_.m_VolumeBallastFlowRateVariant_;
                }

                const ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& VolumeBallastFlowRateVariant() const  {

                    if (_d() != (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion::VolumeBallastFlowRateVariant not selected by the discriminator" );
                    }
                    return m_u_.m_VolumeBallastFlowRateVariant_;
                }

                void VolumeBallastFlowRateVariant(const ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& value) {
                    m_u_.m_VolumeBallastFlowRateVariant_ = value;
                    m_d_= (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D);
                }

                void VolumeBallastFlowRateVariant(::UMAA::EO::BallastTank::VolumeBallastFlowRateType&& value) {
                    m_u_.m_VolumeBallastFlowRateVariant_ = std::move(value);
                    m_d_= (UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum::VOLUMEBALLASTFLOWRATE_D);
                }
                bool operator == (const BallastPumpFlowRateTypeUnion& other_) const;
                bool operator != (const BallastPumpFlowRateTypeUnion& other_) const;
                static ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum default_discriminator();

                void swap(BallastPumpFlowRateTypeUnion& other_) noexcept ;

              private:

                ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::EO::BallastTank::MassBallastFlowRateType m_MassBallastFlowRateVariant_;
                    ::UMAA::EO::BallastTank::VolumeBallastFlowRateType m_VolumeBallastFlowRateVariant_;
                    Union_();
                    Union_(const ::UMAA::EO::BallastTank::MassBallastFlowRateType& MassBallastFlowRateVariant_,const ::UMAA::EO::BallastTank::VolumeBallastFlowRateType& VolumeBallastFlowRateVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(BallastPumpFlowRateTypeUnion& a, BallastPumpFlowRateTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastPumpFlowRateTypeUnion& sample);

            class NDDSUSERDllExport BallastPumpFlowRateType {
              public:

                BallastPumpFlowRateType();

                explicit BallastPumpFlowRateType(const ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion& BallastPumpFlowRateTypeSubtypes_);

                ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion& BallastPumpFlowRateTypeSubtypes() noexcept {
                    return m_BallastPumpFlowRateTypeSubtypes_;
                }

                const ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion& BallastPumpFlowRateTypeSubtypes() const noexcept {
                    return m_BallastPumpFlowRateTypeSubtypes_;
                }

                void BallastPumpFlowRateTypeSubtypes(const ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion& value) {

                    m_BallastPumpFlowRateTypeSubtypes_ = value;
                }

                void BallastPumpFlowRateTypeSubtypes(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion&& value) {
                    m_BallastPumpFlowRateTypeSubtypes_ = std::move(value);
                }
                bool operator == (const BallastPumpFlowRateType& other_) const;
                bool operator != (const BallastPumpFlowRateType& other_) const;

                void swap(BallastPumpFlowRateType& other_) noexcept ;

              private:

                ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion m_BallastPumpFlowRateTypeSubtypes_;

            };

            inline void swap(BallastPumpFlowRateType& a, BallastPumpFlowRateType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastPumpFlowRateType& sample);

        } // namespace BallastTank  
    } // namespace EO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum>
        {
            static const ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum value;
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
        struct topic_type_name< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastPumpFlowRateType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BallastTank::BallastPumpFlowRateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum>
        {
            static const ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastPumpFlowRateTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BallastTank::BallastPumpFlowRateType > {
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

#endif // BallastPumpFlowRateType_2133445084_hpp

