

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ElevationRequirementVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ElevationRequirementVariantType_1014511196_hpp
#define ElevationRequirementVariantType_1014511196_hpp

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
#include "UMAA/Common/Measurement/AltitudeAGLRequirementVariantType.hpp"
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
#include "UMAA/Common/Measurement/AltitudeASFRequirementVariantType.hpp"
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
#include "UMAA/Common/Measurement/AltitudeGeodeticRequirementVariantType.hpp"
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
#include "UMAA/Common/Measurement/AltitudeMSLRequirementVariantType.hpp"
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
#include "UMAA/Common/Measurement/AltitudeRateASFRequirementVariantType.hpp"
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
#include "UMAA/Common/Measurement/DepthRateRequirementVariantType.hpp"
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
#include "UMAA/Common/Measurement/DepthRequirementVariantType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace Measurement {
            enum class ElevationRequirementVariantTypeEnum {
                ALTITUDEAGLREQUIREMENTVARIANT_D, 
                ALTITUDEASFREQUIREMENTVARIANT_D, 
                ALTITUDEGEODETICREQUIREMENTVARIANT_D, 
                ALTITUDEMSLREQUIREMENTVARIANT_D, 
                ALTITUDERATEASFREQUIREMENTVARIANT_D, 
                DEPTHRATEREQUIREMENTVARIANT_D, 
                DEPTHREQUIREMENTVARIANT_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ElevationRequirementVariantTypeEnum& sample);

            class NDDSUSERDllExport ElevationRequirementVariantTypeUnion {
              public:

                ElevationRequirementVariantTypeUnion();

                ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::Common::Measurement::AltitudeAGLRequirementVariantType& AltitudeAGLRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeAGLRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeAGLRequirementVariantVariant_;
                }

                const ::UMAA::Common::Measurement::AltitudeAGLRequirementVariantType& AltitudeAGLRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeAGLRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeAGLRequirementVariantVariant_;
                }

                void AltitudeAGLRequirementVariantVariant(const ::UMAA::Common::Measurement::AltitudeAGLRequirementVariantType& value) {
                    m_u_.m_AltitudeAGLRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D);
                }

                void AltitudeAGLRequirementVariantVariant(::UMAA::Common::Measurement::AltitudeAGLRequirementVariantType&& value) {
                    m_u_.m_AltitudeAGLRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEAGLREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Measurement::AltitudeASFRequirementVariantType& AltitudeASFRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeASFRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeASFRequirementVariantVariant_;
                }

                const ::UMAA::Common::Measurement::AltitudeASFRequirementVariantType& AltitudeASFRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeASFRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeASFRequirementVariantVariant_;
                }

                void AltitudeASFRequirementVariantVariant(const ::UMAA::Common::Measurement::AltitudeASFRequirementVariantType& value) {
                    m_u_.m_AltitudeASFRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D);
                }

                void AltitudeASFRequirementVariantVariant(::UMAA::Common::Measurement::AltitudeASFRequirementVariantType&& value) {
                    m_u_.m_AltitudeASFRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEASFREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType& AltitudeGeodeticRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeGeodeticRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeGeodeticRequirementVariantVariant_;
                }

                const ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType& AltitudeGeodeticRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeGeodeticRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeGeodeticRequirementVariantVariant_;
                }

                void AltitudeGeodeticRequirementVariantVariant(const ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType& value) {
                    m_u_.m_AltitudeGeodeticRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D);
                }

                void AltitudeGeodeticRequirementVariantVariant(::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType&& value) {
                    m_u_.m_AltitudeGeodeticRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEGEODETICREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Measurement::AltitudeMSLRequirementVariantType& AltitudeMSLRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeMSLRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeMSLRequirementVariantVariant_;
                }

                const ::UMAA::Common::Measurement::AltitudeMSLRequirementVariantType& AltitudeMSLRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeMSLRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeMSLRequirementVariantVariant_;
                }

                void AltitudeMSLRequirementVariantVariant(const ::UMAA::Common::Measurement::AltitudeMSLRequirementVariantType& value) {
                    m_u_.m_AltitudeMSLRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D);
                }

                void AltitudeMSLRequirementVariantVariant(::UMAA::Common::Measurement::AltitudeMSLRequirementVariantType&& value) {
                    m_u_.m_AltitudeMSLRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDEMSLREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Measurement::AltitudeRateASFRequirementVariantType& AltitudeRateASFRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeRateASFRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeRateASFRequirementVariantVariant_;
                }

                const ::UMAA::Common::Measurement::AltitudeRateASFRequirementVariantType& AltitudeRateASFRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::AltitudeRateASFRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AltitudeRateASFRequirementVariantVariant_;
                }

                void AltitudeRateASFRequirementVariantVariant(const ::UMAA::Common::Measurement::AltitudeRateASFRequirementVariantType& value) {
                    m_u_.m_AltitudeRateASFRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D);
                }

                void AltitudeRateASFRequirementVariantVariant(::UMAA::Common::Measurement::AltitudeRateASFRequirementVariantType&& value) {
                    m_u_.m_AltitudeRateASFRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::ALTITUDERATEASFREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Measurement::DepthRateRequirementVariantType& DepthRateRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::DepthRateRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DepthRateRequirementVariantVariant_;
                }

                const ::UMAA::Common::Measurement::DepthRateRequirementVariantType& DepthRateRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::DepthRateRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DepthRateRequirementVariantVariant_;
                }

                void DepthRateRequirementVariantVariant(const ::UMAA::Common::Measurement::DepthRateRequirementVariantType& value) {
                    m_u_.m_DepthRateRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D);
                }

                void DepthRateRequirementVariantVariant(::UMAA::Common::Measurement::DepthRateRequirementVariantType&& value) {
                    m_u_.m_DepthRateRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHRATEREQUIREMENTVARIANT_D);
                }
                ::UMAA::Common::Measurement::DepthRequirementVariantType& DepthRequirementVariantVariant()  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::DepthRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DepthRequirementVariantVariant_;
                }

                const ::UMAA::Common::Measurement::DepthRequirementVariantType& DepthRequirementVariantVariant() const  {

                    if (_d() != (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion::DepthRequirementVariantVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DepthRequirementVariantVariant_;
                }

                void DepthRequirementVariantVariant(const ::UMAA::Common::Measurement::DepthRequirementVariantType& value) {
                    m_u_.m_DepthRequirementVariantVariant_ = value;
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D);
                }

                void DepthRequirementVariantVariant(::UMAA::Common::Measurement::DepthRequirementVariantType&& value) {
                    m_u_.m_DepthRequirementVariantVariant_ = std::move(value);
                    m_d_= (UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum::DEPTHREQUIREMENTVARIANT_D);
                }
                bool operator == (const ElevationRequirementVariantTypeUnion& other_) const;
                bool operator != (const ElevationRequirementVariantTypeUnion& other_) const;
                static ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum default_discriminator();

                void swap(ElevationRequirementVariantTypeUnion& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::Common::Measurement::AltitudeAGLRequirementVariantType m_AltitudeAGLRequirementVariantVariant_;
                    ::UMAA::Common::Measurement::AltitudeASFRequirementVariantType m_AltitudeASFRequirementVariantVariant_;
                    ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType m_AltitudeGeodeticRequirementVariantVariant_;
                    ::UMAA::Common::Measurement::AltitudeMSLRequirementVariantType m_AltitudeMSLRequirementVariantVariant_;
                    ::UMAA::Common::Measurement::AltitudeRateASFRequirementVariantType m_AltitudeRateASFRequirementVariantVariant_;
                    ::UMAA::Common::Measurement::DepthRateRequirementVariantType m_DepthRateRequirementVariantVariant_;
                    ::UMAA::Common::Measurement::DepthRequirementVariantType m_DepthRequirementVariantVariant_;
                    Union_();
                    Union_(const ::UMAA::Common::Measurement::AltitudeAGLRequirementVariantType& AltitudeAGLRequirementVariantVariant_,const ::UMAA::Common::Measurement::AltitudeASFRequirementVariantType& AltitudeASFRequirementVariantVariant_,const ::UMAA::Common::Measurement::AltitudeGeodeticRequirementVariantType& AltitudeGeodeticRequirementVariantVariant_,const ::UMAA::Common::Measurement::AltitudeMSLRequirementVariantType& AltitudeMSLRequirementVariantVariant_,const ::UMAA::Common::Measurement::AltitudeRateASFRequirementVariantType& AltitudeRateASFRequirementVariantVariant_,const ::UMAA::Common::Measurement::DepthRateRequirementVariantType& DepthRateRequirementVariantVariant_,const ::UMAA::Common::Measurement::DepthRequirementVariantType& DepthRequirementVariantVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(ElevationRequirementVariantTypeUnion& a, ElevationRequirementVariantTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ElevationRequirementVariantTypeUnion& sample);

            class NDDSUSERDllExport ElevationRequirementVariantType {
              public:

                ElevationRequirementVariantType();

                explicit ElevationRequirementVariantType(const ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion& ElevationRequirementVariantTypeSubtypes_);

                ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion& ElevationRequirementVariantTypeSubtypes() noexcept {
                    return m_ElevationRequirementVariantTypeSubtypes_;
                }

                const ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion& ElevationRequirementVariantTypeSubtypes() const noexcept {
                    return m_ElevationRequirementVariantTypeSubtypes_;
                }

                void ElevationRequirementVariantTypeSubtypes(const ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion& value) {

                    m_ElevationRequirementVariantTypeSubtypes_ = value;
                }

                void ElevationRequirementVariantTypeSubtypes(::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion&& value) {
                    m_ElevationRequirementVariantTypeSubtypes_ = std::move(value);
                }
                bool operator == (const ElevationRequirementVariantType& other_) const;
                bool operator != (const ElevationRequirementVariantType& other_) const;

                void swap(ElevationRequirementVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion m_ElevationRequirementVariantTypeSubtypes_;

            };

            inline void swap(ElevationRequirementVariantType& a, ElevationRequirementVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ElevationRequirementVariantType& sample);

        } // namespace Measurement  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum>
        {
            static const ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum value;
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
        struct topic_type_name< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::Common::Measurement::ElevationRequirementVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::ElevationRequirementVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::ElevationRequirementVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::ElevationRequirementVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::ElevationRequirementVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum>
        {
            static const ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::ElevationRequirementVariantTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::ElevationRequirementVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::ElevationRequirementVariantType > {
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

#endif // ElevationRequirementVariantType_1014511196_hpp

