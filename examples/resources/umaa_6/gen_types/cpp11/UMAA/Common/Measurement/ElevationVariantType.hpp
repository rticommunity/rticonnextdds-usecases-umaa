

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ElevationVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ElevationVariantType_636719920_hpp
#define ElevationVariantType_636719920_hpp

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
#include "UMAA/Common/Measurement/AltitudeAGLVariantType.hpp"
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
#include "UMAA/Common/Measurement/AltitudeASFVariantType.hpp"
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
#include "UMAA/Common/Measurement/AltitudeGeodeticVariantType.hpp"
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
#include "UMAA/Common/Measurement/AltitudeMSLVariantType.hpp"
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
#include "UMAA/Common/Measurement/DepthVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Measurement {
            enum class ElevationVariantTypeEnum {
                ALTITUDEAGLVARIANT_D, 
                ALTITUDEASFVARIANT_D, 
                ALTITUDEGEODETICVARIANT_D, 
                ALTITUDEMSLVARIANT_D, 
                DEPTHVARIANT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ElevationVariantTypeEnum& sample);

            class NDDSUSERDllExport ElevationVariantTypeUnion {
              public:

                ElevationVariantTypeUnion();

                ::UMAA::Common::Measurement::ElevationVariantTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::Common::Measurement::ElevationVariantTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::Common::Measurement::ElevationVariantTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Measurement::AltitudeAGLVariantType& AltitudeAGLVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::AltitudeAGLVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeAGLVariantVariant_;
                }

                const ::UMAA::Common::Measurement::AltitudeAGLVariantType& AltitudeAGLVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::AltitudeAGLVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeAGLVariantVariant_;
                }

                void AltitudeAGLVariantVariant(const ::UMAA::Common::Measurement::AltitudeAGLVariantType& value) {
                    m_u_.m_AltitudeAGLVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D);
                }

                void AltitudeAGLVariantVariant(::UMAA::Common::Measurement::AltitudeAGLVariantType&& value) {
                    m_u_.m_AltitudeAGLVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEAGLVARIANT_D);
                }
                ::UMAA::Common::Measurement::AltitudeASFVariantType& AltitudeASFVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::AltitudeASFVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeASFVariantVariant_;
                }

                const ::UMAA::Common::Measurement::AltitudeASFVariantType& AltitudeASFVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::AltitudeASFVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeASFVariantVariant_;
                }

                void AltitudeASFVariantVariant(const ::UMAA::Common::Measurement::AltitudeASFVariantType& value) {
                    m_u_.m_AltitudeASFVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D);
                }

                void AltitudeASFVariantVariant(::UMAA::Common::Measurement::AltitudeASFVariantType&& value) {
                    m_u_.m_AltitudeASFVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEASFVARIANT_D);
                }
                ::UMAA::Common::Measurement::AltitudeGeodeticVariantType& AltitudeGeodeticVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::AltitudeGeodeticVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeGeodeticVariantVariant_;
                }

                const ::UMAA::Common::Measurement::AltitudeGeodeticVariantType& AltitudeGeodeticVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::AltitudeGeodeticVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeGeodeticVariantVariant_;
                }

                void AltitudeGeodeticVariantVariant(const ::UMAA::Common::Measurement::AltitudeGeodeticVariantType& value) {
                    m_u_.m_AltitudeGeodeticVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D);
                }

                void AltitudeGeodeticVariantVariant(::UMAA::Common::Measurement::AltitudeGeodeticVariantType&& value) {
                    m_u_.m_AltitudeGeodeticVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEGEODETICVARIANT_D);
                }
                ::UMAA::Common::Measurement::AltitudeMSLVariantType& AltitudeMSLVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::AltitudeMSLVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeMSLVariantVariant_;
                }

                const ::UMAA::Common::Measurement::AltitudeMSLVariantType& AltitudeMSLVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::AltitudeMSLVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeMSLVariantVariant_;
                }

                void AltitudeMSLVariantVariant(const ::UMAA::Common::Measurement::AltitudeMSLVariantType& value) {
                    m_u_.m_AltitudeMSLVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D);
                }

                void AltitudeMSLVariantVariant(::UMAA::Common::Measurement::AltitudeMSLVariantType&& value) {
                    m_u_.m_AltitudeMSLVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::ALTITUDEMSLVARIANT_D);
                }
                ::UMAA::Common::Measurement::DepthVariantType& DepthVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::DepthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DepthVariantVariant_;
                }

                const ::UMAA::Common::Measurement::DepthVariantType& DepthVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationVariantTypeUnion::DepthVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DepthVariantVariant_;
                }

                void DepthVariantVariant(const ::UMAA::Common::Measurement::DepthVariantType& value) {
                    m_u_.m_DepthVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D);
                }

                void DepthVariantVariant(::UMAA::Common::Measurement::DepthVariantType&& value) {
                    m_u_.m_DepthVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationVariantTypeEnum::DEPTHVARIANT_D);
                }
                bool operator == (const ElevationVariantTypeUnion& other_) const;
                bool operator != (const ElevationVariantTypeUnion& other_) const;
                static ::UMAA::Common::Measurement::ElevationVariantTypeEnum default_discriminator();

                void swap(ElevationVariantTypeUnion& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::ElevationVariantTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Measurement::AltitudeAGLVariantType m_AltitudeAGLVariantVariant_;
                    ::UMAA::Common::Measurement::AltitudeASFVariantType m_AltitudeASFVariantVariant_;
                    ::UMAA::Common::Measurement::AltitudeGeodeticVariantType m_AltitudeGeodeticVariantVariant_;
                    ::UMAA::Common::Measurement::AltitudeMSLVariantType m_AltitudeMSLVariantVariant_;
                    ::UMAA::Common::Measurement::DepthVariantType m_DepthVariantVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Measurement::AltitudeAGLVariantType& AltitudeAGLVariantVariant_,const ::UMAA::Common::Measurement::AltitudeASFVariantType& AltitudeASFVariantVariant_,const ::UMAA::Common::Measurement::AltitudeGeodeticVariantType& AltitudeGeodeticVariantVariant_,const ::UMAA::Common::Measurement::AltitudeMSLVariantType& AltitudeMSLVariantVariant_,const ::UMAA::Common::Measurement::DepthVariantType& DepthVariantVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(ElevationVariantTypeUnion& a, ElevationVariantTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ElevationVariantTypeUnion& sample);

            class NDDSUSERDllExport ElevationVariantType {
              public:

                ElevationVariantType();

                explicit ElevationVariantType(const ::UMAA::Common::Measurement::ElevationVariantTypeUnion& ElevationVariantTypeSubtypes_);

                ::UMAA::Common::Measurement::ElevationVariantTypeUnion& ElevationVariantTypeSubtypes() noexcept {
                    return m_ElevationVariantTypeSubtypes_;
                }

                const ::UMAA::Common::Measurement::ElevationVariantTypeUnion& ElevationVariantTypeSubtypes() const noexcept {
                    return m_ElevationVariantTypeSubtypes_;
                }

                void ElevationVariantTypeSubtypes(const ::UMAA::Common::Measurement::ElevationVariantTypeUnion& value) {

                    m_ElevationVariantTypeSubtypes_ = value;
                }

                void ElevationVariantTypeSubtypes(::UMAA::Common::Measurement::ElevationVariantTypeUnion&& value) {
                    m_ElevationVariantTypeSubtypes_ = std::move(value);
                }
                bool operator == (const ElevationVariantType& other_) const;
                bool operator != (const ElevationVariantType& other_) const;

                void swap(ElevationVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::ElevationVariantTypeUnion m_ElevationVariantTypeSubtypes_;

            };

            inline void swap(ElevationVariantType& a, ElevationVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ElevationVariantType& sample);

        } // namespace Measurement  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Measurement::ElevationVariantTypeEnum>
        {
            static const ::UMAA::Common::Measurement::ElevationVariantTypeEnum value;
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
        struct topic_type_name< ::UMAA::Common::Measurement::ElevationVariantTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::ElevationVariantTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::ElevationVariantTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::ElevationVariantTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::ElevationVariantTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Measurement::ElevationVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::ElevationVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::ElevationVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::ElevationVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::ElevationVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Measurement::ElevationVariantTypeEnum>
        {
            static const ::UMAA::Common::Measurement::ElevationVariantTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::ElevationVariantTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::ElevationVariantTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::ElevationVariantTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::ElevationVariantTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::ElevationVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::ElevationVariantType > {
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

#endif // ElevationVariantType_636719920_hpp

