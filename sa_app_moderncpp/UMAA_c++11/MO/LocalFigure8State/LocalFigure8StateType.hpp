

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8StateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalFigure8StateType_1186436630_hpp
#define LocalFigure8StateType_1186436630_hpp

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
#include "UMAA/MO/LocalFigure8State/LocalFigure8PatternType.hpp"
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
#include "UMAA/MO/LocalFigure8State/LocalFigure8TransitType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalFigure8State {
            namespace LocalFigure8StateType_Specializations {
                enum class LocalFigure8StateType_Selectors {
                    LOCALFIGURE8PATTERNTYPE_SELECT, 
                    LOCALFIGURE8TRANSITTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LocalFigure8StateType_Selectors& sample);

                class NDDSUSERDllExport LocalFigure8StateType_Union {
                  public:

                    LocalFigure8StateType_Union();

                    ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::MO::LocalFigure8State::LocalFigure8PatternType& LocalFigure8PatternType_data()  {

                        if (_d() != (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union::LocalFigure8PatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalFigure8PatternType_data_;
                    }

                    const ::UMAA::MO::LocalFigure8State::LocalFigure8PatternType& LocalFigure8PatternType_data() const  {

                        if (_d() != (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union::LocalFigure8PatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalFigure8PatternType_data_;
                    }

                    void LocalFigure8PatternType_data(const ::UMAA::MO::LocalFigure8State::LocalFigure8PatternType& value) {
                        m_u_.m_LocalFigure8PatternType_data_ = value;
                        m_d_= (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT);
                    }

                    void LocalFigure8PatternType_data(::UMAA::MO::LocalFigure8State::LocalFigure8PatternType&& value) {
                        m_u_.m_LocalFigure8PatternType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT);
                    }
                    ::UMAA::MO::LocalFigure8State::LocalFigure8TransitType& LocalFigure8TransitType_data()  {

                        if (_d() != (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union::LocalFigure8TransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalFigure8TransitType_data_;
                    }

                    const ::UMAA::MO::LocalFigure8State::LocalFigure8TransitType& LocalFigure8TransitType_data() const  {

                        if (_d() != (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union::LocalFigure8TransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalFigure8TransitType_data_;
                    }

                    void LocalFigure8TransitType_data(const ::UMAA::MO::LocalFigure8State::LocalFigure8TransitType& value) {
                        m_u_.m_LocalFigure8TransitType_data_ = value;
                        m_d_= (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT);
                    }

                    void LocalFigure8TransitType_data(::UMAA::MO::LocalFigure8State::LocalFigure8TransitType&& value) {
                        m_u_.m_LocalFigure8TransitType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT);
                    }
                    bool operator == (const LocalFigure8StateType_Union& other_) const;
                    bool operator != (const LocalFigure8StateType_Union& other_) const;
                    static ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors default_discriminator();

                    void swap(LocalFigure8StateType_Union& other_) noexcept ;

                  private:

                    ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::MO::LocalFigure8State::LocalFigure8PatternType m_LocalFigure8PatternType_data_;
                        ::UMAA::MO::LocalFigure8State::LocalFigure8TransitType m_LocalFigure8TransitType_data_;
                        Union_();
                        Union_(const ::UMAA::MO::LocalFigure8State::LocalFigure8PatternType& LocalFigure8PatternType_data_,const ::UMAA::MO::LocalFigure8State::LocalFigure8TransitType& LocalFigure8TransitType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(LocalFigure8StateType_Union& a, LocalFigure8StateType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalFigure8StateType_Union& sample);

            } // namespace LocalFigure8StateType_Specializations  

            class NDDSUSERDllExport LocalFigure8StateType {
              public:

                LocalFigure8StateType();

                explicit LocalFigure8StateType(const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& LocalFigure8StateType_subtypes_);

                ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& LocalFigure8StateType_subtypes() noexcept {
                    return m_LocalFigure8StateType_subtypes_;
                }

                const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& LocalFigure8StateType_subtypes() const noexcept {
                    return m_LocalFigure8StateType_subtypes_;
                }

                void LocalFigure8StateType_subtypes(const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& value) {

                    m_LocalFigure8StateType_subtypes_ = value;
                }

                void LocalFigure8StateType_subtypes(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union&& value) {
                    m_LocalFigure8StateType_subtypes_ = std::move(value);
                }
                bool operator == (const LocalFigure8StateType& other_) const;
                bool operator != (const LocalFigure8StateType& other_) const;

                void swap(LocalFigure8StateType& other_) noexcept ;

              private:

                ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union m_LocalFigure8StateType_subtypes_;

            };

            inline void swap(LocalFigure8StateType& a, LocalFigure8StateType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalFigure8StateType& sample);

        } // namespace LocalFigure8State  
    } // namespace MO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors>
        {
            static const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors value;
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
        struct topic_type_name< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalFigure8State::LocalFigure8StateType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalFigure8State::LocalFigure8StateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalFigure8State::LocalFigure8StateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalFigure8State::LocalFigure8StateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors>
        {
            static const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType > {
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

#endif // LocalFigure8StateType_1186436630_hpp

