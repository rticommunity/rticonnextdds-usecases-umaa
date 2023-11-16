

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRacetrackStateType_856341078_hpp
#define LocalRacetrackStateType_856341078_hpp

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
#include "UMAA/MO/LocalRacetrackState/LocalRacetrackPatternType.hpp"
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
#include "UMAA/MO/LocalRacetrackState/LocalRacetrackTransitType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalRacetrackState {
            namespace LocalRacetrackStateType_Specializations {
                enum class LocalRacetrackStateType_Selectors {
                    LOCALRACETRACKTRANSITTYPE_SELECT, 
                    LOCALRACETRACKPATTERNTYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LocalRacetrackStateType_Selectors& sample);

                class NDDSUSERDllExport LocalRacetrackStateType_Union {
                  public:

                    LocalRacetrackStateType_Union();

                    ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::MO::LocalRacetrackState::LocalRacetrackTransitType& LocalRacetrackTransitType_data()  {

                        if (_d() != (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union::LocalRacetrackTransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRacetrackTransitType_data_;
                    }

                    const ::UMAA::MO::LocalRacetrackState::LocalRacetrackTransitType& LocalRacetrackTransitType_data() const  {

                        if (_d() != (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union::LocalRacetrackTransitType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRacetrackTransitType_data_;
                    }

                    void LocalRacetrackTransitType_data(const ::UMAA::MO::LocalRacetrackState::LocalRacetrackTransitType& value) {
                        m_u_.m_LocalRacetrackTransitType_data_ = value;
                        m_d_= (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT);
                    }

                    void LocalRacetrackTransitType_data(::UMAA::MO::LocalRacetrackState::LocalRacetrackTransitType&& value) {
                        m_u_.m_LocalRacetrackTransitType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKTRANSITTYPE_SELECT);
                    }
                    ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType& LocalRacetrackPatternType_data()  {

                        if (_d() != (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union::LocalRacetrackPatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRacetrackPatternType_data_;
                    }

                    const ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType& LocalRacetrackPatternType_data() const  {

                        if (_d() != (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union::LocalRacetrackPatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRacetrackPatternType_data_;
                    }

                    void LocalRacetrackPatternType_data(const ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType& value) {
                        m_u_.m_LocalRacetrackPatternType_data_ = value;
                        m_d_= (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT);
                    }

                    void LocalRacetrackPatternType_data(::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType&& value) {
                        m_u_.m_LocalRacetrackPatternType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors::LOCALRACETRACKPATTERNTYPE_SELECT);
                    }
                    bool operator == (const LocalRacetrackStateType_Union& other_) const;
                    bool operator != (const LocalRacetrackStateType_Union& other_) const;
                    static ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors default_discriminator();

                    void swap(LocalRacetrackStateType_Union& other_) noexcept ;

                  private:

                    ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::MO::LocalRacetrackState::LocalRacetrackTransitType m_LocalRacetrackTransitType_data_;
                        ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType m_LocalRacetrackPatternType_data_;
                        Union_();
                        Union_(const ::UMAA::MO::LocalRacetrackState::LocalRacetrackTransitType& LocalRacetrackTransitType_data_,const ::UMAA::MO::LocalRacetrackState::LocalRacetrackPatternType& LocalRacetrackPatternType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(LocalRacetrackStateType_Union& a, LocalRacetrackStateType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalRacetrackStateType_Union& sample);

            } // namespace LocalRacetrackStateType_Specializations  

            class NDDSUSERDllExport LocalRacetrackStateType {
              public:

                LocalRacetrackStateType();

                explicit LocalRacetrackStateType(const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& LocalRacetrackStateType_subtypes_);

                ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& LocalRacetrackStateType_subtypes() noexcept {
                    return m_LocalRacetrackStateType_subtypes_;
                }

                const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& LocalRacetrackStateType_subtypes() const noexcept {
                    return m_LocalRacetrackStateType_subtypes_;
                }

                void LocalRacetrackStateType_subtypes(const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& value) {

                    m_LocalRacetrackStateType_subtypes_ = value;
                }

                void LocalRacetrackStateType_subtypes(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union&& value) {
                    m_LocalRacetrackStateType_subtypes_ = std::move(value);
                }
                bool operator == (const LocalRacetrackStateType& other_) const;
                bool operator != (const LocalRacetrackStateType& other_) const;

                void swap(LocalRacetrackStateType& other_) noexcept ;

              private:

                ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union m_LocalRacetrackStateType_subtypes_;

            };

            inline void swap(LocalRacetrackStateType& a, LocalRacetrackStateType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalRacetrackStateType& sample);

        } // namespace LocalRacetrackState  
    } // namespace MO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors>
        {
            static const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors value;
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
        struct topic_type_name< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalRacetrackState::LocalRacetrackStateType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors>
        {
            static const ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType_Specializations::LocalRacetrackStateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalRacetrackState::LocalRacetrackStateType > {
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

#endif // LocalRacetrackStateType_856341078_hpp

