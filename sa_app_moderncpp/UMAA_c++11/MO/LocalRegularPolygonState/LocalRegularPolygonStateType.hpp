

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonStateType_2639132_hpp
#define LocalRegularPolygonStateType_2639132_hpp

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
#include "UMAA/MO/LocalRegularPolygonState/LocalRegularPolygonPatternType.hpp"
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
#include "UMAA/MO/LocalRegularPolygonState/LocalRegularPolygonTransitTypeType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalRegularPolygonState {
            namespace LocalRegularPolygonStateType_Specializations {
                enum class LocalRegularPolygonStateType_Selectors {
                    LOCALREGULARPOLYGONPATTERNTYPE_SELECT, 
                    LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const LocalRegularPolygonStateType_Selectors& sample);

                class NDDSUSERDllExport LocalRegularPolygonStateType_Union {
                  public:

                    LocalRegularPolygonStateType_Union();

                    ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType& LocalRegularPolygonPatternType_data()  {

                        if (_d() != (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union::LocalRegularPolygonPatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRegularPolygonPatternType_data_;
                    }

                    const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType& LocalRegularPolygonPatternType_data() const  {

                        if (_d() != (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union::LocalRegularPolygonPatternType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRegularPolygonPatternType_data_;
                    }

                    void LocalRegularPolygonPatternType_data(const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType& value) {
                        m_u_.m_LocalRegularPolygonPatternType_data_ = value;
                        m_d_= (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT);
                    }

                    void LocalRegularPolygonPatternType_data(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType&& value) {
                        m_u_.m_LocalRegularPolygonPatternType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONPATTERNTYPE_SELECT);
                    }
                    ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType& LocalRegularPolygonTransitTypeType_data()  {

                        if (_d() != (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union::LocalRegularPolygonTransitTypeType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRegularPolygonTransitTypeType_data_;
                    }

                    const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType& LocalRegularPolygonTransitTypeType_data() const  {

                        if (_d() != (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union::LocalRegularPolygonTransitTypeType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LocalRegularPolygonTransitTypeType_data_;
                    }

                    void LocalRegularPolygonTransitTypeType_data(const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType& value) {
                        m_u_.m_LocalRegularPolygonTransitTypeType_data_ = value;
                        m_d_= (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT);
                    }

                    void LocalRegularPolygonTransitTypeType_data(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType&& value) {
                        m_u_.m_LocalRegularPolygonTransitTypeType_data_ = std::move(value);
                        m_d_= (UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors::LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT);
                    }
                    bool operator == (const LocalRegularPolygonStateType_Union& other_) const;
                    bool operator != (const LocalRegularPolygonStateType_Union& other_) const;
                    static ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors default_discriminator();

                    void swap(LocalRegularPolygonStateType_Union& other_) noexcept ;

                  private:

                    ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType m_LocalRegularPolygonPatternType_data_;
                        ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType m_LocalRegularPolygonTransitTypeType_data_;
                        Union_();
                        Union_(const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonPatternType& LocalRegularPolygonPatternType_data_,const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType& LocalRegularPolygonTransitTypeType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(LocalRegularPolygonStateType_Union& a, LocalRegularPolygonStateType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalRegularPolygonStateType_Union& sample);

            } // namespace LocalRegularPolygonStateType_Specializations  

            class NDDSUSERDllExport LocalRegularPolygonStateType {
              public:

                LocalRegularPolygonStateType();

                explicit LocalRegularPolygonStateType(const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& LocalRegularPolygonStateType_subtypes_);

                ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& LocalRegularPolygonStateType_subtypes() noexcept {
                    return m_LocalRegularPolygonStateType_subtypes_;
                }

                const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& LocalRegularPolygonStateType_subtypes() const noexcept {
                    return m_LocalRegularPolygonStateType_subtypes_;
                }

                void LocalRegularPolygonStateType_subtypes(const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& value) {

                    m_LocalRegularPolygonStateType_subtypes_ = value;
                }

                void LocalRegularPolygonStateType_subtypes(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union&& value) {
                    m_LocalRegularPolygonStateType_subtypes_ = std::move(value);
                }
                bool operator == (const LocalRegularPolygonStateType& other_) const;
                bool operator != (const LocalRegularPolygonStateType& other_) const;

                void swap(LocalRegularPolygonStateType& other_) noexcept ;

              private:

                ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union m_LocalRegularPolygonStateType_subtypes_;

            };

            inline void swap(LocalRegularPolygonStateType& a, LocalRegularPolygonStateType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalRegularPolygonStateType& sample);

        } // namespace LocalRegularPolygonState  
    } // namespace MO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors>
        {
            static const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors value;
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
        struct topic_type_name< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors>
        {
            static const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType_Specializations::LocalRegularPolygonStateType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonStateType > {
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

#endif // LocalRegularPolygonStateType_2639132_hpp

