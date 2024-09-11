

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExpValueType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ExpValueType_1760834647_hpp
#define ExpValueType_1760834647_hpp

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
#include "UMAA/MM/BaseType/ExpBinaryValueType.hpp"
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
#include "UMAA/MM/BaseType/ExpBooleanValueType.hpp"
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
#include "UMAA/MM/BaseType/ExpByteValueType.hpp"
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
#include "UMAA/MM/BaseType/ExpCharValueType.hpp"
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
#include "UMAA/MM/BaseType/ExpDateTimeValueType.hpp"
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
#include "UMAA/MM/BaseType/ExpDoubleValueType.hpp"
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
#include "UMAA/MM/BaseType/ExpIntegerValueType.hpp"
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
#include "UMAA/MM/BaseType/ExpLongLongValueType.hpp"
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
#include "UMAA/MM/BaseType/ExpStringValueType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {
            enum class ExpValueTypeEnum {
                EXPBINARYVALUE_D, 
                EXPBOOLEANVALUE_D, 
                EXPBYTEVALUE_D, 
                EXPCHARVALUE_D, 
                EXPDATETIMEVALUE_D, 
                EXPDOUBLEVALUE_D, 
                EXPINTEGERVALUE_D, 
                EXPLONGLONGVALUE_D, 
                EXPSTRINGVALUE_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ExpValueTypeEnum& sample);

            class NDDSUSERDllExport ExpValueTypeUnion {
              public:

                ExpValueTypeUnion();

                ::UMAA::MM::BaseType::ExpValueTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::MM::BaseType::ExpValueTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::MM::BaseType::ExpValueTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::MM::BaseType::ExpBinaryValueType& ExpBinaryValueVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpBinaryValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpBinaryValueVariant_;
                }

                const ::UMAA::MM::BaseType::ExpBinaryValueType& ExpBinaryValueVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpBinaryValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpBinaryValueVariant_;
                }

                void ExpBinaryValueVariant(const ::UMAA::MM::BaseType::ExpBinaryValueType& value) {
                    m_u_.m_ExpBinaryValueVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D);
                }

                void ExpBinaryValueVariant(::UMAA::MM::BaseType::ExpBinaryValueType&& value) {
                    m_u_.m_ExpBinaryValueVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBINARYVALUE_D);
                }
                ::UMAA::MM::BaseType::ExpBooleanValueType& ExpBooleanValueVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpBooleanValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpBooleanValueVariant_;
                }

                const ::UMAA::MM::BaseType::ExpBooleanValueType& ExpBooleanValueVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpBooleanValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpBooleanValueVariant_;
                }

                void ExpBooleanValueVariant(const ::UMAA::MM::BaseType::ExpBooleanValueType& value) {
                    m_u_.m_ExpBooleanValueVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D);
                }

                void ExpBooleanValueVariant(::UMAA::MM::BaseType::ExpBooleanValueType&& value) {
                    m_u_.m_ExpBooleanValueVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBOOLEANVALUE_D);
                }
                ::UMAA::MM::BaseType::ExpByteValueType& ExpByteValueVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpByteValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpByteValueVariant_;
                }

                const ::UMAA::MM::BaseType::ExpByteValueType& ExpByteValueVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpByteValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpByteValueVariant_;
                }

                void ExpByteValueVariant(const ::UMAA::MM::BaseType::ExpByteValueType& value) {
                    m_u_.m_ExpByteValueVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D);
                }

                void ExpByteValueVariant(::UMAA::MM::BaseType::ExpByteValueType&& value) {
                    m_u_.m_ExpByteValueVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPBYTEVALUE_D);
                }
                ::UMAA::MM::BaseType::ExpCharValueType& ExpCharValueVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpCharValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpCharValueVariant_;
                }

                const ::UMAA::MM::BaseType::ExpCharValueType& ExpCharValueVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpCharValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpCharValueVariant_;
                }

                void ExpCharValueVariant(const ::UMAA::MM::BaseType::ExpCharValueType& value) {
                    m_u_.m_ExpCharValueVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D);
                }

                void ExpCharValueVariant(::UMAA::MM::BaseType::ExpCharValueType&& value) {
                    m_u_.m_ExpCharValueVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPCHARVALUE_D);
                }
                ::UMAA::MM::BaseType::ExpDateTimeValueType& ExpDateTimeValueVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpDateTimeValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpDateTimeValueVariant_;
                }

                const ::UMAA::MM::BaseType::ExpDateTimeValueType& ExpDateTimeValueVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpDateTimeValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpDateTimeValueVariant_;
                }

                void ExpDateTimeValueVariant(const ::UMAA::MM::BaseType::ExpDateTimeValueType& value) {
                    m_u_.m_ExpDateTimeValueVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D);
                }

                void ExpDateTimeValueVariant(::UMAA::MM::BaseType::ExpDateTimeValueType&& value) {
                    m_u_.m_ExpDateTimeValueVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDATETIMEVALUE_D);
                }
                ::UMAA::MM::BaseType::ExpDoubleValueType& ExpDoubleValueVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpDoubleValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpDoubleValueVariant_;
                }

                const ::UMAA::MM::BaseType::ExpDoubleValueType& ExpDoubleValueVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpDoubleValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpDoubleValueVariant_;
                }

                void ExpDoubleValueVariant(const ::UMAA::MM::BaseType::ExpDoubleValueType& value) {
                    m_u_.m_ExpDoubleValueVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D);
                }

                void ExpDoubleValueVariant(::UMAA::MM::BaseType::ExpDoubleValueType&& value) {
                    m_u_.m_ExpDoubleValueVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPDOUBLEVALUE_D);
                }
                ::UMAA::MM::BaseType::ExpIntegerValueType& ExpIntegerValueVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpIntegerValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpIntegerValueVariant_;
                }

                const ::UMAA::MM::BaseType::ExpIntegerValueType& ExpIntegerValueVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpIntegerValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpIntegerValueVariant_;
                }

                void ExpIntegerValueVariant(const ::UMAA::MM::BaseType::ExpIntegerValueType& value) {
                    m_u_.m_ExpIntegerValueVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D);
                }

                void ExpIntegerValueVariant(::UMAA::MM::BaseType::ExpIntegerValueType&& value) {
                    m_u_.m_ExpIntegerValueVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPINTEGERVALUE_D);
                }
                ::UMAA::MM::BaseType::ExpLongLongValueType& ExpLongLongValueVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpLongLongValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpLongLongValueVariant_;
                }

                const ::UMAA::MM::BaseType::ExpLongLongValueType& ExpLongLongValueVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpLongLongValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpLongLongValueVariant_;
                }

                void ExpLongLongValueVariant(const ::UMAA::MM::BaseType::ExpLongLongValueType& value) {
                    m_u_.m_ExpLongLongValueVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D);
                }

                void ExpLongLongValueVariant(::UMAA::MM::BaseType::ExpLongLongValueType&& value) {
                    m_u_.m_ExpLongLongValueVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPLONGLONGVALUE_D);
                }
                ::UMAA::MM::BaseType::ExpStringValueType& ExpStringValueVariant()  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpStringValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpStringValueVariant_;
                }

                const ::UMAA::MM::BaseType::ExpStringValueType& ExpStringValueVariant() const  {

                    if (_d() != (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::MM::BaseType::ExpValueTypeUnion::ExpStringValueVariant not selected by the discriminator" );
                    }
                    return m_u_.m_ExpStringValueVariant_;
                }

                void ExpStringValueVariant(const ::UMAA::MM::BaseType::ExpStringValueType& value) {
                    m_u_.m_ExpStringValueVariant_ = value;
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D);
                }

                void ExpStringValueVariant(::UMAA::MM::BaseType::ExpStringValueType&& value) {
                    m_u_.m_ExpStringValueVariant_ = std::move(value);
                    m_d_= (UMAA::MM::BaseType::ExpValueTypeEnum::EXPSTRINGVALUE_D);
                }
                bool operator == (const ExpValueTypeUnion& other_) const;
                bool operator != (const ExpValueTypeUnion& other_) const;
                static ::UMAA::MM::BaseType::ExpValueTypeEnum default_discriminator();

                void swap(ExpValueTypeUnion& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::ExpValueTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::MM::BaseType::ExpBinaryValueType m_ExpBinaryValueVariant_;
                    ::UMAA::MM::BaseType::ExpBooleanValueType m_ExpBooleanValueVariant_;
                    ::UMAA::MM::BaseType::ExpByteValueType m_ExpByteValueVariant_;
                    ::UMAA::MM::BaseType::ExpCharValueType m_ExpCharValueVariant_;
                    ::UMAA::MM::BaseType::ExpDateTimeValueType m_ExpDateTimeValueVariant_;
                    ::UMAA::MM::BaseType::ExpDoubleValueType m_ExpDoubleValueVariant_;
                    ::UMAA::MM::BaseType::ExpIntegerValueType m_ExpIntegerValueVariant_;
                    ::UMAA::MM::BaseType::ExpLongLongValueType m_ExpLongLongValueVariant_;
                    ::UMAA::MM::BaseType::ExpStringValueType m_ExpStringValueVariant_;
                    Union_();
                    Union_(const ::UMAA::MM::BaseType::ExpBinaryValueType& ExpBinaryValueVariant_,const ::UMAA::MM::BaseType::ExpBooleanValueType& ExpBooleanValueVariant_,const ::UMAA::MM::BaseType::ExpByteValueType& ExpByteValueVariant_,const ::UMAA::MM::BaseType::ExpCharValueType& ExpCharValueVariant_,const ::UMAA::MM::BaseType::ExpDateTimeValueType& ExpDateTimeValueVariant_,const ::UMAA::MM::BaseType::ExpDoubleValueType& ExpDoubleValueVariant_,const ::UMAA::MM::BaseType::ExpIntegerValueType& ExpIntegerValueVariant_,const ::UMAA::MM::BaseType::ExpLongLongValueType& ExpLongLongValueVariant_,const ::UMAA::MM::BaseType::ExpStringValueType& ExpStringValueVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(ExpValueTypeUnion& a, ExpValueTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ExpValueTypeUnion& sample);

            class NDDSUSERDllExport ExpValueType {
              public:

                ExpValueType();

                explicit ExpValueType(const ::UMAA::MM::BaseType::ExpValueTypeUnion& ExpValueTypeSubtypes_);

                ::UMAA::MM::BaseType::ExpValueTypeUnion& ExpValueTypeSubtypes() noexcept {
                    return m_ExpValueTypeSubtypes_;
                }

                const ::UMAA::MM::BaseType::ExpValueTypeUnion& ExpValueTypeSubtypes() const noexcept {
                    return m_ExpValueTypeSubtypes_;
                }

                void ExpValueTypeSubtypes(const ::UMAA::MM::BaseType::ExpValueTypeUnion& value) {

                    m_ExpValueTypeSubtypes_ = value;
                }

                void ExpValueTypeSubtypes(::UMAA::MM::BaseType::ExpValueTypeUnion&& value) {
                    m_ExpValueTypeSubtypes_ = std::move(value);
                }
                bool operator == (const ExpValueType& other_) const;
                bool operator != (const ExpValueType& other_) const;

                void swap(ExpValueType& other_) noexcept ;

              private:

                ::UMAA::MM::BaseType::ExpValueTypeUnion m_ExpValueTypeSubtypes_;

            };

            inline void swap(ExpValueType& a, ExpValueType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ExpValueType& sample);

        } // namespace BaseType  
    } // namespace MM  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MM::BaseType::ExpValueTypeEnum>
        {
            static const ::UMAA::MM::BaseType::ExpValueTypeEnum value;
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
        struct topic_type_name< ::UMAA::MM::BaseType::ExpValueTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ExpValueTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::ExpValueTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::ExpValueTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::ExpValueTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MM::BaseType::ExpValueType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ExpValueType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::ExpValueType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::ExpValueType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::ExpValueType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MM::BaseType::ExpValueTypeEnum>
        {
            static const ::UMAA::MM::BaseType::ExpValueTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ExpValueTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ExpValueTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ExpValueTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ExpValueTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ExpValueType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ExpValueType > {
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

#endif // ExpValueType_1760834647_hpp

