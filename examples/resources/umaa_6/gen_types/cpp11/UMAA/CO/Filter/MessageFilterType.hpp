

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MessageFilterType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MessageFilterType_862856399_hpp
#define MessageFilterType_862856399_hpp

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
#include "UMAA/CO/Filter/AllFilterType.hpp"
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
#include "UMAA/CO/Filter/DecimateStructureFilterType.hpp"
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
#include "UMAA/CO/Filter/SendOnlyIfChangedFilterType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace CO {
        namespace Filter {
            enum class MessageFilterTypeEnum {
                ALLFILTER_D, 
                DECIMATESTRUCTUREFILTER_D, 
                SENDONLYIFCHANGEDFILTER_D
            };

            NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MessageFilterTypeEnum& sample);

            class NDDSUSERDllExport MessageFilterTypeUnion {
              public:

                MessageFilterTypeUnion();

                ::UMAA::CO::Filter::MessageFilterTypeEnum& _d()  {
                    return m_d_;
                }

                const ::UMAA::CO::Filter::MessageFilterTypeEnum& _d() const  {
                    return m_d_;
                }

                void _d(::UMAA::CO::Filter::MessageFilterTypeEnum value) {

                    m_d_ = value;
                }

                ::UMAA::CO::Filter::AllFilterType& AllFilterVariant()  {

                    if (_d() != (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::CO::Filter::MessageFilterTypeUnion::AllFilterVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AllFilterVariant_;
                }

                const ::UMAA::CO::Filter::AllFilterType& AllFilterVariant() const  {

                    if (_d() != (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::CO::Filter::MessageFilterTypeUnion::AllFilterVariant not selected by the discriminator" );
                    }
                    return m_u_.m_AllFilterVariant_;
                }

                void AllFilterVariant(const ::UMAA::CO::Filter::AllFilterType& value) {
                    m_u_.m_AllFilterVariant_ = value;
                    m_d_= (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D);
                }

                void AllFilterVariant(::UMAA::CO::Filter::AllFilterType&& value) {
                    m_u_.m_AllFilterVariant_ = std::move(value);
                    m_d_= (UMAA::CO::Filter::MessageFilterTypeEnum::ALLFILTER_D);
                }
                ::UMAA::CO::Filter::DecimateStructureFilterType& DecimateStructureFilterVariant()  {

                    if (_d() != (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::CO::Filter::MessageFilterTypeUnion::DecimateStructureFilterVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DecimateStructureFilterVariant_;
                }

                const ::UMAA::CO::Filter::DecimateStructureFilterType& DecimateStructureFilterVariant() const  {

                    if (_d() != (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::CO::Filter::MessageFilterTypeUnion::DecimateStructureFilterVariant not selected by the discriminator" );
                    }
                    return m_u_.m_DecimateStructureFilterVariant_;
                }

                void DecimateStructureFilterVariant(const ::UMAA::CO::Filter::DecimateStructureFilterType& value) {
                    m_u_.m_DecimateStructureFilterVariant_ = value;
                    m_d_= (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D);
                }

                void DecimateStructureFilterVariant(::UMAA::CO::Filter::DecimateStructureFilterType&& value) {
                    m_u_.m_DecimateStructureFilterVariant_ = std::move(value);
                    m_d_= (UMAA::CO::Filter::MessageFilterTypeEnum::DECIMATESTRUCTUREFILTER_D);
                }
                ::UMAA::CO::Filter::SendOnlyIfChangedFilterType& SendOnlyIfChangedFilterVariant()  {

                    if (_d() != (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::CO::Filter::MessageFilterTypeUnion::SendOnlyIfChangedFilterVariant not selected by the discriminator" );
                    }
                    return m_u_.m_SendOnlyIfChangedFilterVariant_;
                }

                const ::UMAA::CO::Filter::SendOnlyIfChangedFilterType& SendOnlyIfChangedFilterVariant() const  {

                    if (_d() != (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D) ) {

                        throw ::dds::core::PreconditionNotMetError(
                            "::UMAA::CO::Filter::MessageFilterTypeUnion::SendOnlyIfChangedFilterVariant not selected by the discriminator" );
                    }
                    return m_u_.m_SendOnlyIfChangedFilterVariant_;
                }

                void SendOnlyIfChangedFilterVariant(const ::UMAA::CO::Filter::SendOnlyIfChangedFilterType& value) {
                    m_u_.m_SendOnlyIfChangedFilterVariant_ = value;
                    m_d_= (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D);
                }

                void SendOnlyIfChangedFilterVariant(::UMAA::CO::Filter::SendOnlyIfChangedFilterType&& value) {
                    m_u_.m_SendOnlyIfChangedFilterVariant_ = std::move(value);
                    m_d_= (UMAA::CO::Filter::MessageFilterTypeEnum::SENDONLYIFCHANGEDFILTER_D);
                }
                bool operator == (const MessageFilterTypeUnion& other_) const;
                bool operator != (const MessageFilterTypeUnion& other_) const;
                static ::UMAA::CO::Filter::MessageFilterTypeEnum default_discriminator();

                void swap(MessageFilterTypeUnion& other_) noexcept ;

              private:

                ::UMAA::CO::Filter::MessageFilterTypeEnum m_d_;
                struct NDDSUSERDllExport Union_ {
                    ::UMAA::CO::Filter::AllFilterType m_AllFilterVariant_;
                    ::UMAA::CO::Filter::DecimateStructureFilterType m_DecimateStructureFilterVariant_;
                    ::UMAA::CO::Filter::SendOnlyIfChangedFilterType m_SendOnlyIfChangedFilterVariant_;
                    Union_();
                    Union_(const ::UMAA::CO::Filter::AllFilterType& AllFilterVariant_,const ::UMAA::CO::Filter::DecimateStructureFilterType& DecimateStructureFilterVariant_,const ::UMAA::CO::Filter::SendOnlyIfChangedFilterType& SendOnlyIfChangedFilterVariant_);
                };
                Union_ m_u_;

            };

            inline void swap(MessageFilterTypeUnion& a, MessageFilterTypeUnion& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MessageFilterTypeUnion& sample);

            class NDDSUSERDllExport MessageFilterType {
              public:

                MessageFilterType();

                explicit MessageFilterType(const ::UMAA::CO::Filter::MessageFilterTypeUnion& MessageFilterTypeSubtypes_);

                ::UMAA::CO::Filter::MessageFilterTypeUnion& MessageFilterTypeSubtypes() noexcept {
                    return m_MessageFilterTypeSubtypes_;
                }

                const ::UMAA::CO::Filter::MessageFilterTypeUnion& MessageFilterTypeSubtypes() const noexcept {
                    return m_MessageFilterTypeSubtypes_;
                }

                void MessageFilterTypeSubtypes(const ::UMAA::CO::Filter::MessageFilterTypeUnion& value) {

                    m_MessageFilterTypeSubtypes_ = value;
                }

                void MessageFilterTypeSubtypes(::UMAA::CO::Filter::MessageFilterTypeUnion&& value) {
                    m_MessageFilterTypeSubtypes_ = std::move(value);
                }
                bool operator == (const MessageFilterType& other_) const;
                bool operator != (const MessageFilterType& other_) const;

                void swap(MessageFilterType& other_) noexcept ;

              private:

                ::UMAA::CO::Filter::MessageFilterTypeUnion m_MessageFilterTypeSubtypes_;

            };

            inline void swap(MessageFilterType& a, MessageFilterType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MessageFilterType& sample);

        } // namespace Filter  
    } // namespace CO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::CO::Filter::MessageFilterTypeEnum>
        {
            static const ::UMAA::CO::Filter::MessageFilterTypeEnum value;
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
        struct topic_type_name< ::UMAA::CO::Filter::MessageFilterTypeUnion > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::CO::Filter::MessageFilterTypeUnion";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::CO::Filter::MessageFilterTypeUnion > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::CO::Filter::MessageFilterTypeUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::CO::Filter::MessageFilterTypeUnion& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::CO::Filter::MessageFilterType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::CO::Filter::MessageFilterType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::CO::Filter::MessageFilterType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::CO::Filter::MessageFilterType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::CO::Filter::MessageFilterType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::CO::Filter::MessageFilterTypeEnum>
        {
            static const ::UMAA::CO::Filter::MessageFilterTypeEnum value;
        };
        template<>
        struct dynamic_type< ::UMAA::CO::Filter::MessageFilterTypeEnum > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::Filter::MessageFilterTypeEnum > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::CO::Filter::MessageFilterTypeUnion > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::Filter::MessageFilterTypeUnion > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::CO::Filter::MessageFilterType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::CO::Filter::MessageFilterType > {
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

#endif // MessageFilterType_862856399_hpp

